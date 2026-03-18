/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C006231C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C006219C (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C00622A8 (-CommitSlot@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<40960,160>::Allocate(__int64 a1)
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
                *(_DWORD *)(a1 + 32) < 0xFAu ? *(_DWORD *)(a1 + 32) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1 && NSInstrumentation::CSectionBitmapAllocator<40960,160>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xFAu )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = ((v5 / 0x19) << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 160 * (v5 % 0x19);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
