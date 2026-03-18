/*
 * XREFs of ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C000FCB8
 * Callers:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C000EF54 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C000FCE0 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx

  LOBYTE(a2) = 1;
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a1, a2);
  LOBYTE(v3) = 1;
  return CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
           a1,
           v3);
}
