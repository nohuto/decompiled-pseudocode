/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x140694F90
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PipForDeviceNodeSubtree @ 0x1404601C4 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 */

void __fastcall PnpDiagRundownRegisterCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  REGHANDLE v4; // rbx

  if ( ControlCode == 2 )
  {
    v4 = PnpRundownEtwHandle;
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PnpDiagRundownForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
      v4 = PnpRundownEtwHandle;
    }
    if ( EtwEventEnabled(v4, &KMPnPRundownEvt_SleepStudy_ParentPdo) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PnpDiagRundownParentPdoForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
      v4 = PnpRundownEtwHandle;
    }
    if ( EtwEventEnabled(v4, &KMPnPRundownEvt_SleepStudy_ParentDevNode) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PnpDiagRundownParentDevNodeForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
