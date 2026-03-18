/*
 * XREFs of IopReferenceDriverObjectByName @ 0x1405F7614
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetDefaultMessageString @ 0x140645B40 (PiGetDefaultMessageString.c)
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

PVOID __fastcall IopReferenceDriverObjectByName(_WORD *a1)
{
  NTSTATUS v2; // ebx
  int v3; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+48h] [rbp-30h]
  _WORD *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  __int128 v7; // [rsp+60h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  if ( *a1
    && (v5 = a1,
        v3 = 48,
        v4 = 0LL,
        v6 = 576,
        v7 = 0LL,
        (int)ObOpenObjectByName((__int64)&v3, (__int64)IoDriverObjectType, 0, 0LL, 128, 0LL, (__int64)&Handle) >= 0)
    && (v2 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL), ZwClose(Handle), v2 >= 0) )
  {
    return Object;
  }
  else
  {
    return 0LL;
  }
}
