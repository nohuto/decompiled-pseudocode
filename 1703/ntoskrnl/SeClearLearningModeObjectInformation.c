/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x1400EE910
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1400364A0 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void SeClearLearningModeObjectInformation()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  struct _LIST_ENTRY *Flink; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = (KeGetCurrentThread()->ApcState.InProgressFlags & 1) != 0;
  Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  if ( Flink )
  {
    if ( LODWORD(Flink->Blink) == v1 )
    {
      CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = Flink->Flink;
      if ( Flink[2].Flink )
      {
        if ( Flink[3].Flink )
          RtlFreeUnicodeString((PUNICODE_STRING)&Flink[2].Blink);
      }
    }
  }
}
