/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C002DE9C
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C001D450 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C000387C (GetDevExtFromIndex.c)
 *     DecodeAcpiIdleState @ 0x1C00045E0 (DecodeAcpiIdleState.c)
 *     WPP_RECORDER_SF_SSS @ 0x1C000B4F0 (WPP_RECORDER_SF_SSS.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     LpiEnumerateDependencies @ 0x1C002DAA0 (LpiEnumerateDependencies.c)
 *     ValidateLpiState @ 0x1C002FD78 (ValidateLpiState.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _DWORD *v5; // rsi
  char *v6; // r13
  unsigned int *v7; // r14
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r12
  _DWORD *PoolWithTag; // r12
  int v13; // edx
  unsigned int v14; // esi
  int v15; // r15d
  __int64 v16; // rdi
  size_t v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  unsigned int *v22; // rax
  unsigned int *v23; // rdi
  char *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rbx
  const wchar_t **v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rcx
  size_t v33; // rdx
  char *v34; // r15
  int v35; // eax
  char v36; // al
  __int64 v37; // rcx
  char *v38; // rdx
  unsigned int v39; // r14d
  unsigned int v40; // r15d
  __int64 v41; // rax
  __int64 v42; // rsi
  _DWORD *DevExtFromIndex; // r10
  size_t v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v50; // [rsp+28h] [rbp-C1h]
  unsigned int v51; // [rsp+68h] [rbp-81h]
  unsigned int v52; // [rsp+68h] [rbp-81h]
  int v53; // [rsp+68h] [rbp-81h]
  char v54[4]; // [rsp+6Ch] [rbp-7Dh] BYREF
  unsigned int v55; // [rsp+70h] [rbp-79h]
  size_t Size; // [rsp+78h] [rbp-71h]
  __int64 v57; // [rsp+80h] [rbp-69h] BYREF
  char v58[4]; // [rsp+88h] [rbp-61h] BYREF
  unsigned int v59; // [rsp+8Ch] [rbp-5Dh] BYREF
  const wchar_t **v60; // [rsp+90h] [rbp-59h] BYREF
  size_t v61; // [rsp+98h] [rbp-51h]
  __int64 v62; // [rsp+A0h] [rbp-49h]
  char v63[24]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-29h]
  __int128 v65; // [rsp+C8h] [rbp-21h]
  __int64 v66; // [rsp+D8h] [rbp-11h]
  __int64 v67; // [rsp+E8h] [rbp-1h]

  v5 = (_DWORD *)qword_1C0011978;
  v6 = 0LL;
  v7 = a2;
  if ( qword_1C0011978 )
  {
    v9 = 0LL;
    if ( *(_DWORD *)qword_1C0011978 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)&v5[10 * v9 + 6];
        if ( v10 )
        {
          v11 = 0LL;
          if ( *(_DWORD *)(v10 + 16) )
            break;
        }
LABEL_8:
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *v5 )
          goto LABEL_9;
      }
      while ( 1 )
      {
        LOBYTE(a2) = 1;
        v8 = ValidateLpiState(v10 + 80 * v11 + 24, a2);
        if ( v8 < 0 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 16) )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_9:
      v8 = 0;
    }
    if ( v8 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * *v7, 0x72637250u);
      if ( PoolWithTag )
      {
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v55 = 0;
        v16 = 0LL;
        if ( *v7 )
        {
          while ( 1 )
          {
            PoolWithTag[v16] = v14;
            v17 = *(_QWORD *)&v7[10 * v16 + 6];
            Size = v17;
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 16);
              v19 = 0;
              v14 += v18;
              v51 = 0;
              if ( v18 )
                break;
            }
LABEL_18:
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= *v7 )
              goto LABEL_19;
          }
          while ( 1 )
          {
            v8 = LpiEnumerateDependencies(
                   v7,
                   v16,
                   v19,
                   (__int64)PoolWithTag,
                   0LL,
                   &v57,
                   &v59,
                   (unsigned int *)&v60,
                   0LL,
                   0LL,
                   0LL);
            if ( v8 < 0 )
              break;
            v13 = v59 + v55;
            v19 = v51 + 1;
            v15 += v57;
            v55 += v59;
            v51 = v19;
            if ( v19 >= *(_DWORD *)(Size + 16) )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_19:
          v20 = (224 * v14 + 55) & 0xFFFFFFF8;
          v21 = v20 + 16 * v15;
          Size = v21 + 4 * v13;
          v22 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
          v23 = v22;
          if ( v22 )
          {
            memset(v22, 0, Size);
            Size = 56LL * v14;
            v24 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
            v6 = v24;
            if ( v24 )
            {
              memset(v24, 0, Size);
              v25 = v20;
              v26 = 0LL;
              v27 = (const wchar_t **)((char *)v23 + v25);
              *v23 = v14;
              v60 = v27;
              v57 = (__int64)v23 + v21;
              v52 = 0;
              if ( *v7 )
              {
                while ( 1 )
                {
                  v28 = (unsigned int)v26;
                  v29 = *(_QWORD *)&v7[10 * v26 + 6];
                  if ( v29 )
                  {
                    v30 = 0LL;
                    v55 = 0;
                    if ( *(_DWORD *)(v29 + 16) )
                      break;
                  }
LABEL_34:
                  v26 = (unsigned int)(v26 + 1);
                  v52 = v26;
                  if ( (unsigned int)v26 >= *v7 )
                  {
                    v14 = *v23;
                    goto LABEL_36;
                  }
                }
                while ( 1 )
                {
                  v31 = 5 * v30;
                  v32 = (unsigned int)(PoolWithTag[v28] + v30);
                  v31 *= 16LL;
                  v33 = (size_t)&v23[56 * v32 + 12];
                  v62 = v31;
                  Size = v33;
                  v34 = &v6[56 * v32];
                  *(_DWORD *)(v33 + 192) = 10 * *(_DWORD *)(v31 + v29 + 28);
                  v35 = *(_DWORD *)(v31 + v29 + 24);
                  *(_WORD *)(v33 + 209) = 257;
                  *(_QWORD *)(v33 + 216) = v27;
                  *(_DWORD *)(v33 + 196) = 10 * v35;
                  *(_OWORD *)(v33 + 168) = *(_OWORD *)(v31 + v29 + 88);
                  *(_QWORD *)(v33 + 184) = *(_QWORD *)(v29 + 8);
                  KeInitializeAffinityEx(v33);
                  v61 = Size + 204;
                  v8 = LpiEnumerateDependencies(
                         v7,
                         v26,
                         v55,
                         (__int64)PoolWithTag,
                         (__int64)v23,
                         (_DWORD *)(Size + 204),
                         &v59,
                         (unsigned int *)(Size + 200),
                         v60,
                         v57,
                         Size);
                  if ( v8 < 0 )
                    break;
                  if ( (unsigned int)KeIsEqualAffinityEx(Size, &unk_1C0011708) )
                  {
                    *(_BYTE *)(Size + 208) = 1;
                    v36 = 1;
                  }
                  else
                  {
                    v36 = *(_BYTE *)(Size + 208);
                  }
                  v37 = v62;
                  v34[48] = v36;
                  v38 = (char *)(v29 + v37 + 48);
                  *((_QWORD *)v34 + 4) = *(_QWORD *)(v37 + v29 + 52);
                  if ( *v38 != 126 )
                  {
                    v8 = DecodeAcpiIdleState(
                           a1,
                           v38,
                           0xFFFFFFFF,
                           *(unsigned int *)(v37 + v29 + 36),
                           0LL,
                           0LL,
                           0LL,
                           (__int64)v63);
                    if ( v8 < 0 )
                      break;
                    *(_QWORD *)v34 = v64;
                    *(_OWORD *)(v34 + 8) = v65;
                    *((_QWORD *)v34 + 3) = v66;
                    *((_QWORD *)v34 + 5) = v67;
                  }
                  LODWORD(v26) = v52;
                  v28 = v52;
                  v27 = &v60[2 * *(unsigned int *)v61];
                  v60 = v27;
                  v57 += 4LL * v59;
                  v30 = v55 + 1;
                  v55 = v30;
                  if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 16) )
                    goto LABEL_34;
                }
              }
              else
              {
LABEL_36:
                v39 = 0;
                if ( v14 )
                {
                  do
                  {
                    v40 = 0;
                    v41 = 224LL * v39;
                    v57 = v41;
                    if ( *(unsigned int *)((char *)v23 + v41 + 252) )
                    {
                      do
                      {
                        v42 = *(_QWORD *)((char *)v23 + v41 + 264) + 16LL * v40;
                        if ( *(_DWORD *)v42 != -1 )
                        {
                          DevExtFromIndex = (_DWORD *)GetDevExtFromIndex(*(_DWORD *)v42);
                          v60 = (const wchar_t **)DevExtFromIndex;
                          v44 = *((_QWORD *)DevExtFromIndex + 64);
                          v45 = 0LL;
                          Size = v44;
                          v53 = 0;
                          if ( *(_DWORD *)(v42 + 4) )
                          {
                            while ( 1 )
                            {
                              v61 = 80LL * *(unsigned __int8 *)(*(_QWORD *)(v42 + 8) + 4 * v45);
                              v8 = DecodeAcpiIdleState(
                                     (__int64)DevExtFromIndex,
                                     (char *)(v61 + v44 + 48),
                                     0xFFFFFFFF,
                                     *(unsigned int *)(v61 + v44 + 36),
                                     0LL,
                                     v54,
                                     v58,
                                     0LL);
                              if ( v8 < 0 )
                                break;
                              if ( v54[0] )
                              {
                                WPP_RECORDER_SF_SSS(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  v46,
                                  v47,
                                  v48,
                                  v50,
                                  *(const wchar_t **)((char *)v23 + v57 + 224),
                                  v60[8],
                                  *(_QWORD *)(v61 + Size + 96));
                                v8 = -1073741823;
                                goto LABEL_49;
                              }
                              DevExtFromIndex = v60;
                              v45 = (unsigned int)(v53 + 1);
                              v44 = Size;
                              v53 = v45;
                              if ( (unsigned int)v45 >= *(_DWORD *)(v42 + 4) )
                                goto LABEL_43;
                            }
                          }
                          else
                          {
LABEL_43:
                            v8 = 0;
                          }
                          if ( v8 < 0 )
                            goto LABEL_51;
                          v41 = v57;
                        }
                        ++v40;
                      }
                      while ( v40 < *(unsigned int *)((char *)v23 + v41 + 252) );
                    }
                    ++v39;
                  }
                  while ( v39 < *v23 );
                }
                v8 = 0;
LABEL_49:
                if ( v8 >= 0 )
                {
                  *a3 = v23;
                  v23 = 0LL;
                  *a4 = PoolWithTag;
                  PoolWithTag = 0LL;
                  *a5 = v6;
                  v6 = 0LL;
                  v8 = 0;
                }
              }
            }
            else
            {
              v8 = -1073741670;
            }
LABEL_51:
            if ( v23 )
              ExFreePoolWithTag(v23, 0x72637250u);
          }
          else
          {
            v8 = -1073741670;
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
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
