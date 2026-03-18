/*
 * XREFs of EtwpEnableTrace @ 0x1405A88D0
 * Callers:
 *     EtwpEnableAutoLoggerProviders @ 0x1405A8348 (EtwpEnableAutoLoggerProviders.c)
 *     EtwEnableTrace @ 0x1405A8C30 (EtwEnableTrace.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 */

__int64 __fastcall EtwpEnableTrace(
        __int64 a1,
        __int128 *a2,
        _OWORD *a3,
        __int16 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        const void **a10,
        const void **a11,
        void *Src,
        size_t Size,
        void *a14,
        size_t a15,
        void *a16,
        size_t a17,
        __int64 a18)
{
  const void **v18; // r13
  __int64 v19; // rsi
  int v20; // ebx
  unsigned int v23; // r9d
  __int64 v24; // r8
  unsigned __int16 v25; // ax
  const void **v26; // r12
  unsigned int v27; // edx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  char *PoolWithTag; // rax
  char *v31; // r14
  __int128 v32; // xmm0
  unsigned int v33; // ebx
  unsigned __int16 v35; // ax
  char *v36; // rdi
  char *v37; // rsi
  unsigned int v38; // ebp
  unsigned int i; // r15d
  __int64 v40; // rbx
  size_t v41; // r8
  __int64 v42; // rax
  unsigned int j; // r15d
  __int64 v44; // rbx
  int v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rcx

  v18 = a10;
  v19 = 0LL;
  v20 = 120;
  if ( a10 )
  {
    v23 = 0;
    v24 = (__int64)a10;
    do
    {
      v25 = *(_WORD *)v24;
      if ( *(_WORD *)v24 && *(_QWORD *)(v24 + 8) )
      {
        if ( v25 > 0x400u )
          return (unsigned int)-1073741811;
        v19 = (unsigned int)(v19 + 1);
        v20 += v25 + 2;
      }
      ++v23;
      v24 += 16LL;
    }
    while ( v23 < 3 );
  }
  v26 = a11;
  if ( a11 )
  {
    v27 = 0;
    v28 = (__int64)a11;
    do
    {
      if ( *(_QWORD *)v28 )
      {
        v35 = *(_WORD *)(*(_QWORD *)v28 + 2LL);
        if ( v35 )
        {
          if ( v35 > 0x40u )
            return (unsigned int)-1073741811;
          v19 = (unsigned int)(v19 + 1);
          v20 += 2 * v35 + 4;
        }
      }
      ++v27;
      v28 += 8LL;
    }
    while ( v27 < 2 );
  }
  if ( (_DWORD)Size )
  {
    v19 = (unsigned int)(v19 + 1);
    v20 += Size;
  }
  if ( (_DWORD)a15 )
  {
    v19 = (unsigned int)(v19 + 1);
    v20 += a15;
  }
  if ( (_DWORD)a17 )
  {
    v19 = (unsigned int)(v19 + 1);
    v20 += a17;
  }
  if ( a18 )
  {
    v19 = (unsigned int)(v19 + 1);
    v20 += 24;
  }
  v29 = 16 * v19 + v20;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v29, 0x74777445u);
  v31 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v29);
    *(_DWORD *)v31 = 3;
    *((_DWORD *)v31 + 1) = v29;
    if ( a3 )
      *(_OWORD *)(v31 + 56) = *a3;
    v32 = *a2;
    *((_DWORD *)v31 + 18) = a5;
    v31[76] = a6;
    *((_QWORD *)v31 + 12) = a8;
    *((_QWORD *)v31 + 11) = a7;
    *((_DWORD *)v31 + 20) = a9;
    *((_WORD *)v31 + 39) = a4;
    *((_DWORD *)v31 + 29) = v19;
    *(_OWORD *)(v31 + 40) = v32;
    if ( (_DWORD)v19 )
    {
      v36 = v31 + 120;
      v37 = &v31[16 * v19 + 120];
      v38 = 0;
      for ( i = 0; i < 3; ++i )
      {
        if ( *(_WORD *)v18 && v18[1] )
        {
          if ( i )
          {
            if ( i == 1 )
              *(_DWORD *)&v36[16 * v38 + 12] = -2147483632;
            else
              *(_DWORD *)&v36[16 * v38 + 12] = -2147483616;
          }
          else
          {
            *(_DWORD *)&v36[16 * v38 + 12] = -2147483640;
          }
          v40 = 2LL * v38;
          v41 = (unsigned int)*(unsigned __int16 *)v18 + 2;
          *(_DWORD *)&v36[8 * v40 + 8] = v41;
          *(_QWORD *)&v36[8 * v40] = v37 - v31;
          memmove(v37, v18[1], v41);
          v42 = *(unsigned int *)&v36[16 * v38++ + 8];
          v37 += v42;
        }
        v18 += 2;
      }
      for ( j = 0; j < 2; ++j )
      {
        if ( *v26 && *((_WORD *)*v26 + 1) )
        {
          if ( j )
            *(_DWORD *)&v36[16 * v38 + 12] = -2147479552;
          else
            *(_DWORD *)&v36[16 * v38 + 12] = -2147483136;
          v44 = 2LL * v38;
          v45 = *((unsigned __int16 *)*v26 + 1);
          *(_QWORD *)&v36[8 * v44] = v37 - v31;
          v46 = 2 * v45 + 4;
          *(_DWORD *)&v36[8 * v44 + 8] = v46;
          memmove(v37, *v26, v46);
          v47 = *(unsigned int *)&v36[16 * v38++ + 8];
          v37 += v47;
        }
        ++v26;
      }
      if ( (_DWORD)Size )
      {
        v48 = 2LL * v38;
        *(_DWORD *)&v36[8 * v48 + 8] = Size;
        *(_DWORD *)&v36[8 * v48 + 12] = -2147482624;
        *(_QWORD *)&v36[8 * v48] = v37 - v31;
        memmove(v37, Src, (unsigned int)Size);
        v37 += *(unsigned int *)&v36[16 * v38++ + 8];
      }
      if ( (_DWORD)a15 )
      {
        v49 = 2LL * v38;
        *(_DWORD *)&v36[8 * v49 + 8] = a15;
        *(_DWORD *)&v36[8 * v49 + 12] = -2147475456;
        *(_QWORD *)&v36[8 * v49] = v37 - v31;
        memmove(v37, a14, (unsigned int)a15);
        v37 += *(unsigned int *)&v36[16 * v38++ + 8];
      }
      if ( (_DWORD)a17 )
      {
        v50 = 2LL * v38;
        *(_DWORD *)&v36[8 * v50 + 8] = a17;
        *(_DWORD *)&v36[8 * v50 + 12] = 0x80000000;
        *(_QWORD *)&v36[8 * v50] = v37 - v31;
        memmove(v37, a16, (unsigned int)a17);
        v37 += *(unsigned int *)&v36[16 * v38++ + 8];
      }
      if ( a18 )
      {
        v51 = 2LL * v38;
        *(_DWORD *)&v36[8 * v51 + 12] = -2147467264;
        *(_DWORD *)&v36[8 * v51 + 8] = 24;
        *(_QWORD *)&v36[8 * v51] = v37 - v31;
        *(_OWORD *)v37 = *(_OWORD *)a18;
        *((_QWORD *)v37 + 2) = *(_QWORD *)(a18 + 16);
      }
    }
    v33 = EtwpEnableGuid(a1, (__int64)v31, 0);
    ExFreePoolWithTag(v31, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v33;
}
