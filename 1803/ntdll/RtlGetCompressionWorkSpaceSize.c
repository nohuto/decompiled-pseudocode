/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x18007EBD0
 * Callers:
 *     sub_180003DE4 @ 0x180003DE4 (sub_180003DE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCompressionWorkSpaceSize(__int64 a1)
{
  unsigned __int16 v1; // ax

  v1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  LOWORD(a1) = a1 & 0xFF00;
  return ((__int64 (__fastcall *)(__int64))qword_180110DB0[v1])(a1);
}
