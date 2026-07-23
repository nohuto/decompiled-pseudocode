/*
 * XREFs of HvIsCellAllocated @ 0x14047D4B0
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckValueList @ 0x1404A9D70 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     HvpMapEntryIsDiscardable @ 0x140080F80 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x1400811F0 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

char __fastcall HvIsCellAllocated(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edx
  __int64 v5; // r8
  _RTL_BITMAP *v6; // r9
  unsigned int v7; // edx
  __int64 CellMap; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // r10
  bool v18; // bl
  __int16 v20; // [rsp+30h] [rbp+8h] BYREF
  char v21; // [rsp+48h] [rbp+20h] BYREF

  HvpGetCellContextReinitialize((__int64)&v21);
  HvpGetBinContextInitialize(&v20);
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    return 1;
  v7 = v4 >> 31;
  if ( (a2 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * v7 + a1 + 1400) || (a2 & 7) != 0 )
    return 0;
  if ( v5 && !v7 )
  {
    if ( _bittest64(*(const signed __int64 **)(v5 + 8), a2 >> 3) )
    {
      RtlClearBits(v6, a2 >> 3, 1u);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  CellMap = HvpGetCellMap(a1, a2);
  v9 = (struct _EX_RUNDOWN_REF *)CellMap;
  if ( !CellMap || HvpMapEntryIsDiscardable(CellMap) )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(a1 + 8))(a1, a2, &v21);
  if ( !v10 )
    return 1;
  v12 = (_DWORD *)(v10 - 4);
  if ( v10 == 4 )
    return 1;
  BinAddress = HvpMapEntryGetBinAddress(v11, v9, &v20);
  v14 = (unsigned int)*v12;
  v15 = (_DWORD)v12 - BinAddress;
  v16 = -*v12;
  v18 = 0;
  if ( (int)v14 < 0 )
  {
    v14 = v16 - 8;
    if ( (unsigned int)v14 <= 0xFFFF8 )
    {
      v17 = *(unsigned int *)(BinAddress + 8);
      v14 = v17 - 32;
      if ( v16 <= (unsigned __int64)(v17 - 32) && v15 - *v12 <= (unsigned int)v17 && v15 >= 0x20 )
        v18 = 1;
    }
  }
  if ( BinAddress )
    HvpMapEntryReleaseBinAddress(v14, v9, &v20);
  HvpReleaseHCell(a1);
  return v18;
}
