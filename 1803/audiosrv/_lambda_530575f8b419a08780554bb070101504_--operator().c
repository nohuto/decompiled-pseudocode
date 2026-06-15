/*
 * XREFs of _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18001C2D0
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001E060 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DBA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStrea.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DCE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180063948 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_530575f8b419a08780554bb070101504_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  signed __int32 v7; // eax
  __int64 v8; // r9
  __int64 (__fastcall *v9)(_QWORD); // rax
  __int64 (__fastcall *v10)(); // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int v13; // esi
  __int64 v14; // rcx
  int Interface; // eax
  volatile signed __int64 *v16; // r10
  __int64 (__fastcall *v17)(CProcessSubmixProxy *); // rax
  signed __int64 v18; // rax
  unsigned int v19; // ecx
  signed __int64 v20; // rtt
  struct Microsoft::WRL::Details::ModuleBase *v21; // rcx
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 (__fastcall ***v25)(_QWORD, _BYTE *); // rcx
  __int64 v26; // rcx
  int (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rcx
  _BYTE v28[56]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+68h] [rbp-8h]
  int (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF

  v30 = 0LL;
  v4 = *a2;
  if ( !*a2 )
    goto LABEL_42;
  v5 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v4 + 24LL);
  if ( v5 != Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
  {
    v13 = v5(
            (Microsoft::WRL::Details::WeakReferenceImpl *)v4,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            (struct IInspectable **)&v30);
    goto LABEL_37;
  }
  v6 = 0LL;
  v30 = 0LL;
  v7 = *(_DWORD *)(v4 + 16);
  if ( !v7 )
    goto LABEL_39;
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 16), v7 + 1, v7) )
  {
    v7 = *(_DWORD *)(v4 + 16);
    if ( !v7 )
      goto LABEL_38;
  }
  v8 = *(_QWORD *)(v4 + 24);
  v9 = **(__int64 (__fastcall ***)(_QWORD))v8;
  if ( (char *)v9 == (char *)&Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::QueryInterface )
  {
    v30 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 24);
    v10 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 8LL);
    if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::AddRef )
    {
      v11 = *(_QWORD *)(v8 + 40);
      while ( v11 >= 0 )
      {
        if ( (_DWORD)v11 != 0x7FFFFFFF )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), v11 + 1, v11);
          if ( v12 != v11 )
            continue;
        }
        goto LABEL_16;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v11 + 16));
      v13 = 0;
    }
    else
    {
      ((void (__fastcall *)(__int64))v10)(v8);
LABEL_16:
      v13 = 0;
    }
  }
  else
  {
    v14 = *(_QWORD *)(v4 + 24);
    if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::QueryInterface(v14);
    else
      Interface = ((__int64 (__fastcall *)(__int64, GUID *, _QWORD))v9)(
                    v14,
                    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                    &v30);
    v13 = Interface;
  }
  v16 = *(volatile signed __int64 **)(v4 + 24);
  v17 = *(__int64 (__fastcall **)(CProcessSubmixProxy *))(*v16 + 16);
  if ( v17 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::Release )
  {
    v18 = *((_QWORD *)v16 + 5);
    while ( v18 >= 0 )
    {
      if ( (_DWORD)v18 == 0x7FFFFFFF )
        goto LABEL_37;
      v19 = v18 - 1;
      v20 = v18;
      v18 = _InterlockedCompareExchange64(v16 + 5, v18 - 1, v18);
      if ( v20 == v18 )
        goto LABEL_28;
    }
    v19 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v18 + 16));
LABEL_28:
    if ( v19 )
      goto LABEL_37;
    if ( v16 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v16 + 48))(v16, 1LL);
    v21 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( !Microsoft::WRL::Details::ModuleBase::module_ )
      goto LABEL_37;
    v17 = *(__int64 (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL);
  }
  else
  {
    v21 = *(struct Microsoft::WRL::Details::ModuleBase **)(v4 + 24);
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release(v21);
      goto LABEL_37;
    }
  }
  v17(v21);
LABEL_37:
  if ( v13 < 0 )
  {
LABEL_42:
    result = Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v30);
    goto LABEL_43;
  }
LABEL_38:
  v6 = v30;
LABEL_39:
  if ( !v6 )
    goto LABEL_42;
  v31 = 0LL;
  if ( (**v6)(v6, &GUID_f6433915_a28f_478e_ab30_7d0e99580da0, &v31) < 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    goto LABEL_42;
  }
  v24 = v31;
  v29 = 0LL;
  v25 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
  if ( v25 )
    v29 = (**v25)(v25, v28);
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 184LL))(v24, v28);
  v26 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    result = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v27)[2])(v27);
  }
LABEL_43:
  v23 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return result;
}
