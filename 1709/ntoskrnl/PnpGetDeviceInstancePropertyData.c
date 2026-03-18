/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x140789D50
 * Callers:
 *     sub_14076275C @ 0x14076275C (sub_14076275C.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PnpGetDeviceInstancePropertyData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  int ObjectProperty; // ebx
  _DWORD v12[48]; // [rsp+60h] [rbp-D8h] BYREF

  memset(&v12[4], 0, 0xAAuLL);
  v12[0] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InLocalMachineContainer,
                     (__int64)v12,
                     a6,
                     1,
                     a7,
                     0);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ObjectProperty >= 0 )
    *a8 = v12[0];
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
