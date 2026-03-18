/*
 * XREFs of AcpiValidatePepDeviceControlResources @ 0x1C0080A9C
 * Callers:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00808F0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C00342DC (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_xxxd @ 0x1C0034890 (WPP_RECORDER_SF_xxxd.c)
 *     AMLICheckIfIoRangeValid @ 0x1C004340C (AMLICheckIfIoRangeValid.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C0044458 (AMLIValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AcpiValidatePepDeviceControlResources(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v6; // edi
  _DWORD *v7; // r10
  ULONGLONG v8; // rsi
  int v9; // r8d
  ULONGLONG v10; // rax
  int v11; // edx
  int v12; // r8d
  char v13; // r15
  char v14; // si
  char v15; // r12
  int v16; // r9d
  int v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v22; // [rsp+C0h] [rbp+58h]
  unsigned __int64 v23; // [rsp+C8h] [rbp+60h] BYREF

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
      WPP_RECORDER_SF_Dd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v18, v7[13], v6);
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
    if ( v8 + MinimumAddress - 1 != MaximumAddress )
    {
      v16 = 36;
      goto LABEL_23;
    }
    if ( v8 > 0xFFFFFFFF )
    {
      v16 = 37;
LABEL_23:
      WPP_RECORDER_SF_xxxd(
        WPP_GLOBAL_Control->DeviceExtension,
        MaximumAddress,
        v9,
        v16,
        v18,
        MinimumAddress,
        MaximumAddress,
        v8,
        v6);
      return (unsigned int)-1073741823;
    }
    v22 = MinimumAddress;
    v4 = AMLIValidateFirmwareMemoryAddress();
    if ( v4 < 0 )
    {
      WPP_RECORDER_SF_xxxd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 39, v18, MinimumAddress, MaximumAddress, v8, v6);
      return (unsigned int)-1073741823;
    }
LABEL_19:
    if ( (unsigned int)++v6 >= a1[9] )
      return (unsigned int)v4;
  }
  v10 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &v23, v19);
  v13 = v23;
  v14 = v10;
  v15 = v19[0];
  if ( v10 + v23 - 1 == v19[0] )
  {
    if ( !AMLICheckIfIoRangeValid(v23, v10) )
    {
      WPP_RECORDER_SF_xxxd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 35, v18, v13, v15, v14, v6);
      v4 = -1073741823;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_19;
  }
  WPP_RECORDER_SF_xxxd(WPP_GLOBAL_Control->DeviceExtension, v11, v12, 33, v18, v23, v19[0], v10, v6);
  return (unsigned int)-1073741823;
}
