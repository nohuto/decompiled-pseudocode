/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x1C0025548
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0001F70 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C00254E8 (ACPIGetConvertToCompatibleID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00022AC (ACPIAnsiStringToWideHelper.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00260AC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C00264B8 (ACPIGetConvertToStringWideWithPrepend.c)
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
  const char *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // ebx
  char *v15; // rax
  char *v16; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdi
  PVOID PoolWithTag; // rax
  void *v21; // r14
  int *v22; // rax
  int *v23; // r15
  __int64 v24; // r12
  unsigned int *v25; // r13
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ebp
  char *v30; // rax
  char *v31; // r13
  unsigned int *v32; // rsi
  const void **v33; // r12
  char *v34; // r15
  unsigned __int64 v35; // rax
  bool v36; // zf
  PVOID *v37; // rsi
  unsigned int *v38; // [rsp+30h] [rbp-58h]
  int *Size; // [rsp+38h] [rbp-50h]
  size_t Sizea; // [rsp+38h] [rbp-50h]
  int *v41; // [rsp+40h] [rbp-48h]
  int v42; // [rsp+90h] [rbp+8h]
  unsigned int v43; // [rsp+98h] [rbp+10h]

  v42 = a1;
  v38 = 0LL;
  v43 = 0;
  v9 = a1;
  v10 = a2;
  if ( (a4 & 0x4000000) != 0 || (v11 = *(_QWORD *)(a1 + 8), (v11 & 0x1000000000LL) == 0) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    v18 = *(unsigned __int16 *)(a3 + 2);
    if ( !*(_WORD *)(a3 + 2) )
      return 3222536207LL;
    if ( v18 <= 2 )
    {
      v19 = 1LL;
    }
    else
    {
      if ( v18 != 4 )
        return 3222536207LL;
      v38 = *(unsigned int **)(a3 + 32);
      v19 = *v38;
      if ( *(unsigned int *)(a3 + 24) < (unsigned __int64)(40 * v19 + 8) )
        return 3222536207LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v19, 0x4D706341u);
    v21 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 8LL * (unsigned int)v19);
    v22 = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)v19, 0x4D706341u);
    v41 = v22;
    v23 = v22;
    if ( !v22 )
    {
      ExFreePoolWithTag(v21, 0);
      return 3221225626LL;
    }
    memset(v22, 0, 4LL * (unsigned int)v19);
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v28 = ACPIGetConvertToPnpIDWide(v9, a2, a3, a4, (__int64)v21, (__int64)v23);
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
      {
        if ( *(_WORD *)(a3 + 2) == 4 )
        {
          v24 = 0LL;
          if ( (_DWORD)v19 )
          {
            v25 = v38 + 2;
            Size = v23;
            while ( 1 )
            {
              if ( *((_WORD *)v25 + 1) == 1 )
              {
                v26 = ACPIGetConvertToPnpIDWide(v42, a2, (_DWORD)v25, a4, (__int64)v21 + 8 * v24, (__int64)&v23[v24]);
              }
              else
              {
                if ( *((_WORD *)v25 + 1) != 2 )
                  KeBugCheckEx(0xA3u, 1uLL, 0x6039DuLL, 0LL, 0LL);
                v26 = ACPIGetConvertToStringWideWithPrepend(
                        (int)v23 + 4 * (int)v24,
                        a2,
                        (_DWORD)v25,
                        a4,
                        (__int64)v21 + 8 * v24,
                        (__int64)&v23[v24]);
              }
              v10 = v26;
              if ( v26 < 0 )
                break;
              v27 = *Size;
              if ( *Size == 1 )
              {
                v27 = 0;
                *Size = 0;
              }
              v43 += v27;
              v24 = (unsigned int)(v24 + 1);
              ++Size;
              v25 += 10;
              if ( (unsigned int)v24 >= (unsigned int)v19 )
                goto LABEL_37;
            }
          }
          else
          {
LABEL_37:
            if ( v10 >= 0 )
              goto LABEL_44;
          }
          v19 = (unsigned int)v24;
        }
LABEL_43:
        if ( v10 < 0 )
        {
LABEL_56:
          if ( (_DWORD)v19 )
          {
            v37 = (PVOID *)v21;
            do
            {
              if ( *v37 )
                ExFreePoolWithTag(*v37, 0);
              ++v37;
              --v19;
            }
            while ( v19 );
          }
          ExFreePoolWithTag(v23, 0);
          ExFreePoolWithTag(v21, 0);
          return (unsigned int)v10;
        }
LABEL_44:
        if ( v43 > 2 )
        {
          v29 = v43 + 2;
          v30 = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                          v43 + 2,
                          0x53706341u);
          v31 = v30;
          if ( v30 )
          {
            memset(v30, 0, v29);
            if ( (_DWORD)v19 )
            {
              v32 = (unsigned int *)v23;
              Sizea = (unsigned int)v19;
              v33 = (const void **)v21;
              v34 = v31;
              do
              {
                if ( *v33 )
                  memmove(v34, *v33, *v32);
                ++v33;
                v35 = (unsigned __int64)*v32++ >> 1;
                v36 = Sizea-- == 1;
                v34 += 2 * v35;
              }
              while ( !v36 );
              v23 = v41;
            }
            *a5 = v31;
            if ( a6 )
              *a6 = v29;
          }
          else
          {
            v10 = -1073741670;
          }
        }
        else
        {
          v10 = -1072431089;
        }
        goto LABEL_56;
      }
      v28 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v21, (__int64)v23);
    }
    v10 = v28;
    v43 = *v23;
    goto LABEL_43;
  }
  if ( v11 >= 0 )
    v12 = (const char *)&AcpiProcessorCompatId;
  else
    v12 = *(const char **)(a1 + 184);
  v13 = -1LL;
  do
    ++v13;
  while ( v12[v13] );
  v14 = v13 + 2;
  v15 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  2 * v14,
                  0x53706341u);
  v16 = v15;
  if ( !v15 )
    return 3221225626LL;
  memset(v15, 0, 2 * v14);
  RtlStringCchPrintfA(v16, v14, "%s", v12);
  ACPIAnsiStringToWideHelper(v16, 2 * v14);
  *a5 = v16;
  if ( a6 )
    *a6 = 2 * v14;
  return 0LL;
}
