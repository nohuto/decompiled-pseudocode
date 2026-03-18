/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530
 * Callers:
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001B2D0 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0053FA4 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C0056558 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005679C (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV1(__int64 a1, _DWORD *a2, _DWORD *a3, char a4, char a5)
{
  __int16 v6; // dx
  int v7; // esi
  __int64 result; // rax
  _DWORD *v9; // rbp
  int v10; // ebx
  unsigned int v11; // esi
  char v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+68h] [rbp+20h]

  v13 = a4;
  v6 = *(_WORD *)(a1 + 2);
  if ( v6 == 1 )
  {
    v7 = 12;
    if ( a4 != 1 )
      v7 = 8;
LABEL_4:
    *a3 = 1;
LABEL_5:
    *a2 += v7;
    return 0LL;
  }
  if ( (unsigned __int16)(v6 - 2) <= 1u )
  {
    v11 = *(_DWORD *)(a1 + 24);
    if ( v11 < 4 )
      v11 = 4;
    v7 = v11 + 4;
    goto LABEL_4;
  }
  if ( v6 != 4 )
  {
    if ( v6 )
      return 3222536207LL;
    v7 = 0;
    goto LABEL_4;
  }
  v9 = *(_DWORD **)(a1 + 32);
  v10 = 0;
  if ( a5 )
  {
    v7 = 0;
    *a3 = *v9;
  }
  else
  {
    v7 = 4;
    *a3 = 1;
  }
  if ( !*v9 )
    goto LABEL_5;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeV1(
               (int)v9 + 8 * (v10 + 1 + 4 * v10),
               (_DWORD)a2,
               (unsigned int)&v12,
               a4,
               0);
    if ( (int)result < 0 )
      break;
    a4 = v13;
    if ( (unsigned int)++v10 >= *v9 )
    {
      *a2 += v7;
      return 0LL;
    }
  }
  return result;
}
