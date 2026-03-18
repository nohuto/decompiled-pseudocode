/*
 * XREFs of MiFreeVadRange @ 0x140032AC0
 * Callers:
 *     MmFreeVirtualMemory @ 0x140494760 (MmFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406EA930 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1406EAB28 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiCanDeleteEnclave @ 0x140229428 (MiCanDeleteEnclave.c)
 *     MiPrepareVadDelete @ 0x14049465C (MiPrepareVadDelete.c)
 *     PerfInfoLogVirtualFree @ 0x140747CCC (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiFreeVadRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // r15
  int v8; // ebp
  __int64 result; // rax
  void *v12; // rcx
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v6 = (a4 << 12) | 0xFFF;
  v7 = a3 << 12;
  v8 = a3;
  if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0x40000) == 0 )
    goto LABEL_20;
  if ( a3 != (*(unsigned int *)(BugCheckParameter3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 32) << 32))
    || a4 != (*(unsigned int *)(BugCheckParameter3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(BugCheckParameter3);
  if ( (int)result >= 0 )
  {
LABEL_20:
    result = MiPrepareVadDelete(BugCheckParameter3, a2, v8, v5, (__int64)&v13);
    if ( (int)result >= 0 )
    {
      if ( !v13 )
      {
        MiDeleteVad(BugCheckParameter3, 0LL);
LABEL_5:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v7, v6 - v7 + 1, a5, 0x8000LL);
        return 0LL;
      }
      if ( MiLocateVadEvent(BugCheckParameter3, 258LL) )
        return 3221225541LL;
      result = MiDeletePartialVad(v12);
      if ( (int)result >= 0 )
        goto LABEL_5;
    }
  }
  return result;
}
