/*
 * XREFs of ViSettingsEnableKernelHandleChecking @ 0x1407BDDB8
 * Callers:
 *     VfSettingsCheckForChanges @ 0x1407BDC94 (VfSettingsCheckForChanges.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1407BDD90 (VfSettingsMiscellaneousChecksInitPhase1.c)
 * Callees:
 *     PsSetProcessHandleTracingInformation @ 0x140716424 (PsSetProcessHandleTracingInformation.c)
 */

__int64 __fastcall ViSettingsEnableKernelHandleChecking(int a1)
{
  __int64 result; // rax
  int *v2; // rdx
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  if ( a1 )
  {
    if ( VfHandleTracingEntries )
    {
      v2 = &v3;
      v3 = 0;
      v4 = VfHandleTracingEntries;
    }
    else
    {
      v2 = 0LL;
    }
    result = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)PsInitialSystemProcess, (__int64)v2);
    _InterlockedOr((volatile signed __int32 *)&NtGlobalFlag, 0x40000000u);
  }
  else
  {
    result = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)PsInitialSystemProcess, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&NtGlobalFlag, 0xBFFFFFFF);
  }
  return result;
}
