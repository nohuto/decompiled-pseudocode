/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x140216410
 * Callers:
 *     MiFlushComplete @ 0x140216300 (MiFlushComplete.c)
 * Callees:
 *     MiFlushRelease @ 0x1400A8C60 (MiFlushRelease.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFreeOverlappedFlushEntry(__int64 **P)
{
  struct _KEVENT *v1; // rdi
  __int64 *v3; // rcx

  v1 = (struct _KEVENT *)P[4];
  MiFlushRelease(**P, (__int64)*P, (__int64)P[1]);
  v3 = P[5];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    P[3][1] = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v1, 0, 0);
}
