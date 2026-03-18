/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C000FE84
 * Callers:
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C000FCB8 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C000FCE0 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
        __int64 *a1,
        char a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = *a1;
    if ( v3 )
    {
      result = Win32FreePool(v3);
      *a1 = 0LL;
    }
    *((_DWORD *)a1 + 3) = 0;
  }
  *((_DWORD *)a1 + 2) = 0;
  return result;
}
