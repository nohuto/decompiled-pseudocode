/*
 * XREFs of RtlLookupFunctionTable @ 0x1800E1500
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 */

__int64 __fastcall RtlLookupFunctionTable(void *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int64)a1 < *((_QWORD *)&xmmword_18016B4C0 + 1)
    || (unsigned __int64)a1 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
  {
    result = sub_180034A40(a1, (__int64)&v6);
  }
  else
  {
    result = xmmword_18016B4C0;
    v6 = xmmword_18016B4C0;
    v7 = qword_18016B4D0;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
