/*
 * XREFs of AcpiValidatePepDeviceControlResources @ 0x1C00A37AC
 * Callers:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A3600 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C005516C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_xxxd @ 0x1C0055720 (WPP_RECORDER_SF_xxxd.c)
 *     AMLICheckIfIoRangeValid @ 0x1C005B684 (AMLICheckIfIoRangeValid.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C005BA68 (AMLIValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AcpiValidatePepDeviceControlResources(_DWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v6; // edi
  _DWORD *v7; // r10
  ULONGLONG v8; // rsi
  unsigned __int16 v9; // r9
  ULONGLONG v10; // rax
  int v12; // [rsp+20h] [rbp-48h]
  unsigned __int64 v13[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v16; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v17; // [rsp+C8h] [rbp+60h] BYREF

  v4 = -1073741823;
  if ( !*a1 || !a1[9] )
    return (unsigned int)v4;
  v4 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = &a1[8 * v6];
    if ( *((_BYTE *)v7 + 41) == 1 )
      break;
    if ( *((_BYTE *)v7 + 41) == 2 )
    {
      WPP_RECORDER_SF_Dd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v12, v7[13], v6);
      return (unsigned int)-1073741823;
    }
    if ( *((_BYTE *)v7 + 41) != 3 )
    {
      if ( *((_BYTE *)v7 + 41) == 5 )
        goto LABEL_10;
      if ( *((_BYTE *)v7 + 41) != 7 )
      {
        if ( *((unsigned __int8 *)v7 + 41) != 132 )
          return (unsigned int)-1073741637;
LABEL_10:
        v4 = 0;
        goto LABEL_19;
      }
    }
    v8 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &MinimumAddress, &MaximumAddress);
    a2 = MaximumAddress;
    if ( v8 + MinimumAddress - 1 != MaximumAddress )
    {
      v9 = 36;
      goto LABEL_26;
    }
    if ( v8 > 0xFFFFFFFF )
    {
      v9 = 37;
      goto LABEL_26;
    }
    v16 = MinimumAddress;
    v4 = AMLIValidateFirmwareMemoryAddress((const void **)&v16, v8);
    if ( v4 < 0 )
    {
      v9 = 39;
      goto LABEL_26;
    }
LABEL_19:
    if ( (unsigned int)++v6 >= a1[9] )
      return (unsigned int)v4;
  }
  v10 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &v17, v13);
  if ( v10 + v17 - 1 == v13[0] )
  {
    if ( !AMLICheckIfIoRangeValid(v17, v10) )
    {
      WPP_RECORDER_SF_xxxd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x23u, v12);
      v4 = -1073741823;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_19;
  }
  v9 = 33;
LABEL_26:
  WPP_RECORDER_SF_xxxd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v9, v12);
  return (unsigned int)-1073741823;
}
