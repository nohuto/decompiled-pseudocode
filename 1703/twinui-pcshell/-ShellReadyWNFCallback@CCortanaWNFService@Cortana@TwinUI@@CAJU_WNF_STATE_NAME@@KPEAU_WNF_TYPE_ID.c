/*
 * XREFs of ?ShellReadyWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9B50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1800C9994 (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::ShellReadyWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        TwinUI::Cortana::CCortanaWNFService *a4)
{
  __int64 v5; // rcx
  struct TwinUI::Cortana::ICortanaWNFNotification *v6; // rcx
  struct TwinUI::Cortana::ICortanaWNFNotification *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a4 )
  {
    v5 = *((_QWORD *)a4 + 2);
    if ( v5 )
    {
      *((_QWORD *)a4 + 2) = 0LL;
      RtlUnsubscribeWnfStateChangeNotification(v5, a2, a3);
    }
    v8 = 0LL;
    if ( (int)TwinUI::Cortana::CCortanaWNFService::GetNotification(a4, &v8) >= 0 )
      (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *))(*(_QWORD *)v8 + 56LL))(v8);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return 0LL;
}
