/*
 * XREFs of HvpAllocateBin @ 0x14047D6EC
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401E5BC4 (HvpMapHiveImageFromSystemCache.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x14047C83C (HvpMapHiveImage.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     HvpReviveDiscardedBin @ 0x1406A0FE8 (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x1406A29E0 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406A2B74 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvViewMapAddressForFileOffset @ 0x14069FEE4 (HvViewMapAddressForFileOffset.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, __int64 *a6, __int64 *a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  __int64 v9; // rdi
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rax
  __int64 v14; // rdx

  v7 = 0;
  v11 = (*(_BYTE *)(a1 + 124) & 4) == 0;
  v8 = a2;
  v9 = 0LL;
  v10 = 0LL;
  *a6 = 0LL;
  *a7 = 0LL;
  if ( v11 )
  {
    v11 = a3 == 0;
LABEL_3:
    LOBYTE(a2) = v11;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(v8, a2, a5);
    v9 = v12;
    goto LABEL_4;
  }
  v11 = a3 == 0;
  if ( a3 )
    goto LABEL_3;
  v14 = (unsigned int)(a4 + 4096);
  if ( (((unsigned int)v14 ^ (v8 + a4 + 4095)) & 0xFFFC0000) == 0 )
  {
    v9 = HvViewMapAddressForFileOffset(a1 + 200, v14);
    goto LABEL_5;
  }
  LOBYTE(v14) = 1;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(v8, v14, a5);
  v10 = v12;
LABEL_4:
  if ( !v12 )
    return (unsigned int)-1073741670;
LABEL_5:
  *a6 = v9;
  *a7 = v10;
  return v7;
}
