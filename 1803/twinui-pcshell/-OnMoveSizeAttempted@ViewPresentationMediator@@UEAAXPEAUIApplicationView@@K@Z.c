/*
 * XREFs of ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@K@Z @ 0x1801F6540
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
void __fastcall ViewPresentationMediator::OnMoveSizeAttempted(
        ViewPresentationMediator *this,
        struct IApplicationView *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  void *v7; // [rsp+28h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10[2]; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+58h] [rbp-18h] BYREF
  struct IObjectArray *v13; // [rsp+90h] [rbp+20h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
  if ( (int)CGITRegistrationList::GetCallbackArray((ViewPresentationMediator *)((char *)this + 88), &v13) >= 0 )
  {
    ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
      (__int64)&v7,
      (__int64)v13);
    ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::Iterator((__int64)&v9, (__int64)&v7, 0);
    ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::Iterator((__int64)&v11, (__int64)&v7, v8);
    while ( (_DWORD)v9 != v11 || v10[1] != v12[1] )
    {
      v6 = v10[0];
      v14 = v10[0];
      if ( v10[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10[0] + 8LL))(v10[0]);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, a2, a3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      LODWORD(v9) = v9 + 1;
      ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::GetCurrentObject(&v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v7);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
}
