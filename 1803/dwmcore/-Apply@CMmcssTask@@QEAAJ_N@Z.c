/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18001EA60
 * Callers:
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x18001DE88 (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18001E854 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18001E914 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     _lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_ @ 0x1800CA070 (_lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  unsigned int v4; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  __int64 v7; // rax
  signed int LastError; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = this;
  v4 = 0;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( a2 )
    {
      DebugInfo[2].EntryCount = 0;
      DebugInfo = this[1].DebugInfo;
    }
    if ( DebugInfo->Type && !*(_QWORD *)&DebugInfo[2].Flags )
    {
      SetLastError(0);
      v7 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION_DEBUG, DWORD *))this[1].OwningThread)(
             this[1].DebugInfo,
             &this[1].DebugInfo[2].EntryCount);
      *(_QWORD *)&this[1].DebugInfo[2].Flags = v7;
      if ( v7 )
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
        v9 = 277;
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        v9 = 273;
      }
      if ( LastError >= 0 )
        LastError = -2003304445;
      v4 = LastError;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, v9);
    }
  }
LABEL_2:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v4;
}
