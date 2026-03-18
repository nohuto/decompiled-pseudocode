/*
 * XREFs of CmpReportNotify @ 0x14054F614
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14054F18C (CmpProcessLightWeightUOW.c)
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 */

void __fastcall CmpReportNotify(__int64 a1, int a2, int a3, __int64 a4)
{
  _BYTE v7[24]; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-10h]

  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 64);
    a1 = *(_QWORD *)(a1 + 64);
  }
  CmpStartKcbStackForTopLayerKcb((__int64)v7, a1);
  CmpReportNotifyForKcbStack((__int64)v7, a2, a3, a4);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
}
