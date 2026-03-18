/*
 * XREFs of UsbhGetLanguageIdString @ 0x1C00232DC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhValidateStringDescriptor @ 0x1C002894C (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0028988 (UsbhGetStringFromDevice.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00474E0 (WPP_RECORDER_SF_dD.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(int a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  _DWORD *v6; // rdi
  PDEVICE_OBJECT v7; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v10; // rbx
  int StringFromDevice; // esi
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r8d
  unsigned int v15; // edx
  _WORD *v16; // rsi
  __int64 v17; // rcx
  _WORD *v18; // rdi
  int v19; // esi
  int v20; // r9d
  int v21; // [rsp+48h] [rbp-40h]
  int v22[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v23; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a2;
  v6 = PdoExt(a2);
  if ( !*((_BYTE *)v6 + 1407) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v20 = 23;
LABEL_20:
    WPP_RECORDER_SF_(v7->DeviceExtension, 0, 1, v20, (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids);
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xFFuLL);
  v23 = 255;
  StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)v22, (_DWORD)v10, (__int64)&v23, 0, 0);
  v12 = StringFromDevice & 0xC0000000;
  if ( (_DWORD)v12 == -1073741824 || (v13 = v23, !(unsigned __int8)UsbhValidateStringDescriptor(v12, v10, v23, v22)) )
  {
    LOBYTE(v21) = 0;
    UsbhException(
      a1,
      *((unsigned __int16 *)v6 + 710),
      63,
      (int)v10,
      v23,
      StringFromDevice,
      v22[0],
      usbfile_idstring_c,
      1762,
      v21);
    ExFreePoolWithTag(v10, 0);
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v20 = 24;
    goto LABEL_20;
  }
  v15 = (*(unsigned __int8 *)v10 >> 1) - 1;
  if ( *(unsigned __int8 *)v10 >> 1 == 1 )
  {
    ExFreePoolWithTag(v10, 0);
    return 3221225659LL;
  }
  v16 = v10 + 1;
  v17 = v15;
  v18 = v10;
  while ( v17 )
  {
    *v18++ = *v16++;
    --v17;
  }
  v10[v15] = 0;
  *(_DWORD *)(a3 + 4) = v13;
  *(_QWORD *)(a3 + 8) = v10;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
      v15);
  v19 = 0;
  while ( *v10 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v14,
        26,
        (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
        v19++,
        *v10);
    ++v10;
  }
  return 0LL;
}
