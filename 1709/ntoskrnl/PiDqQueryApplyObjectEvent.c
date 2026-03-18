/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x14054D08C
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140528568 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x14052969C (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryAppendActionEntry @ 0x140580A48 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x140580A98 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140590700 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14059EF20 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqSameUserHive @ 0x1406C4974 (PiDqSameUserHive.c)
 */

int __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int AddObjectToResultSet; // r13d
  char v8; // r8
  char v9; // r14
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // r15d
  char v13; // r13
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // r12d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  unsigned int v21; // r12d
  __int64 v22; // r14
  __int64 v23; // rsi
  struct _KTHREAD *CurrentThread; // rax
  bool v25; // r12
  char v26; // cl
  bool v27; // si
  unsigned int v28; // r14d
  struct _KTHREAD *v29; // rax
  __int64 v30; // rcx
  const wchar_t *v31; // rcx
  const wchar_t *v32; // rdx
  __int64 v33; // rcx
  const wchar_t *v34; // rcx
  const wchar_t *v35; // rdx
  __int64 v36; // r8
  int v37; // ecx
  unsigned int v38; // r13d
  unsigned int v39; // r12d
  __int64 v40; // r15
  __int64 v41; // rsi
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rax
  struct _KTHREAD *v44; // rax
  unsigned int v45; // r15d
  __int64 v46; // r14
  const wchar_t *i; // rsi
  __int64 v48; // rax
  int v49; // eax
  const wchar_t *v50; // r14
  __int64 v51; // rax
  int v52; // ecx
  const wchar_t *v53; // rsi
  struct _KTHREAD *v54; // rax
  __int64 Buffer; // [rsp+38h] [rbp-18h] BYREF
  __int64 v57; // [rsp+40h] [rbp-10h] BYREF
  char v58; // [rsp+98h] [rbp+48h]
  __int64 v59; // [rsp+A0h] [rbp+50h] BYREF
  char v60; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  LODWORD(v59) = 0;
  v58 = 0;
  AddObjectToResultSet = 0;
  v60 = 0;
  v8 = 0;
  v9 = 0;
  LOBYTE(a4) = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_27;
  if ( (v4 & 4) != 0 )
  {
    LODWORD(v59) = PiDqSameUserHive(a1 + 32, a2 + 24, &v60, a4);
    if ( (int)v59 < 0 )
      goto LABEL_136;
    LOBYTE(a4) = v60;
    v8 = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40);
  if ( (v11 & 2) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
LABEL_53:
      v13 = 1;
      v58 = 1;
      goto LABEL_9;
    }
    v45 = 0;
    if ( *(_DWORD *)(a2 + 76) )
    {
      while ( 1 )
      {
        v46 = 32LL * v45;
        if ( *(_DWORD *)(v46 + a2 + 100) != 1 || (_BYTE)a4 )
        {
          if ( !*(_QWORD *)(v46 + a2 + 104) )
            goto LABEL_53;
          for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v48 + 1 )
          {
            if ( !wcsicmp(*(const wchar_t **)(v46 + a2 + 104), i) )
              goto LABEL_53;
            v48 = -1LL;
            do
              ++v48;
            while ( i[v48] );
          }
        }
        if ( ++v45 >= *(_DWORD *)(a2 + 76) )
          break;
        LOBYTE(a4) = v60;
      }
    }
    goto LABEL_8;
  }
  if ( (v11 & 4) != 0 )
  {
    v38 = 0;
    if ( *(_DWORD *)(v10 + 64) )
    {
      while ( 1 )
      {
        v39 = 0;
        v40 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v38;
        if ( *(_DWORD *)(a2 + 76) )
          break;
LABEL_72:
        if ( ++v38 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) )
          goto LABEL_8;
        LOBYTE(a4) = v60;
      }
      while ( 1 )
      {
        v41 = 32LL * v39;
        if ( *(_DWORD *)(v40 + 16) == *(_DWORD *)(v41 + a2 + 96) )
        {
          v42 = *(_QWORD *)v40 - *(_QWORD *)(v41 + a2 + 80);
          if ( *(_QWORD *)v40 == *(_QWORD *)(v41 + a2 + 80) )
            v42 = *(_QWORD *)(v40 + 8) - *(_QWORD *)(v41 + a2 + 88);
          if ( !v42 )
          {
            v49 = *(_DWORD *)(v41 + a2 + 100);
            if ( *(_DWORD *)(v40 + 20) == v49 && (v49 != 1 || (_BYTE)a4) )
            {
              if ( !*(_QWORD *)(v41 + a2 + 104) )
                goto LABEL_53;
              v50 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL);
              if ( *v50 )
              {
                while ( wcsicmp(*(const wchar_t **)(v41 + a2 + 104), v50) )
                {
                  v51 = -1LL;
                  do
                    ++v51;
                  while ( v50[v51] );
                  v50 += v51 + 1;
                  if ( !*v50 )
                  {
                    v8 = v58;
                    goto LABEL_107;
                  }
                }
                v8 = 1;
                v58 = 1;
              }
LABEL_107:
              if ( v8 )
                break;
            }
          }
        }
        LOBYTE(a4) = v60;
        if ( ++v39 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_72;
      }
    }
    goto LABEL_8;
  }
  v12 = 0;
  if ( !*(_DWORD *)(v10 + 64) )
  {
LABEL_8:
    v13 = v58;
    goto LABEL_9;
  }
  do
  {
    v21 = 0;
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v12;
    if ( *(_DWORD *)(a2 + 76) )
    {
      while ( 1 )
      {
        v23 = 32LL * v21;
        if ( *(_DWORD *)(v22 + 16) == *(_DWORD *)(v23 + a2 + 96) )
        {
          v30 = *(_QWORD *)v22 - *(_QWORD *)(v23 + a2 + 80);
          if ( *(_QWORD *)v22 == *(_QWORD *)(v23 + a2 + 80) )
            v30 = *(_QWORD *)(v22 + 8) - *(_QWORD *)(v23 + a2 + 88);
          if ( !v30 && *(_DWORD *)(v22 + 20) == *(_DWORD *)(v23 + a2 + 100) )
          {
            v31 = *(const wchar_t **)(v22 + 24);
            v32 = *(const wchar_t **)(v23 + a2 + 104);
            if ( (v31 == v32 || v31 && v32 && !wcsicmp(v31, v32)) && (*(_DWORD *)(v23 + a2 + 100) != 1 || v60) )
              break;
          }
        }
        if ( ++v21 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_24;
      }
      v13 = 1;
      v58 = 1;
    }
    else
    {
LABEL_24:
      v13 = v58;
    }
    ++v12;
  }
  while ( v12 < *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) );
