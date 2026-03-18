/*
 * XREFs of PushScope @ 0x1C004E73C
 * Callers:
 *     Device @ 0x1C004AED0 (Device.c)
 *     PowerRes @ 0x1C004B8B0 (PowerRes.c)
 *     Processor @ 0x1C004BA20 (Processor.c)
 *     ThermalZone @ 0x1C004BB90 (ThermalZone.c)
 *     Scope @ 0x1C004F2C0 (Scope.c)
 *     IfElse @ 0x1C004F3F0 (IfElse.c)
 *     While @ 0x1C004FC40 (While.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseLoad @ 0x1C0055700 (ParseLoad.c)
 * Callees:
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 */

__int64 __fastcall PushScope(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // r10d
  _QWORD *v13; // rdx
  char v14; // cl
  __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v12 = PushFrame((__int64)a1, 1347371859, 80LL, (__int64)ParseScope, v16);
  if ( !v12 )
  {
    v13 = (_QWORD *)v16[0];
    a1[15] = a2;
    v13[4] = a3;
    v13[5] = a4;
    v13[6] = a1[10];
    v14 = gdwfAMLI;
    a1[10] = a5;
    if ( (v14 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 112));
      v13 = (_QWORD *)v16[0];
    }
    v13[7] = a1[11];
    a1[11] = a6;
    v13[8] = a1[40];
    a1[40] = a7;
    v13[9] = a8;
  }
  return v12;
}
