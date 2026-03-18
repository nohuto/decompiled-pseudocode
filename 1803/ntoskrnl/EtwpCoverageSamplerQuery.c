/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x1407B7744
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1407B8AD0 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     RtlStringCchCopyNW @ 0x140161D3C (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1407B3294 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1407B3640 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureFlush @ 0x1407B3B50 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1407B3BC8 (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x1407B55E4 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1407B6744 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1407B7634 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 *v7; // r15
  __int64 v8; // rdx
  signed int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r12d
  unsigned int j; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v15; // ecx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // r12d
  unsigned int v21; // edi
  struct _KTHREAD *v22; // rax
  _QWORD **v23; // r10
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  _QWORD *v28; // r8
  unsigned __int64 v29; // rcx
  unsigned int v30; // ecx
  bool v31; // cf
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 *PoolWithTag; // rax
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rcx
  _DWORD *v40; // r15
  char *v41; // rdi
  char *v42; // rax
  char *v43; // rdi
  _OWORD *v44; // rcx
  __int64 v45; // rdx
  char *v46; // rdi
  char *v47; // r9
  char *v48; // rdi
  _QWORD *i; // rdx
  unsigned int v50; // r8d
  __int64 v51; // r10
  __int64 v52; // rdx
  char *v53; // rcx
  char *v54; // rdi
  void *v55; // r9
  unsigned int v56; // ecx
  unsigned int v57; // edi
  _QWORD *v58; // rax
  _QWORD *v59; // r12
  char *v60; // rdx
  struct _KTHREAD *v61; // rax
  __int64 v62; // r8
  int v63; // edx
  __int64 v64; // r9
  __int64 v65; // rdx
  volatile __int32 *v66; // rcx
  char *v67; // r12
  _QWORD *v68; // rdi
  _QWORD *v69; // r15
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned int v75; // [rsp+20h] [rbp-168h]
  unsigned int v76; // [rsp+24h] [rbp-164h]
  unsigned int v77; // [rsp+28h] [rbp-160h]
  _QWORD **v78; // [rsp+30h] [rbp-158h]
  unsigned int v79; // [rsp+38h] [rbp-150h]
  unsigned int v80; // [rsp+3Ch] [rbp-14Ch]
  char *v81; // [rsp+40h] [rbp-148h]
  unsigned int v82; // [rsp+48h] [rbp-140h]
  __int64 *v83; // [rsp+50h] [rbp-138h]
  unsigned int v84; // [rsp+58h] [rbp-130h]
  int v85; // [rsp+5Ch] [rbp-12Ch]
  _QWORD *v86; // [rsp+60h] [rbp-128h] BYREF
  _QWORD *v87; // [rsp+68h] [rbp-120h]
  volatile __int32 *v88; // [rsp+70h] [rbp-118h]
  NTSTRSAFE_PWSTR pszDest; // [rsp+78h] [rbp-110h]
  unsigned int v90; // [rsp+80h] [rbp-108h]
  int v91; // [rsp+84h] [rbp-104h]
  unsigned __int64 v92; // [rsp+88h] [rbp-100h]
  __int64 v93; // [rsp+90h] [rbp-F8h]
  __int64 v94; // [rsp+98h] [rbp-F0h] BYREF
  char *v95; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v96; // [rsp+A8h] [rbp-E0h]
  unsigned int *v97; // [rsp+B0h] [rbp-D8h]
  ULONG_PTR v98; // [rsp+B8h] [rbp-D0h]
  ULONG_PTR v99; // [rsp+C0h] [rbp-C8h]
  int v100; // [rsp+C8h] [rbp-C0h]
  __int64 v101; // [rsp+D0h] [rbp-B8h]
  __int64 v102; // [rsp+D8h] [rbp-B0h]
  unsigned __int64 v103; // [rsp+E0h] [rbp-A8h]
  char *v104; // [rsp+E8h] [rbp-A0h]
  wchar_t *v105; // [rsp+F0h] [rbp-98h]
  _DWORD *v106; // [rsp+F8h] [rbp-90h]
  char *v107; // [rsp+100h] [rbp-88h]
  _QWORD *v108; // [rsp+108h] [rbp-80h]
  char *v109; // [rsp+110h] [rbp-78h]
  char *v110; // [rsp+118h] [rbp-70h]
  __int64 v111; // [rsp+120h] [rbp-68h]
  _DWORD v112[8]; // [rsp+128h] [rbp-60h] BYREF

  v97 = a4;
  v90 = a3;
  v101 = a2;
  v99 = BugCheckParameter2;
  v94 = 0LL;
  v5 = qword_1403A1CE8;
  v93 = qword_1403A1CE8;
  v6 = BugCheckParameter2 + 16;
  v98 = BugCheckParameter2 + 16;
  v7 = 0LL;
  v83 = 0LL;
  v9 = EtwpCovSampAcquireSamplerRundown(&v94);
  if ( v9 < 0 )
    goto LABEL_4;
  if ( v94 != BugCheckParameter2 )
  {
    v9 = -1073741431;
LABEL_4:
    v12 = 0;
    goto LABEL_5;
  }
  EtwpCovSampCaptureFlush(v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v15 = 0;
  v16 = *(_QWORD **)(BugCheckParameter2 + 1152);
  v78 = (_QWORD **)v16;
  while ( v16 != (_QWORD *)(BugCheckParameter2 + 1152) )
  {
    v15 += *((_DWORD *)v16 + 4);
    v16 = (_QWORD *)*v16;
  }
  v78 = (_QWORD **)v16;
  v84 = v15;
  v17 = 8LL * v15;
  v103 = v17;
  v10 = 0xFFFFFFFFLL;
  v18 = -1;
  if ( v17 <= 0xFFFFFFFF )
    v18 = v17;
  v100 = v18;
  v8 = 3221225621LL;
  v9 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v17 > 0xFFFFFFFF )
    goto LABEL_4;
  v19 = v18 + 716;
  v20 = -1;
  if ( v18 + 716 >= v18 )
    v20 = v18 + 716;
  v77 = v20;
  v9 = v19 < v18 ? 0xC0000095 : 0;
  if ( v19 < v18 )
    goto LABEL_4;
  v21 = 0;
  v75 = 0;
  v82 = 0;
  v76 = 0;
  v80 = 0;
  v79 = 0;
  v87 = &v86;
  v86 = &v86;
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  ExAcquirePushLockSharedEx(v6 + 664, 0LL);
  v11 = *(_QWORD *)(v6 + 712);
  v78 = (_QWORD **)v11;
LABEL_27:
  v23 = (_QWORD **)v87;
  while ( v11 != v6 + 712 )
  {
    v10 = v11 - 72;
    v88 = (volatile __int32 *)v10;
    v11 = *(_QWORD *)v11;
    v78 = (_QWORD **)v11;
    if ( *(_DWORD *)(v10 + 132) )
    {
      if ( !*(_QWORD *)(v10 + 104) )
      {
        if ( *(_QWORD *)(v10 + 64) == 1LL )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1108));
        _InterlockedExchange((volatile __int32 *)(v10 + 132), 0);
        v11 = (__int64)v78;
        goto LABEL_27;
      }
      v75 = v21 + 1;
      v82 = v21 + 1;
      ++v76;
      v8 = 2 * (unsigned int)(unsigned __int16)*(_DWORD *)(v10 + 120) + 2;
      v24 = v8 + v80;
      v25 = -1;
      if ( (unsigned int)v8 + v80 >= (unsigned int)v8 )
        v25 = v8 + v80;
      v80 = v25;
      v9 = v24 < (unsigned int)v8 ? 0xC0000095 : 0;
      if ( v24 < (unsigned int)v8 )
        goto LABEL_100;
      v8 = *(_DWORD *)(v10 + 56) - (((unsigned __int8)*(_DWORD *)(v10 + 56) - 1) & 3u) + 3;
      v26 = v8 + v79;
      v27 = -1;
      if ( (unsigned int)v8 + v79 >= (unsigned int)v8 )
        v27 = v8 + v79;
      v79 = v27;
      v9 = v26 < (unsigned int)v8 ? 0xC0000095 : 0;
      if ( v26 < (unsigned int)v8 )
        goto LABEL_100;
      v28 = (_QWORD *)(v10 + 144);
      if ( *v23 != &v86 )
        __fastfail(3u);
      *v28 = &v86;
      v28[1] = v23;
      *v23 = v28;
      v23 = (_QWORD **)v28;
      v87 = v28;
      v21 = v75;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 664));
  KeAbPostRelease(v6 + 664);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v29 = 36LL * v76;
  v11 = 0xFFFFFFFFLL;
  v8 = 0xFFFFFFFFLL;
  if ( v29 <= 0xFFFFFFFF )
    v8 = (unsigned int)v29;
  v100 = v8;
  v10 = 3221225621LL;
  v9 = v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v29 > 0xFFFFFFFF )
    goto LABEL_100;
  v30 = v8 + v77;
  v8 = 0xFFFFFFFFLL;
  v31 = v30 < v77;
  if ( v30 >= v77 )
    v8 = v30;
  v77 = v8;
  v9 = v31 ? 0xC0000095 : 0;
  if ( v30 < v20 )
    goto LABEL_100;
  v32 = v8 + v80;
  v33 = -1;
  if ( (unsigned int)v8 + v80 >= (unsigned int)v8 )
    v33 = v8 + v80;
  v77 = v33;
  v9 = v32 < (unsigned int)v8 ? 0xC0000095 : 0;
  if ( v32 < (unsigned int)v8 )
    goto LABEL_100;
  v34 = v33 + v79;
  v8 = 0xFFFFFFFFLL;
  if ( v33 + v79 >= v33 )
    v8 = v34;
  v77 = v8;
  v9 = v34 < v33 ? 0xC0000095 : 0;
  if ( v34 < v33 )
  {
LABEL_100:
    v7 = 0LL;
    goto LABEL_99;
  }
  v12 = v75;
  if ( v90 < (unsigned int)v8 )
  {
    *v97 = v8;
    v9 = -1073741789;
    v7 = 0LL;
    goto LABEL_5;
  }
  if ( v75 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8 * v75, 0x56777445u);
    v7 = PoolWithTag;
    v83 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_5;
    }
    memset(PoolWithTag, 0, 8 * v75);
  }
  v36 = v101;
  if ( (*(_DWORD *)(v101 + 16) & 1) != 0 )
  {
    v37 = v93;
    v38 = *(_QWORD *)(v93 + 944);
    if ( v38 )
    {
      v102 = *(_QWORD *)(v93 + 944);
      memset((void *)(v38 + 8), 0, 4LL * *(unsigned int *)(v38 + 4));
    }
    v39 = *(_QWORD *)(v37 + 952);
    if ( v39 )
    {
      v102 = *(_QWORD *)(v37 + 952);
      memset((void *)(v39 + 8), 0, 4LL * *(unsigned int *)(v39 + 4));
    }
  }
  v40 = (_DWORD *)(v36 + 20);
  v106 = v40;
  v41 = (char *)(v36 + 64);
  v81 = v41;
  memset(v40, 0, 0x2CuLL);
  *v40 = 44;
  v40[2] = *(_DWORD *)(BugCheckParameter2 + 1196);
  v40[4] = 592;
  v40[3] = 44;
  v42 = v41;
  v109 = v41;
  v43 = v41 + 592;
  v81 = v43;
  v44 = (_OWORD *)(v6 + 8);
  v45 = 4LL;
  do
  {
    *(_OWORD *)v42 = *v44;
    *((_OWORD *)v42 + 1) = v44[1];
    *((_OWORD *)v42 + 2) = v44[2];
    *((_OWORD *)v42 + 3) = v44[3];
    *((_OWORD *)v42 + 4) = v44[4];
    *((_OWORD *)v42 + 5) = v44[5];
    *((_OWORD *)v42 + 6) = v44[6];
    v42 += 128;
    *((_OWORD *)v42 - 1) = v44[7];
    v44 += 8;
    --v45;
  }
  while ( v45 );
  *(_OWORD *)v42 = *v44;
  *((_OWORD *)v42 + 1) = v44[1];
  *((_OWORD *)v42 + 2) = v44[2];
  *((_OWORD *)v42 + 3) = v44[3];
  *((_OWORD *)v42 + 4) = v44[4];
  v40[6] = 60;
  v40[5] = (_DWORD)v43 - (_DWORD)v40;
  v107 = v43;
  v46 = v43 + 60;
  v40[8] = v84;
  v40[7] = (_DWORD)v46 - (_DWORD)v40;
  v47 = v46;
  v104 = v46;
  v48 = &v46[v103];
  v81 = v48;
  v110 = v48;
  for ( i = *(_QWORD **)(BugCheckParameter2 + 1152); ; i = (_QWORD *)*i )
  {
    v78 = (_QWORD **)i;
    if ( i == (_QWORD *)(BugCheckParameter2 + 1152) )
      break;
    v108 = i;
    v50 = 0;
    v91 = 0;
    while ( v50 < *((_DWORD *)i + 5) )
    {
      v51 = i[3] + 8LL * v50;
      v111 = v51;
      if ( *(_QWORD *)v51 )
      {
        if ( v47 >= v48 )
          break;
        *(_DWORD *)v47 = *(_QWORD *)v51;
        *((_DWORD *)v47 + 1) = *(_DWORD *)(v51 + 4);
        v47 += 8;
        v104 = v47;
      }
      v91 = ++v50;
    }
  }
  v52 = v76;
  v40[10] = v76;
  v40[9] = (_DWORD)v48 - (_DWORD)v40;
  v53 = v48;
  v95 = v48;
  v54 = &v48[36 * v52];
  memset(v53, 0, 36 * v52);
  v55 = v54;
  v92 = (unsigned __int64)v54;
  v105 = (wchar_t *)&v54[v79];
  v56 = v79 + (_DWORD)v54;
  pszDest = v105;
  v57 = v80 + (_DWORD)v105;
  v81 = (char *)v105 + v80;
  v96 = (unsigned __int64)v81;
  v85 = 0;
  v58 = v86;
  while ( 1 )
  {
    v78 = (_QWORD **)v58;
    if ( v58 == &v86 )
      break;
    v59 = v58 - 18;
    v88 = (volatile __int32 *)(v58 - 18);
    v60 = v95;
    *((_DWORD *)v95 + 2) = (_DWORD)v55 - (_DWORD)v40;
    *((_DWORD *)v60 + 3) = *((_DWORD *)v58 - 22);
    *(_DWORD *)v60 = v56 - (_DWORD)v40;
    *((_DWORD *)v60 + 1) = (unsigned __int16)*((_DWORD *)v58 - 6);
    *((_DWORD *)v60 + 4) = *((_DWORD *)v58 - 27);
    *((_DWORD *)v60 + 5) = *((_DWORD *)v58 - 28);
    *((_DWORD *)v60 + 6) = *((_DWORD *)v58 - 26);
    *((_DWORD *)v60 + 7) = *((_DWORD *)v58 - 5);
    *((_DWORD *)v60 + 8) = *((_DWORD *)v58 - 4);
    v95 = v60 + 36;
    memmove(v55, (const void *)*(v58 - 12), *((unsigned int *)v58 - 22));
    v92 = (*((unsigned int *)v59 + 14) + v92 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v92 > (unsigned __int64)v105 )
      break;
    RtlStringCchCopyNW(
      pszDest,
      (__int64)(v96 - (_QWORD)pszDest) >> 1,
      (STRSAFE_PCNZWCH)v59[14],
      (unsigned __int16)*((_DWORD *)v59 + 30));
    pszDest += (unsigned int)(unsigned __int16)*((_DWORD *)v59 + 30) + 1;
    if ( (unsigned __int64)pszDest > v96 )
      break;
    v61 = KeGetCurrentThread();
    --v61->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 664, 0LL);
    *(_QWORD *)(v6 + 672) = KeGetCurrentThread();
    v62 = (__int64)v88;
    v63 = v85;
    v64 = (__int64)v83;
    v83[v85] = *((_QWORD *)v88 + 13);
    v65 = (unsigned int)(v63 + 1);
    v85 = v65;
    *(_QWORD *)(v62 + 104) = 0LL;
    v59[14] = 0LL;
    *((_DWORD *)v59 + 30) &= 0xFFFF0000;
    *((_DWORD *)v59 + 30) |= 0x80000u;
    *(_QWORD *)(v6 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 664), v65, v62, v64);
    KeAbPostRelease(v6 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    --v76;
    v66 = v88;
    if ( *((_QWORD *)v88 + 8) == 1LL )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 1108));
      v66 = v88;
    }
    _InterlockedExchange(v66 + 33, 0);
    v58 = *v78;
    v57 = (unsigned int)v81;
    v40 = v106;
    v56 = (unsigned int)pszDest;
    v55 = (void *)v92;
  }
  v67 = v107;
  *(_OWORD *)v107 = *(_OWORD *)(v6 + 600);
  *((_OWORD *)v67 + 1) = *(_OWORD *)(v6 + 616);
  *((_OWORD *)v67 + 2) = *(_OWORD *)(v6 + 632);
  *((_QWORD *)v67 + 6) = *(_QWORD *)(v6 + 648);
  *((_DWORD *)v67 + 14) = *(_DWORD *)(v6 + 656);
  memset((void *)(v6 + 600), 0, 0x3CuLL);
  memset(v112, 0, sizeof(v112));
  EtwpCovSampCaptureFlushStats(v93, v112);
  *((_DWORD *)v67 + 7) = v112[0];
  *((_DWORD *)v67 + 8) = v112[1];
  *((_DWORD *)v67 + 9) = v112[2];
  *((_DWORD *)v67 + 10) = v112[3];
  *((_DWORD *)v67 + 11) = v112[4];
  *((_DWORD *)v67 + 12) = v112[5];
  *((_DWORD *)v67 + 13) = v112[6];
  *((_DWORD *)v67 + 14) = v112[7];
  v40[1] = v57 - (_DWORD)v40;
  v68 = *(_QWORD **)(BugCheckParameter2 + 1152);
  v78 = (_QWORD **)v68;
  while ( v68 != (_QWORD *)(BugCheckParameter2 + 1152) )
  {
    v69 = v68;
    v108 = v68;
    v68 = (_QWORD *)*v68;
    v78 = (_QWORD **)v68;
    if ( v69 == *(_QWORD **)(BugCheckParameter2 + 1136) )
    {
      memset((void *)v69[3], 0, 8LL * *((unsigned int *)v69 + 5));
      *((_DWORD *)v69 + 4) = 0;
    }
    else
    {
      v70 = (_QWORD *)v69[1];
      if ( (_QWORD *)v68[1] != v69 || (_QWORD *)*v70 != v69 )
        __fastfail(3u);
      *v70 = v68;
      v68[1] = v70;
      --*(_DWORD *)(BugCheckParameter2 + 1168);
      EtwpCoverageSamplerFreeTable(v69);
    }
  }
  ++*(_DWORD *)(BugCheckParameter2 + 1196);
  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v93, 0);
  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v71, v72, v73);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  EtwpCovSampContextPruneModules(v6);
  *v97 = v77;
  v9 = 0;
  v7 = v83;
LABEL_99:
  v12 = v75;
LABEL_5:
  if ( *(struct _KTHREAD **)(v6 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 664), v8, v10, v11);
    KeAbPostRelease(v6 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v8, v10, v11);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v7 )
  {
    for ( j = 0; j < v12; ++j )
      EtwpCovSampModuleNameInfoCleanup(&v7[j]);
    ExFreePoolWithTag(v7, 0x56777445u);
  }
  if ( v94 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&stru_1403A1CE0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
