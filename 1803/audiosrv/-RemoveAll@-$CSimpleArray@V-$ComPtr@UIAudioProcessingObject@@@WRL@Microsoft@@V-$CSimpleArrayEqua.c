/*
 * XREFs of ?RemoveAll@?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAXXZ @ 0x180016C30
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B8A0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *(int *)(a1 + 8) > 0 )
    {
      v4 = 0LL;
      do
      {
        v2 = *(void **)a1;
        v5 = *(_QWORD *)(v4 + *(_QWORD *)a1);
        if ( v5 )
        {
          *(_QWORD *)(v4 + *(_QWORD *)a1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          v2 = *(void **)a1;
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *(_DWORD *)(a1 + 8) );
    }
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
