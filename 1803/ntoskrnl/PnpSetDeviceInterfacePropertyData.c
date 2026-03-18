/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x1406024B8
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x140602470 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140787510 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  WCHAR *v13; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v14[8]; // [rsp+58h] [rbp-100h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-F8h]
  _BYTE v16[176]; // [rsp+70h] [rbp-E8h] BYREF

  memset(v16, 0, 0xAAuLL);
  v13 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v15 = v16;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, v14) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v15 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr((__int16 **)&v13, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v13, 3, 0LL, (__int64)v15, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v13, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
