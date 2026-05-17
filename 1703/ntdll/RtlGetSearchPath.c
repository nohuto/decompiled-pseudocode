/*
 * XREFs of RtlGetSearchPath @ 0x1800503D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004CE84 @ 0x18004CE84 (sub_18004CE84.c)
 */

__int64 __fastcall RtlGetSearchPath(_QWORD *a1)
{
  __int64 v2; // rax

  v2 = sub_18004CE84(&qword_18015A2D8, (__int64 (__fastcall *)(__int64, __int64))sub_1800506D0, 0LL, 0LL);
  if ( v2 )
  {
    *a1 = v2 + 112;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
}
