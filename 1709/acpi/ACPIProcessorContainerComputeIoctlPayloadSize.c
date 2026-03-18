/*
 * XREFs of ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C0056558
 * Callers:
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C0056558 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C0056964 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C0056558 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 */

__int64 __fastcall ACPIProcessorContainerComputeIoctlPayloadSize(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v6; // edx
  _QWORD *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // ecx
  _BYTE v12[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 v13; // [rsp+32h] [rbp-26h]
  PVOID P; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( 1 )
  {
    result = ACPIProcessorContainerComputeIoctlPayloadSize(v2 + 2, a2);
    if ( (int)result < 0 )
      break;
    v6 = 0;
    v7 = (_QWORD *)v2[4];
    while ( v7 != v2 + 4 )
    {
      v7 = (_QWORD *)*v7;
      ++v6;
    }
    v8 = (__int64 *)v2[66];
    *a2 = ((*a2 + 3) & 0xFFFFFFFC) + 4 * v6;
    result = ACPIAmliBuildObjectPathnameUnicode(v8, (__int64)v12, 1);
    if ( (int)result < 0 )
      break;
    ExFreePoolWithTag(P, 0);
    v9 = v2[6];
    *a2 = v13 + ((*a2 + 1) & 0xFFFFFFFE);
    if ( v9 )
    {
      v15 = 0;
      v16 = 0;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v9, &v15, &v16, 0, 1);
      if ( (int)result < 0 )
        return result;
      v11 = v15 + 12;
      if ( (unsigned int)(v15 + 12) < 0x14 )
        v11 = 20;
      *a2 = v11 + ((v10 + 3) & 0xFFFFFFFC);
    }
    v2 = (_QWORD *)*v2;
    if ( v2 == a1 )
      return 0LL;
  }
  return result;
}
