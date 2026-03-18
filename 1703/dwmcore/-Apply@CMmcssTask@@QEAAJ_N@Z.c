/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800B6880
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800B5BA8 (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800B6654 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800B6714 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800CBE30 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x180191F70 (-Run@CDWMInputThread@@AEAAKXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  unsigned int v4; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  PRTL_CRITICAL_SECTION_DEBUG v7; // rax
  __int64 v8; // rax
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = 0;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( a2 )
      DebugInfo[2].EntryCount = 0;
    v7 = this[1].DebugInfo;
    if ( v7->Type )
    {
      if ( !*(_QWORD *)&v7[2].Flags )
      {
        SetLastError(0);
        v8 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION_DEBUG, DWORD *))this[1].OwningThread)(
               this[1].DebugInfo,
               &this[1].DebugInfo[2].EntryCount);
        *(_QWORD *)&this[1].DebugInfo[2].Flags = v8;
        if ( v8 )
        {
          SetLastError(0);
          if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))this[1].SpinCount)(
                 *(_QWORD *)&this[1].DebugInfo[2].Flags,
                 this[1].DebugInfo[2].ContentionCount) )
          {
            goto LABEL_2;
          }
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v10 = 277;
        }
        else
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v10 = 273;
        }
        if ( LastError >= 0 )
          LastError = -2003304445;
        v4 = LastError;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, v10);
      }
    }
  }
LABEL_2:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v4;
}
