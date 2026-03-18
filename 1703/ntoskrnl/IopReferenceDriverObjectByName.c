/*
 * XREFs of IopReferenceDriverObjectByName @ 0x1405AD78C
 * Callers:
 *     PiGetDefaultMessageString @ 0x1405AD2F8 (PiGetDefaultMessageString.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
        (int)ObOpenObjectByName((int)&v3, (int)IoDriverObjectType, 0, 0, 128, 0LL, (__int64)&Handle) >= 0)
    && (v2 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL), ZwClose(Handle), v2 >= 0) )
  {
    return Object;
  }
  else
  {
    return 0LL;
  }
}
