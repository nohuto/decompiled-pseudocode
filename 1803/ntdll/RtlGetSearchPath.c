/*
 * XREFs of RtlGetSearchPath @ 0x180082550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 */

__int64 __fastcall RtlGetSearchPath(_QWORD *a1)
{
  __int64 v2; // rax

  v2 = sub_18002534C(&qword_18015B2D8, (__int64 (__fastcall *)(__int64, __int64))sub_18006DC50, 0LL, 0LL);
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
