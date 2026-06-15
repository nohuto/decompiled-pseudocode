/*
 * XREFs of ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18001C000
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180019FB0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18001DC70 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B2F68 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA240 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA450 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180044240 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A6860 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjec.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A691C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<IStreamGroupProxy>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, _QWORD **),
        __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, _QWORD **); // rax
  int v4; // ebx
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(); // rax
  signed __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD *v9; // rax
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rbx
  signed __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+70h] [rbp+18h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h]

  v2 = *a1;
  v21 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v21);
  if ( v4 < 0 )
    goto LABEL_26;
  v5 = v21;
  v20 = 0LL;
  v6 = *(__int64 (__fastcall **)())(*v21 + 24LL);
  if ( v6 != Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::GetWeakReference )
  {
    v4 = ((__int64 (__fastcall *)(_QWORD *, __int64 *))v6)(v21, &v20);
LABEL_17:
    v8 = v20;
    goto LABEL_18;
  }
  v22 = v21[3];
  v7 = v22;
  v20 = 0LL;
  if ( v22 >= 0 )
  {
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = (__int64)v9;
    if ( v9 )
    {
      v10 = Microsoft::WRL::Details::ModuleBase::module_;
      v9[3] = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
      if ( v10 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
      *(_DWORD *)(v8 + 16) = 0x3FFFFFFF;
      *(_QWORD *)(v8 + 24) = v5 - 31;
      *(_QWORD *)v8 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
      *(_DWORD *)(v8 + 12) = 2;
      if ( v8 )
      {
        *(_DWORD *)(v8 + 16) = v7;
        v11 = (v8 >> 1) | 0x8000000000000000uLL;
        v13 = _InterlockedCompareExchange64(v5 + 3, v11, v7);
        v12 = v7 == v13;
        v14 = v13;
        if ( !v12 )
        {
          while ( v14 >= 0 )
          {
            v15 = v14;
            *(_DWORD *)(v8 + 16) = v14;
            v14 = _InterlockedCompareExchange64(v5 + 3, v11, v14);
            if ( v14 == v15 )
            {
              v20 = v8;
              v4 = 0;
              goto LABEL_18;
            }
          }
          Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
            (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
            1u);
          v8 = 2 * v14;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::AddRef(2 * v14);
        }
        v20 = v8;
        v4 = 0;
        goto LABEL_18;
      }
    }
    v4 = -2147024882;
    goto LABEL_17;
  }
  v8 = 2 * v22;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(2 * v22);
  v20 = 2 * v7;
  v4 = 0;
LABEL_18:
  if ( v4 >= 0 )
  {
    v16 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v8 = v20;
    }
    v17 = *a2;
    *a2 = v16;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v8 = v20;
    }
    v4 = 0;
  }
  if ( v8 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_26:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  }
  return (unsigned int)v4;
}
