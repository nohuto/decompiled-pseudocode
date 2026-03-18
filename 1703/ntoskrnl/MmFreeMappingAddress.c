/*
 * XREFs of MmFreeMappingAddress @ 0x1405727F0
 * Callers:
 *     SmFpCleanup @ 0x14001FE68 (SmFpCleanup.c)
 *     PnprFreeMappingReserve @ 0x1406A1EF8 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x1406A2354 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiRemoveMappingNode @ 0x1401350D4 (MiRemoveMappingNode.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemovePteTracker @ 0x140225B70 (MiRemovePteTracker.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rsi
  _QWORD *v4; // rax
  void *v5; // rbp
  ULONG_PTR BugCheckParameter4; // rdi
  _QWORD *PteAddress; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax

  v2 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  BugCheckParameter4 = v4[4];
  if ( !BugCheckParameter4 )
    KeBugCheckEx(0xDAu, 0x10DuLL, (ULONG_PTR)BaseAddress, (ULONG_PTR)v4, v2);
  PteAddress = (_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = (unsigned __int64)PteAddress;
  if ( PteAddress < &PteAddress[BugCheckParameter4] )
  {
    do
    {
      if ( (_QWORD *)v8 == PteAddress || (v8 & 0xFFF) == 0 )
      {
        v11 = MiGetPteAddress(v8);
        if ( (MI_READ_PTE_LOCK_FREE(v11) & 0x80u) != 0LL )
          KeBugCheckEx(0xDAu, 0x109uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
      }
      if ( MI_READ_PTE_LOCK_FREE(v8) )
        KeBugCheckEx(0xDAu, 0x103uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
      v8 = v9 + 8;
    }
    while ( v8 < v10 );
  }
  if ( (dword_1403E310C & 1) != 0 )
    MiRemovePteTracker(0LL, (unsigned __int64)BaseAddress, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_14036D0A0, PteAddress, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
