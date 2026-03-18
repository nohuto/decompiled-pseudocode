/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C0022CD0
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0022328 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = a2;
  result = Win32FreePool(*(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)a2), a2, a3);
  if ( v4 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v6 = v4++;
      result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v4);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v6) = result;
    }
    while ( v4 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
