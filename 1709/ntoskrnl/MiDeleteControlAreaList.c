/*
 * XREFs of MiDeleteControlAreaList @ 0x140210E3C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiDeleteControlAreaList(__int64 a1)
{
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  char *v4; // rbx
  KIRQL v5; // bp
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1280);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *(char **)(a1 + 1696);
    v5 = v3;
    if ( v4 )
      *(_QWORD *)(a1 + 1696) = *(_QWORD *)v4;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    result = v5;
    __writecr8(v5);
    if ( !v4 )
      break;
    MiDeleteControlArea(v4);
  }
  return result;
}
