/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x1405C7CC4
 * Callers:
 *     EtwpUpdateDisallowList @ 0x1405C7C60 (EtwpUpdateDisallowList.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpDisallowedGuidAddition @ 0x1405C7F38 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
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
  unsigned int v11; // esi
  SIZE_T v12; // rdi
  char *PoolWithTag; // rax
  char *v14; // r14
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  char *v19; // rdi
  char *v20; // r15
  char *v21; // rsi
  char *v22; // r12
  PVOID *v23; // rax
  PVOID *v24; // rcx
  volatile signed __int64 *v25; // rdi
  void *v26; // r15
  PVOID *v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // rdi
  __int64 v30; // rcx
  _QWORD *v31; // rax
  PVOID *v32; // rax
  _QWORD *v33; // rsi
  int v35; // eax
  PVOID *v36; // rax
  PVOID *v37; // rcx
  PVOID *v38; // rax
  PVOID *v39; // rcx
  PVOID *v40; // rax
  PVOID *v41; // rcx
  PVOID *v42; // rax
  _QWORD *v43; // rdi
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // rax
  PVOID *v47; // rax
  _QWORD *v48; // rdi
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rdi
  __int64 v53; // rcx
  _QWORD *v54; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v57; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v58; // [rsp+48h] [rbp-8h]
  struct _KMUTANT *Mutex; // [rsp+A8h] [rbp+58h]

  v7 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v58 = &v57;
  v57 = &v57;
  if ( a2 )
  {
    v11 = a2;
    v12 = 16LL * a2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x64777445u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_60;
    }
    memmove(PoolWithTag, a3, v12);
    qsort(v14, v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v15 = 0;
    if ( a2 != 1 )
    {
      do
      {
        v16 = 16LL * v15;
        v17 = *(_QWORD *)&v14[v16] - *(_QWORD *)&v14[v16 + 16];
        if ( !v17 )
          v17 = *(_QWORD *)&v14[v16 + 8] - *(_QWORD *)&v14[v16 + 24];
        if ( !v17 )
        {
          ExFreePoolWithTag(v14, 0);
          v7 = -1073741811;
          goto LABEL_60;
        }
        ++v15;
      }
      while ( v15 < (unsigned int)a2 - 1 );
    }
  }
  else
  {
    v14 = 0LL;
  }
  Mutex = (struct _KMUTANT *)(a1 + 632);
  KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
  v18 = *(_WORD *)(a1 + 880);
  if ( v18 )
  {
    v19 = *(char **)(a1 + 888);
    v20 = &v19[16 * v18];
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
  }
  if ( a2 )
  {
    v21 = v14;
    v22 = &v14[16 * a2];
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  if ( v19 >= v20 )
  {
LABEL_14:
    while ( v21 < v22 )
    {
      v23 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v23 )
        goto LABEL_59;
      v23[2] = v21;
      v24 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
      v23[1] = p_P;
      *v23 = &P;
      v21 += 16;
      *v24 = v23;
      p_P = v23;
    }
    v25 = (volatile signed __int64 *)(a1 + 688);
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
    v26 = *(void **)(a1 + 888);
    *(_QWORD *)(a1 + 888) = v14;
    *(_WORD *)(a1 + 880) = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v25);
    KeAbPostRelease((ULONG_PTR)v25);
    KeReleaseMutex((PRKMUTEX)(a1 + 632), 0);
    v27 = (PVOID *)P;
    v28 = P;
    while ( v27 != &P )
    {
      v29 = v28;
      v28 = (_QWORD *)*v28;
      EtwpDisallowedGuidAddition(v29[2], a7);
      v30 = *v29;
      v31 = (_QWORD *)v29[1];
      if ( *(_QWORD **)(*v29 + 8LL) != v29 || (_QWORD *)*v31 != v29 )
        __fastfail(3u);
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      ExFreePoolWithTag(v29, 0);
      v27 = (PVOID *)P;
    }
    v32 = (PVOID *)v57;
    v33 = v57;
    while ( v32 != &v57 )
    {
      v52 = v33;
      v33 = (_QWORD *)*v33;
      EtwpDisallowedGuidRemoval(v52[2], a7);
      v53 = *v52;
      v54 = (_QWORD *)v52[1];
      if ( *(_QWORD **)(*v52 + 8LL) != v52 || (_QWORD *)*v54 != v52 )
        __fastfail(3u);
      *v54 = v53;
      *(_QWORD *)(v53 + 8) = v54;
      ExFreePoolWithTag(v52, 0);
      v32 = (PVOID *)v57;
    }
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    return v7;
  }
  while ( v21 < v22 )
  {
    v35 = memcmp(v19, v21, 0x10uLL);
    if ( v35 )
    {
      if ( v35 < 0 )
      {
        v36 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
        if ( !v36 )
          goto LABEL_59;
        v36[2] = v19;
        v37 = v58;
        if ( *v58 != &v57 )
          __fastfail(3u);
        v36[1] = v58;
        *v36 = &v57;
        v19 += 16;
        *v37 = v36;
        v58 = v36;
        goto LABEL_48;
      }
      v38 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v38 )
        goto LABEL_59;
      v38[2] = v21;
      v39 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
      v38[1] = p_P;
      *v38 = &P;
      *v39 = v38;
      p_P = v38;
    }
    else
    {
      v19 += 16;
    }
    v21 += 16;
LABEL_48:
    if ( v19 >= v20 )
      goto LABEL_55;
  }
  while ( 1 )
  {
LABEL_55:
    if ( v19 >= v20 )
      goto LABEL_14;
    v40 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    if ( !v40 )
      break;
    v40[2] = v19;
    v41 = v58;
    if ( *v58 != &v57 )
      __fastfail(3u);
    v40[1] = v58;
    *v40 = &v57;
    v19 += 16;
    *v41 = v40;
    v58 = v40;
  }
LABEL_59:
  v7 = -1073741670;
  KeReleaseMutex(Mutex, 0);
LABEL_60:
  v42 = (PVOID *)P;
  v43 = P;
  while ( v42 != &P )
  {
    v44 = v43;
    v43 = (_QWORD *)*v43;
    v45 = *v44;
    v46 = (_QWORD *)v44[1];
    if ( *(_QWORD **)(*v44 + 8LL) != v44 || (_QWORD *)*v46 != v44 )
      __fastfail(3u);
    *v46 = v45;
    *(_QWORD *)(v45 + 8) = v46;
    ExFreePoolWithTag(v44, 0);
    v42 = (PVOID *)P;
  }
  v47 = (PVOID *)v57;
  v48 = v57;
  while ( v47 != &v57 )
  {
    v49 = v48;
    v48 = (_QWORD *)*v48;
    v50 = *v49;
    v51 = (_QWORD *)v49[1];
    if ( *(_QWORD **)(*v49 + 8LL) != v49 || (_QWORD *)*v51 != v49 )
      __fastfail(3u);
    *v51 = v50;
    *(_QWORD *)(v50 + 8) = v51;
    ExFreePoolWithTag(v49, 0);
    v47 = (PVOID *)v57;
  }
  return v7;
}
