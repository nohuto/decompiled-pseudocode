/*
 * XREFs of KeCleanupThreadState @ 0x14008AA90
 * Callers:
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // edx
  unsigned int v2; // r9d
  unsigned __int8 *v3; // r8

  v1 = 1;
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
      if ( (unsigned __int8 *)BugCheckParameter1 != &v3[-16 * *v3 - 24] )
      {
        v1 = 3;
        goto LABEL_13;
      }
      if ( (*((_DWORD *)v3 + 16) & 0x1FFFF) != 0 )
      {
        v1 = 4;
        goto LABEL_13;
      }
      ++v2;
      v3 += 96;
      if ( v2 >= 6 )
        goto LABEL_8;
    }
    v1 = 2;
LABEL_13:
    KeBugCheckEx(0x153u, BugCheckParameter1, (ULONG_PTR)(v3 - 24), v1, 0LL);
  }
LABEL_8:
  if ( *(_WORD *)(BugCheckParameter1 + 1420) )
    KeFlushQueuedDpcs();
}
