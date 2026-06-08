/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C0030844
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002C494 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C00017F0 (DecodeAcpiIdleState.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C0026754 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     ValidateCoordinatedLpiStates @ 0x1C0026830 (ValidateCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0030448 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(__int64 a1, unsigned int *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char *v6; // r12
  int v7; // ebx
  _DWORD *PoolWithTag; // r15
  int v9; // edx
  __int64 v10; // r13
  int v11; // r14d
  __int64 v12; // rdi
  size_t v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rbx
  unsigned int v17; // r14d
  _DWORD *v18; // rax
  _DWORD *v19; // rdi
  char *v20; // rax
  _DWORD *v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r8
  char *v30; // rdx
  char *v31; // rcx
  int v32; // esi
  unsigned int v33; // r14d
  _DWORD *v34; // r13
  _DWORD *v35; // rdx
  int v37; // [rsp+68h] [rbp-81h]
  unsigned int v38; // [rsp+68h] [rbp-81h]
  size_t Size; // [rsp+70h] [rbp-79h]
  SIZE_T Sizea; // [rsp+70h] [rbp-79h]
  size_t Sizeb; // [rsp+70h] [rbp-79h]
  unsigned int v42; // [rsp+78h] [rbp-71h] BYREF
  char *v43; // [rsp+80h] [rbp-69h]
  __int64 v44; // [rsp+88h] [rbp-61h] BYREF
  __int64 v45; // [rsp+90h] [rbp-59h] BYREF
  __int64 v46; // [rsp+98h] [rbp-51h]
  unsigned int *v47; // [rsp+A0h] [rbp-49h]
  char v48[24]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-29h]
  __int128 v50; // [rsp+C8h] [rbp-21h]
  __int64 v51; // [rsp+D8h] [rbp-11h]
  __int64 v52; // [rsp+E8h] [rbp-1h]

  v6 = 0LL;
  v7 = ValidateCoordinatedLpiStates((_DWORD *)qword_1C00162F8, (__int64)a2);
  if ( v7 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * *a2, 0x72637250u);
    if ( PoolWithTag )
    {
      v9 = 0;
      v10 = 0LL;
      v11 = 0;
      v37 = 0;
      v12 = 0LL;
      if ( *a2 )
      {
        while ( 1 )
        {
          PoolWithTag[v12] = v10;
          v13 = *(_QWORD *)&a2[10 * v12 + 6];
          Size = v13;
          if ( v13 )
          {
            v14 = *(_DWORD *)(v13 + 16);
            v15 = 0;
            v10 = (unsigned int)(v14 + v10);
            LODWORD(v43) = 0;
            if ( v14 )
              break;
          }
LABEL_9:
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *a2 )
            goto LABEL_10;
        }
        while ( 1 )
        {
          v7 = LpiEnumerateDependencies(
                 a2,
                 v12,
                 v15,
                 (__int64)PoolWithTag,
                 0LL,
                 &v44,
                 &v42,
                 (unsigned int *)&v45,
                 0LL,
                 0LL,
                 0LL);
          if ( v7 < 0 )
            break;
          v9 = v42 + v37;
          v15 = (_DWORD)v43 + 1;
          v11 += v44;
          v37 += v42;
          LODWORD(v43) = v15;
          if ( v15 >= *(_DWORD *)(Size + 16) )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_10:
        v16 = (224 * (_DWORD)v10 + 55) & 0xFFFFFFF8;
        v17 = v16 + 16 * v11;
        Sizea = v17 + 4 * v9;
        v18 = ExAllocatePoolWithTag(NonPagedPoolNx, Sizea, 0x72637250u);
        v19 = v18;
        if ( v18 )
        {
          memset(v18, 0, Sizea);
          v20 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 48 * v10, 0x72637250u);
          v6 = v20;
          if ( v20 )
          {
            memset(v20, 0, 48 * v10);
            *v19 = v10;
            v21 = (_DWORD *)((char *)v19 + v16);
            v22 = 0LL;
            Sizeb = (size_t)v21;
            v45 = (__int64)v19 + v17;
            if ( *a2 )
            {
              while ( 1 )
              {
                v23 = (unsigned int)v22;
                v24 = *(_QWORD *)&a2[10 * v22 + 6];
                if ( v24 )
                {
                  v25 = 0LL;
                  v38 = 0;
                  if ( *(_DWORD *)(v24 + 16) )
                    break;
                }
LABEL_24:
                v22 = (unsigned int)(v22 + 1);
                if ( (unsigned int)v22 >= *a2 )
                  goto LABEL_25;
              }
              while ( 1 )
              {
                v26 = (unsigned int)(v25 + PoolWithTag[v23]);
                v46 = 80 * v25;
                v27 = (__int64)&v19[56 * v26 + 12];
                v43 = &v6[48 * v26];
                LODWORD(v26) = *(_DWORD *)(80 * v25 + v24 + 28);
                v44 = v27;
                *(_DWORD *)(v27 + 192) = 10 * v26;
                LODWORD(v26) = *(_DWORD *)(80 * v25 + v24 + 24);
                *(_WORD *)(v27 + 209) = 257;
                *(_QWORD *)(v27 + 216) = v21;
                *(_DWORD *)(v27 + 196) = 10 * v26;
                *(_OWORD *)(v27 + 168) = *(_OWORD *)(80 * v25 + v24 + 88);
                *(_QWORD *)(v27 + 184) = *(_QWORD *)(v24 + 8);
                KeInitializeAffinityEx(v27);
                v47 = (unsigned int *)(v44 + 204);
                v7 = LpiEnumerateDependencies(
                       a2,
                       v22,
                       v38,
                       (__int64)PoolWithTag,
                       (__int64)v19,
                       (_DWORD *)(v44 + 204),
                       &v42,
                       (unsigned int *)(v44 + 200),
                       v21,
                       v45,
                       v44);
                if ( v7 < 0 )
                  break;
                v28 = v44;
                if ( (unsigned int)KeIsEqualAffinityEx(v44, &unk_1C0016088) )
                  *(_BYTE *)(v28 + 208) = 1;
                v29 = v46;
                v30 = (char *)(v24 + v46 + 48);
                *((_QWORD *)v43 + 4) = *(_QWORD *)(v46 + v24 + 52);
                if ( *v30 != 126 )
                {
                  v7 = DecodeAcpiIdleState(
                         a1,
                         v30,
                         0xFFFFFFFF,
                         *(unsigned int *)(v29 + v24 + 36),
                         0LL,
                         0LL,
                         0LL,
                         (__int64)v48);
                  if ( v7 < 0 )
                    break;
                  v31 = v43;
                  *(_QWORD *)v43 = v49;
                  *(_OWORD *)(v31 + 8) = v50;
                  *((_QWORD *)v31 + 3) = v51;
                  *((_QWORD *)v31 + 5) = v52;
                }
                v23 = (unsigned int)v22;
                v21 = (_DWORD *)(16LL * *v47 + Sizeb);
                Sizeb = (size_t)v21;
                v45 += 4LL * v42;
                v25 = v38 + 1;
                v38 = v25;
                if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 16) )
                  goto LABEL_24;
              }
            }
            else
            {
LABEL_25:
              v32 = 0;
              if ( *v19 )
              {
                while ( 1 )
                {
                  v33 = 0;
                  v34 = &v19[56 * v32];
                  if ( v34[63] )
                    break;
LABEL_30:
                  if ( (unsigned int)++v32 >= *v19 )
                    goto LABEL_31;
                }
                while ( 1 )
                {
                  v35 = (_DWORD *)(*((_QWORD *)v34 + 33) + 16LL * v33);
                  if ( *v35 != -1 )
                  {
                    v7 = ValidateCoordinatedLpiDependenciesProcessor((__int64)(v34 + 12), (__int64)v35);
                    if ( v7 < 0 )
                      break;
                  }
                  if ( ++v33 >= v34[63] )
                    goto LABEL_30;
                }
              }
              else
              {
LABEL_31:
                v7 = 0;
              }
              if ( v7 >= 0 )
              {
                *a3 = v19;
                v19 = 0LL;
                *a4 = PoolWithTag;
                PoolWithTag = 0LL;
                *a5 = v6;
                v6 = 0LL;
                v7 = 0;
              }
            }
          }
          else
          {
            v7 = -1073741670;
          }
          if ( v19 )
            ExFreePoolWithTag(v19, 0x72637250u);
        }
        else
        {
          v7 = -1073741670;
        }
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
