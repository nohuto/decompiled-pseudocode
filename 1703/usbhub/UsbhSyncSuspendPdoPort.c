/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C0018FE4
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C0019BC0 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhPCE_Suspend @ 0x1C002726C (UsbhPCE_Suspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C00552FC (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned int v10; // esi
  _DWORD *v11; // rax
  int v13; // edx
  int v14; // eax
  int v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+88h] [rbp+20h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        1,
        18,
        (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
        a2);
  }
  v6 = PdoExt(a2);
  v7 = UsbhQueryPortState(*(_QWORD *)(a1 + 8), *((_WORD *)v6 + 710), (__int64)&v17, &v16);
  if ( v7 >= 0 && (v17 & 1) != 0 )
  {
    if ( (v6[353] & 0x100) != 0 && (int)PdoExt(a2)[586] > -1 && !a3 && (v6[353] & 4) == 0 )
    {
      v14 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v16);
      if ( (v14 & 0xC0000000) == 0xC0000000 )
      {
        LOBYTE(v15) = 0;
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *((unsigned __int16 *)v6 + 710),
          50,
          0,
          0,
          v14,
          v16,
          usbfile_pdopwr_c,
          1404,
          v15);
      }
    }
    v8 = *(_QWORD *)(a1 + 8);
    v16 = *((unsigned __int16 *)v6 + 710);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v9 = FdoExt(v8);
      if ( *((_QWORD *)v9 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v9 + 554))(*((_QWORD *)v9 + 529), 0LL, 3LL, &v16);
    }
    v10 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *((unsigned __int16 *)v6 + 710));
    v16 = *((unsigned __int16 *)v6 + 710);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v11 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v11 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v11 + 554))(*((_QWORD *)v11 + 529), 0LL, 4LL, &v16);
    }
  }
  else
  {
    LOBYTE(v15) = 0;
    UsbhException(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v6 + 710), 118, 0, 0, v7, v16, usbfile_pdopwr_c, 1420, v15);
    return (unsigned int)-1073741823;
  }
  return v10;
}
