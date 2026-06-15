/*
 * XREFs of ??1?$ComPtr@VCVolumeStrip@@@WRL@Microsoft@@QEAA@XZ @ 0x1800988D4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x180066930 (_Microsoft--WRL--Details--MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_shor_ea_180066930.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800140B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallb.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVolumeStrip>::~ComPtr<CVolumeStrip>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release(result);
  }
  return result;
}
