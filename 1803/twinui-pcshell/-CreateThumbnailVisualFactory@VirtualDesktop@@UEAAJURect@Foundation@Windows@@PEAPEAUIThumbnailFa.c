/*
 * XREFs of ?CreateThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180262210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180261678 (--$As@UIInspectable@@@-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UII.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktop::CreateThumbnailVisualFactory(__int64 a1, __int128 *a2, _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 *v9; // rax
  const char *v10; // r9
  int v11; // eax
  __int64 result; // rax
  UAPViewWrapper *v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  UAPViewWrapper *v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v13[1] = (UAPViewWrapper *)-2LL;
  *a3 = 0LL;
  v13[0] = 0LL;
  v6 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>((_QWORD *)(a1 + 112), v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_10;
  }
  v17 = 0LL;
  v8 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>((_QWORD *)(a1 + 104), &v17);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v18 = 0LL;
    try
    {
      v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 128) + 32LL))(
                        *(_QWORD *)(a1 + 128),
                        &v16);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=(&v18, v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
    catch ( ... )
    {
      LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x82,
                       (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
                       v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v17);
      v7 = v16;
LABEL_10:
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v13);
      result = v7;
    }
    v14 = *a2;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, UAPViewWrapper *, UAPViewWrapper *, _QWORD *))(*(_QWORD *)v18 + 72LL))(
            v18,
            &v14,
            v13[0],
            v17,
            a3);
    v7 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v17);
  goto LABEL_10;
}
