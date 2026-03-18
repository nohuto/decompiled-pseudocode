/*
 * XREFs of IopReferenceDriverObjectByName @ 0x14051AA48
 * Callers:
 *     PiGetDefaultMessageString @ 0x140517098 (PiGetDefaultMessageString.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
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
        (int)ObOpenObjectByName((unsigned int)&v3, (_DWORD)IoDriverObjectType, 0, 0, 128, 0LL, (__int64)&Handle) >= 0)
    && (v2 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL), ZwClose(Handle), v2 >= 0) )
  {
    return Object;
  }
  else
  {
    return 0LL;
  }
}
