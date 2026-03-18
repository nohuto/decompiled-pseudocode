/*
 * XREFs of UsbhGetLanguageIdString @ 0x1C00221B8
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003BF58 (WPP_RECORDER_SF_dD.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhValidateStringDescriptor @ 0x1C00549E4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0055678 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(int a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  _DWORD *v6; // rdi
  PDEVICE_OBJECT v7; // rcx
  int v9; // r9d
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbx
  int StringFromDevice; // esi
  __int64 v13; // rcx
  int v14; // r14d
  int v15; // r8d
  unsigned int v16; // edx
  _WORD *v17; // rsi
  __int64 v18; // rcx
  _WORD *v19; // rdi
  PDEVICE_OBJECT v20; // rcx
  int v21; // esi
  int v22; // [rsp+48h] [rbp-40h]
  int v23[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v24; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a2;
  v6 = PdoExt(a2);
  if ( !*((_BYTE *)v6 + 1407) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v9 = 23;
LABEL_5:
    WPP_RECORDER_SF_(v7->DeviceExtension, 0, 1, v9, (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids);
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xFFuLL);
  v24 = 255;
  StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)v23, (_DWORD)v11, (__int64)&v24, 0, 0);
  v13 = StringFromDevice & 0xC0000000;
  if ( (_DWORD)v13 == -1073741824 || (v14 = v24, !(unsigned __int8)UsbhValidateStringDescriptor(v13, v11, v24, v23)) )
  {
    LOBYTE(v22) = 0;
    UsbhException(
      a1,
      *((unsigned __int16 *)v6 + 710),
      63,
      (int)v11,
      v24,
      StringFromDevice,
      v23[0],
      usbfile_idstring_c,
      1762,
      v22);
    ExFreePoolWithTag(v11, 0);
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v9 = 24;
    goto LABEL_5;
  }
  v16 = (*(unsigned __int8 *)v11 >> 1) - 1;
  if ( *(unsigned __int8 *)v11 >> 1 == 1 )
  {
    ExFreePoolWithTag(v11, 0);
    return 3221225659LL;
  }
  v17 = v11 + 1;
  v18 = v16;
  v19 = v11;
  while ( v18 )
  {
    *v19++ = *v17++;
    --v18;
  }
  v11[v16] = 0;
  *(_DWORD *)(a3 + 4) = v14;
  *(_QWORD *)(a3 + 8) = v11;
  v20 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
      v16);
    v20 = WPP_GLOBAL_Control;
  }
  v21 = 0;
  while ( *v11 )
  {
    if ( LOWORD(v20->DeviceType) )
    {
      WPP_RECORDER_SF_dD(
        v20->DeviceExtension,
        v16,
        v15,
        26,
        (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
        v21,
        *v11);
      v20 = WPP_GLOBAL_Control;
      ++v21;
    }
    ++v11;
  }
  return 0LL;
}
