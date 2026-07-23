/*
 * XREFs of PnpSetDevicePropertyData @ 0x1406061E8
 * Callers:
 *     IoSetDevicePropertyData @ 0x140606140 (IoSetDevicePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1401641E8 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x14064C0A8 (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x140787510 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebx
  __int64 v14; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v16[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v16, 0, 0xAAuLL);
  if ( a1 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v10 = 0LL;
  if ( !v10 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.Buffer = (wchar_t *)v16;
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
  v12 = PiPnpRtlSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          *(const WCHAR **)(v10 + 48),
          1,
          0LL,
          (__int64)String.Buffer,
          a2,
          a5,
          a7,
          a6,
          0);
  if ( v12 >= 0 && *(_DWORD *)(a2 + 16) == 2 )
  {
    v14 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v14 )
      v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 == -1073741275 )
    v12 = -1073741772;
  if ( *(int *)(v10 + 300) >= 771 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v12;
}
