/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x1C0026040
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000DA00 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C0025FDC (ACPIGetConvertToCompatibleID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000E0C0 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C000E298 (ACPIAnsiStringToWideHelper.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0026A44 (ACPIGetConvertToPnpIDWide.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004E978 (ACPIGetConvertToStringWideWithPrepend.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        char **a5,
        unsigned int *a6)
{
  int v9; // r12d
  int v10; // ebx
  __int64 v11; // rax
  unsigned int v13; // eax
  __int64 v14; // rdi
  PVOID *PoolWithTag; // rax
  PVOID *v16; // r14
  int *v17; // rax
  int *v18; // r15
  int v19; // eax
  unsigned int v20; // ebp
  char *v21; // rax
  char *v22; // r13
  unsigned int *v23; // rsi
  const void **v24; // r12
  char *v25; // r15
  unsigned __int64 v26; // rax
  bool v27; // zf
  PVOID *v28; // rsi
  const char *v29; // rdi
  __int64 v30; // rbx
  unsigned int v31; // ebx
  unsigned int v32; // ebp
  char *v33; // rax
  char *v34; // rsi
  __int64 v35; // r12
  unsigned int *v36; // r13
  int v37; // eax
  int v38; // eax
  unsigned int *v39; // [rsp+30h] [rbp-58h]
  size_t Size; // [rsp+38h] [rbp-50h]
  int *Sizea; // [rsp+38h] [rbp-50h]
  int *v42; // [rsp+40h] [rbp-48h]
  int v43; // [rsp+90h] [rbp+8h]
  unsigned int v44; // [rsp+98h] [rbp+10h]

  v43 = a1;
  v39 = 0LL;
  v44 = 0;
  v9 = a1;
  v10 = a2;
  if ( (a4 & 0x4000000) != 0 || (v11 = *(_QWORD *)(a1 + 8), (v11 & 0x1000000000LL) == 0) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    v13 = *(unsigned __int16 *)(a3 + 2);
    if ( *(_WORD *)(a3 + 2) )
    {
      if ( v13 <= 2 )
      {
        v14 = 1LL;
        goto LABEL_8;
      }
      if ( v13 == 4 )
      {
        v39 = *(unsigned int **)(a3 + 32);
        v14 = *v39;
        if ( *(unsigned int *)(a3 + 24) >= (unsigned __int64)(40 * v14 + 8) )
        {
LABEL_8:
          PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v14, 0x4D706341u);
          v16 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, 8LL * (unsigned int)v14);
            v17 = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)v14, 0x4D706341u);
            v42 = v17;
            v18 = v17;
            if ( v17 )
            {
              memset(v17, 0, 4LL * (unsigned int)v14);
              if ( *(_WORD *)(a3 + 2) == 1 )
              {
                v19 = ACPIGetConvertToPnpIDWide(v9, a2, a3, a4, (__int64)v16, (__int64)v18);
              }
              else
              {
                if ( *(_WORD *)(a3 + 2) != 2 )
                {
                  if ( *(_WORD *)(a3 + 2) == 4 )
                  {
                    v35 = 0LL;
                    if ( (_DWORD)v14 )
                    {
                      v36 = v39 + 2;
                      Sizea = v18;
                      while ( 1 )
                      {
                        if ( *((_WORD *)v36 + 1) == 1 )
                        {
                          v37 = ACPIGetConvertToPnpIDWide(
                                  v43,
                                  a2,
                                  (_DWORD)v36,
                                  a4,
                                  (__int64)&v16[v35],
                                  (__int64)&v18[v35]);
                        }
                        else
                        {
                          if ( *((_WORD *)v36 + 1) != 2 )
                            KeBugCheckEx(0xA3u, 1uLL, 0x6039DuLL, 0LL, 0LL);
                          v37 = ACPIGetConvertToStringWideWithPrepend(
                                  (int)v18 + 4 * (int)v35,
                                  a2,
                                  (_DWORD)v36,
                                  a4,
                                  (__int64)&v16[v35],
                                  (__int64)&v18[v35]);
                        }
                        v10 = v37;
                        if ( v37 < 0 )
                          break;
                        v38 = *Sizea;
                        if ( *Sizea == 1 )
                        {
                          v38 = 0;
                          *Sizea = 0;
                        }
                        v44 += v38;
                        v35 = (unsigned int)(v35 + 1);
                        ++Sizea;
                        v36 += 10;
                        if ( (unsigned int)v35 >= (unsigned int)v14 )
                          goto LABEL_56;
                      }
                    }
                    else
                    {
LABEL_56:
                      if ( v10 >= 0 )
                        goto LABEL_14;
                    }
                    v14 = (unsigned int)v35;
                  }
LABEL_13:
                  if ( v10 < 0 )
                  {
LABEL_24:
                    if ( (_DWORD)v14 )
                    {
                      v28 = v16;
                      do
                      {
                        if ( *v28 )
                          ExFreePoolWithTag(*v28, 0);
                        ++v28;
                        --v14;
                      }
                      while ( v14 );
                    }
                    ExFreePoolWithTag(v18, 0);
                    ExFreePoolWithTag(v16, 0);
                    return (unsigned int)v10;
                  }
LABEL_14:
                  if ( v44 <= 2 )
                  {
                    v10 = -1072431089;
                  }
                  else
                  {
                    v20 = v44 + 2;
                    v21 = (char *)ExAllocatePoolWithTag(
                                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                                    v44 + 2,
                                    0x53706341u);
                    v22 = v21;
                    if ( v21 )
                    {
                      memset(v21, 0, v20);
                      if ( (_DWORD)v14 )
                      {
                        v23 = (unsigned int *)v18;
                        Size = (unsigned int)v14;
                        v24 = (const void **)v16;
                        v25 = v22;
                        do
                        {
                          if ( *v24 )
                            memmove(v25, *v24, *v23);
                          ++v24;
                          v26 = (unsigned __int64)*v23++ >> 1;
                          v27 = Size-- == 1;
                          v25 += 2 * v26;
                        }
                        while ( !v27 );
                        v18 = v42;
                      }
                      *a5 = v22;
                      if ( a6 )
                        *a6 = v20;
                    }
                    else
                    {
                      v10 = -1073741670;
                    }
                  }
                  goto LABEL_24;
                }
                v19 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v16, (__int64)v18);
              }
              v10 = v19;
              v44 = *v18;
              goto LABEL_13;
            }
            ExFreePoolWithTag(v16, 0);
          }
          return 3221225626LL;
        }
      }
    }
    return 3222536207LL;
  }
  if ( v11 >= 0 )
    v29 = (const char *)&AcpiProcessorCompatId;
  else
    v29 = *(const char **)(a1 + 184);
  v30 = -1LL;
  do
    ++v30;
  while ( v29[v30] );
  v31 = v30 + 2;
  v32 = 2 * v31;
  v33 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  2 * v31,
                  0x53706341u);
  v34 = v33;
  if ( !v33 )
    return 3221225626LL;
  memset(v33, 0, v32);
  RtlStringCchPrintfA(v34, v31, "%s", v29);
  ACPIAnsiStringToWideHelper(v34, v32);
  *a5 = v34;
  if ( a6 )
    *a6 = 2 * v31;
  return 0LL;
}
