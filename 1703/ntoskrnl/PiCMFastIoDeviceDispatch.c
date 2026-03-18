/*
 * XREFs of PiCMFastIoDeviceDispatch @ 0x14048A310
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x14004D440 (IoIs32bitProcess.c)
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 */

char __fastcall PiCMFastIoDeviceDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  BOOLEAN v9; // al
  HANDLE Handle; // [rsp+28h] [rbp-20h]

  v9 = IoIs32bitProcess(0LL);
  LODWORD(Handle) = a7;
  *a8 = PiCMHandleIoctl(a3, a8 + 2, Handle, v9);
  return 1;
}
