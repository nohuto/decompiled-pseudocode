/*
 * XREFs of ACPIProcessorContainerFillIoctlBuffer @ 0x1C005679C
 * Callers:
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005679C (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C0056964 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001B3A0 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001B530 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005679C (ACPIProcessorContainerFillIoctlBuffer.c)
 */

__int64 __fastcall ACPIProcessorContainerFillIoctlBuffer(_QWORD *a1, int a2, __int64 a3, unsigned int *a4, int a5)
{
  _QWORD *v5; // rdi
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  size_t v15; // r8
  void *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  _DWORD *v21; // r10
  int v22; // r11d
  unsigned int v23; // ecx
  int v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+34h] [rbp-34h] BYREF
  char v26[2]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v27; // [rsp+3Ah] [rbp-2Eh]
  void *Src; // [rsp+40h] [rbp-28h]

  v5 = (_QWORD *)*a1;
  v8 = a2;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( 1 )
  {
    v9 = *((unsigned int *)v5 + 14);
    v10 = v8;
    if ( v8 == -1 )
      v10 = *((_DWORD *)v5 + 14);
    v11 = 3 * v9;
    *(_DWORD *)(a3 + 8 * v11 + 12) = v10;
    *(_DWORD *)(a3 + 8 * v11 + 8) = v9;
    result = ACPIProcessorContainerFillIoctlBuffer((int)v5 + 16, v9, a3, (_DWORD)a4, a5);
    if ( (int)result < 0 )
      break;
    v13 = (*a4 + 3) & 0xFFFFFFFC;
    *(_DWORD *)(a3 + 8 * v11 + 24) = 0;
    *(_DWORD *)(a3 + 8 * v11 + 28) = v13;
    v14 = (_QWORD *)v5[4];
    *a4 = v13;
    while ( v14 != v5 + 4 )
    {
      *(_DWORD *)(a3 + v13 + 4LL * (unsigned int)(*(_DWORD *)(a3 + 8 * v11 + 24))++) = *((_DWORD *)v14 - 1);
      v14 = (_QWORD *)*v14;
    }
    *a4 = v13 + 4 * *(_DWORD *)(a3 + 8 * v11 + 24);
    result = ACPIAmliBuildObjectPathnameUnicode((__int64 *)v5[66], (__int64)v26, 1);
    if ( (int)result < 0 )
      break;
    v15 = v27;
    v16 = Src;
    v17 = (*a4 + 1) & 0xFFFFFFFE;
    *a4 = v17;
    *(_DWORD *)(a3 + 8 * v11 + 16) = v17;
    memmove((void *)(a3 + v17), v16, v15);
    ExFreePoolWithTag(Src, 0);
    *a4 += v27;
    v18 = *a4;
    if ( v5[6] )
    {
      v24 = 0;
      v25 = 0;
      v19 = (v18 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(a3 + 8 * v11 + 20) = v19;
      v20 = v5[6];
      *a4 = v19;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v20, &v24, &v25, 0, 1);
      if ( (int)result < 0 )
        return result;
      v23 = v24 + 12;
      *v21 = 1114596673;
      if ( v23 < 0x14 )
        v23 = 20;
      v21[1] = v23;
      *a4 = v22 + v23;
      v21[2] = v25;
      result = ACPIIoctlCalculateOutputBufferV1(v5[6], (__int64)(v21 + 3), 0);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_DWORD *)(a3 + 8 * v11 + 20) = 0;
    }
    v5 = (_QWORD *)*v5;
    v8 = a2;
    if ( v5 == a1 )
      return 0LL;
  }
  return result;
}
