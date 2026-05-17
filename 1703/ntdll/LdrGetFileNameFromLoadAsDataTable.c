/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1800E1860
 * Callers:
 *     <none>
 * Callees:
 *     sub_180076144 @ 0x180076144 (sub_180076144.c)
 */

__int64 __fastcall LdrGetFileNameFromLoadAsDataTable(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  result = sub_180076144(a1, &v6, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)&v6 + 1) )
      *a2 = *((_QWORD *)&v6 + 1);
    else
      return 3221225473LL;
  }
  return result;
}
