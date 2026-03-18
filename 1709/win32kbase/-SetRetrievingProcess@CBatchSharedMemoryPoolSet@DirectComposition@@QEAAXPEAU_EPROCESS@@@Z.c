/*
 * XREFs of ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008186C
 * Callers:
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002EED0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C002F5B0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00322E4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C003393C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0033B80 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        struct _EPROCESS *a2)
{
  void *v4; // rcx

  if ( a2 )
    ObReferenceObjectByPointer(a2, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 2) = a2;
}
