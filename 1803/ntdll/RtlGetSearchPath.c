/*
 * XREFs of RtlGetSearchPath @ 0x180082550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 */

NTSTATUS __cdecl RtlGetSearchPath(PWSTR *SearchPathA)
{
  __int64 v2; // rax

  v2 = sub_18002534C(&qword_18015B2D8, (__int64 (__fastcall *)(__int64, __int64))sub_18006DC50, 0LL, 0LL);
  if ( v2 )
  {
    *SearchPathA = (PWSTR)(v2 + 112);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
