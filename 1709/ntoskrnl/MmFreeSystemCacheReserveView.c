/*
 * XREFs of MmFreeSystemCacheReserveView @ 0x1406E242C
 * Callers:
 *     CcUninitializePartitionVacbs @ 0x1401E2584 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreeSystemCacheReserveView(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG_PTR SystemCacheReverseMap; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // r11
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v11; // r10
  __int64 v12; // rax

  v2 = MiGetPteAddress(BugCheckParameter3) + 512;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(BugCheckParameter3, v3, v4, v5);
  BugCheckParameter4 = 0LL;
  v11 = SystemCacheReverseMap;
  if ( *(_QWORD *)(SystemCacheReverseMap + 16) )
    KeBugCheckEx(0x1Au, 0x784uLL, SystemCacheReverseMap, BugCheckParameter3, 0LL);
  do
  {
    v12 = *v9;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v12) = MiReadPteShadow();
    if ( (v12 & 1) != 0 || (v12 & 0x400) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v11, BugCheckParameter3, BugCheckParameter4);
    ++v9;
  }
  while ( (unsigned __int64)v9 < v2 );
  return MiReleaseSystemCacheView((unsigned __int64)(v9 - 64), v7, v8, BugCheckParameter4);
}
