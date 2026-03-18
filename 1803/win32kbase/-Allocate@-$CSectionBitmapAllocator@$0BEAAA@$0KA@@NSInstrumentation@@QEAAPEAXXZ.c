/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C005FAF8
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0066C64 (--$AllocateIsolatedType@V-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C005FA84 (-CommitSlot@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(__int64 a1)
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
                *(_DWORD *)(a1 + 32) < 0x1F4u ? *(_DWORD *)(a1 + 32) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1 && NSInstrumentation::CSectionBitmapAllocator<81920,160>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0x1F4u )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = ((v5 / 0x19) << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 160 * (v5 % 0x19);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
