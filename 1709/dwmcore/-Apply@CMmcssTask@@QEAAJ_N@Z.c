/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180075D18
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800759CC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180075B38 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180075BC8 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800C0D60 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1801A0940 (-Run@CDWMInputThread@@AEAAKXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  unsigned int v4; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  PRTL_CRITICAL_SECTION_DEBUG v6; // rax
  __int64 v7; // rax
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
    v6 = this[1].DebugInfo;
    if ( v6->Type )
    {
      if ( !*(_QWORD *)&v6[2].Flags )
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
            goto LABEL_8;
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, v10);
      }
    }
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v4;
}
