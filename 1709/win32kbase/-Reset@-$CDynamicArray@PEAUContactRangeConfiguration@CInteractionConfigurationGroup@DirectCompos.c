/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0022ED4
 * Callers:
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C0022D08 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0022D30 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  if ( (_BYTE)a2 )
  {
    v4 = *a1;
    if ( v4 )
    {
      result = Win32FreePool(v4, a2, a3);
      *a1 = 0LL;
    }
    *((_DWORD *)a1 + 3) = 0;
  }
  *((_DWORD *)a1 + 2) = 0;
  return result;
}
