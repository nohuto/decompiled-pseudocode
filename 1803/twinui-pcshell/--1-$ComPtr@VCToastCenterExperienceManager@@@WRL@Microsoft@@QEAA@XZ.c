/*
 * XREFs of ??1?$ComPtr@VCToastCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180161FC8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CToastCenterExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x1801618FB (_Microsoft--WRL--Details--MakeAndInitialize_CToastCenterExperienceManager_IInspecta_ea_1801618FB.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F2100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIB_ea_1800F2100.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CToastCenterExperienceManager>::~ComPtr<CToastCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
