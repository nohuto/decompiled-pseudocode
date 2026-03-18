/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0050B80
 * Callers:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0050B80 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0050C6C (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C0050DE0 (ACPIIoctlEvalPostProcessingV2.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0050B80 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV2(__int64 a1, _DWORD *a2, unsigned int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v6; // edi
  unsigned int *v7; // rbp
  unsigned int v8; // esi
  __int64 result; // rax
  unsigned int v10; // eax
  char v11; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v12; // [rsp+58h] [rbp+10h]
  char v13; // [rsp+68h] [rbp+20h]

  v13 = a4;
  v12 = a2;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 == 1 )
  {
    v6 = 16;
    if ( a4 != 1 )
      v6 = 12;
LABEL_20:
    *a3 = 1;
LABEL_21:
    *a2 += v6;
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v10 = *(_DWORD *)(a1 + 24);
    if ( v10 < 4 )
      v10 = 4;
    v6 = v10 + 8;
    goto LABEL_20;
  }
  if ( v5 != 4 )
  {
    if ( v5 )
      return 3222536207LL;
    v6 = 0;
    goto LABEL_20;
  }
  v7 = *(unsigned int **)(a1 + 32);
  if ( a5 )
  {
    v6 = 0;
    *a3 = *v7;
  }
  else
  {
    v6 = 8;
    *a3 = 1;
  }
  v8 = 0;
  if ( !*v7 )
    goto LABEL_21;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeV2(
               (unsigned int)v7 + 8 * (v8 + 4 * v8 + 1),
               (_DWORD)a2,
               (unsigned int)&v11,
               a4,
               0);
    if ( (int)result < 0 )
      return result;
    a2 = v12;
    ++v8;
    a4 = v13;
    if ( v8 >= *v7 )
      goto LABEL_21;
  }
}
