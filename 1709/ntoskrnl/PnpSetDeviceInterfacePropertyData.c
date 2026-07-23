/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x1405D37B8
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x1405D3770 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x140527F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140723C40 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  bool v12; // zf
  __int64 v14; // rax
  void *v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h]
  int v17; // [rsp+5Ch] [rbp-A4h]
  UNICODE_STRING String; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[176]; // [rsp+70h] [rbp-90h] BYREF

  memset(v19, 0, 0xAAuLL);
  v15 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.Buffer = (wchar_t *)v19;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  else
  {
    String.Buffer = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr(&v15, 0LL, (unsigned __int16 *)a1);
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
      v11 = PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v15,
              3u,
              0LL,
              (__int64)String.Buffer,
              a2,
              a5,
              a7,
              a6,
              0);
    else
      v11 = -1073741790;
  }
  PnpUnicodeStringToWstrFree(v15, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
