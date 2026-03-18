/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x1800B7988
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@00@Z @ 0x180091F50 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@00@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B7B24 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x1800B7B54 (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800BBFB0 (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // edi
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v6[0] = 0;
  v6[1] = 0;
  v6[2] = 0;
  v4 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a1 + 88, v6, 1LL);
  if ( v4 < 0 )
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(a1);
  else
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::operator=(a1, a2);
  return (unsigned int)v4;
}
