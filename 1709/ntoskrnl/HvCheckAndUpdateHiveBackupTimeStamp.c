/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x140471198
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct _EX_RUNDOWN_REF *v5; // rsi
  unsigned __int64 BinAddress; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int16 v10; // [rsp+48h] [rbp+10h] BYREF

  HvpGetBinContextInitialize(&v10);
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, 0LL);
  v4 = 0;
  v5 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x1557uLL);
  BinAddress = HvpMapEntryGetBinAddress(v3, CellMap, &v10);
  v7 = *(_QWORD *)(BugCheckParameter2 + 64);
  v8 = BinAddress;
  if ( *(_QWORD *)(BinAddress + 20) != *(_QWORD *)(v7 + 12) )
  {
    if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 64);
      *(_QWORD *)(v8 + 20) = *(_QWORD *)(v7 + 12);
    }
    else
    {
      v4 = -1073741443;
    }
  }
  HvpMapEntryReleaseBinAddress(v7, v5, &v10);
  return v4;
}
