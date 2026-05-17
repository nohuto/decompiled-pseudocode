/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1800836A0
 * Callers:
 *     sub_180004B3C @ 0x180004B3C (sub_180004B3C.c)
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
  return qword_180110F30[v1](a1);
}
