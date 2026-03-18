/*
 * XREFs of ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x1800B2C74
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x18004B3D0 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180166AFC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x1800B36B8 (-Initialize@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionProcessor::Initialize(
        CInteractionProcessor *this,
        struct IInteractionContextWrapper *a2,
        struct IInteractionContextWrapper *a3)
{
  __int64 result; // rax

  if ( !a2 || !a3 )
    return 2147942487LL;
  *((_WORD *)this + 428) = 0;
  *(_QWORD *)((char *)this + 860) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 217) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  result = ((__int64 (*)(void))CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize)();
  if ( (int)result >= 0 )
    return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
             (char *)this + 160,
             a3);
  return result;
}
