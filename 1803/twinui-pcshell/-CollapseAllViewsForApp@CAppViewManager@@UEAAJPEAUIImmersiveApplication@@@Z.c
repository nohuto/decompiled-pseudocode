/*
 * XREFs of ?CollapseAllViewsForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18011E630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppViewManager::CollapseAllViewsForApp(CAppViewManager *this, struct IImmersiveApplication *a2)
{
  int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  unsigned int i; // esi
  void *v10; // rdi
  struct IUnknown *v12; // [rsp+30h] [rbp-50h] BYREF
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  PSRWLOCK v21; // [rsp+78h] [rbp-8h]
  unsigned int v22; // [rsp+B8h] [rbp+38h] BYREF
  void *v23; // [rsp+C0h] [rbp+40h] BYREF
  struct IUnknown *v24; // [rsp+C8h] [rbp+48h] BYREF

  v20 = -2LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
  v18 = -1LL;
  v19 = -1LL;
  v4 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v17);
  if ( v4 >= 0 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
           &v13);
    if ( v4 >= 0 )
    {
      v5 = CApplicationManagerUtility::g_pIAMGlobals;
      v21 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v23 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
             a2,
             &GUID_068fc85a_d4d0_45b0_ab39_311de750a277,
             &v15) < 0
        || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14),
            (**v13)(v13, &GUID_af40de1b_7663_429e_9fee_6029ee6c4978, &v14) < 0)
        || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v16) < 0 )
      {
        v8 = (__int64)v13;
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v23);
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v8 + 104LL))(v8, v17, &v23);
      }
      else
      {
        v6 = v14;
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v23);
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v6 + 24LL))(v6, v16, &v23);
      }
      v4 = v7;
      if ( v7 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v22);
        if ( v4 >= 0 && v22 > 1 )
        {
          v12 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
          v4 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, struct IUnknown **))a2)(
                 a2,
                 &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                 &v12);
          for ( i = 0; v4 >= 0; ++i )
          {
            if ( i >= v22 )
              break;
            v24 = 0LL;
            v10 = v23;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            v4 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v10 + 32LL))(
                   v10,
                   i,
                   &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                   &v24);
            if ( v4 >= 0 && !(unsigned int)SHIsSameObject(v12, v24) )
              v4 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)this + 11) + 104LL))(
                     *((_QWORD *)this + 11),
                     v24,
                     v12,
                     0LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v23);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
  return (unsigned int)v4;
}
