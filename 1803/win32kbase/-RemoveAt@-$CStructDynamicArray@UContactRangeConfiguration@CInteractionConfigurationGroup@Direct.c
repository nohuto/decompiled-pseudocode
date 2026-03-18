/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C00051E8
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00048F4 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = a2;
  result = Win32FreePool(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2));
  if ( v3 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v5 = v3++;
      result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = result;
    }
    while ( v3 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
