/*
 * XREFs of PiControlGetDeviceDepth @ 0x14058B520
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140525AE4 (PiControlMakeUserModeCallersCopy.c)
 *     PiGetDeviceDepth @ 0x14058B5B8 (PiGetDeviceDepth.c)
 */

__int64 __fastcall PiControlGetDeviceDepth(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int DeviceDepth; // ebx
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v9; // [rsp+32h] [rbp-16h]
  void *v10; // [rsp+38h] [rbp-10h] BYREF

  v9 = *a2;
  v8 = v9;
  if ( (unsigned __int16)(v9 - 1) > 0x18Fu || (v9 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v10, *((void **)a2 + 1), v9, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    DeviceDepth = PiGetDeviceDepth(&v8, a2 + 8);
    PiControlFreeUserModeCallersBuffer(a4, v10);
    return DeviceDepth;
  }
  return result;
}
