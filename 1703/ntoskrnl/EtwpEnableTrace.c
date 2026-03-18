/*
 * XREFs of EtwpEnableTrace @ 0x1405524C8
 * Callers:
 *     EtwEnableTrace @ 0x1404685E0 (EtwEnableTrace.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405AE838 (EtwpEnableAutoLoggerProviders.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
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
        size_t a15)
{
  const void **v15; // r15
  int v16; // edi
  int v19; // ebx
  unsigned int v20; // r9d
  __int64 v21; // r8
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  unsigned int i; // edx
  unsigned int v25; // edi
  char *PoolWithTag; // rax
  char *v27; // rsi
  __int128 v28; // xmm0
  unsigned int v29; // ebx
  unsigned __int16 v31; // ax
  char *v32; // rdi
  unsigned int v33; // r14d
  char *v34; // rbp
  unsigned int j; // r12d
  __int64 v36; // rbx
  size_t v37; // r8
  __int64 v38; // rax
  const void **v39; // r12
  unsigned int k; // r15d
  __int64 v41; // rbx
  int v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx

  v15 = a10;
  v16 = 120;
  v19 = 0;
  if ( a10 )
  {
    v20 = 0;
    v21 = (__int64)a10;
    do
    {
      v22 = *(_WORD *)v21;
      if ( *(_WORD *)v21 && *(_QWORD *)(v21 + 8) )
      {
        if ( v22 > 0x400u )
          return (unsigned int)-1073741811;
        ++v19;
        v16 += v22 + 2;
      }
      ++v20;
      v21 += 16LL;
    }
    while ( v20 < 3 );
  }
  v23 = (__int64)a11;
  if ( a11 )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v23 )
      {
        v31 = *(_WORD *)(*(_QWORD *)v23 + 2LL);
        if ( v31 )
        {
          if ( v31 > 0x40u )
            return (unsigned int)-1073741811;
          ++v19;
          v16 += 2 * v31 + 4;
        }
      }
      v23 += 8LL;
    }
  }
  if ( (_DWORD)Size )
  {
    ++v19;
    v16 += Size;
  }
  if ( (_DWORD)a15 )
  {
    ++v19;
    v16 += a15;
  }
  v25 = 16 * v19 + v16;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v25, 0x74777445u);
  v27 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v25);
    *(_DWORD *)v27 = 3;
    *((_DWORD *)v27 + 1) = v25;
    if ( a3 )
      *(_OWORD *)(v27 + 56) = *a3;
    v28 = *a2;
    *((_DWORD *)v27 + 18) = a5;
    v27[76] = a6;
    *((_QWORD *)v27 + 12) = a8;
    *((_QWORD *)v27 + 11) = a7;
    *((_DWORD *)v27 + 20) = a9;
    *((_WORD *)v27 + 39) = a4;
    *((_DWORD *)v27 + 29) = v19;
    *(_OWORD *)(v27 + 40) = v28;
    if ( v19 )
    {
      v32 = v27 + 120;
      v33 = 0;
      v34 = &v27[16 * v19 + 120];
      for ( j = 0; j < 3; ++j )
      {
        if ( *(_WORD *)v15 && v15[1] )
        {
          if ( j )
          {
            if ( j == 1 )
              *(_DWORD *)&v32[16 * v33 + 12] = -2147483632;
            else
              *(_DWORD *)&v32[16 * v33 + 12] = -2147483616;
          }
          else
          {
            *(_DWORD *)&v32[16 * v33 + 12] = -2147483640;
          }
          v36 = 2LL * v33;
          v37 = (unsigned int)*(unsigned __int16 *)v15 + 2;
          *(_DWORD *)&v32[8 * v36 + 8] = v37;
          *(_QWORD *)&v32[8 * v36] = v34 - v27;
          memmove(v34, v15[1], v37);
          v38 = *(unsigned int *)&v32[16 * v33++ + 8];
          v34 += v38;
        }
        v15 += 2;
      }
      v39 = a11;
      for ( k = 0; k < 2; ++k )
      {
        if ( *v39 && *((_WORD *)*v39 + 1) )
        {
          if ( k )
            *(_DWORD *)&v32[16 * v33 + 12] = -2147479552;
          else
            *(_DWORD *)&v32[16 * v33 + 12] = -2147483136;
          v41 = 2LL * v33;
          v42 = *((unsigned __int16 *)*v39 + 1);
          *(_QWORD *)&v32[8 * v41] = v34 - v27;
          v43 = 2 * v42 + 4;
          *(_DWORD *)&v32[8 * v41 + 8] = v43;
          memmove(v34, *v39, v43);
          v44 = *(unsigned int *)&v32[16 * v33++ + 8];
          v34 += v44;
        }
        ++v39;
      }
      if ( (_DWORD)Size )
      {
        v45 = 2LL * v33;
        *(_DWORD *)&v32[8 * v45 + 8] = Size;
        *(_DWORD *)&v32[8 * v45 + 12] = -2147482624;
        *(_QWORD *)&v32[8 * v45] = v34 - v27;
        memmove(v34, Src, (unsigned int)Size);
        v34 += *(unsigned int *)&v32[16 * v33++ + 8];
      }
      if ( (_DWORD)a15 )
      {
        v46 = 2LL * v33;
        *(_DWORD *)&v32[8 * v46 + 12] = 0x80000000;
        *(_DWORD *)&v32[8 * v46 + 8] = a15;
        *(_QWORD *)&v32[8 * v46] = v34 - v27;
        memmove(v34, a14, (unsigned int)a15);
      }
    }
    v29 = EtwpEnableGuid(a1, v27, 0LL);
    ExFreePoolWithTag(v27, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v29;
}
