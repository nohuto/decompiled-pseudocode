/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x140751C2C
 * Callers:
 *     EtwpUpdateDisallowList @ 0x140743F50 (EtwpUpdateDisallowList.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpDisallowedGuidAddition @ 0x140743A34 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140743BBC (EtwpDisallowedGuidRemoval.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  char *PoolWithTag; // rax
  char *v13; // r14
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  char *v18; // rdi
  char *v19; // r15
  char *v20; // rsi
  char *v21; // r12
  int v22; // eax
  PVOID *v23; // rax
  PVOID *v24; // rcx
  PVOID *v25; // rax
  PVOID *v26; // rcx
  PVOID *v27; // rax
  PVOID *v28; // rcx
  PVOID *v29; // rax
  PVOID *v30; // rcx
  volatile signed __int64 *v31; // rdi
  void *v32; // r15
  PVOID *v33; // rax
  _QWORD *v34; // rsi
  _DWORD **v35; // rdi
  _DWORD *v36; // rcx
  void **v37; // rax
  PVOID *v38; // rax
  _QWORD *v39; // rdi
  _QWORD *v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rdx
  PVOID *v43; // rax
  _QWORD *v44; // rdi
  _QWORD *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rdx
  PVOID *v48; // rax
  _QWORD *v49; // rsi
  _DWORD **v50; // rdi
  _DWORD *v51; // rcx
  void **v52; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v55; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v56; // [rsp+48h] [rbp-8h]
  struct _KMUTANT *Mutex; // [rsp+A8h] [rbp+58h]

  v7 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v56 = &v55;
  v55 = &v55;
  if ( a2 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * a2, 0x64777445u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_52;
    memmove(PoolWithTag, a3, 16LL * a2);
    qsort(v13, a2, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v14 = 0;
    if ( a2 != 1 )
    {
      do
      {
        v15 = 16LL * v14;
        v16 = *(_QWORD *)&v13[v15] - *(_QWORD *)&v13[v15 + 16];
        if ( !v16 )
          v16 = *(_QWORD *)&v13[v15 + 8] - *(_QWORD *)&v13[v15 + 24];
        if ( !v16 )
        {
          ExFreePoolWithTag(v13, 0);
          v7 = -1073741811;
          goto LABEL_53;
        }
        ++v14;
      }
      while ( v14 < (unsigned int)a2 - 1 );
    }
  }
  else
  {
    v13 = 0LL;
  }
  Mutex = (struct _KMUTANT *)(a1 + 648);
  KeWaitForSingleObject((PVOID)(a1 + 648), Executive, 0, 0, 0LL);
  v17 = *(_WORD *)(a1 + 2192);
  if ( v17 )
  {
    v18 = *(char **)(a1 + 2200);
    v19 = &v18[16 * v17];
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  if ( a2 )
  {
    v20 = v13;
    v21 = &v13[16 * a2];
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  while ( 1 )
  {
    if ( v18 >= v19 )
      goto LABEL_42;
    if ( v20 >= v21 )
      break;
    v22 = memcmp(v18, v20, 0x10uLL);
    if ( !v22 )
    {
      v18 += 16;
      goto LABEL_29;
    }
    if ( v22 >= 0 )
    {
      v25 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v25 )
        goto LABEL_51;
      v25[2] = v20;
      v26 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
      v25[1] = p_P;
      *v25 = &P;
      *v26 = v25;
      p_P = v25;
LABEL_29:
      v20 += 16;
    }
    else
    {
      v23 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v23 )
        goto LABEL_51;
      v23[2] = v18;
      v24 = v56;
      if ( *v56 != &v55 )
        __fastfail(3u);
      v23[1] = v56;
      *v23 = &v55;
      v18 += 16;
      *v24 = v23;
      v56 = v23;
    }
  }
  while ( 1 )
  {
    v27 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    if ( !v27 )
      break;
    v27[2] = v18;
    v28 = v56;
    if ( *v56 != &v55 )
      __fastfail(3u);
    v27[1] = v56;
    *v27 = &v55;
    v18 += 16;
    *v28 = v27;
    v56 = v27;
    if ( v18 >= v19 )
    {
LABEL_42:
      while ( v20 < v21 )
      {
        v29 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
        if ( !v29 )
          goto LABEL_51;
        v29[2] = v20;
        v30 = p_P;
        if ( *p_P != &P )
          __fastfail(3u);
        v29[1] = p_P;
        *v29 = &P;
        v20 += 16;
        *v30 = v29;
        p_P = v29;
      }
      v31 = (volatile signed __int64 *)(a1 + 704);
      ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
      v32 = *(void **)(a1 + 2200);
      *(_QWORD *)(a1 + 2200) = v13;
      *(_WORD *)(a1 + 2192) = a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v31);
      KeAbPostRelease((ULONG_PTR)v31);
      KeReleaseMutex((PRKMUTEX)(a1 + 648), 0);
      v33 = (PVOID *)P;
      v34 = P;
      while ( v33 != &P )
      {
        v35 = (_DWORD **)v34;
        v34 = (_QWORD *)*v34;
        EtwpDisallowedGuidAddition(v35[2], a7);
        v36 = *v35;
        if ( *((_DWORD ***)*v35 + 1) != v35 || (v37 = (void **)v35[1], *v37 != v35) )
          __fastfail(3u);
        *v37 = v36;
        *((_QWORD *)v36 + 1) = v37;
        ExFreePoolWithTag(v35, 0);
        v33 = (PVOID *)P;
      }
      v48 = (PVOID *)v55;
      v49 = v55;
      while ( v48 != &v55 )
      {
        v50 = (_DWORD **)v49;
        v49 = (_QWORD *)*v49;
        EtwpDisallowedGuidRemoval(v50[2], a7);
        v51 = *v50;
        if ( *((_DWORD ***)*v50 + 1) != v50 || (v52 = (void **)v50[1], *v52 != v50) )
          __fastfail(3u);
        *v52 = v51;
        *((_QWORD *)v51 + 1) = v52;
        ExFreePoolWithTag(v50, 0);
        v48 = (PVOID *)v55;
      }
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      return v7;
    }
  }
LABEL_51:
  KeReleaseMutex(Mutex, 0);
LABEL_52:
  v7 = -1073741670;
LABEL_53:
  v38 = (PVOID *)P;
  v39 = P;
  while ( v38 != &P )
  {
    v40 = v39;
    v39 = (_QWORD *)*v39;
    v41 = *v40;
    if ( *(_QWORD **)(*v40 + 8LL) != v40 || (v42 = (_QWORD *)v40[1], (_QWORD *)*v42 != v40) )
      __fastfail(3u);
    *v42 = v41;
    *(_QWORD *)(v41 + 8) = v42;
    ExFreePoolWithTag(v40, 0);
    v38 = (PVOID *)P;
  }
  v43 = (PVOID *)v55;
  v44 = v55;
  while ( v43 != &v55 )
  {
    v45 = v44;
    v44 = (_QWORD *)*v44;
    v46 = *v45;
    if ( *(_QWORD **)(*v45 + 8LL) != v45 || (v47 = (_QWORD *)v45[1], (_QWORD *)*v47 != v45) )
      __fastfail(3u);
    *v47 = v46;
    *(_QWORD *)(v46 + 8) = v47;
    ExFreePoolWithTag(v45, 0);
    v43 = (PVOID *)v55;
  }
  return v7;
}
