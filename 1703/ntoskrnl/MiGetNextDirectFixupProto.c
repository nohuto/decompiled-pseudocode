/*
 * XREFs of MiGetNextDirectFixupProto @ 0x1406BDA50
 * Callers:
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextDirectFixupProto(__int64 a1, __int64 a2)
{
  if ( a2 )
    return *(_QWORD *)a2;
  else
    return *(_QWORD *)(**(_QWORD **)(a1 + 96) + 88LL);
}
