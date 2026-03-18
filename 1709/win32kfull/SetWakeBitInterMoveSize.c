/*
 * XREFs of SetWakeBitInterMoveSize @ 0x1C01B55D0
 * Callers:
 *     InternalInvalidate3 @ 0x1C006AFA4 (InternalInvalidate3.c)
 * Callees:
 *     <none>
 */

int __fastcall SetWakeBitInterMoveSize(__int64 a1)
{
  __int64 v1; // rax

  *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) |= 0x20u;
  *(_WORD *)(*(_QWORD *)(a1 + 424) + 4LL) |= 0x20u;
  v1 = *(_QWORD *)(a1 + 424);
  if ( (*(_BYTE *)(v1 + 10) & 0x20) != 0 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 704), 6, 0);
  return v1;
}
