/*
 * XREFs of ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18001B4E0
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18001A970 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18001E380 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18002D7E0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDevic.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<ISaDeviceProxy>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int **a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 (__fastcall *v5)(__int64, int **); // rax
  int WeakReference; // eax
  int *v7; // r10
  int *v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(); // rax
  _DWORD *v12; // rcx
  _DWORD *v13; // r10
  void *(__fastcall *v14)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, unsigned int); // rax
  __int64 v15; // rcx
  int *v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  int *v19; // [rsp+68h] [rbp+20h]

  v2 = *a1;
  v18 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v18);
  if ( v4 >= 0 )
  {
    v17 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, int **))(*(_QWORD *)v18 + 24LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::GetWeakReference )
      WeakReference = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::GetWeakReference(
                        v18,
                        &v17);
    else
      WeakReference = v5(v18, &v17);
    v7 = v17;
    v4 = WeakReference;
    if ( WeakReference >= 0 )
    {
      v8 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(int *))(*(_QWORD *)v17 + 8LL))(v17);
        v7 = v17;
      }
      v19 = *a2;
      v9 = (__int64 *)v19;
      *a2 = v8;
      if ( v9 )
      {
        v10 = *v9;
        v19 = 0LL;
        (*(void (__fastcall **)(__int64 *))(v10 + 16))(v9);
        v7 = v17;
      }
      v4 = 0;
    }
    if ( v7 )
    {
      v17 = 0LL;
      v11 = *(__int64 (__fastcall **)())(*(_QWORD *)v7 + 16LL);
      if ( v11 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      {
        if ( !ATL::SafeDecrementReferenceMultiThread(v7 + 3) )
        {
          v14 = *(void *(__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, unsigned int))(*(_QWORD *)v13 + 32LL);
          if ( v14 == Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor' )
          {
            v13[4] = -1073741823;
            *(_QWORD *)v13 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
            *v12 = -1073741823;
            operator delete(v13, (const struct std::nothrow_t *)0x20);
          }
          else
          {
            v14((Microsoft::WRL::Details::WeakReferenceImpl *)v13, 1u);
          }
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      else
      {
        ((void (__fastcall *)(int *))v11)(v7);
      }
    }
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v4;
}
