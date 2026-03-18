/*
 * XREFs of ACPIIoctlEvalPostProcessingV2 @ 0x1C0050DE0
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005088C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0050AC0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0050B80 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0050C6C (ACPIIoctlCalculateOutputBufferV2.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV2(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v7; // edi
  unsigned int v8; // edx
  _DWORD *v9; // rcx
  unsigned int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v7 = *(_DWORD *)(a1[23] + 8LL);
  if ( v7 )
  {
    v12 = 0;
    v13 = 0;
    if ( (int)ACPIIoctlCalculateOutputBufferSizeV2(a2, &v12, &v13, a3, 1) >= 0 )
    {
      v8 = v12 + 12;
      if ( (unsigned int)(v12 + 12) < 0x18 )
        v8 = 24;
      if ( v7 >= 0x18 )
      {
        v9 = (_DWORD *)a1[3];
        v10 = v13;
        *v9 = 1265591617;
        v3 = (unsigned __int64)(v9 + 3);
        v9[1] = v8;
        v9[2] = v10;
      }
      if ( v8 > v7 )
      {
        a1[7] = 24LL;
        return 2147483653LL;
      }
      a1[7] = v8;
      if ( (int)ACPIIoctlCalculateOutputBufferV2(a2, v3, a3, 1) < 0 )
        a1[7] = 0LL;
    }
    else
    {
      a1[7] = 0LL;
    }
  }
  else
  {
    a1[7] = 0LL;
  }
  return 0LL;
}
