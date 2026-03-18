/*
 * XREFs of MiMakeUnusedImageExtentsCold @ 0x14026772C
 * Callers:
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiAddPageToHeatRanges @ 0x140264D10 (MiAddPageToHeatRanges.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiMakeUnusedImageExtentsCold(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  unsigned int v4; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v5; // [rsp+24h] [rbp-A4h]
  _BYTE v6[7]; // [rsp+28h] [rbp-A0h] BYREF

  result = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v5 = 0;
  v2 = *(_QWORD **)(*(_QWORD *)(result + 32) + 88LL);
  if ( v2 )
  {
    do
    {
      if ( (unsigned int)MiAddPageToHeatRanges(
                           (__int64)&v4,
                           (__int64)((unsigned __int128)((__int64)(v2 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
                           (__int64)(v2 + 0xB000000000LL) / 48) )
      {
        HvlNotifyPageHeat(v4, v5, v6);
        v5 = 0;
      }
      result = MiGetLeafPfnBuddy(v2);
      v2 = (_QWORD *)result;
    }
    while ( result );
    if ( (_DWORD)v3 )
      return HvlNotifyPageHeat(v4, v3, v6);
  }
  return result;
}
