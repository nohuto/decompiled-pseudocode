/*
 * XREFs of ndisMSetPowerManagementCapabilities @ 0x1C00119F8
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C00115A0 (ndisMSetGeneralAttributes.c)
 * Callees:
 *     ndisRssPmObjectHeaderFixup @ 0x1C0011A88 (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisMSetPowerManagementCapabilities(_BYTE *a1, __int64 a2)
{
  void *v2; // rsi
  int v5; // r8d
  int v6; // r9d
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  __int16 v10; // [rsp+20h] [rbp-18h]

  v2 = a1 + 1000;
  memset(a1 + 1000, 0, 0x3CuLL);
  LOBYTE(v6) = 2;
  if ( *(_BYTE *)(a2 + 1) < 2u )
  {
    v8 = a1[32];
    if ( v8 > 6u || v8 == 6 && a1[33] >= 0x50u )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qq(118LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2);
      return 3223519276LL;
    }
    LOBYTE(v6) = 1;
    v10 = 52;
  }
  else
  {
    v10 = 60;
  }
  LOBYTE(v5) = 0x80;
  if ( !(unsigned __int8)ndisRssPmObjectHeaderFixup((unsigned int)"PowerManagementCapabilities", a2, v5, v6, v10)
    || (v9 = a1[32], v9 <= 6u) && (v9 != 6 || a1[33] < 0x50u) )
  {
    memmove(v2, (const void *)a2, *(unsigned __int16 *)(a2 + 2));
    return 0LL;
  }
  return 3223519276LL;
}
