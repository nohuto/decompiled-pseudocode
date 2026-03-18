/*
 * XREFs of HUBMISC_SetDeviceVersionFlag @ 0x1C0029358
 * Callers:
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C001B360 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingVersionFlagInEnumerating @ 0x1C001B7D0 (HUBDSM_SettingVersionFlagInEnumerating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 */

__int16 __fastcall HUBMISC_SetDeviceVersionFlag(__int64 a1)
{
  unsigned __int16 v2; // cx
  int v3; // eax
  int v4; // eax

  *(_BYTE *)(a1 + 1456) = 0;
  v2 = *(_WORD *)(a1 + 1990);
  LOWORD(v3) = 256;
  if ( v2 == 256 )
  {
    *(_DWORD *)(a1 + 1456) |= 1u;
    return v3;
  }
  LOWORD(v3) = v2 - 257;
  if ( (unsigned __int16)(v2 - 257) <= 0xFEu )
  {
LABEL_14:
    *(_DWORD *)(a1 + 1456) |= 2u;
    return v3;
  }
  LOWORD(v3) = 512;
  if ( v2 == 512 )
  {
    *(_DWORD *)(a1 + 1456) |= 4u;
    return v3;
  }
  LOWORD(v3) = v2 - 513;
  if ( (unsigned __int16)(v2 - 513) <= 0xFEu )
  {
    *(_DWORD *)(a1 + 1456) |= 8u;
    return v3;
  }
  if ( v2 < 0x300u )
  {
    LOWORD(v3) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   2u,
                   5u,
                   0x28u,
                   (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
                   v2);
    goto LABEL_14;
  }
  v4 = *(_DWORD *)(a1 + 1456);
  if ( (v4 & 0x20000) != 0 )
  {
    v3 = v4 | 0x10;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x27u,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      v2);
    v3 = *(_DWORD *)(a1 + 1456) | 8;
  }
  *(_DWORD *)(a1 + 1456) = v3;
  return v3;
}
