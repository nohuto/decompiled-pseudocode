/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x14043A5F4
 * Callers:
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
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
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x1558uLL);
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
