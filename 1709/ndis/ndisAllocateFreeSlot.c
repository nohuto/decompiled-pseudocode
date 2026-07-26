/*
 * XREFs of ndisAllocateFreeSlot @ 0x1C0010298
 * Callers:
 *     NdisNblTrackerRegisterComponent @ 0x1C00100B0 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C0010208 (ndisAllocatePerProcessorSlot.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall ndisAllocateFreeSlot(int a1)
{
  _LIST_ENTRY *i; // rdx
  int Flink; // r8d
  __int64 v3; // r8
  _LIST_ENTRY **result; // rax

  for ( i = ndisPerProcessorDescriptorList.Flink; i != &ndisPerProcessorDescriptorList; i = i->Flink )
  {
    Flink = (int)i[1].Flink;
    if ( Flink != -16777217 )
    {
      v3 = Flink & 0x1FFFFFF;
      LODWORD(i[1].Flink) = *((_DWORD *)&i[1].Flink + v3 + 1);
      result = &i[256].Flink + v3;
      *((_DWORD *)&i[1].Flink + v3 + 1) = a1;
      if ( result )
        return result;
    }
  }
  return 0LL;
}
