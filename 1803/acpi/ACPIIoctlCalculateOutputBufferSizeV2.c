/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C002B684
 * Callers:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C002B684 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C002B8FC (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C002C0BC (ACPIIoctlEvalPostProcessingV2.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C002B684 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV2(__int64 a1, _DWORD *a2, int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v7; // ebx
  int v8; // ecx
  int *v9; // rbp
  char v10; // al
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // eax
  char v14; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v15; // [rsp+58h] [rbp+10h]
  char v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v15 = a2;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 == 1 )
  {
    v7 = 16;
    if ( a4 != 1 )
      v7 = 12;
LABEL_19:
    *a3 = 1;
LABEL_20:
    *a2 += v7;
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v13 = *(_DWORD *)(a1 + 24);
    if ( v13 < 4 )
      v13 = 4;
    v7 = v13 + 8;
    goto LABEL_19;
  }
  if ( v5 != 4 )
  {
    if ( v5 )
      return 3222536207LL;
    v7 = 0;
    goto LABEL_19;
  }
  v8 = 1;
  v9 = *(int **)(a1 + 32);
  if ( a5 )
    v8 = *v9;
  v10 = -a5;
  *a3 = v8;
  v11 = 0;
  v7 = v10 == 0 ? 8 : 0;
  if ( !*v9 )
    goto LABEL_20;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeV2(
               (unsigned int)v9 + 8 * (v11 + 4 * v11 + 1),
               (_DWORD)a2,
               (unsigned int)&v14,
               a4,
               0);
    if ( (int)result < 0 )
      return result;
    a2 = v15;
    ++v11;
    a4 = v16;
    if ( v11 >= *v9 )
      goto LABEL_20;
  }
}
