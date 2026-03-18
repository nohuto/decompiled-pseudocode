/*
 * XREFs of MiFreeVadRange @ 0x140016C10
 * Callers:
 *     MmStoreFreeVirtualMemory @ 0x140430BB4 (MmStoreFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404543B0 (MmStoreAllocateVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 * Callees:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x140430C44 (MiPrepareVadDelete.c)
 *     PerfInfoLogVirtualFree @ 0x14070C65C (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVadRange(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  void *v9; // rcx
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v5 = (a4 << 12) | 0xFFF;
  v6 = a3 << 12;
  result = MiPrepareVadDelete(a1, a2, a3, a4, (__int64)&v10);
  if ( (int)result < 0 )
    return result;
  if ( !v10 )
  {
    MiDeleteVad(a1, 0LL);
LABEL_4:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
      PerfInfoLogVirtualFree(v6, v5 - v6 + 1, a5);
    return 0LL;
  }
  if ( MiLocateVadEvent(a1, 258LL) )
    return 3221225541LL;
  result = MiDeletePartialVad(v9);
  if ( (int)result >= 0 )
    goto LABEL_4;
  return result;
}
