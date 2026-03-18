/*
 * XREFs of HUBPDO_PowerSettingCallback @ 0x1C0016270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBPDO_PowerSettingCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, _DWORD *Context)
{
  _DWORD *v4; // r15
  unsigned int v7; // ebx
  int v10; // ecx
  char v11; // al
  char v12; // al
  int v13; // eax
  int v14; // eax
  char v15; // cl
  char v16; // al
  int Source1; // [rsp+78h] [rbp+48h] BYREF

  v4 = Context + 555;
  v7 = 0;
  Source1 = Context[555];
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_3_LINK_POWER_MANAGEMENT_POLICY, 0x10uLL) == 16 )
  {
    v10 = *Value;
    if ( (unsigned int)*Value <= 3 )
    {
      if ( !v10 )
      {
        Source1 = 0;
        goto LABEL_39;
      }
      v11 = Source1 | 0x3F;
      LOBYTE(Source1) = Source1 | 0x3F;
      if ( v10 == 1 )
      {
        v12 = v11 & 0x3F | 0x40;
      }
      else
      {
        if ( v10 != 2 )
        {
          if ( v10 == 3 )
            LOBYTE(Source1) = -65;
          goto LABEL_39;
        }
        v12 = v11 & 0x3F;
      }
      goto LABEL_7;
    }
LABEL_41:
    v7 = -1073741811;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)Context + 1) + 1432LL),
      2u,
      2u,
      0x7Bu,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      -1073741811);
    return v7;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_DEVICES, 0x10uLL) == 16
    || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength < 4 )
      goto LABEL_41;
    v15 = *Value != 0;
    v16 = Source1 & 0xFE;
LABEL_38:
    LOBYTE(Source1) = v16 | v15;
    goto LABEL_39;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_DEVICES, 0x10uLL) == 16
    || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength < 4 )
      goto LABEL_41;
    v15 = *Value != 0 ? 2 : 0;
    v16 = Source1 & 0xFD;
    goto LABEL_38;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_DEVICES, 0x10uLL) == 16
    || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength < 4 )
      goto LABEL_41;
    v14 = *Value;
    if ( *Value )
    {
      if ( v14 != 1 )
      {
        if ( v14 == 2 )
          LOBYTE(Source1) = Source1 & 0xEB;
        goto LABEL_39;
      }
      v12 = Source1 & 0xEB | 4;
      goto LABEL_7;
    }
    LOBYTE(Source1) = Source1 | 0x14;
  }
  else if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_DEVICES, 0x10uLL) == 16
         || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength < 4 )
      goto LABEL_41;
    v13 = *Value;
    if ( !*Value )
    {
      LOBYTE(Source1) = Source1 | 0x28;
      goto LABEL_39;
    }
    if ( v13 != 1 )
    {
      if ( v13 == 2 )
        LOBYTE(Source1) = Source1 & 0xD7;
      goto LABEL_39;
    }
    v12 = Source1 & 0xD7 | 8;
LABEL_7:
    LOBYTE(Source1) = v12;
  }
LABEL_39:
  if ( RtlCompareMemory(&Source1, v4, 4uLL) != 4 )
  {
    *v4 = Source1;
    HUBSM_AddEvent((__int64)(Context + 126), 4055);
  }
  return v7;
}
