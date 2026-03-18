/*
 * XREFs of NtGdiGetCurrentDpiInfo @ 0x1C005B820
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfo @ 0x1C005B6E8 (DrvGetCurrentDpiInfo.c)
 */

__int64 __fastcall NtGdiGetCurrentDpiInfo(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _OWORD v6[6]; // [rsp+20h] [rbp-68h] BYREF

  result = DrvGetCurrentDpiInfo(a1, (__int64)v6, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v6[0];
    a2[1] = v6[1];
    a2[2] = v6[2];
    a2[3] = v6[3];
    a2[4] = v6[4];
    a2[5] = v6[5];
  }
  return result;
}
