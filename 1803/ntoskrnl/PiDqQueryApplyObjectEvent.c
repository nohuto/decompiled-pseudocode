/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x1405DD894
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405017B8 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x14050AAEC (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x14056C100 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14056C150 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140573508 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14057CA24 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqSameUserHive @ 0x14072AD1C (PiDqSameUserHive.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int AddObjectToResultSet; // r13d
  char v8; // si
  char v9; // r10
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rdi
  char v17; // r13
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rdx
  bool v25; // zf
  struct _KTHREAD *CurrentThread; // rax
  bool v27; // r12
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // cl
  bool v31; // di
  int v32; // esi
  struct _KTHREAD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  const wchar_t *v37; // rcx
  const wchar_t *v38; // rdx
  __int64 v39; // rcx
  const wchar_t *v40; // rcx
  const wchar_t *v41; // rdx
  __int64 v42; // r8
  int v43; // ecx
  unsigned int v44; // r13d
  unsigned int v45; // r12d
  __int64 v46; // r15
  __int64 v47; // rdi
  __int64 v48; // rcx
  struct _KTHREAD *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  struct _KTHREAD *v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // r15d
  __int64 v56; // rsi
  const wchar_t *i; // rdi
  __int64 v58; // rax
  int v59; // eax
  const wchar_t *v60; // rsi
  __int64 v61; // rax
  int v62; // ecx
  const wchar_t *v63; // rdi
  __int64 v64; // rdx
  struct _KTHREAD *v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 Buffer; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v70; // [rsp+40h] [rbp-10h] BYREF
  char v71; // [rsp+98h] [rbp+48h]
  __int64 v72; // [rsp+A0h] [rbp+50h] BYREF
  char v73; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  LODWORD(v72) = 0;
  v71 = 0;
  AddObjectToResultSet = 0;
  v73 = 0;
  LOBYTE(a4) = 0;
  v8 = 0;
  v9 = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_27;
  if ( (v4 & 4) != 0 )
  {
    LODWORD(v72) = PiDqSameUserHive(a1 + 32, a2 + 24, &v73, a4);
    if ( (int)v72 < 0 )
      goto LABEL_137;
    v9 = v73;
    LOBYTE(a4) = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40) & 4;
  if ( (*(_DWORD *)(v10 + 40) & 2) != 0 )
  {
    if ( !v11 )
    {
LABEL_47:
      v17 = 1;
      v71 = 1;
      goto LABEL_13;
    }
    v55 = 0;
    if ( *(_DWORD *)(a2 + 76) )
    {
      while ( 1 )
      {
        v56 = 32LL * v55;
        if ( *(_DWORD *)(v56 + a2 + 100) != 1 || v9 )
        {
          if ( !*(_QWORD *)(v56 + a2 + 104) )
            goto LABEL_47;
          for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v58 + 1 )
          {
            if ( !wcsicmp(*(const wchar_t **)(v56 + a2 + 104), i) )
              goto LABEL_47;
            v58 = -1LL;
            do
              ++v58;
            while ( i[v58] );
          }
        }
        if ( ++v55 >= *(_DWORD *)(a2 + 76) )
          break;
        v9 = v73;
      }
    }
    goto LABEL_38;
  }
  v12 = *(_DWORD *)(v10 + 64);
  if ( v11 )
  {
    v44 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v45 = 0;
        v46 = *(_QWORD *)(v10 + 72) + 32LL * v44;
        if ( *(_DWORD *)(a2 + 76) )
          break;
LABEL_74:
        v10 = *(_QWORD *)(a1 + 24);
        if ( ++v44 >= *(_DWORD *)(v10 + 64) )
          goto LABEL_38;
        v9 = v73;
      }
      while ( 1 )
      {
        v47 = 32LL * v45;
        if ( *(_DWORD *)(v46 + 16) == *(_DWORD *)(v47 + a2 + 96) )
        {
          v48 = *(_QWORD *)v46 - *(_QWORD *)(v47 + a2 + 80);
          if ( *(_QWORD *)v46 == *(_QWORD *)(v47 + a2 + 80) )
            v48 = *(_QWORD *)(v46 + 8) - *(_QWORD *)(v47 + a2 + 88);
          if ( !v48 )
          {
            v59 = *(_DWORD *)(v47 + a2 + 100);
            if ( *(_DWORD *)(v46 + 20) == v59 && (v59 != 1 || v9) )
            {
              if ( !*(_QWORD *)(v47 + a2 + 104) )
                goto LABEL_47;
              v60 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL);
              if ( *v60 )
              {
                while ( wcsicmp(*(const wchar_t **)(v47 + a2 + 104), v60) )
                {
                  v61 = -1LL;
                  do
                    ++v61;
                  while ( v60[v61] );
                  v60 += v61 + 1;
                  if ( !*v60 )
                  {
                    LOBYTE(a4) = v71;
                    goto LABEL_109;
                  }
                }
                LOBYTE(a4) = 1;
                v71 = 1;
              }
LABEL_109:
              if ( (_BYTE)a4 )
                break;
            }
          }
        }
        v9 = v73;
        if ( ++v45 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_74;
      }
    }
    goto LABEL_38;
  }
  v13 = 0;
  if ( !v12 )
  {
LABEL_38:
    v17 = v71;
    goto LABEL_13;
  }
  do
  {
    v14 = 0;
    v15 = *(_QWORD *)(v10 + 72) + 32LL * v13;
    if ( *(_DWORD *)(a2 + 76) )
    {
      while ( 1 )
      {
        v16 = 32LL * v14;
        if ( *(_DWORD *)(v15 + 16) == *(_DWORD *)(v16 + a2 + 96) )
        {
          v36 = *(_QWORD *)v15 - *(_QWORD *)(v16 + a2 + 80);
          if ( *(_QWORD *)v15 == *(_QWORD *)(v16 + a2 + 80) )
            v36 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(v16 + a2 + 88);
          if ( !v36 && *(_DWORD *)(v15 + 20) == *(_DWORD *)(v16 + a2 + 100) )
          {
            v37 = *(const wchar_t **)(v15 + 24);
            v38 = *(const wchar_t **)(v16 + a2 + 104);
            if ( (v37 == v38 || v37 && v38 && !wcsicmp(v37, v38)) && (*(_DWORD *)(v16 + a2 + 100) != 1 || v73) )
              break;
          }
        }
        if ( ++v14 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_11;
      }
      v17 = 1;
      v71 = 1;
    }
    else
    {
LABEL_11:
      v17 = v71;
    }
    v10 = *(_QWORD *)(a1 + 24);
    ++v13;
  }
  while ( v13 < *(_DWORD *)(v10 + 64) );
LABEL_13:
  v18 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v18 + 20) && (LODWORD(v18) = *(_DWORD *)(a2 + 4), (v18 & 8) != 0) )
  {
    v8 = 1;
  }
  else
  {
    v19 = 0;
    v8 = 0;
    do
    {
      if ( v19 >= *(_DWORD *)(a2 + 76) )
        break;
      v20 = *(_QWORD *)(a1 + 24);
      v21 = 0;
      v22 = 32LL * v19;
      if ( *(_DWORD *)(v20 + 80) )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v20 + 88);
          v24 = 56LL * v21;
          LODWORD(v18) = *(_DWORD *)(v22 + a2 + 96);
          if ( *(_DWORD *)(v24 + v23 + 24) == (_DWORD)v18 )
          {
            v39 = *(_QWORD *)(v24 + v23 + 8) - *(_QWORD *)(v22 + a2 + 80);
            if ( !v39 )
              v39 = *(_QWORD *)(v24 + v23 + 16) - *(_QWORD *)(v22 + a2 + 88);
            if ( !v39 )
            {
              LODWORD(v18) = *(_DWORD *)(v22 + a2 + 100);
              if ( *(_DWORD *)(v24 + v23 + 28) == (_DWORD)v18 )
              {
                v40 = *(const wchar_t **)(v24 + v23 + 32);
                v41 = *(const wchar_t **)(v22 + a2 + 104);
                if ( v40 == v41 || v40 && v41 && (LODWORD(v18) = wcsicmp(v40, v41), !(_DWORD)v18) )
                {
                  if ( *(_DWORD *)(v22 + a2 + 100) != 1 || v73 )
                    break;
                }
              }
            }
          }
          v20 = *(_QWORD *)(a1 + 24);
          if ( ++v21 >= *(_DWORD *)(v20 + 80) )
            goto LABEL_20;
        }
        v8 = 1;
      }
