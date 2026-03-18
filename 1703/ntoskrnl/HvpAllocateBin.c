/*
 * XREFs of HvpAllocateBin @ 0x14048DC6C
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401E1AC0 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14048D724 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x14048DA2C (HvpMapHiveImage.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     HvpReviveDiscardedBin @ 0x140676AA8 (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x140678468 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406785FC (HvpAddLoadedBinToHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvViewMapAddressForFileOffset @ 0x1406759AC (HvViewMapAddressForFileOffset.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, __int64 *a6, __int64 *a7)
{
  unsigned int v7; // ebx
  bool v8; // zf
  unsigned int v9; // r11d
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // cl
  __int64 v14; // rax
  __int64 v16; // rdx

  v7 = 0;
  v8 = (*(_BYTE *)(a1 + 124) & 4) == 0;
  v9 = a2;
  v11 = 0LL;
  v12 = 0LL;
  *a6 = 0LL;
  *a7 = 0LL;
  if ( v8 )
  {
    v13 = 1;
    if ( !a3 )
    {
LABEL_3:
      LOBYTE(a2) = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(v9, a2, a5);
      v11 = v14;
      goto LABEL_4;
    }
LABEL_7:
    v13 = 0;
    goto LABEL_3;
  }
  if ( a3 )
    goto LABEL_7;
  v16 = (unsigned int)(a4 + 4096);
  if ( (((unsigned int)v16 ^ (v9 + a4 + 4095)) & 0xFFFC0000) == 0 )
  {
    v11 = HvViewMapAddressForFileOffset(a1 + 200, v16);
    goto LABEL_5;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(v9, 1LL, a5);
  v12 = v14;
LABEL_4:
  if ( !v14 )
    return (unsigned int)-1073741670;
LABEL_5:
  *a6 = v11;
  *a7 = v12;
  return v7;
}
