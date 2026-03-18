/*
 * XREFs of UsbhGetHubDeviceInformation @ 0x1C0017A10
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0007228 (Usbh_HubDerefDeviceHandle.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C00228FC (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetDeviceHandle @ 0x1C00261D0 (UsbhGetDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubDeviceInformation(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r13
  __int64 DeviceHandle; // rbp
  unsigned int v6; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, _DWORD *, _QWORD, char *); // r10
  int v11; // esi
  _DWORD *v12; // rax
  int v13; // r8d
  int v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+A0h] [rbp+18h] BYREF
  char v17; // [rsp+A8h] [rbp+20h] BYREF

  v4 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  v6 = 64;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 0x48447472u);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, v6);
    *v8 = 0;
    v9 = FdoExt(a1);
    v10 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _QWORD, char *))*((_QWORD *)v9 + 538);
    if ( !v10 )
      break;
    v11 = v10(*((_QWORD *)v9 + 529), DeviceHandle, v8, v6, &v17);
    if ( v11 != -1073741789 )
      goto LABEL_8;
    v6 = v8[1];
    ExFreePoolWithTag(v8, 0);
  }
  v11 = -1073741822;
LABEL_8:
  v12 = FdoExt(a1);
  if ( *((_QWORD *)v12 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v12 + 559))(
      *((_QWORD *)v12 + 529),
      DeviceHandle,
      a2,
      1212445810LL);
  if ( v11 >= 0 )
  {
    v4[633] = v8[11];
    v4[634] = v8[10];
    *(_OWORD *)(v4 + 635) = *(_OWORD *)(v8 + 3);
    *((_WORD *)v4 + 1278) = *((_WORD *)v8 + 14);
    Log(a1, 8, 1768842800, (__int64)v8, (__int64)v4);
    Log(a1, 8, 1768842872, (int)v4[634], (int)v4[633]);
    if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v4 + 2540, v13, (unsigned int)&v16, 0LL) )
    {
      LOBYTE(v15) = 0;
      v11 = -1073741811;
      UsbhException(a1, 0, 64, (_DWORD)v4 + 2540, 18, -1073741811, v16, usbfile_hub_c, 4205, v15);
    }
  }
  ExFreePoolWithTag(v8, 0);
  Log(a1, 8, 1768842814, v11, 0LL);
  return (unsigned int)v11;
}
