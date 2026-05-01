/*
 * XREFs of ?_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801260FC
 * Callers:
 *     ?GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x180120390 (-GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetAppMainWindow(CAppViewManager *this, struct IImmersiveApplicationInternal *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v7; // [rsp+58h] [rbp+28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (**(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
         a2,
         &GUID_068fc85a_d4d0_45b0_ab39_311de750a277,
         &v8) >= 0 )
  {
    v9 = -1LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v9) >= 0 )
    {
      v7 = 0LL;
      v5 = *((_QWORD *)this + 15);
      Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease((void **)&v7);
      if ( (*(int (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v5 + 64LL))(v5, v9, &v7) >= 0 )
        v4 = v7[3];
      Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease((void **)&v7);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
