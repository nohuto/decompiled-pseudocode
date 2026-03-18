/*
 * XREFs of ?Run@CDWMInputThread@@AEAAKXZ @ 0x1801A0940
 * Callers:
 *     ?RunInputThreadStatic@CDWMInputThread@@SAKPEAX@Z @ 0x1801A0A50 (-RunInputThreadStatic@CDWMInputThread@@SAKPEAX@Z.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x180075A10 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x180075A64 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180075D18 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMInputThread::Run(HANDLE *this)
{
  unsigned int v2; // edi
  char IsActive; // al
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  signed int v5; // eax
  unsigned __int8 v6; // al
  int v7; // eax
  HANDLE v8; // rcx

  v2 = 0;
  GetCurrentThreadId();
  while ( !*((_BYTE *)this + 24) )
  {
    ResetEvent(this[2]);
    if ( *((_BYTE *)this + 24) )
      break;
    IsActive = CMmcssTask::IsActive((CMmcssTask *)((char *)*this + 136));
    v4 = (struct _RTL_CRITICAL_SECTION *)(this + 4);
    if ( IsActive )
    {
      v5 = CMmcssTask::Apply(v4, 1);
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x13Bu);
    }
    else
    {
      CMmcssTask::Revert(v4);
    }
    v6 = CMmcssTask::IsActive((CMmcssTask *)(this + 4));
    v7 = NtCompositionInputThread(this[2], this[14], CInputManager::s_HitTestRequest, v6);
    if ( v7 < 0 )
    {
      if ( v7 == -1073741822 )
      {
        v2 = -2147467263;
      }
      else
      {
        v2 = -2147024891;
        if ( v7 != -1073741790 )
          v2 = -2147467259;
      }
      v8 = this[1];
      *((_BYTE *)this + 24) = 1;
      CloseHandle(v8);
      this[1] = 0LL;
    }
  }
  if ( (v2 & 0x1FFF0000) == 0x70000 )
    return (unsigned __int16)v2;
  return v2;
}
