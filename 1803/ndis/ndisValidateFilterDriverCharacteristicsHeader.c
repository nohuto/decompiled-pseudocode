/*
 * XREFs of ndisValidateFilterDriverCharacteristicsHeader @ 0x1C00C203C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00162A0 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_SF_DDDDDDDD @ 0x1C0050A50 (WPP_SF_DDDDDDDD.c)
 *     WPP_SF_DDZ @ 0x1C0050AE4 (WPP_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(__int64 a1, const DEVPROPKEY *a2)
{
  int v2; // r11d
  const DEVPROPKEY *v3; // rax
  int v4; // ebx
  unsigned int Data3_low; // r9d
  DEVPROPKEY *v6; // rdi
  unsigned int v7; // r8d
  unsigned __int16 v9; // dx

  v2 = *(unsigned __int8 *)(a1 + 4);
  v3 = (const DEVPROPKEY *)&unk_1C0083050;
  v4 = *(unsigned __int8 *)(a1 + 5);
  Data3_low = 0;
  a2->fmtid.Data1 = 0;
  v6 = (DEVPROPKEY *)a2;
  while ( (v4 | (v2 << 16)) != v3->fmtid.Data1 )
  {
    v3 = (const DEVPROPKEY *)((char *)v3 + 8);
    a2 = &DEVPKEY_Device_InstanceId;
    if ( v3 == &DEVPKEY_Device_InstanceId )
      goto LABEL_6;
  }
  Data3_low = LOBYTE(v3->fmtid.Data3);
LABEL_6:
  switch ( Data3_low )
  {
    case 1u:
      v9 = *(_WORD *)(a1 + 2);
      v7 = v9;
      if ( v9 >= 0xE0u )
        v7 = 224;
      goto LABEL_12;
    case 2u:
      v7 = 224;
      break;
    case 3u:
      v7 = 240;
      break;
    default:
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_DDZ(0x25u, (__int64)a2, v2, v4);
      return 3221291012LL;
  }
  if ( *(_BYTE *)a1 == 0x8B && *(unsigned __int16 *)(a1 + 2) >= v7 && *(unsigned __int8 *)(a1 + 1) >= Data3_low )
  {
LABEL_12:
    v6->fmtid.Data1 = v7;
    return 0LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_DDDDDDDD(0x26u, *(unsigned __int8 *)(a1 + 1), 139, Data3_low);
  return 3221291013LL;
}
