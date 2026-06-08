/*
 * XREFs of PepNotifyQueryCoordinatedStates @ 0x1C002E4D4
 * Callers:
 *     RegisterKernelCoordinatedStates @ 0x1C002C5E0 (RegisterKernelCoordinatedStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004B80 (memmove.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0026394 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C00268BC (ValidateCoordinatedState.c)
 *     PepQueryName @ 0x1C002EF50 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryCoordinatedStates(__int64 a1, PVOID **a2)
{
  __int64 v2; // rsi
  PVOID *v4; // rdi
  _DWORD *v5; // r14
  SIZE_T v6; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // r13
  int v9; // ebx
  int v10; // ebx
  int v11; // r8d
  unsigned int v12; // ebp
  unsigned int *v13; // rdx
  __int64 v14; // r9
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  SIZE_T v19; // r12
  PVOID *v20; // rax
  unsigned int v21; // r12d
  char *v22; // rax
  char *v23; // r15
  unsigned int *v24; // r14
  char *v25; // r13
  char *v26; // rbx
  unsigned int v27; // edx
  __int64 v28; // rcx
  SIZE_T v29; // rbx
  unsigned int v30; // ebp
  char *v31; // r15
  unsigned int v32; // r12d
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  PVOID *v36; // r14
  unsigned int *v38; // [rsp+30h] [rbp-58h]
  SIZE_T v41; // [rsp+A0h] [rbp+18h]
  PVOID *v42; // [rsp+A8h] [rbp+20h]

  v2 = (unsigned int)dword_1C00162C8;
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned int)(16 * dword_1C00162C8 + 4);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v38 = PoolWithTag;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    *v8 = v2;
    v9 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 29LL, v8);
    if ( v9 >= 0 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      if ( (_DWORD)v2 )
      {
        v13 = v8 + 4;
        v14 = v2;
        do
        {
          v15 = *v13;
          v16 = *(v13 - 1);
          v13 += 4;
          v10 += v16;
          v11 += v15 * v16;
          if ( v12 < v15 )
            v12 = v15;
          --v14;
        }
        while ( v14 );
      }
      v17 = (224 * v2 + 55) & 0xFFFFFFF8;
      v18 = v17 + 16 * v10;
      v19 = v18 + 4 * v11;
      v20 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x72637250u);
      v42 = v20;
      v4 = v20;
      if ( !v20 )
        goto LABEL_10;
      memset(v20, 0, v19);
      v21 = 0;
      v22 = (char *)v4 + v17;
      v23 = (char *)v4 + v18;
      if ( (_DWORD)v2 )
      {
        v24 = v8 + 3;
        v25 = v22;
        v26 = (char *)(v4 + 30);
        do
        {
          KeInitializeAffinityEx(v26 - 192);
          v27 = 0;
          *(_DWORD *)v26 = *(v24 - 2);
          *((_DWORD *)v26 + 1) = *(v24 - 1);
          *((_DWORD *)v26 + 3) = *v24;
          *((_DWORD *)v26 + 2) = v24[1];
          *((_QWORD *)v26 + 3) = v25;
          v25 += 16 * *v24;
          if ( *v24 )
          {
            do
            {
              v28 = v27++;
              *(_QWORD *)(*((_QWORD *)v26 + 3) + 16 * v28 + 8) = v23;
              v23 += 4 * v24[1];
            }
            while ( v27 < *v24 );
          }
          PepQueryName(a1, v21++, 27LL, v26 - 24);
          v26 += 224;
          v24 += 4;
        }
        while ( v21 < (unsigned int)v2 );
        v4 = v42;
        v8 = v38;
      }
      v29 = 4 * v12 + 24;
      v41 = v29;
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x72637250u);
      if ( v5 )
      {
        v30 = 0;
        if ( (_DWORD)v2 )
        {
          v31 = (char *)(v4 + 31);
          while ( 1 )
          {
            v32 = 0;
            if ( *((_DWORD *)v31 + 1) )
              break;
LABEL_27:
            v9 = ValidateCoordinatedState((__int64)v4, v30);
            if ( v9 < 0 )
              goto LABEL_30;
            v29 = v41;
            ++v30;
            v31 += 224;
            if ( v30 >= (unsigned int)v2 )
              goto LABEL_29;
          }
          while ( 1 )
          {
            memset(v5, 0, v29);
            *v5 = v30;
            v5[1] = v32;
            v5[2] = *(_DWORD *)v31;
            v9 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C0016040)(*(_QWORD *)(a1 + 1088), v5);
            if ( v9 < 0 )
              break;
            v9 = ValidateCoordinatedDependencyOptions((__int64)v4, v30, v32, *(_DWORD *)v31, (__int64)v5);
            if ( v9 < 0 )
              break;
            v33 = *((_QWORD *)v5 + 2);
            v34 = *((_QWORD *)v31 + 2) + 16LL * v32;
            if ( v33 )
              *(_DWORD *)v34 = *(_DWORD *)(v33 + 56);
            else
              *(_DWORD *)v34 = -1;
            v35 = v5[3];
            *(_DWORD *)(v34 + 4) = v35;
            memmove(*(void **)(v34 + 8), v5 + 6, 4LL * v35);
            v29 = v41;
            if ( ++v32 >= *((_DWORD *)v31 + 1) )
              goto LABEL_27;
          }
        }
        else
        {
LABEL_29:
          v9 = 0;
          *a2 = v4;
          v4 = 0LL;
        }
      }
      else
      {
LABEL_10:
        v9 = -1073741670;
      }
    }
LABEL_30:
    ExFreePoolWithTag(v8, 0x72637250u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72637250u);
    if ( v4 )
    {
      if ( (_DWORD)v2 )
      {
        v36 = v4 + 28;
        do
        {
          if ( *v36 )
            ExFreePoolWithTag(*v36, 0x72637250u);
          v36 += 28;
          --v2;
        }
        while ( v2 );
      }
      ExFreePoolWithTag(v4, 0x72637250u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
