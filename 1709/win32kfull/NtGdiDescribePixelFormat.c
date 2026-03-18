/*
 * XREFs of NtGdiDescribePixelFormat @ 0x1C0289AF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     GreDescribePixelFormat @ 0x1C029502C (GreDescribePixelFormat.c)
 */

__int64 __fastcall NtGdiDescribePixelFormat(HDC a1, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // esi
  char Src[40]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a3;
  if ( a3 && !a4 )
    return 0LL;
  if ( a3 >= 0x28 )
    v5 = 40LL;
  v7 = GreDescribePixelFormat(a1);
  if ( v7 && (_DWORD)v5 )
  {
    if ( (unsigned __int64)&a4[v5] > MmUserProbeAddress || &a4[v5] <= a4 || ((unsigned __int8)a4 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a4, Src, (unsigned int)v5);
  }
  return v7;
}
