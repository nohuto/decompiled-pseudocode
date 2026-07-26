/*
 * XREFs of ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C00E53B4
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C00EB820 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_SF_DDDDDDDD @ 0x1C0050A50 (WPP_SF_DDDDDDDD.c)
 *     WPP_SF_DDZ @ 0x1C0050AE4 (WPP_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(__int64 a1, _BYTE *a2)
{
  const DEVPROPKEY *v2; // rax
  int Data2_high; // r8d
  char Data2; // r10

  v2 = (const DEVPROPKEY *)&unk_1C0083050;
  Data2_high = 0;
  Data2 = 0;
  while ( (*(unsigned __int8 *)(a1 + 5) | (*(unsigned __int8 *)(a1 + 4) << 16)) != v2->fmtid.Data1 )
  {
    v2 = (const DEVPROPKEY *)((char *)v2 + 8);
    if ( v2 == &DEVPKEY_Device_InstanceId )
      goto LABEL_6;
  }
  Data2_high = HIBYTE(v2->fmtid.Data2);
  Data2 = v2->fmtid.Data2;
LABEL_6:
  if ( Data2_high == 1 )
  {
    if ( *(_BYTE *)a1 == 0xC7 && *(_WORD *)(a1 + 2) >= 0x78u && *(_BYTE *)(a1 + 1) )
    {
      *a2 = Data2;
      return 0LL;
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_DDDDDDDD(0x24u, *(unsigned __int8 *)(a1 + 1), 199, 1);
      return 3221291013LL;
    }
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_DDZ(0x23u, (__int64)a2, *(unsigned __int8 *)(a1 + 4), *(unsigned __int8 *)(a1 + 5));
    return 3221291012LL;
  }
}
