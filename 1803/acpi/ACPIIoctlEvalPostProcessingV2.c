/*
 * XREFs of ACPIIoctlEvalPostProcessingV2 @ 0x1C002C0BC
 * Callers:
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C002B4D0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C002B684 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C002B8FC (ACPIIoctlCalculateOutputBufferV2.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV2(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v7 = *(_DWORD *)(a1[23] + 8LL);
  if ( v7 )
  {
    v12 = 0;
    v13 = 0;
    if ( (int)ACPIIoctlCalculateOutputBufferSizeV2(a2, &v12, &v13, a3, 1) >= 0 )
    {
      v8 = v12 + 12;
      v9 = v12 + 12;
      if ( (unsigned int)(v12 + 12) < 0x18 )
      {
        v8 = 24;
        v9 = 24;
      }
      if ( v7 >= 0x18 )
      {
        v10 = (_DWORD *)a1[3];
        v10[1] = v8;
        v3 = (unsigned __int64)(v10 + 3);
        v10[2] = v13;
        *v10 = 1265591617;
      }
      if ( v9 > v7 )
      {
        a1[7] = 24LL;
        return 2147483653LL;
      }
      a1[7] = v9;
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
