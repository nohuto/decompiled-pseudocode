/*
 * XREFs of ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C00C20F8
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00C18B0 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_SF_DDDDDDDD @ 0x1C0050A50 (WPP_SF_DDDDDDDD.c)
 *     WPP_SF_DDZ @ 0x1C0050AE4 (WPP_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateProtocolDriverCharacteristicsHeader(__int64 a1, unsigned int *a2)
{
  int v2; // r11d
  const DEVPROPKEY *v3; // rax
  int v4; // ebx
  int Data3_high; // r9d
  unsigned int v6; // r8d

  v2 = *(unsigned __int8 *)(a1 + 4);
  v3 = (const DEVPROPKEY *)&unk_1C0083050;
  v4 = *(unsigned __int8 *)(a1 + 5);
  Data3_high = 0;
  *a2 = 0;
  while ( (v4 | (v2 << 16)) != v3->fmtid.Data1 )
  {
    v3 = (const DEVPROPKEY *)((char *)v3 + 8);
    if ( v3 == &DEVPKEY_Device_InstanceId )
      goto LABEL_6;
  }
  Data3_high = HIBYTE(v3->fmtid.Data3);
LABEL_6:
  if ( Data3_high == 1 )
  {
    v6 = 120;
    goto LABEL_10;
  }
  if ( Data3_high == 2 )
  {
    v6 = 128;
    if ( *(_BYTE *)a1 != 0x95 || *(_BYTE *)(a1 + 1) < 2u )
    {
LABEL_16:
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_DDDDDDDD(0x28u, *(unsigned __int8 *)(a1 + 1), 149, Data3_high);
      return 3221291013LL;
    }
LABEL_10:
    if ( *(unsigned __int16 *)(a1 + 2) >= v6 )
    {
      *a2 = v6;
      return 0LL;
    }
    goto LABEL_16;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_DDZ(0x27u, (__int64)a2, v2, v4);
  return 3221291012LL;
}
