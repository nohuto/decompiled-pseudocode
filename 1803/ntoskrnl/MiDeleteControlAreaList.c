/*
 * XREFs of MiDeleteControlAreaList @ 0x14024F2A4
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiDeleteControlAreaList(__int64 a1)
{
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1280);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *(_QWORD **)(a1 + 1704);
    v5 = v3;
    if ( v4 )
      *(_QWORD *)(a1 + 1704) = *v4;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    result = v5;
    __writecr8(v5);
    if ( !v4 )
      break;
    MiDeleteControlArea(v4);
  }
  return result;
}
