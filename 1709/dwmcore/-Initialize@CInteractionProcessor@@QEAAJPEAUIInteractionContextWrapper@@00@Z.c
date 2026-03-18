/*
 * XREFs of ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@00@Z @ 0x180091F50
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x180091910 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801695CC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x1800B7988 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionProcessor::Initialize(
        CInteractionProcessor *this,
        struct IInteractionContextWrapper *a2,
        struct IInteractionContextWrapper *a3,
        struct IInteractionContextWrapper *a4)
{
  __int64 result; // rax
  __int64 v8; // rdx

  if ( !a2 || !a3 )
    return 2147942487LL;
  *((_WORD *)this + 524) = 0;
  *(_QWORD *)((char *)this + 1052) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 265) = 0;
  *((_DWORD *)this + 122) = 0;
  result = ((__int64 (*)(void))CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize)();
  if ( (int)result >= 0 )
  {
    result = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize(
               (char *)this + 160,
               a3);
    if ( (int)result >= 0 )
    {
      LOBYTE(v8) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 72LL))(*((_QWORD *)this + 20), v8);
      return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize(
               (char *)this + 320,
               a4);
    }
  }
  return result;
}
