/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C002C0F4
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00235A0 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C0007190 (DecodeAcpiIdleState.c)
 *     GetDevExtFromIndex @ 0x1C0008E0C (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_SSS @ 0x1C0009C44 (WPP_RECORDER_SF_SSS.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     ValidateLpiState @ 0x1C00292B8 (ValidateLpiState.c)
 *     LpiEnumerateDependencies @ 0x1C002BCF8 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _DWORD *v5; // r14
  char *v6; // r13
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r12
  _DWORD *PoolWithTag; // r15
  int v13; // edx
  __int64 v14; // r12
  int v15; // r14d
  __int64 v16; // rdi
  size_t v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  unsigned int *v23; // rdi
  char *v24; // rax
  _DWORD *v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // r8
  char *v34; // rdx
  char *v35; // rcx
  unsigned int i; // r14d
  unsigned int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 DevExtFromIndex; // r10
  size_t v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v47; // [rsp+28h] [rbp-C1h]
  char v48[4]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v49; // [rsp+6Ch] [rbp-7Dh]
  size_t Size; // [rsp+70h] [rbp-79h]
  char *v51; // [rsp+78h] [rbp-71h]
  char v52[4]; // [rsp+80h] [rbp-69h] BYREF
  unsigned int v53; // [rsp+84h] [rbp-65h] BYREF
  __int64 v54; // [rsp+88h] [rbp-61h] BYREF
  __int64 v55; // [rsp+90h] [rbp-59h] BYREF
  __int64 v56; // [rsp+98h] [rbp-51h]
  __int64 v57; // [rsp+A0h] [rbp-49h]
  char v58[24]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-29h]
  __int128 v60; // [rsp+C8h] [rbp-21h]
  __int64 v61; // [rsp+D8h] [rbp-11h]
  __int64 v62; // [rsp+E8h] [rbp-1h]

  v5 = (_DWORD *)qword_1C0011948;
  v6 = 0LL;
  if ( qword_1C0011948 )
  {
    v9 = 0LL;
    if ( *(_DWORD *)qword_1C0011948 )
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
        v8 = ValidateLpiState(v10 + 80 * v11 + 24, 1);
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
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * *a2, 0x72637250u);
      if ( PoolWithTag )
      {
        v13 = 0;
        v14 = 0LL;
        v15 = 0;
        v49 = 0;
        v16 = 0LL;
        if ( *a2 )
        {
          while ( 1 )
          {
            PoolWithTag[v16] = v14;
            v17 = *(_QWORD *)&a2[10 * v16 + 6];
            Size = v17;
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 16);
              v19 = 0;
              v14 = (unsigned int)(v18 + v14);
              LODWORD(v51) = 0;
              if ( v18 )
                break;
            }
LABEL_18:
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= *a2 )
              goto LABEL_19;
          }
          while ( 1 )
          {
            v8 = LpiEnumerateDependencies(
                   a2,
                   v16,
                   v19,
                   (__int64)PoolWithTag,
                   0LL,
                   &v54,
                   &v53,
                   (unsigned int *)&v55,
                   0LL,
                   0LL,
                   0LL);
            if ( v8 < 0 )
              break;
            v13 = v53 + v49;
            v19 = (_DWORD)v51 + 1;
            v15 += v54;
            v49 += v53;
            LODWORD(v51) = v19;
            if ( v19 >= *(_DWORD *)(Size + 16) )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_19:
          v20 = (224 * (_DWORD)v14 + 55) & 0xFFFFFFF8;
          v21 = v20 + 16 * v15;
          Size = v21 + 4 * v13;
          v22 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
          v23 = v22;
          if ( v22 )
          {
            memset(v22, 0, Size);
            Size = 48 * v14;
            v24 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 48 * v14, 0x72637250u);
            v6 = v24;
            if ( v24 )
            {
              memset(v24, 0, Size);
              *v23 = v14;
              v25 = (unsigned int *)((char *)v23 + v20);
              v26 = 0LL;
              Size = (size_t)v25;
              v55 = (__int64)v23 + v21;
              if ( *a2 )
              {
                while ( 1 )
                {
                  v27 = (unsigned int)v26;
                  v28 = *(_QWORD *)&a2[10 * v26 + 6];
                  if ( v28 )
                  {
                    v29 = 0LL;
                    v49 = 0;
                    if ( *(_DWORD *)(v28 + 16) )
                      break;
                  }
LABEL_33:
                  v26 = (unsigned int)(v26 + 1);
                  if ( (unsigned int)v26 >= *a2 )
                    goto LABEL_34;
                }
                while ( 1 )
                {
                  v30 = (unsigned int)(v29 + PoolWithTag[v27]);
                  v57 = 80 * v29;
                  v31 = (__int64)&v23[56 * v30 + 12];
                  v51 = &v6[48 * v30];
                  LODWORD(v30) = *(_DWORD *)(80 * v29 + v28 + 28);
                  v54 = v31;
                  *(_DWORD *)(v31 + 192) = 10 * v30;
                  LODWORD(v30) = *(_DWORD *)(80 * v29 + v28 + 24);
                  *(_WORD *)(v31 + 209) = 257;
                  *(_QWORD *)(v31 + 216) = v25;
                  *(_DWORD *)(v31 + 196) = 10 * v30;
                  *(_OWORD *)(v31 + 168) = *(_OWORD *)(80 * v29 + v28 + 88);
                  *(_QWORD *)(v31 + 184) = *(_QWORD *)(v28 + 8);
                  KeInitializeAffinityEx(v31);
                  v56 = v54 + 204;
                  v8 = LpiEnumerateDependencies(
                         a2,
                         v26,
                         v49,
                         (__int64)PoolWithTag,
                         (__int64)v23,
                         (_DWORD *)(v54 + 204),
                         &v53,
                         (unsigned int *)(v54 + 200),
                         v25,
                         v55,
                         v54);
                  if ( v8 < 0 )
                    break;
                  v32 = v54;
                  if ( (unsigned int)KeIsEqualAffinityEx(v54, &unk_1C00116D8) )
                    *(_BYTE *)(v32 + 208) = 1;
                  v33 = v57;
                  v34 = (char *)(v28 + v57 + 48);
                  *((_QWORD *)v51 + 4) = *(_QWORD *)(v57 + v28 + 52);
                  if ( *v34 != 126 )
                  {
                    v8 = DecodeAcpiIdleState(
                           a1,
                           v34,
                           0xFFFFFFFF,
                           *(unsigned int *)(v33 + v28 + 36),
                           0LL,
                           0LL,
                           0LL,
                           (__int64)v58);
                    if ( v8 < 0 )
                      break;
                    v35 = v51;
                    *(_QWORD *)v51 = v59;
                    *(_OWORD *)(v35 + 8) = v60;
                    *((_QWORD *)v35 + 3) = v61;
                    *((_QWORD *)v35 + 5) = v62;
                  }
                  v27 = (unsigned int)v26;
                  v25 = (_DWORD *)(16LL * *(unsigned int *)v56 + Size);
                  Size = (size_t)v25;
                  v55 += 4LL * v53;
                  v29 = v49 + 1;
                  v49 = v29;
                  if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 16) )
                    goto LABEL_33;
                }
              }
              else
              {
LABEL_34:
                for ( i = 0; i < *v23; ++i )
                {
                  v37 = 0;
                  v38 = 224LL * i;
                  v54 = v38;
                  if ( *(unsigned int *)((char *)v23 + v38 + 252) )
                  {
                    do
                    {
                      v39 = *(_QWORD *)((char *)v23 + v38 + 264) + 16LL * v37;
                      if ( *(_DWORD *)v39 != -1 )
                      {
                        DevExtFromIndex = GetDevExtFromIndex(*(_DWORD *)v39);
                        v55 = DevExtFromIndex;
                        v41 = *(_QWORD *)(DevExtFromIndex + 512);
                        v42 = 0LL;
                        Size = v41;
                        LODWORD(v51) = 0;
                        if ( *(_DWORD *)(v39 + 4) )
                        {
                          while ( 1 )
                          {
                            v56 = 80LL * *(unsigned __int8 *)(*(_QWORD *)(v39 + 8) + 4 * v42);
                            v8 = DecodeAcpiIdleState(
                                   DevExtFromIndex,
                                   (char *)(v56 + v41 + 48),
                                   0xFFFFFFFF,
                                   *(unsigned int *)(v56 + v41 + 36),
                                   0LL,
                                   v48,
                                   v52,
                                   0LL);
                            if ( v8 < 0 )
                              break;
                            if ( v48[0] )
                            {
                              WPP_RECORDER_SF_SSS(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                v43,
                                v44,
                                v45,
                                v47,
                                *(const wchar_t **)((char *)v23 + v54 + 224),
                                *(const wchar_t **)(v55 + 64),
                                *(const wchar_t **)(v56 + Size + 96));
                              v8 = -1073741823;
                              goto LABEL_47;
                            }
                            DevExtFromIndex = v55;
                            v42 = (unsigned int)((_DWORD)v51 + 1);
                            v41 = Size;
                            LODWORD(v51) = v42;
                            if ( (unsigned int)v42 >= *(_DWORD *)(v39 + 4) )
                              goto LABEL_41;
                          }
                        }
                        else
                        {
LABEL_41:
                          v8 = 0;
                        }
                        if ( v8 < 0 )
                          goto LABEL_49;
                        v38 = v54;
                      }
                      ++v37;
                    }
                    while ( v37 < *(unsigned int *)((char *)v23 + v38 + 252) );
                  }
                }
                v8 = 0;
LABEL_47:
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
LABEL_49:
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
