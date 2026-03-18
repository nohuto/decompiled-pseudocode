/*
 * XREFs of ?SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z @ 0x1C00D2D8C
 * Callers:
 *     DrvDimMonitors @ 0x1C00D3F0C (DrvDimMonitors.c)
 *     DrvSetMonitorBrightness2 @ 0x1C00D5B80 (DrvSetMonitorBrightness2.c)
 *     DrvUndimMonitors @ 0x1C00D64DC (DrvUndimMonitors.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C004BB20 (DrvDxgkWriteDiagEntry.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z @ 0x1C0052D90 (-GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall SetMonitorBrightness(
        struct _LUID a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct BRIGHTNESS_SENSOR_DATA *a5)
{
  ULONG TimeIncrement; // eax
  struct tagPER_MONITOR_DATA *PerMonitorData; // rax
  struct tagPER_MONITOR_DATA *v10; // rsi
  int v11; // edi
  __int64 v12; // xmm1_8
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  struct _LUID v15; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  _QWORD InputBuffer[17]; // [rsp+78h] [rbp-88h] BYREF

  v15 = a1;
  memset(InputBuffer, 0, 0x20uLL);
  memset(&InputBuffer[5], 0, 0x60uLL);
  memset(&InputBuffer[6], 0, 36);
  InputBuffer[5] = 0x6000000028LL;
  v17 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  LODWORD(InputBuffer[13]) = 0;
  InputBuffer[12] = v15;
  InputBuffer[11] = v17 * TimeIncrement;
  HIDWORD(InputBuffer[13]) = a2;
  HIDWORD(InputBuffer[14]) = a3;
  LODWORD(InputBuffer[16]) = InputBuffer[16] & 0xFFFFFFFE | (a5 != 0LL);
  LODWORD(InputBuffer[15]) = a4;
  PerMonitorData = GetPerMonitorData(v15);
  v10 = PerMonitorData;
  if ( PerMonitorData )
  {
    LODWORD(InputBuffer[14]) = *((_DWORD *)PerMonitorData + 7);
    if ( *((_DWORD *)PerMonitorData + 7) == -1 )
    {
      v11 = -1073741637;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C01A1BE0)(
              &v15,
              a2,
              &Object,
              &DeviceObject);
      if ( v11 >= 0 )
      {
        if ( *((_DWORD *)v10 + 7) == 3 )
        {
          InputBuffer[0] = __PAIR64__(a4, a3);
          if ( a5 )
          {
            v12 = *((_QWORD *)a5 + 2);
            *(_OWORD *)&InputBuffer[1] = *(_OWORD *)a5;
            InputBuffer[3] = v12;
          }
        }
        else
        {
          LOBYTE(InputBuffer[0]) = a3;
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        v11 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324C7u, InputBuffer, 0x20u, 0LL, 0, &v16, 1u, 0);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    v11 = -1073741275;
  }
  HIDWORD(InputBuffer[15]) = v11;
  DrvDxgkWriteDiagEntry();
  return (unsigned int)v11;
}
