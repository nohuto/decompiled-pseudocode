/*
 * XREFs of RtlLookupFunctionTable @ 0x1800DB1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 */

__int64 __fastcall RtlLookupFunctionTable(void *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int64)a1 < *((_QWORD *)&xmmword_18016F4E0 + 1)
    || (unsigned __int64)a1 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
  {
    result = sub_18000EF10(a1, (__int64)&v6);
  }
  else
  {
    result = xmmword_18016F4E0;
    v6 = xmmword_18016F4E0;
    v7 = qword_18016F4F0;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
