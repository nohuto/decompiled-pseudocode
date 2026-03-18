/*
 * XREFs of NtGdiCombineTransform @ 0x1C00E07A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreCombineTransform @ 0x1C013F680 (GreCombineTransform.c)
 */

__int64 __fastcall NtGdiCombineTransform(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  _BYTE v8[24]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v9[24]; // [rsp+50h] [rbp-28h] BYREF

  if ( !(unsigned int)ProbeAndConvertXFORM(a2, v9) || !(unsigned int)ProbeAndConvertXFORM(a3, v8) )
    return 0LL;
  result = GreCombineTransform(&v6, v9, v8);
  if ( (_DWORD)result )
  {
    if ( a1 >= W32UserProbeAddress )
      a1 = W32UserProbeAddress;
    *(_OWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v7;
  }
  return result;
}
