/*
 * XREFs of ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1802E47F4
 * Callers:
 *     ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1802E3BD8 (--$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1802E4320 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall DragData::RuntimeClassInitialize(
        __int64 a1,
        CWinRTApplicationView *a2,
        __int64 a3,
        CWinRTApplicationView *a4,
        char a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  void *v11; // rbx
  int inited; // eax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // dl
  void *ppvOut[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IUnknown>::operator=((CWinRTApplicationView **)(a1 + 16), a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 40), a3);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 + 48), a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              (IUnknown *)a2,
              (const GUID *const)&SID_IImmersiveMonitorService,
              &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    v19 = 0LL;
    v11 = ppvOut[0];
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v19);
    inited = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v11 + 72LL))(
               v11,
               0LL,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &v19);
    v10 = inited;
    if ( inited >= 0 )
    {
      inited = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 72LL))(v19, a1 + 56);
      v10 = inited;
      if ( inited >= 0 )
      {
        *(_DWORD *)(a1 + 84) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 15, 100);
        *(_DWORD *)(a1 + 88) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 10, 100);
        v14 = MulDiv(*(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56), 33, 100);
        v15 = a5;
        *(_DWORD *)(a1 + 92) = v14;
        inited = DragData::InitDropTargets(a1, v15);
        v10 = inited;
        if ( inited >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v19);
          goto LABEL_11;
        }
        v13 = 103LL;
      }
      else
      {
        v13 = 97LL;
      }
    }
    else
    {
      v13 = 95LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)Service);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
