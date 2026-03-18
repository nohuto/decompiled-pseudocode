/*
 * XREFs of NtGdiGetAppClipBox @ 0x1C0094940
 * Callers:
 *     <none>
 * Callees:
 *     GreGetAppClipBox @ 0x1C009499C (GreGetAppClipBox.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetAppClipBox(HDC a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h]

  result = GreGetAppClipBox(a1);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_OWORD *)W32UserProbeAddress;
    *a2 = v4;
  }
  return result;
}
