/*
 * XREFs of ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0022D30
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0022328 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C0022678 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0022794 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0022C68 (-ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C0022D08 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0022ED4 (-Reset@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectCompos.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  char i; // si
  __int64 v7; // rcx

  v3 = 0LL;
  for ( i = a2; (unsigned int)v3 < *(_DWORD *)(a1 + 8); v3 = (unsigned int)(v3 + 1) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v3);
    if ( v7 )
      Win32FreePool(v7, a2, a3);
  }
  LOBYTE(a2) = i;
  return CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
           a1,
           a2);
}
