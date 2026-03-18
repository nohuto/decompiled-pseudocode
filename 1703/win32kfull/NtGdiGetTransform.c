/*
 * XREFs of NtGdiGetTransform @ 0x1C00DD870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreGetTransform @ 0x1C013F73C (GreGetTransform.c)
 */

__int64 __fastcall NtGdiGetTransform(HDC a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  result = GreGetTransform(a1);
  if ( (_DWORD)result )
  {
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    *(_OWORD *)a3 = v5;
    *(_QWORD *)(a3 + 16) = v6;
  }
  return result;
}
