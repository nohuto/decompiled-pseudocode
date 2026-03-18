/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x1407B2A2C
 * Callers:
 *     EtwpUpdateDisallowList @ 0x1407A5C30 (EtwpUpdateDisallowList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpDisallowedGuidAddition @ 0x1407A5704 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        PRKMUTEX Mutexa,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  unsigned __int16 v9; // di
  unsigned int v12; // esi
  SIZE_T v13; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int64 v15; // r15
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int16 v19; // ax
  char *v20; // r14
  char *v21; // r12
  char *v22; // r13
  char *v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rdi
  PVOID *v26; // rax
  _OWORD *v27; // rax
  PVOID *v28; // rax
  PVOID *v29; // rax
  PVOID *v30; // rcx
  _OWORD *v31; // rax
  PVOID *v32; // rax
  volatile signed __int64 *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // r14
  PVOID *v38; // rax
  _QWORD *v39; // rsi
  void *v40; // rdi
  _DWORD *v41; // rcx
  void **v42; // rax
  PVOID *v43; // rax
  _QWORD *v44; // rsi
  _QWORD *v45; // rax
  _QWORD *v46; // rdi
  _QWORD *v47; // rcx
  PVOID *v48; // rax
  _QWORD *v49; // rdi
  __int64 v50; // rax
  _QWORD *v51; // rcx
  _QWORD *v52; // rdx
  PVOID *v53; // rax
  _QWORD *v54; // rsi
  _DWORD **v55; // rdi
  _DWORD *v56; // rcx
  void **v57; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v60; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v61; // [rsp+48h] [rbp-8h]
  int v64; // [rsp+A8h] [rbp+58h]
  struct _KMUTANT *Mutex; // [rsp+B0h] [rbp+60h]

  v7 = 0;
  v9 = a2;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v61 = &v60;
  v60 = &v60;
  if ( a2 )
  {
    v12 = a2;
    v13 = 16LL * a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x64777445u);
    v15 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_56;
    memmove(PoolWithTag, a3, v13);
    qsort((void *)v15, v12, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v9 = a2;
    v16 = 0;
    if ( a2 != 1 )
    {
      do
      {
        v17 = 16LL * v16;
        v18 = *(_QWORD *)(v17 + v15) - *(_QWORD *)(v17 + v15 + 16);
        if ( !v18 )
          v18 = *(_QWORD *)(v17 + v15 + 8) - *(_QWORD *)(v17 + v15 + 24);
        if ( !v18 )
        {
          ExFreePoolWithTag((PVOID)v15, 0);
          v7 = -1073741811;
          goto LABEL_57;
        }
        ++v16;
      }
      while ( v16 < (unsigned int)a2 - 1 );
    }
  }
  else
  {
    v15 = 0LL;
  }
  Mutex = (struct _KMUTANT *)(a1 + 648);
  KeWaitForSingleObject((PVOID)(a1 + 648), Executive, 0, 0, 0LL);
  v19 = *(_WORD *)(a1 + 1048);
  if ( v19 )
  {
    v20 = *(char **)(a1 + 1056);
    v21 = &v20[16 * v19];
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  if ( v9 )
    v22 = (char *)(v15 + 16LL * v9);
  else
    v22 = 0LL;
  v23 = (char *)(v15 & -(__int64)(v9 != 0));
  while ( 1 )
  {
    if ( v20 >= v21 )
      goto LABEL_45;
    if ( v23 >= v22 )
      break;
    v64 = memcmp(v20, v23, 0x10uLL);
    if ( !v64 )
    {
      v20 += 16;
      goto LABEL_31;
    }
    v24 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    v25 = v24;
    if ( v64 >= 0 )
    {
      if ( !v24 )
        goto LABEL_55;
      v27 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74777445u);
      if ( !v27 )
      {
LABEL_54:
        ExFreePoolWithTag(v25, 0);
        goto LABEL_55;
      }
      *v27 = *(_OWORD *)v23;
      v25[2] = v27;
      v28 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
      v25[1] = p_P;
      *v25 = &P;
      *v28 = v25;
      p_P = (PVOID *)v25;
LABEL_31:
      v23 += 16;
    }
    else
    {
      if ( !v24 )
        goto LABEL_55;
      v24[2] = v20;
      v26 = v61;
      if ( *v61 != &v60 )
        __fastfail(3u);
      v25[1] = v61;
      *v25 = &v60;
      v20 += 16;
      *v26 = v25;
      v61 = (PVOID *)v25;
    }
  }
  while ( 1 )
  {
    v29 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    if ( !v29 )
      break;
    v29[2] = v20;
    v30 = v61;
    if ( *v61 != &v60 )
      __fastfail(3u);
    v29[1] = v61;
    *v29 = &v60;
    v20 += 16;
    *v30 = v29;
    v61 = v29;
    if ( v20 >= v21 )
    {
LABEL_45:
      while ( v23 < v22 )
      {
        v25 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
        if ( !v25 )
          goto LABEL_55;
        v31 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74777445u);
        if ( !v31 )
          goto LABEL_54;
        *v31 = *(_OWORD *)v23;
        v25[2] = v31;
        v32 = p_P;
        if ( *p_P != &P )
          __fastfail(3u);
        v25[1] = p_P;
        *v25 = &P;
        v23 += 16;
        *v32 = v25;
        p_P = (PVOID *)v25;
      }
      v33 = (volatile signed __int64 *)(a1 + 704);
      ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
      v37 = *(void **)(a1 + 1056);
      *(_WORD *)(a1 + 1048) = a2;
      *(_QWORD *)(a1 + 1056) = v15;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v33, v34, v35, v36);
      KeAbPostRelease((ULONG_PTR)v33);
      KeReleaseMutex((PRKMUTEX)(a1 + 648), 0);
      v38 = (PVOID *)P;
      v39 = P;
      while ( v38 != &P )
      {
        v40 = v39;
        v39 = (_QWORD *)*v39;
        EtwpDisallowedGuidAddition(*((_DWORD **)v40 + 2), a7);
        v41 = *(_DWORD **)v40;
        if ( *(void **)(*(_QWORD *)v40 + 8LL) != v40 || (v42 = (void **)*((_QWORD *)v40 + 1), *v42 != v40) )
          __fastfail(3u);
        *v42 = v41;
        *((_QWORD *)v41 + 1) = v42;
        ExFreePoolWithTag(*((PVOID *)v40 + 2), 0);
        ExFreePoolWithTag(v40, 0);
        v38 = (PVOID *)P;
      }
      v53 = (PVOID *)v60;
      v54 = v60;
      while ( v53 != &v60 )
      {
        v55 = (_DWORD **)v54;
        v54 = (_QWORD *)*v54;
        EtwpDisallowedGuidRemoval(v55[2], a7);
        v56 = *v55;
        if ( *((_DWORD ***)*v55 + 1) != v55 || (v57 = (void **)v55[1], *v57 != v55) )
          __fastfail(3u);
        *v57 = v56;
        *((_QWORD *)v56 + 1) = v57;
        ExFreePoolWithTag(v55, 0);
        v53 = (PVOID *)v60;
      }
      if ( v37 )
        ExFreePoolWithTag(v37, 0);
      return v7;
    }
  }
