/*
 * XREFs of ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1802DC5A4
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1802DC35C (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x1802DDF08 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1802DAB40 (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 */

__int64 __fastcall WindowArrangementView::QueryArrangeView(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  void *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *(IUnknown **)(a1 + 16),
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v18 = 0LL;
    v10 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v11 = (*(__int64 (__fastcall **)(void *, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v10 + 80LL))(
            v10,
            &CLSID_WindowArrangementOperation,
            &GUID_83266822_9e63_4b62_a1b4_75b389df3388,
            &v18);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v13 = WindowArrangementView::DropLocationToArrangementAction((__int64)v18, a3);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v14 + 40))(v15, a2, v13);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v11 = (**v18)(v18, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb, a4);
        v9 = v11;
        if ( v11 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          goto LABEL_11;
        }
        v12 = 1568LL;
      }
      else
      {
        v12 = 1567LL;
      }
    }
    else
    {
      v12 = 1564LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x619,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
