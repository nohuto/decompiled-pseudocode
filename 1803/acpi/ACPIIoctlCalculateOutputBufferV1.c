/*
 * XREFs of ACPIIoctlCalculateOutputBufferV1 @ 0x1C002B778
 * Callers:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002B778 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002BFD8 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0032F04 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C00369BC (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002B590 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002B778 (ACPIIoctlCalculateOutputBufferV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV1(__int64 a1, __int64 a2, char a3, char a4)
{
  char *v4; // rbx
  __int16 v6; // cx
  __int64 result; // rax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int *v15; // [rsp+38h] [rbp-20h]
  char *i; // [rsp+60h] [rbp+8h] BYREF
  char v17; // [rsp+70h] [rbp+18h]

  v17 = a3;
  v4 = (char *)a2;
  v6 = *(_WORD *)(a1 + 2);
  if ( v6 == 1 )
  {
    *(_WORD *)a2 = 0;
    if ( a3 == 1 )
    {
      *(_WORD *)(a2 + 2) = 8;
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_WORD *)(a2 + 2) = 4;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 16);
    }
    return 0LL;
  }
  if ( (unsigned __int16)(v6 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v6 != 2) + 1;
    *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 24);
    memmove((void *)(a2 + 4), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
    return 0LL;
  }
  if ( v6 != 4 )
    return 3222536207LL;
  v15 = *(unsigned int **)(a1 + 32);
  if ( !*v15 )
    return 3222536207LL;
  LODWORD(i) = 0;
  v14 = 0;
  result = ACPIIoctlCalculateOutputBufferSizeV1(a1, &i, &v14, a3, 1);
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      v11 = (unsigned __int16)i;
    }
    else
    {
      *(_WORD *)v4 = 3;
      LOWORD(v10) = (_WORD)i;
      *((_WORD *)v4 + 1) = (_WORD)i;
      v4 += 4;
      if ( (unsigned __int16)v10 >= 4u )
        v10 = (unsigned __int16)v10;
      else
        v10 = 4;
      v11 = v10 + 4;
    }
    v12 = 0;
    for ( i = &v4[v11]; v4 < i; v4 += v13 + 4 )
    {
      if ( v12 >= *v15 )
        break;
      LOBYTE(v9) = v17;
      result = ACPIIoctlCalculateOutputBufferV1(&v15[8 * v12 + 2 + 2 * v12], v4, v9, 0LL);
      if ( (int)result < 0 )
        return result;
      LOWORD(v13) = *((_WORD *)v4 + 1);
      ++v12;
      v13 = (unsigned __int16)v13 >= 4u ? (unsigned __int16)v13 : 4LL;
    }
    return 0LL;
  }
  return result;
}
