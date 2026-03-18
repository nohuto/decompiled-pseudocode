/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00427B8
 * Callers:
 *     ?AllocateType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0042614 (-AllocateType@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C0042748 (-CommitSlot@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<163840,640>::Allocate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  ULONG v4; // r8d
  ULONG ClearBits; // eax
  ULONG v6; // r14d

  v1 = *(_QWORD *)a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  v3 = 0LL;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 32) < 0xF0u )
    v4 = *(_DWORD *)(a1 + 32);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16)), 1u, v4);
  v6 = ClearBits;
  if ( ClearBits != -1 && NSInstrumentation::CSectionBitmapAllocator<163840,640>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16)), v6);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16)), v6);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xF0u )
      *(_DWORD *)(a1 + 32) = 0;
    v3 = ((v6 / 6) << 12) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 640 * (v6 % 6);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
