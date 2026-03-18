/*
 * XREFs of ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x18018FE9C
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18018D9D8 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchInteractionConfigurationPri.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  *(_BYTE *)(a1 + 148) &= ~1u;
  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 80) = 1065353216;
  if ( (*(_BYTE *)(a1 + 16) & 3) != 0 )
    *(_DWORD *)(a1 + 20) = 1065353216;
  if ( (*(_BYTE *)(a1 + 16) & 0xC) != 0 )
    *(_DWORD *)(a1 + 40) = 1065353216;
  if ( (*(_BYTE *)(a1 + 16) & 0x30) != 0 )
    *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}
