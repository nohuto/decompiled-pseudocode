/*
 * XREFs of ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1800C9994
 * Callers:
 *     ?ShellModeWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9AD0 (-ShellModeWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@.c)
 *     ?ShellReadyWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9B50 (-ShellReadyWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID.c)
 *     ?LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9BD0 (-LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_T.c)
 *     ?AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9C70 (-AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9D70 (-WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::GetNotification(
        TwinUI::Cortana::CCortanaWNFService *this,
        struct TwinUI::Cortana::ICortanaWNFNotification **a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    result = (*(__int64 (__fastcall **)(__int64, GUID *, struct TwinUI::Cortana::ICortanaWNFNotification **))(*(_QWORD *)v3 + 24LL))(
               v3,
               &GUID_e6e2291b_f74e_407c_b9d6_6dc4c69cacf9,
               a2);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    result = 0LL;
  }
  if ( !*a2 )
    return 2147500037LL;
  return result;
}