LABEL_20:
      ++v19;
    }
    while ( !v8 );
  }
  v25 = v17 == 0;
  AddObjectToResultSet = v72;
  if ( v25 && !v8 )
  {
LABEL_25:
    if ( AddObjectToResultSet >= 0 )
      return v18;
    goto LABEL_137;
  }
LABEL_27:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  Buffer = *(_QWORD *)(a2 + 8);
  v27 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
  ExReleasePushLockEx(a1 + 64, 0LL, v28, v29);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LODWORD(v18) = *(_DWORD *)(a2 + 4);
  if ( (v18 & 2) != 0 )
  {
    if ( !v27 )
    {
      v31 = 0;
      v32 = 0;
      goto LABEL_34;
    }
    goto LABEL_82;
  }
  if ( (v18 & 1) == 0 && !v8 )
  {
    v30 = v27;
    goto LABEL_31;
  }
  v42 = *(_QWORD *)(a1 + 24);
  v43 = *(_DWORD *)(v42 + 20);
  if ( !v43 )
  {
    v30 = 1;
LABEL_57:
    LOBYTE(v18) = v30;
    LOBYTE(v72) = v30;
LABEL_58:
    if ( !(_BYTE)v18 )
      goto LABEL_32;
    goto LABEL_59;
  }
  v62 = v43 - 1;
  if ( !v62 )
  {
    v30 = wcsicmp(*(const wchar_t **)(v42 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    goto LABEL_57;
  }
  if ( v62 != 1 )
    goto LABEL_32;
  v63 = *(const wchar_t **)(v42 + 32);
  v30 = 0;
  LOBYTE(v72) = 0;
  if ( !*v63 )
    goto LABEL_32;
  LOBYTE(v18) = 0;
  while ( !(_BYTE)v18 )
  {
    v30 = wcsicmp(v63, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    v64 = -1LL;
    LOBYTE(v18) = v30;
    LOBYTE(v72) = v30;
    do
      ++v64;
    while ( v63[v64] );
    v63 += v64 + 1;
    if ( !*v63 )
      goto LABEL_58;
  }
LABEL_59:
  v18 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v18 + 20) )
  {
    LODWORD(v18) = PiPnpRtlApplyMandatoryFilters(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
                     *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                     0LL,
                     (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                     &v72);
    AddObjectToResultSet = v18;
    if ( (_DWORD)v18 == -1073741772 || (_DWORD)v18 == -1073741275 )
    {
      v30 = 0;
      AddObjectToResultSet = 0;
      LOBYTE(v72) = 0;
    }
    else
    {
      v30 = v72;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_137;
  }
  if ( !v30 )
    goto LABEL_32;
  v18 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v18 + 88) )
  {
    LODWORD(v18) = PiDqQueryEvaluateFilter((_QWORD *)a1, *(void **)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&v72);
    AddObjectToResultSet = v18;
    if ( (_DWORD)v18 == -1073741772 )
    {
      v30 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      v30 = v72;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_137;
  }
LABEL_31:
  if ( v30 )
  {
    if ( v27 )
    {
      v32 = 2;
      v31 = v71 != 0;
    }
    else
    {
      v52 = KeGetCurrentThread();
      v32 = 1;
      --v52->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
      ExReleasePushLockEx(a1 + 64, 0LL, v53, v54);
      LOBYTE(v18) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v31 = 1;
    }
    goto LABEL_34;
  }
LABEL_32:
  if ( v27 )
  {
LABEL_82:
    v49 = KeGetCurrentThread();
    v32 = 3;
    v31 = 1;
    --v49->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    PiDqQueryDeleteObjectFromResultSet(a1, *(unsigned int **)(a2 + 8));
    ExReleasePushLockEx(a1 + 64, 0LL, v50, v51);
    LOBYTE(v18) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_34;
  }
  v31 = 0;
  v32 = 0;
LABEL_34:
  if ( AddObjectToResultSet >= 0 )
  {
    if ( !v31 )
      goto LABEL_25;
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(
                             v32,
                             *(_QWORD *)(a2 + 8),
                             (volatile signed __int32 *)a2,
                             &v70);
    if ( AddObjectToResultSet >= 0 )
    {
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      PiDqQueryAppendActionEntry(a1, v70);
      ExReleasePushLockEx(a1 + 64, 0LL, v34, v35);
      LOBYTE(v18) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_25;
    }
  }
LABEL_137:
  v65 = KeGetCurrentThread();
  --v65->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  *(_DWORD *)(a1 + 216) |= 1u;
  PiDqQueryFreeActiveData(a1);
  ExReleasePushLockEx(a1 + 64, 0LL, v66, v67);
  LOBYTE(v18) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v18;
}