LABEL_9:
  v14 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v14 + 20) && (LODWORD(v14) = *(_DWORD *)(a2 + 4), (v14 & 8) != 0) )
  {
    v9 = 1;
  }
  else
  {
    v15 = 0;
    v9 = 0;
    do
    {
      if ( v15 >= *(_DWORD *)(a2 + 76) )
        break;
      v14 = *(_QWORD *)(a1 + 24);
      v16 = 0;
      v17 = 32LL * v15;
      if ( *(_DWORD *)(v14 + 80) )
      {
        while ( 1 )
        {
          v18 = 56LL * v16;
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
          if ( *(_DWORD *)(v18 + v19 + 24) == *(_DWORD *)(v17 + a2 + 96) )
          {
            v33 = *(_QWORD *)(v18 + v19 + 8) - *(_QWORD *)(v17 + a2 + 80);
            if ( !v33 )
              v33 = *(_QWORD *)(v18 + v19 + 16) - *(_QWORD *)(v17 + a2 + 88);
            if ( !v33 )
            {
              LODWORD(v14) = *(_DWORD *)(v17 + a2 + 100);
              if ( *(_DWORD *)(v18 + v19 + 28) == (_DWORD)v14 )
              {
                v34 = *(const wchar_t **)(v18 + v19 + 32);
                v35 = *(const wchar_t **)(v17 + a2 + 104);
                if ( v34 == v35 || v34 && v35 && (LODWORD(v14) = wcsicmp(v34, v35), !(_DWORD)v14) )
                {
                  if ( *(_DWORD *)(v17 + a2 + 100) != 1 || v60 )
                    break;
                }
              }
            }
          }
          v14 = *(_QWORD *)(a1 + 24);
          if ( ++v16 >= *(_DWORD *)(v14 + 80) )
            goto LABEL_16;
        }
        v9 = 1;
      }
LABEL_16:
      ++v15;
    }
    while ( !v9 );
  }
  v20 = v13 == 0;
  AddObjectToResultSet = v59;
  if ( v20 && !v9 )
  {
LABEL_19:
    if ( AddObjectToResultSet >= 0 )
      return v14;
    goto LABEL_136;
  }
