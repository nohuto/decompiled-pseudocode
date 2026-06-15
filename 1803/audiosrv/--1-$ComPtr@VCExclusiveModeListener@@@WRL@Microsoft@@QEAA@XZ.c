/*
 * XREFs of ??1?$ComPtr@VCExclusiveModeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F1D94
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$2 @ 0x1800F1A2A (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeLi_ea_1800F1A2A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BAD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CExclusiveModeListener>::~ComPtr<CExclusiveModeListener>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
