/*
 * XREFs of ?LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9BD0
 * Callers:
 *     <none>
 * Callees:
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1800C94CC (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1800C9994 (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        TwinUI::Cortana::CCortanaWNFService *a4,
        struct TwinUI::Cortana::ICortanaWNFNotification *a5,
        unsigned int a6)
{
  int v6; // ebx
  struct TwinUI::Cortana::ICortanaWNFNotification *v7; // rcx

  if ( a5 && a6 == 4 )
  {
    v6 = *(_DWORD *)a5;
    v7 = 0LL;
    a5 = 0LL;
    if ( a4 )
    {
      if ( (int)TwinUI::Cortana::CCortanaWNFService::GetNotification(a4, &a5) >= 0 )
      {
        if ( v6 )
          CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy();
        LOBYTE(a2) = v6 != 0;
        (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *, __int64))(*(_QWORD *)a5 + 64LL))(
          a5,
          a2);
      }
      v7 = a5;
    }
    if ( v7 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)v7 + 16LL))(
        v7,
        a2,
        a3);
    }
  }
  return 0LL;
}