LABEL_27:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  Buffer = *(_QWORD *)(a2 + 8);
  v25 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
  ExReleasePushLockEx(a1 + 64, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LODWORD(v14) = *(_DWORD *)(a2 + 4);
  if ( (v14 & 2) != 0 )
  {
    if ( !v25 )
    {
      v27 = 0;
      v28 = 0;
      goto LABEL_34;
    }
    goto LABEL_80;
  }
  if ( (v14 & 1) == 0 && !v9 )
  {
    v26 = v25;
    goto LABEL_31;
  }
  v36 = *(_QWORD *)(a1 + 24);
  v37 = *(_DWORD *)(v36 + 20);
  if ( v37 )
  {
    v52 = v37 - 1;
    if ( v52 )
    {
      if ( v52 != 1 )
        goto LABEL_32;
      v53 = *(const wchar_t **)(v36 + 32);
      v26 = 0;
      LOBYTE(v59) = 0;
      if ( !*v53 )
        goto LABEL_32;
      while ( !v26 )
      {
        v26 = wcsicmp(v53, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
        v14 = -1LL;
        LOBYTE(v59) = v26;
        do
          ++v14;
        while ( v53[v14] );
        v53 += v14 + 1;
        if ( !*v53 )
          goto LABEL_56;
      }
    }
    else
    {
      LODWORD(v14) = wcsicmp(*(const wchar_t **)(v36 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL));
      if ( (_DWORD)v14 )
        goto LABEL_32;
      v26 = 1;
      LOBYTE(v59) = 1;
    }
  }
  else
  {
    v26 = 1;
    LOBYTE(v59) = 1;
LABEL_56:
    if ( !v26 )
      goto LABEL_32;
  }
  v14 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v14 + 20) )
  {
    LODWORD(v14) = PiPnpRtlApplyMandatoryFilters(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
                     *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                     0LL,
                     (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                     &v59);
    AddObjectToResultSet = v14;
    if ( (_DWORD)v14 == -1073741772 || (_DWORD)v14 == -1073741275 )
    {
      v26 = 0;
      AddObjectToResultSet = 0;
      LOBYTE(v59) = 0;
    }
    else
    {
      v26 = v59;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_136;
  }
  if ( v26 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v14 + 88) )
    {
      LODWORD(v14) = PiDqQueryEvaluateFilter((_QWORD *)a1, *(void **)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&v59);
      AddObjectToResultSet = v14;
      if ( (_DWORD)v14 == -1073741772 )
      {
        v26 = 0;
        AddObjectToResultSet = 0;
      }
      else
      {
        v26 = v59;
      }
      if ( AddObjectToResultSet < 0 )
        goto LABEL_136;
    }
LABEL_31:
    if ( v26 )
    {
      if ( v25 )
      {
        v28 = 2;
        v27 = v58 != 0;
      }
      else
      {
        v44 = KeGetCurrentThread();
        v28 = 1;
        --v44->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
        AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
        ExReleasePushLockEx(a1 + 64, 0LL);
        LODWORD(v14) = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v27 = 1;
      }
      goto LABEL_34;
    }
  }
LABEL_32:
  if ( v25 )
  {
LABEL_80:
    v43 = KeGetCurrentThread();
    v28 = 3;
    v27 = 1;
    --v43->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(a2 + 8));
    ExReleasePushLockEx(a1 + 64, 0LL);
    LODWORD(v14) = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_34;
  }
  v27 = 0;
  v28 = 0;
LABEL_34:
  if ( AddObjectToResultSet >= 0 )
  {
    if ( !v27 )
      goto LABEL_19;
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(v28, *(_QWORD *)(a2 + 8), a2, &v57);
    if ( AddObjectToResultSet >= 0 )
    {
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      PiDqQueryAppendActionEntry(a1, v57);
      ExReleasePushLockEx(a1 + 64, 0LL);
      LODWORD(v14) = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_19;
    }
  }
LABEL_136:
  v54 = KeGetCurrentThread();
  --v54->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  *(_DWORD *)(a1 + 216) |= 1u;
  PiDqQueryFreeActiveData(a1);
  ExReleasePushLockEx(a1 + 64, 0LL);
  LODWORD(v14) = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
