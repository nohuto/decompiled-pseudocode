/*
 * XREFs of KeCleanupThreadState @ 0x1400B88CC
 * Callers:
 *     PspThreadDelete @ 0x1404FBC50 (PspThreadDelete.c)
 * Callees:
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // r9
  unsigned int v2; // r8d
  unsigned __int8 *v3; // rdx

  v1 = 1LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 1) != 0 )
  {
    v2 = 0;
    v3 = (unsigned __int8 *)(BugCheckParameter1 + 824);
    while ( 1 )
    {
      if ( *((_QWORD *)v3 + 1) )
        goto LABEL_13;
      if ( *(_DWORD *)v3 >= 0x100u )
        break;
      if ( (unsigned __int8 *)BugCheckParameter1 != &v3[-(unsigned __int16)(16 * *v3) - 24] )
      {
        v1 = 3LL;
        goto LABEL_13;
      }
      if ( (*((_DWORD *)v3 + 16) & 0x1FFFF) != 0 )
      {
        v1 = 4LL;
        goto LABEL_13;
      }
      ++v2;
      v3 += 96;
      if ( v2 >= 6 )
        goto LABEL_8;
    }
    v1 = 2LL;
LABEL_13:
    KeBugCheckEx(0x153u, BugCheckParameter1, (ULONG_PTR)(v3 - 24), v1, 0LL);
  }
LABEL_8:
  if ( *(_WORD *)(BugCheckParameter1 + 1420) )
    KeFlushQueuedDpcs();
}
