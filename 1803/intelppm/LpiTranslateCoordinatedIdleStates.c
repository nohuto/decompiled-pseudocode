/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C00350D8
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0031004 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C0002420 (DecodeAcpiIdleState.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002B0F4 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     ValidateCoordinatedLpiStates @ 0x1C002B1D0 (ValidateCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0034CDC (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        _QWORD *a5)
{
  char *v6; // r13
  int v7; // ebx
  _DWORD *PoolWithTag; // r12
  int v9; // edx
  unsigned int v10; // esi
  int v11; // r15d
  __int64 v12; // rdi
  size_t v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // r15d
  unsigned int *v18; // rax
  unsigned int *v19; // rdi
  char *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbx
  _DWORD *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  char *v29; // r15
  int v30; // eax
  char v31; // al
  __int64 v32; // rcx
  char *v33; // rdx
  int v34; // r14d
  unsigned int v35; // esi
  unsigned int *v36; // r15
  _DWORD *v37; // rdx
  int v39; // [rsp+68h] [rbp-81h]
  unsigned int v40; // [rsp+68h] [rbp-81h]
  unsigned int v41; // [rsp+6Ch] [rbp-7Dh]
  unsigned int v42; // [rsp+6Ch] [rbp-7Dh]
  size_t Size; // [rsp+70h] [rbp-79h]
  SIZE_T Sizea; // [rsp+70h] [rbp-79h]
  size_t Sizeb; // [rsp+70h] [rbp-79h]
  unsigned int v46; // [rsp+78h] [rbp-71h] BYREF
  __int64 v47; // [rsp+80h] [rbp-69h] BYREF
  _DWORD *v48; // [rsp+88h] [rbp-61h] BYREF
  __int64 v49; // [rsp+90h] [rbp-59h]
  unsigned int *v50; // [rsp+98h] [rbp-51h]
  char v51[24]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-29h]
  __int128 v53; // [rsp+C8h] [rbp-21h]
  __int64 v54; // [rsp+D8h] [rbp-11h]
  __int64 v55; // [rsp+E8h] [rbp-1h]

  v6 = 0LL;
  v7 = ValidateCoordinatedLpiStates((_DWORD *)qword_1C001AB38, (__int64)a2);
  if ( v7 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * *a2, 0x72637250u);
    if ( PoolWithTag )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v39 = 0;
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
            v10 += v14;
            v41 = 0;
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
                 &v47,
                 &v46,
                 (unsigned int *)&v48,
                 0LL,
                 0LL,
                 0LL);
          if ( v7 < 0 )
            break;
          v9 = v46 + v39;
          v15 = v41 + 1;
          v11 += v47;
          v39 += v46;
          v41 = v15;
          if ( v15 >= *(_DWORD *)(Size + 16) )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_10:
        v16 = (224 * v10 + 55) & 0xFFFFFFF8;
        v17 = v16 + 16 * v11;
        Sizea = v17 + 4 * v9;
        v18 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, Sizea, 0x72637250u);
        v19 = v18;
        if ( v18 )
        {
          memset(v18, 0, Sizea);
          v20 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v10, 0x72637250u);
          v6 = v20;
          if ( v20 )
          {
            memset(v20, 0, 56LL * v10);
            v21 = v16;
            v22 = 0LL;
            v23 = (unsigned int *)((char *)v19 + v21);
            *v19 = v10;
            v48 = v23;
            v47 = (__int64)v19 + v17;
            v42 = 0;
            if ( *a2 )
            {
              while ( 1 )
              {
                v24 = (unsigned int)v22;
                v25 = *(_QWORD *)&a2[10 * v22 + 6];
                if ( v25 )
                {
                  v26 = 0LL;
                  v40 = 0;
                  if ( *(_DWORD *)(v25 + 16) )
                    break;
                }
LABEL_25:
                v22 = (unsigned int)(v22 + 1);
                v42 = v22;
                if ( (unsigned int)v22 >= *a2 )
                {
                  v10 = *v19;
                  goto LABEL_27;
                }
              }
              while ( 1 )
              {
                v27 = 5 * v26;
                v28 = (unsigned int)(PoolWithTag[v24] + v26);
                v27 *= 16LL;
                v49 = v27;
                Sizeb = (size_t)&v19[56 * v28 + 12];
                v29 = &v6[56 * v28];
                *(_DWORD *)(Sizeb + 192) = 10 * *(_DWORD *)(v27 + v25 + 28);
                v30 = *(_DWORD *)(v27 + v25 + 24);
                *(_WORD *)(Sizeb + 209) = 257;
                *(_QWORD *)(Sizeb + 216) = v23;
                *(_DWORD *)(Sizeb + 196) = 10 * v30;
                *(_OWORD *)(Sizeb + 168) = *(_OWORD *)(v27 + v25 + 88);
                *(_QWORD *)(Sizeb + 184) = *(_QWORD *)(v25 + 8);
                KeInitializeAffinityEx(Sizeb);
                v50 = (unsigned int *)(Sizeb + 204);
                v7 = LpiEnumerateDependencies(
                       a2,
                       v22,
                       v40,
                       (__int64)PoolWithTag,
                       (__int64)v19,
                       (_DWORD *)(Sizeb + 204),
                       &v46,
                       (unsigned int *)(Sizeb + 200),
                       v48,
                       v47,
                       Sizeb);
                if ( v7 < 0 )
                  break;
                if ( (unsigned int)KeIsEqualAffinityEx(Sizeb, &unk_1C001A8C8) )
                {
                  *(_BYTE *)(Sizeb + 208) = 1;
                  v31 = 1;
                }
                else
                {
                  v31 = *(_BYTE *)(Sizeb + 208);
                }
                v32 = v49;
                v29[48] = v31;
                v33 = (char *)(v25 + v32 + 48);
                *((_QWORD *)v29 + 4) = *(_QWORD *)(v32 + v25 + 52);
                if ( *v33 != 126 )
                {
                  v7 = DecodeAcpiIdleState(
                         a1,
                         v33,
                         0xFFFFFFFF,
                         *(unsigned int *)(v32 + v25 + 36),
                         0LL,
                         0LL,
                         0LL,
                         (__int64)v51);
                  if ( v7 < 0 )
                    break;
                  *(_QWORD *)v29 = v52;
                  *(_OWORD *)(v29 + 8) = v53;
                  *((_QWORD *)v29 + 3) = v54;
                  *((_QWORD *)v29 + 5) = v55;
                }
                LODWORD(v22) = v42;
                v24 = v42;
                v23 = &v48[4 * *v50];
                v48 = v23;
                v47 += 4LL * v46;
                v26 = v40 + 1;
                v40 = v26;
                if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 16) )
                  goto LABEL_25;
              }
            }
            else
            {
LABEL_27:
              v34 = 0;
              if ( v10 )
              {
                while ( 1 )
                {
                  v35 = 0;
                  v36 = &v19[56 * v34];
                  if ( v36[63] )
                    break;
LABEL_32:
                  if ( ++v34 >= *v19 )
                    goto LABEL_33;
                }
                while ( 1 )
                {
                  v37 = (_DWORD *)(*((_QWORD *)v36 + 33) + 16LL * v35);
                  if ( *v37 != -1 )
                  {
                    v7 = ValidateCoordinatedLpiDependenciesProcessor((__int64)(v36 + 12), (__int64)v37);
                    if ( v7 < 0 )
                      break;
                  }
                  if ( ++v35 >= v36[63] )
                    goto LABEL_32;
                }
              }
              else
              {
LABEL_33:
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
