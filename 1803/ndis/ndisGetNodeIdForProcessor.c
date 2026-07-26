/*
 * XREFs of ndisGetNodeIdForProcessor @ 0x1C00B4898
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C00B465C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNodeIdForProcessor(ULONG ProcIndex)
{
  NTSTATUS v2; // eax
  DWORD NodeNumber; // ecx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  ULONG Length; // [rsp+80h] [rbp+8h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+10h] BYREF

  if ( ProcIndex >= KeQueryActiveProcessorCountEx(0xFFFFu) || KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber) < 0 )
    return 0LL;
  Length = 80;
  v2 = KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length);
  NodeNumber = Information.NumaNode.NodeNumber;
  if ( v2 < 0 )
    return 0;
  return NodeNumber;
}
