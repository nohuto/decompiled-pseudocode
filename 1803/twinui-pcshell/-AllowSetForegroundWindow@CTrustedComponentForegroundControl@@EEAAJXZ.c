/*
 * XREFs of ?AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x180113D40
 * Callers:
 *     ?RevealDesktop@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x180113F30 (-RevealDesktop@CTrustedComponentForegroundControl@@EEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x1802FD490 (-GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::AllowSetForegroundWindow(
        CTrustedComponentForegroundControl *this,
        enum PROCESS_UICONTEXT *a2)
{
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  result = CallerIdentity::GetCallingProcessType((CallerIdentity *)&v3, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 != 2 )
      result = 2147942405LL;
    if ( (int)result >= 0 )
      return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
  }
  return result;
}
