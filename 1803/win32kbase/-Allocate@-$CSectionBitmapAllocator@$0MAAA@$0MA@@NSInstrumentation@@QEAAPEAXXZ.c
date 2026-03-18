/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C006267C
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0045480 (--$AllocateIsolatedType@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@@@YAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00625F8 (-CommitSlot@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(__int64 a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  __int64 v4; // rsi
  ULONG v5; // r14d

  v1 = *(_QWORD *)a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits(
                (PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)),
                1u,
                *(_DWORD *)(a1 + 32) < 0xFCu ? *(_DWORD *)(a1 + 32) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1 && NSInstrumentation::CSectionBitmapAllocator<49152,192>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xFCu )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = ((v5 / 0x15) << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 192 * (v5 % 0x15);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
