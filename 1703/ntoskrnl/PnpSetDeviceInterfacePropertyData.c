/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x1405C4248
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x1405C4210 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1406EB9D0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  bool v12; // zf
  __int64 v14; // rax
  int v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h]
  int v17; // [rsp+5Ch] [rbp-A4h]
  _BYTE v18[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  _BYTE v20[176]; // [rsp+70h] [rbp-90h] BYREF

  memset(v20, 0, 0xAAuLL);
  *(_QWORD *)v15 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v19 = (__int64)v20;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, v18) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr(v15, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(a2 + 16) == 256;
    v16 = 0;
    v17 = 0;
    if ( !v12 )
      goto LABEL_8;
    v14 = *(_QWORD *)a2 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( v14 )
LABEL_8:
      v11 = PnpSetObjectProperty(*(__int64 **)&PiPnpRtlCtx, *(__int64 *)v15, 3u, 0LL, v19, a2, a5, a7, a6, 0);
    else
      v11 = -1073741790;
  }
  PnpUnicodeStringToWstrFree(*(void **)v15, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
