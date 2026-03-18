/*
 * XREFs of UsbhGetDeviceBusInfo @ 0x1C003BFBC
 * Callers:
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003F168 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhAcquireBusInfo @ 0x1C004E580 (UsbhAcquireBusInfo.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     Usbh_UsbdInterfaceDereference @ 0x1C003D0DC (Usbh_UsbdInterfaceDereference.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C003D3F4 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhGetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  _DWORD *v9; // r15
  __int64 v10; // r10
  __int64 v12; // rbx
  _DWORD *v13; // rax
  int v14; // ebx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // r10
  void (__fastcall *v18)(__int64); // rax
  int v19; // r9d
  unsigned int v20; // r8d
  _DWORD *PoolWithTag; // rax
  _DWORD *v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 (__fastcall *v25)(__int64, __int64, _DWORD *, size_t *, _DWORD *); // r10
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  int v29; // [rsp+20h] [rbp-58h]
  _DWORD v30[4]; // [rsp+40h] [rbp-38h] BYREF
  size_t Size; // [rsp+98h] [rbp+20h] BYREF

  v4 = a4;
  v5 = 0LL;
  v9 = FdoExt(a1);
  Log(a1, 8, 1734632041, (unsigned int)v4, (__int64)a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      v4);
  if ( (unsigned int)v4 < 0x10 )
  {
    Log(a1, 8, 1734632005, v4, (__int64)a3);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 12, v10);
    return 3221225507LL;
  }
  if ( a2 )
  {
    v12 = *((_QWORD *)PdoExt(a2) + 144);
    v13 = FdoExt(a1);
    if ( *((_QWORD *)v13 + 543) )
    {
      v5 = (*((__int64 (__fastcall **)(_QWORD, __int64))v13 + 543))(*((_QWORD *)v13 + 529), v12);
      v14 = 0;
    }
    else
    {
      v14 = -1073741822;
    }
    Log(a1, 8, 1734631985, v14, v5);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        13,
        (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
        v14,
        v5);
  }
  else
  {
    Log(a1, 8, 1734631986, 0LL, 0LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 14, v17);
    v5 = *((_QWORD *)v9 + 570);
    v18 = (void (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 571);
    if ( v18 )
      v18(v5);
    v14 = 0;
  }
  if ( v14 >= 0 )
  {
    Log(a1, 8, 1734631987, 0LL, 0LL);
    v20 = v19 + 16;
    LODWORD(Size) = v19 + 16;
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x42554855u);
      v22 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, (unsigned int)Size);
      v23 = *(_QWORD *)(a1 + 64);
      v24 = 0;
      v30[0] = 0;
      v25 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, size_t *, _DWORD *))(v23 + 4608);
      if ( v25 )
      {
        v14 = v25(v5, 1LL, v22, &Size, v30);
        v24 = v30[0];
      }
      else
      {
        v14 = -1073741822;
      }
      Log(a1, 8, 1734631988, (__int64)v22, v24);
      if ( v14 != -1073741789 )
        goto LABEL_27;
      LODWORD(Size) = v30[0];
      Log(a1, 8, 1734631989, v30[0], -1073741789LL);
      ExFreePoolWithTag(v22, 0);
      v20 = Size;
    }
    v14 = -1073741670;
LABEL_27:
    Usbh_UsbdInterfaceDereference(a1, v5);
    if ( v14 < 0 )
      goto LABEL_31;
    if ( v22 )
    {
      a3[1] = *v22;
      a3[2] = v22[1];
      a3[3] = v22[2];
      Log(a1, 8, 1734629425, (unsigned int)*v22, (unsigned int)v22[1]);
      Log(a1, 8, 1734629426, (unsigned int)v22[2], 0LL);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v26, v27, v28, v29, *v22, v22[1], v22[2]);
LABEL_31:
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
      v14);
  return (unsigned int)v14;
}
