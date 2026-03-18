/*
 * XREFs of ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0
 * Callers:
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001B2D0 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0 (ACPIIoctlCalculateOutputBufferV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0053FA4 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005679C (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV1(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int16 v4; // cx
  char *v6; // rbx
  __int64 result; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rdi
  char v10; // r11
  int v11; // ecx
  unsigned __int16 v12; // ax
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-18h] BYREF
  char *i; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 2);
  v6 = (char *)a2;
  if ( v4 == 1 )
  {
    if ( a3 == 1 )
    {
      *(_DWORD *)a2 = 0x80000;
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_DWORD *)a2 = 0x40000;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 16);
    }
    return 0LL;
  }
  if ( (unsigned __int16)(v4 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v4 != 2) + 1;
    *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 24);
    memmove((void *)(a2 + 4), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
    return 0LL;
  }
  if ( v4 != 4 )
    return 3222536207LL;
  v8 = *(_DWORD **)(a1 + 32);
  if ( !*v8 )
    return 3222536207LL;
  v9 = 0LL;
  LODWORD(i) = 0;
  v15 = 0;
  result = ACPIIoctlCalculateOutputBufferSizeV1(a1, (unsigned int)&i, (unsigned int)&v15, a3, 1);
  if ( (int)result >= 0 )
  {
    v11 = 4;
    if ( v10 )
    {
      v13 = (unsigned __int16)i;
    }
    else
    {
      *(_WORD *)v6 = 3;
      v12 = (unsigned __int16)i;
      *((_WORD *)v6 + 1) = (_WORD)i;
      v6 += 4;
      if ( v12 >= 4u )
        v11 = v12;
      v13 = v11 + 4;
    }
    for ( i = &v6[v13]; v6 < i; v6 += v14 + 4 )
    {
      if ( (unsigned int)v9 >= *v8 )
        break;
      result = ACPIIoctlCalculateOutputBufferV1(&v8[8 * v9 + 2 + 2 * (unsigned int)v9], v6, a3, 0LL);
      if ( (int)result < 0 )
        return result;
      LOWORD(v14) = *((_WORD *)v6 + 1);
      v9 = (unsigned int)(v9 + 1);
      v14 = (unsigned __int16)v14 < 4u ? 4LL : (unsigned __int16)v14;
    }
    return 0LL;
  }
  return result;
}
