/*
 * XREFs of ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0022794
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C00220BC (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0022D30 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

void __fastcall DirectComposition::CInteractionConfigurationGroup::ClearConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this)
{
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 16,
    0LL);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 40,
    0LL);
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 64,
    0LL);
  *((_DWORD *)this + 3) |= 0xFu;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 14) = 0;
}
