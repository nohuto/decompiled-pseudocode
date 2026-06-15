/*
 * XREFs of ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800A5360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180079FF4 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x18007C8E4 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::ConnectToSaDevice(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v8; // ebx
  RPC_STATUS v9; // eax
  __int128 v11; // [rsp+68h] [rbp+17h]
  __int128 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+C0h] [rbp+6Fh] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v13);
  if ( v8 >= 0 )
  {
    v11 = *(_OWORD *)(a4 + 48);
    v12 = *(_OWORD *)(a4 + 64);
    v9 = RpcImpersonateClient(0LL);
    v8 = v9;
    if ( v9 > 0 )
      v8 = (unsigned __int16)v9 | 0x80070000;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v13 + 72LL))(
             v13,
             a1 + 240,
             0LL,
             *(_QWORD *)(a1 + 448),
             a4);
      RpcRevertToSelf();
      *(_QWORD *)(a4 + 64) = v12;
      *(_QWORD *)(a4 + 48) = v11;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 72) + 72LL))(
               *(_QWORD *)(a1 + 72),
               v13,
               a3);
        if ( v8 >= 0 )
        {
          Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)(a1 + 80), a2);
          CBaseStreamGroupProxy::ConnectToSaDevice_Base((CBaseStreamGroupProxy *)a1);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
  return (unsigned int)v8;
}
