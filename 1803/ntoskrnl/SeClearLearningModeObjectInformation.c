/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140104B40
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1400A14E0 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
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
          RtlFreeAnsiString((PUNICODE_STRING)&Flink[2].Blink);
      }
    }
  }
}
