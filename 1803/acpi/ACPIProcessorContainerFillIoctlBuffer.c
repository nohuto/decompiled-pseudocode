/*
 * XREFs of ACPIProcessorContainerFillIoctlBuffer @ 0x1C00369BC
 * Callers:
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C00369BC (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C0036B94 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009528 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002B590 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002B778 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C00369BC (ACPIProcessorContainerFillIoctlBuffer.c)
 */

__int64 __fastcall ACPIProcessorContainerFillIoctlBuffer(_QWORD *a1, int a2, __int64 a3, int *a4, int a5)
{
  _QWORD *v5; // rbx
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d
  _QWORD *v15; // rdx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  size_t v19; // r8
  void *v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // rsi
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+34h] [rbp-34h] BYREF
  __int64 v32; // [rsp+38h] [rbp-30h]
  char v33[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v34; // [rsp+42h] [rbp-26h]
  void *Src; // [rsp+48h] [rbp-20h]
  int v37; // [rsp+78h] [rbp+10h]

  v37 = a2;
  v5 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  v8 = a5;
  while ( 1 )
  {
    v9 = *((unsigned int *)v5 + 14);
    v10 = 3 * v9;
    *(_DWORD *)(a3 + 24 * v9 + 8) = v9;
    if ( a2 != -1 )
      LODWORD(v9) = a2;
    *(_DWORD *)(a3 + 8 * v10 + 12) = v9;
    result = ACPIProcessorContainerFillIoctlBuffer((int)v5 + 16, *(_DWORD *)(a3 + 8 * v10 + 8), a3, (_DWORD)a4, v8);
    if ( (int)result < 0 )
      break;
    v12 = *a4;
    *(_DWORD *)(a3 + 8 * v10 + 24) = 0;
    v13 = (v12 + 3) & 0xFFFFFFFC;
    v14 = v13;
    *(_DWORD *)(a3 + 8 * v10 + 28) = v13;
    v15 = (_QWORD *)v5[4];
    v16 = a3 + v13;
    *a4 = v13;
    v17 = 0;
    while ( v15 != v5 + 4 )
    {
      *(_DWORD *)(v16 + 4LL * *(unsigned int *)(a3 + 8 * v10 + 24)) = *((_DWORD *)v15 - 1);
      v17 = *(_DWORD *)(a3 + 8 * v10 + 24) + 1;
      *(_DWORD *)(a3 + 8 * v10 + 24) = v17;
      v15 = (_QWORD *)*v15;
    }
    v18 = v5[66];
    *a4 = v14 + 4 * v17;
    result = ACPIAmliBuildObjectPathnameUnicode(v18, (__int64)v33, 1);
    if ( (int)result < 0 )
      break;
    v19 = v34;
    v20 = Src;
    v21 = (*a4 + 1) & 0xFFFFFFFE;
    *a4 = v21;
    *(_DWORD *)(a3 + 8 * v10 + 16) = v21;
    memmove((void *)(a3 + v21), v20, v19);
    ExFreePoolWithTag(Src, 0);
    v22 = v34 + *a4;
    v23 = v5[6] == 0LL;
    *a4 = v22;
    if ( v23 )
    {
      *(_DWORD *)(a3 + 8 * v10 + 20) = 0;
    }
    else
    {
      v30 = 0;
      v31 = 0;
      v24 = (v22 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(a3 + 8 * v10 + 20) = v24;
      v25 = v5[6];
      v32 = v24;
      v26 = (_DWORD *)(a3 + v24);
      *a4 = v24;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v25, &v30, &v31, 0, 1);
      if ( (int)result < 0 )
        return result;
      v27 = v30 + 12;
      v28 = v30 + 12;
      if ( (unsigned int)(v30 + 12) < 0x14 )
      {
        v27 = 20;
        v28 = 20;
      }
      v29 = v28 + v32;
      *v26 = 1114596673;
      *a4 = v29;
      v26[2] = v31;
      v26[1] = v27;
      result = ACPIIoctlCalculateOutputBufferV1(v5[6], (__int64)(v26 + 3), 0, 1);
      if ( (int)result < 0 )
        return result;
    }
    v5 = (_QWORD *)*v5;
    a2 = v37;
    v8 = a5;
    if ( v5 == a1 )
      return 0LL;
  }
  return result;
}
