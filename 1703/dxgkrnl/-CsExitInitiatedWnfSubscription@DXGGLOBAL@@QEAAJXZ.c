/*
 * XREFs of ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C0110610
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0110864 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGGLOBAL::CsExitInitiatedWnfSubscription(DXGGLOBAL *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = WNF_PO_MODERN_STANDBY_EXIT_INITIATED;
  v1 = ExSubscribeWnfStateChange((char *)this + 1280, &v9, 1LL, 0LL, CsExitInitiatedWnfCallback, this);
  v6 = v1;
  if ( v1 < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v3, v2, v4, v5);
    *(_QWORD *)(v8 + 24) = v6;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v6;
}
