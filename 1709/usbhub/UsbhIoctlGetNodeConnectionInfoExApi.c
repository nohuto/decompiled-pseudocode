/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049FFC
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C0049EEC (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C0049F74 (UsbhIoctlGetNodeConnectionInfoEx.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C0048250 (UsbhAcquireApiLock.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0048490 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlTraceOutput @ 0x1C004B06C (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004B244 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004B580 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExApi(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  __int64 MasterIrp; // r14
  size_t v9; // r12
  _DWORD *v10; // rax
  _QWORD *v11; // r13
  int v12; // ebx
  __int64 PortData; // rbx
  __int64 v14; // rbp
  int NodeConnectionInfoForPdo; // eax
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF
  int v22; // [rsp+A0h] [rbp+18h] BYREF
  char v23; // [rsp+A8h] [rbp+20h] BYREF

  v23 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Cu,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  LODWORD(v21) = *(_DWORD *)(a3 + 8);
  v22 = a4 != 0 ? 274 : 259;
  Log(a1, 32, 1735284785, (__int64)a2, MasterIrp);
  v10 = FdoExt(a1);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( v11 )
  {
    v12 = UsbhAcquireApiLock(a1, 0xF00D0004, &v23);
    if ( (v12 & 0xC0000000) != 0xC0000000 )
    {
      v12 = UsbhIoctlValidateParameters(a1, 4, 35);
      if ( (v12 & 0xC0000000) != 0xC0000000 )
      {
        PortData = UsbhGetPortData(a1, *(_WORD *)MasterIrp);
        if ( PortData )
        {
          v14 = UsbhLatchPdo(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496F3034u);
          if ( v14 )
          {
            NodeConnectionInfoForPdo = UsbhGetNodeConnectionInfoForPdo(
                                         a1,
                                         (__int64)a2,
                                         PortData,
                                         v14,
                                         (_DWORD *)MasterIrp,
                                         (unsigned int *)&v21,
                                         a4);
            a2->IoStatus.Information = (unsigned int)v21;
            v12 = NodeConnectionInfoForPdo;
            UsbhUnlatchPdo(a1, v14, (__int64)a2, 0x496F3034u);
          }
          else
          {
            Log(a1, 32, 1733848688, *(unsigned __int16 *)(PortData + 4), MasterIrp);
            memset((void *)MasterIrp, 0, v9);
            *(_DWORD *)MasterIrp = *(unsigned __int16 *)(PortData + 4);
            v12 = 0;
            *(_DWORD *)(MasterIrp + 31) = 0;
            a2->IoStatus.Information = 35LL;
          }
        }
        else
        {
          v12 = -1073741811;
        }
      }
    }
  }
  else
  {
    v12 = -1073741670;
  }
  if ( (v12 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v12) )
  {
    LOBYTE(v20) = v16;
    UsbhException(a1, 0, 91, (int)&v22, 4, v12, v16, usbfile_ioctl_c, 2190, v20);
  }
  if ( v23 )
    UsbhReleaseApiLock(a1, 4027383812LL);
  Log(a1, 32, 1735284786, (__int64)a2, v12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v12;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Du,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      v19);
  }
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v17, v11);
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v12;
}
