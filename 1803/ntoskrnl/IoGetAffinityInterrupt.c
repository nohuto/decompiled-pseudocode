/*
 * XREFs of IoGetAffinityInterrupt @ 0x140184510
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140040C40 (KeGetProcessorNumberFromIndex.c)
 */

NTSTATUS __stdcall IoGetAffinityInterrupt(PKINTERRUPT InterruptObject, PGROUP_AFFINITY GroupAffinity)
{
  NTSTATUS result; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  result = KeGetProcessorNumberFromIndex(InterruptObject->Number, &ProcNumber);
  if ( result >= 0 )
  {
    GroupAffinity->Mask = 0LL;
    *(_QWORD *)&GroupAffinity->Group = 0LL;
    GroupAffinity->Group = ProcNumber.Group;
    GroupAffinity->Mask = (unsigned __int64)InterruptObject[-1].ServiceThread;
    return 0;
  }
  return result;
}
