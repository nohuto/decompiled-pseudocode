/*
 * XREFs of ??1?$ComPtr@VCVirtualTouchpadExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180180870
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualTouchpadExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x1801800E5 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualTouchpadExperienceManager_IInsp_ea_1801800E5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180182470 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVir_ea_180182470.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualTouchpadExperienceManager>::~ComPtr<CVirtualTouchpadExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
