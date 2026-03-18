/*
 * XREFs of ACPIIoctlEvalPostProcessingV1 @ 0x1C001B2D0
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002AAD4 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005088C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0050AC0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV1(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v6; // r9
  unsigned int v7; // r10d
  unsigned __int64 v8; // r11
  __int64 v9; // r8
  unsigned int v10; // edx
  _DWORD *v11; // rcx
  int v12; // eax
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1[23] + 8LL) )
  {
    a1[7] = 0LL;
    return 0LL;
  }
  v14 = 0;
  v15 = 0;
  if ( (int)ACPIIoctlCalculateOutputBufferSizeV1(a2, (unsigned int)&v14, (unsigned int)&v15, a3, 1) < 0 )
  {
    a1[7] &= v8;
    return 0LL;
  }
  v9 = (unsigned int)(v8 + 20);
  v10 = v14 + 12;
  if ( v14 + 12 < (unsigned int)v9 )
    v10 = v8 + 20;
  if ( v7 >= (unsigned int)v9 )
  {
    v11 = (_DWORD *)a1[3];
    v12 = v15;
    *v11 = 1114596673;
    v8 = (unsigned __int64)(v11 + 3);
    v11[1] = v10;
    v11[2] = v12;
  }
  if ( v10 <= v7 )
  {
    LOBYTE(v6) = 1;
    a1[7] = v10;
    LOBYTE(v9) = a3;
    if ( (int)ACPIIoctlCalculateOutputBufferV1(a2, v8, v9, v6) < 0 )
      a1[7] = 0LL;
    return 0LL;
  }
  a1[7] = v9;
  return 2147483653LL;
}
