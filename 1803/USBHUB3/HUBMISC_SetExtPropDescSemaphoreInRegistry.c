/*
 * XREFs of HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C006E1B4
 * Callers:
 *     HUBDSM_SettingExtPropDescSemaphoreForMsOs2 @ 0x1C001E940 (HUBDSM_SettingExtPropDescSemaphoreForMsOs2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0070E98 (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_SetExtPropDescSemaphoreInRegistry(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  int v5; // ecx
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 1;
  v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)L"(*", 4, 4, (__int64)&v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 61;
LABEL_10:
    v7 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v4,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      v7);
    return ((v3 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v8 = *(unsigned __int16 *)(a1 + 2000);
  v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)&g_RevisionId, 4, 4, (__int64)&v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 62;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a1 + 2464) & 0x400) != 0 )
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 2528) + 4LL);
  else
    v5 = 0;
  v8 = v5;
  v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)&g_VendorRevision, 4, 4, (__int64)&v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 63;
    goto LABEL_10;
  }
  return ((v3 >> 31) & 0xFFFFFFF4) + 4077;
}
