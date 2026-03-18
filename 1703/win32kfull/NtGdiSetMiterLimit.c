/*
 * XREFs of NtGdiSetMiterLimit @ 0x1C00F6180
 * Callers:
 *     <none>
 * Callees:
 *     GreSetMiterLimit @ 0x1C00F61DC (GreSetMiterLimit.c)
 */

__int64 __fastcall NtGdiSetMiterLimit(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v5; // edx
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v5 = bConvertDwordToFloat(a2, &v8);
  if ( v5 )
    v5 = GreSetMiterLimit(a1);
  if ( v5 && a3 )
  {
    if ( a3 + 4 > W32UserProbeAddress || a3 + 4 <= a3 || (a3 & 3) != 0 )
      *W32UserProbeAddress = 0;
    *(_DWORD *)a3 = v7;
  }
  return v5;
}