LABEL_55:
  KeReleaseMutex(Mutex, 0);
LABEL_56:
  v7 = -1073741670;
LABEL_57:
  v43 = (PVOID *)P;
  v44 = P;
  while ( v43 != &P )
  {
    v45 = (_QWORD *)*v44;
    v46 = v44;
    v44 = v45;
    if ( (_QWORD *)v45[1] != v46 || (v47 = (_QWORD *)v46[1], (_QWORD *)*v47 != v46) )
      __fastfail(3u);
    *v47 = v45;
    v45[1] = v47;
    ExFreePoolWithTag((PVOID)v46[2], 0);
    ExFreePoolWithTag(v46, 0);
    v43 = (PVOID *)P;
  }
  v48 = (PVOID *)v60;
  v49 = v60;
  while ( v48 != &v60 )
  {
    v50 = *v49;
    v51 = v49;
    v49 = (_QWORD *)v50;
    if ( *(_QWORD **)(v50 + 8) != v51 || (v52 = (_QWORD *)v51[1], (_QWORD *)*v52 != v51) )
      __fastfail(3u);
    *v52 = v50;
    *(_QWORD *)(v50 + 8) = v52;
    ExFreePoolWithTag(v51, 0);
    v48 = (PVOID *)v60;
  }
  return v7;
}
