/*
 * XREFs of ACPIProcessorContainerFillIoctlBuffer @ 0x1C0055BA4
 * Callers:
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C0055BA4 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C0055D60 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0024DAC (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIIoctlCalculateOutputBufferSize @ 0x1C0024EE0 (ACPIIoctlCalculateOutputBufferSize.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C0055BA4 (ACPIProcessorContainerFillIoctlBuffer.c)
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
  __int64 v21; // r9
  _DWORD *v22; // r10
  int v23; // r11d
  unsigned int v24; // ecx
  int v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+34h] [rbp-34h] BYREF
  char v27[2]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v28; // [rsp+3Ah] [rbp-2Eh]
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
    result = ACPIAmliBuildObjectPathnameUnicode(v5[66], (__int64)v27, 1);
    if ( (int)result < 0 )
      break;
    v15 = v28;
    v16 = Src;
    v17 = (*a4 + 1) & 0xFFFFFFFE;
    *a4 = v17;
    *(_DWORD *)(a3 + 8 * v11 + 16) = v17;
    memmove((void *)(a3 + v17), v16, v15);
    ExFreePoolWithTag(Src, 0);
    *a4 += v28;
    v18 = *a4;
    if ( v5[6] )
    {
      v25 = 0;
      v26 = 0;
      v19 = (v18 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(a3 + 8 * v11 + 20) = v19;
      v20 = v5[6];
      *a4 = v19;
      result = ACPIIoctlCalculateOutputBufferSize(v20, &v25, &v26, 1);
      if ( (int)result < 0 )
        return result;
      v24 = v25 + 12;
      *v22 = 1114596673;
      if ( v24 < 0x14 )
        v24 = 20;
      v22[1] = v24;
      *a4 = v23 + v24;
      v22[2] = v26;
      result = ACPIIoctlCalculateOutputBuffer(v5[6], (__int64)(v22 + 3), 1, v21);
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
