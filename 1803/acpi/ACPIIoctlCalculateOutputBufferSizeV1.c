/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002B590
 * Callers:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002B590 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002B778 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002BFD8 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0032F04 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C003677C (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C00369BC (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002B590 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV1(__int64 a1, _DWORD *a2, int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v7; // r9d
  int v8; // ebx
  int *v9; // rbp
  char v10; // al
  int v11; // esi
  __int64 result; // rax
  unsigned int v13; // eax
  char v14; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v15; // [rsp+58h] [rbp+10h]
  char v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v15 = a2;
  v5 = *(_WORD *)(a1 + 2);
  v7 = 1;
  if ( v5 == 1 )
  {
    v8 = 12;
    if ( a4 != 1 )
      v8 = 8;
LABEL_19:
    *a3 = 1;
LABEL_20:
    *a2 += v8;
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v13 = *(_DWORD *)(a1 + 24);
    if ( v13 < 4 )
      v13 = 4;
    v8 = v13 + 4;
    goto LABEL_19;
  }
  if ( v5 != 4 )
  {
    if ( v5 )
      return 3222536207LL;
    v8 = 0;
    goto LABEL_19;
  }
  v9 = *(int **)(a1 + 32);
  if ( a5 )
    v7 = *v9;
  v10 = -a5;
  *a3 = v7;
  v11 = 0;
  v8 = v10 == 0 ? 4 : 0;
  if ( !*v9 )
    goto LABEL_20;
  while ( 1 )
  {
    LOBYTE(v7) = v16;
    result = ACPIIoctlCalculateOutputBufferSizeV1(
               (int)v9 + 8 * (v11 + 4 * v11 + 1),
               (_DWORD)a2,
               (unsigned int)&v14,
               v7,
               0);
    if ( (int)result < 0 )
      return result;
    a2 = v15;
    if ( ++v11 >= (unsigned int)*v9 )
      goto LABEL_20;
  }
}
