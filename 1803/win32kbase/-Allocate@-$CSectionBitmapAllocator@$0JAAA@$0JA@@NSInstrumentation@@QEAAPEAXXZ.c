/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C005E9A8
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C005E77C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C005E924 (-CommitSlot@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(__int64 a1)
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
  if ( ClearBits != -1 && NSInstrumentation::CSectionBitmapAllocator<36864,144>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xFCu )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = ((v5 / 0x1C) << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 144 * (v5 % 0x1C);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
