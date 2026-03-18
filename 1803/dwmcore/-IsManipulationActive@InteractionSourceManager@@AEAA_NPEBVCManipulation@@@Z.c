/*
 * XREFs of ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x1801CA034
 * Callers:
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x1801C987C (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1801CA3D8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801CA52C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTI.c)
 * Callees:
 *     <none>
 */

char __fastcall InteractionSourceManager::IsManipulationActive(
        InteractionSourceManager *this,
        const struct CManipulation *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10

  v2 = *((_QWORD *)this + 13);
  v3 = *((_QWORD *)this + 14) + v2;
  while ( v2 != v3 )
  {
    if ( a2 == *(const struct CManipulation **)(*(_QWORD *)(*((_QWORD *)this + 11)
                                                          + 8 * ((*((_QWORD *)this + 12) - 1LL) & (v2 >> 1)))
                                              + 8 * (v2 & 1)) )
      return 1;
    ++v2;
  }
  return 0;
}
