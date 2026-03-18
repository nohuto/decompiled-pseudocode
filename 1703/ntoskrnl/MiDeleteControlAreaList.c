/*
 * XREFs of MiDeleteControlAreaList @ 0x14020A2CC
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 */

__int64 __fastcall MiDeleteControlAreaList(__int64 a1)
{
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1344);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *(_QWORD **)(a1 + 1632);
    v5 = v3;
    if ( v4 )
      *(_QWORD *)(a1 + 1632) = *v4;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    result = v5;
    __writecr8(v5);
    if ( !v4 )
      break;
    MiDeleteControlArea((__int64)v4);
  }
  return result;
}
