/*
 * XREFs of MmFreeMappingAddress @ 0x1405832F0
 * Callers:
 *     SmFpCleanup @ 0x14000653C (SmFpCleanup.c)
 *     PnprFreeMappingReserve @ 0x1406CC798 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x1406CCBF4 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140753024 (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiRemoveMappingNode @ 0x140125BF0 (MiRemoveMappingNode.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiRemovePteTracker @ 0x140234808 (MiRemovePteTracker.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR BugCheckParameter4; // rsi
  _QWORD *v4; // rax
  void *v5; // rbp
  ULONG_PTR v6; // rdi
  unsigned __int64 PteAddress; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 *v11; // r8
  __int64 v12; // rax
  __int64 PteShadow; // rax

  BugCheckParameter4 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)BugCheckParameter4 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, BugCheckParameter4, 0LL);
  v6 = v4[4];
  if ( !v6 )
    KeBugCheckEx(0xDAu, 0x10DuLL, (ULONG_PTR)BaseAddress, (ULONG_PTR)v4, BugCheckParameter4);
  PteAddress = MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = PteAddress;
  v9 = PteAddress + 8 * v6;
  if ( PteAddress < v9 )
  {
    v10 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      if ( v8 == PteAddress || (v8 & 0xFFF) == 0 )
      {
        v11 = (__int64 *)MiGetPteAddress(v8);
        v12 = *v11;
        if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= v10 )
          LOBYTE(v12) = MiReadPteShadow();
        if ( (v12 & 0x80u) != 0LL )
          KeBugCheckEx(0xDAu, 0x109uLL, (ULONG_PTR)BaseAddress, BugCheckParameter4, v6);
      }
      PteShadow = *(_QWORD *)v8;
      if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= v10 )
        PteShadow = MiReadPteShadow();
      if ( PteShadow )
        KeBugCheckEx(0xDAu, 0x103uLL, (ULONG_PTR)BaseAddress, BugCheckParameter4, v6);
      v8 += 8LL;
    }
    while ( v8 < v9 );
  }
  if ( (dword_14040010C & 1) != 0 )
    MiRemovePteTracker(0LL, (unsigned __int64)BaseAddress, v6);
  MiReleasePtes((__int64)&qword_140389360, PteAddress, v6, v8);
  ExFreePoolWithTag(v5, 0);
}
