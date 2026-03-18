/*
 * XREFs of PiControlStartDevice @ 0x1406D3370
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 *     PiQueueDeviceRequest @ 0x14044E618 (PiQueueDeviceRequest.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140525AE4 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlStartDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  int UserModeCallersCopy; // ebx
  __int64 v7; // r8
  unsigned __int16 v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v10; // [rsp+32h] [rbp-16h]
  void *v11; // [rsp+38h] [rbp-10h] BYREF

  v4 = *a2;
  v10 = v4;
  v9 = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v10 & 1) != 0 )
    return 3221225485LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v11, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiQueueDeviceRequest((__int64)&v9, 16, v7, 1, 0LL);
    PiControlFreeUserModeCallersBuffer(a4, v11);
  }
  return (unsigned int)UserModeCallersCopy;
}
