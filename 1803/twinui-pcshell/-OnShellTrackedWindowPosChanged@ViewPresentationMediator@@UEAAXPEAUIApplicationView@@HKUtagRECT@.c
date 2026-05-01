/*
 * XREFs of ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1801F6690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@QEAA@QEAV1@I@Z @ 0x1801F5C84 (--0Iterator@-$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@AEAAXXZ @ 0x1801F63E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@AEAAXXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewPresentationMediator::OnShellTrackedWindowPosChanged(
        ViewPresentationMediator *this,
        struct IApplicationView *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5)
{
  struct tagRECT *v9; // rdi
  __int64 v10; // rbx
  __int64 v11[2]; // [rsp+38h] [rbp-21h] BYREF
  void *v12; // [rsp+48h] [rbp-11h] BYREF
  int v13; // [rsp+50h] [rbp-9h]
  struct tagRECT v14; // [rsp+58h] [rbp-1h] BYREF
  __int64 v15; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v16[2]; // [rsp+70h] [rbp+17h] BYREF
  int v17; // [rsp+80h] [rbp+27h] BYREF
  __int64 v18[2]; // [rsp+88h] [rbp+2Fh] BYREF
  struct IObjectArray *v19; // [rsp+B8h] [rbp+5Fh] BYREF

  v11[1] = -2LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v19);
  if ( (int)CGITRegistrationList::GetCallbackArray((ViewPresentationMediator *)((char *)this + 88), &v19) >= 0 )
  {
    ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
      (__int64)&v12,
      (__int64)v19);
    ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::Iterator((__int64)&v15, (__int64)&v12, 0);
    ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::Iterator((__int64)&v17, (__int64)&v12, v13);
    v9 = a5;
    while ( (_DWORD)v15 != v17 || v16[1] != v18[1] )
    {
      v10 = v16[0];
      v11[0] = v16[0];
      if ( v16[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16[0] + 8LL))(v16[0]);
      v14 = *v9;
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, _QWORD, struct tagRECT *))(*(_QWORD *)v10 + 32LL))(
        v10,
        a2,
        a3,
        a4,
        &v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
      LODWORD(v15) = v15 + 1;
      ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::GetCurrentObject(&v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v19);
}
