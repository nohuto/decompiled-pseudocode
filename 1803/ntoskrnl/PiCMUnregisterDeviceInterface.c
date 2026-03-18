/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x14073884C
 * Callers:
 *     PiCMHandleIoctl @ 0x14050A580 (PiCMHandleIoctl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PiCMReleaseObjectInputData @ 0x14050C488 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14050CA48 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1405C6850 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1405C68D0 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDeviceInterface @ 0x1407E76B0 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  int v9; // ebx
  int ObjectProperty; // ebx
  char v11; // al
  struct _KTHREAD *CurrentThread; // rax
  int v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+6Ch] [rbp+1Bh] BYREF
  char v16[4]; // [rsp+70h] [rbp+1Fh] BYREF
  int v17; // [rsp+74h] [rbp+23h]
  int v18; // [rsp+78h] [rbp+27h]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+3Bh]
  int v21; // [rsp+90h] [rbp+3Fh]

  v6 = a6;
  v14 = 0;
  v15 = 0;
  *a6 = 0;
  LOBYTE(a6) = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v16);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v19 && !v17 && v18 == 4 && !v20 && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v19,
                           3u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v14,
                           (__int64)&a6,
                           1,
                           (__int64)&v15,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v14 == 17 && v15 == 1 )
          {
            v11 = (char)a6;
          }
          else
          {
            v11 = 0;
            LOBYTE(a6) = 0;
          }
          if ( v11 == -1 )
            ObjectProperty = -1073740024;
          if ( ObjectProperty >= 0 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            ObjectProperty = CmDeleteDeviceInterface(PiPnpRtlCtx, v19);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      else
      {
        ObjectProperty = -1073741811;
      }
    }
    else
    {
      ObjectProperty = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(ObjectProperty, v21, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v16);
  return (unsigned int)v9;
}
