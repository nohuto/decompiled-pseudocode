/*
 * XREFs of ?GetTargetViewFromLayout@WindowArrangementView@@AEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1802DB33C
 * Callers:
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802DAB80 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CWinRTApplicationView **__fastcall WindowArrangementView::GetTargetViewFromLayout(
        __int64 a1,
        CWinRTApplicationView **a2,
        int a3)
{
  __int64 v3; // rbx
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  v5 = a3 - 2;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_6;
    v6 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v7 = 1LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v7 = 0LL;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 104LL))(
    v6,
    v7,
    5LL,
    &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
    &v9);
  v3 = v9;
LABEL_6:
  *a2 = 0LL;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a2);
    (*(void (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v3 + 48LL))(
      v3,
      &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
      a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return a2;
}
