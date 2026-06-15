/*
 * XREFs of ??1?$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D3FC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioConfigureDevice_SpatialAudioConfigureDevice_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18005C5AB (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioConfigureDevice_SpatialAudioConfigureDev.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioConfigureDevice>::~ComPtr<SpatialAudioConfigureDevice>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<SpatialAudioConfigureDevice>::InternalRelease(a1);
}
