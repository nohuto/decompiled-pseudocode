/*
 * XREFs of ?Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1802DBC30
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x1802DBB1C (-InitView@WindowArrangementView@@AEAAJXZ.c)
 */

__int64 __fastcall WindowArrangementView::Initialize(__int64 a1, CWinRTApplicationView *a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int inited; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 + 64), a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 88), a3);
  Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)(a1 + 96), (__int64 *)(a1 + 88));
  v8 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 260) = a5;
  *(_DWORD *)(a1 + 256) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, 1LL);
  v10 = *(_QWORD *)(a1 + 96);
  v11 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 128) = v9;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 184LL))(v10, v11) )
    ++*(_DWORD *)(a1 + 128);
  inited = WindowArrangementView::InitView((WindowArrangementView *)(a1 - 24));
  v13 = inited;
  if ( inited < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)inited);
  return v13;
}
