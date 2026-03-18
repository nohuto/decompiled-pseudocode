/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x1404B83D4
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1404B8940 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14004C420 (RtlLookupElementGenericTableAvl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140489ECC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1404B64A8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404B8388 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryEvaluateFilter @ 0x1404B9CB0 (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x1404BD794 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1404BD7E4 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqSameUserHive @ 0x140698B50 (PiDqSameUserHive.c)
 */

int __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int AddObjectToResultSet; // r12d
  char v8; // r8
  char v9; // r13
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // r14d
  unsigned int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KTHREAD *CurrentThread; // rax
  bool v23; // r15
  char v24; // cl
  bool v25; // di
  unsigned int v26; // r15d
  int v27; // r12d
  struct _KTHREAD *v28; // rax
  __int64 v29; // rcx
  const wchar_t *v30; // rcx
  const wchar_t *v31; // rdx
  __int64 v32; // rcx
  const wchar_t *v33; // rcx
  const wchar_t *v34; // rdx
  unsigned int v35; // r13d
  unsigned int v36; // r12d
  __int64 v37; // r15
  __int64 v38; // rdi
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // rcx
  int v42; // eax
  struct _KTHREAD *v43; // rax
  struct _KTHREAD *v44; // rax
  unsigned int v45; // r15d
  __int64 v46; // r14
  const wchar_t *i; // rdi
  __int64 v48; // rax
  const wchar_t *v49; // r14
  __int64 v50; // rax
  int v51; // ecx
  const wchar_t *v52; // rdi
  struct _KTHREAD *v53; // rax
  __int64 Buffer; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-10h]
  __int64 v57; // [rsp+48h] [rbp-8h] BYREF
  char v58; // [rsp+98h] [rbp+48h]
  __int64 v59; // [rsp+A0h] [rbp+50h] BYREF
  char v60; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  LODWORD(Buffer) = 0;
  v56 = 0;
  v58 = 0;
  AddObjectToResultSet = 0;
  LOBYTE(v59) = 0;
  v8 = 0;
  v60 = 0;
  v9 = 0;
  LOBYTE(a4) = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_24;
  if ( (v4 & 4) != 0 )
  {
    LODWORD(Buffer) = PiDqSameUserHive(a1 + 32, a2 + 24, &v60, a4);
    if ( (int)Buffer < 0 )
      goto LABEL_137;
    LOBYTE(a4) = v60;
    v8 = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40);
  if ( (v11 & 2) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
LABEL_74:
      v58 = 1;
      goto LABEL_12;
    }
    v45 = 0;
    if ( !*(_DWORD *)(a2 + 76) )
      goto LABEL_12;
    while ( 1 )
    {
      v46 = 32LL * v45;
      if ( *(_DWORD *)(v46 + a2 + 100) != 1 || (_BYTE)a4 )
      {
        if ( !*(_QWORD *)(v46 + a2 + 104) )
          goto LABEL_74;
        for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v48 + 1 )
        {
          if ( !wcsicmp(*(const wchar_t **)(v46 + a2 + 104), i) )
            goto LABEL_74;
          v48 = -1LL;
          do
            ++v48;
          while ( i[v48] );
        }
      }
      if ( ++v45 >= *(_DWORD *)(a2 + 76) )
        goto LABEL_12;
      LOBYTE(a4) = v60;
    }
  }
  if ( (v11 & 4) == 0 )
  {
    v12 = 0;
    if ( *(_DWORD *)(v10 + 64) )
    {
      do
      {
        v13 = 0;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v12;
        if ( *(_DWORD *)(a2 + 76) )
        {
          while ( 1 )
          {
            v15 = 32LL * v13;
            if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v15 + a2 + 96) )
            {
              v29 = *(_QWORD *)v14 - *(_QWORD *)(v15 + a2 + 80);
              if ( *(_QWORD *)v14 == *(_QWORD *)(v15 + a2 + 80) )
                v29 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v15 + a2 + 88);
              if ( !v29 && *(_DWORD *)(v14 + 20) == *(_DWORD *)(v15 + a2 + 100) )
              {
                v30 = *(const wchar_t **)(v14 + 24);
                v31 = *(const wchar_t **)(v15 + a2 + 104);
                if ( (v30 == v31 || v30 && v31 && !wcsicmp(v30, v31)) && (*(_DWORD *)(v15 + a2 + 100) != 1 || v60) )
                  break;
              }
            }
            if ( ++v13 >= *(_DWORD *)(a2 + 76) )
              goto LABEL_11;
          }
          v58 = 1;
        }
LABEL_11:
        ++v12;
      }
      while ( v12 < *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) );
    }
    goto LABEL_12;
  }
  v35 = 0;
  if ( !*(_DWORD *)(v10 + 64) )
  {
    v9 = 0;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v36 = 0;
    v37 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v35;
    if ( *(_DWORD *)(a2 + 76) )
      break;
LABEL_53:
    if ( ++v35 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) )
      goto LABEL_58;
    LOBYTE(a4) = v60;
  }
  while ( 1 )
  {
    v38 = 32LL * v36;
    if ( *(_DWORD *)(v37 + 16) != *(_DWORD *)(v38 + a2 + 96) )
      goto LABEL_52;
    v41 = *(_QWORD *)v37 - *(_QWORD *)(v38 + a2 + 80);
    if ( *(_QWORD *)v37 == *(_QWORD *)(v38 + a2 + 80) )
      v41 = *(_QWORD *)(v37 + 8) - *(_QWORD *)(v38 + a2 + 88);
    if ( v41 )
      goto LABEL_52;
    v42 = *(_DWORD *)(v38 + a2 + 100);
    if ( *(_DWORD *)(v37 + 20) != v42 || v42 == 1 && !(_BYTE)a4 )
      goto LABEL_52;
    if ( !*(_QWORD *)(v38 + a2 + 104) )
      break;
    v49 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL);
    if ( *v49 )
    {
      while ( wcsicmp(*(const wchar_t **)(v38 + a2 + 104), v49) )
      {
        v50 = -1LL;
        do
          ++v50;
        while ( v49[v50] );
        v49 += v50 + 1;
        if ( !*v49 )
        {
          v8 = v58;
          goto LABEL_108;
        }
      }
      v8 = 1;
      v58 = 1;
    }
LABEL_108:
    if ( v8 )
      goto LABEL_58;
LABEL_52:
    LOBYTE(a4) = v60;
    if ( ++v36 >= *(_DWORD *)(a2 + 76) )
      goto LABEL_53;
  }
  v58 = 1;
LABEL_58:
  v9 = v59;
LABEL_12:
  v16 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v16 + 20) )
  {
LABEL_15:
    v17 = 0;
    do
    {
      if ( v17 >= *(_DWORD *)(a2 + 76) )
        break;
      v16 = *(_QWORD *)(a1 + 24);
      v18 = 0;
      v19 = 32LL * v17;
      if ( *(_DWORD *)(v16 + 80) )
      {
        while ( 1 )
        {
          v20 = 56LL * v18;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
          if ( *(_DWORD *)(v20 + v21 + 24) == *(_DWORD *)(v19 + a2 + 96) )
          {
            v32 = *(_QWORD *)(v20 + v21 + 8) - *(_QWORD *)(v19 + a2 + 80);
            if ( !v32 )
              v32 = *(_QWORD *)(v20 + v21 + 16) - *(_QWORD *)(v19 + a2 + 88);
            if ( !v32 )
            {
              LODWORD(v16) = *(_DWORD *)(v19 + a2 + 100);
              if ( *(_DWORD *)(v20 + v21 + 28) == (_DWORD)v16 )
              {
                v33 = *(const wchar_t **)(v20 + v21 + 32);
                v34 = *(const wchar_t **)(v19 + a2 + 104);
                if ( v33 == v34 || v33 && v34 && (LODWORD(v16) = wcsicmp(v33, v34), !(_DWORD)v16) )
                {
                  if ( *(_DWORD *)(v19 + a2 + 100) != 1 || v60 )
                    break;
                }
              }
            }
          }
          v16 = *(_QWORD *)(a1 + 24);
          if ( ++v18 >= *(_DWORD *)(v16 + 80) )
            goto LABEL_20;
        }
        v9 = 1;
      }
LABEL_20:
      ++v17;
    }
    while ( !v9 );
  }
  else
  {
    LODWORD(v16) = *(_DWORD *)(a2 + 4);
    if ( (v16 & 8) == 0 )
    {
      v9 = 0;
      goto LABEL_15;
    }
    v9 = 1;
  }
  AddObjectToResultSet = Buffer;
  if ( v58 || v9 )
  {
LABEL_24:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    Buffer = *(_QWORD *)(a2 + 8);
    v23 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
    ExReleasePushLockEx(a1 + 64, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    LODWORD(v16) = *(_DWORD *)(a2 + 4);
    if ( (v16 & 2) != 0 )
    {
      if ( !v23 )
      {
        v25 = 0;
        v26 = 0;
        goto LABEL_31;
      }
      goto LABEL_82;
    }
    if ( (v16 & 1) != 0 || v9 )
    {
      v39 = *(_QWORD *)(a1 + 24);
      v40 = *(_DWORD *)(v39 + 20);
      if ( v40 )
      {
        v51 = v40 - 1;
        if ( v51 )
        {
          if ( v51 != 1 )
            goto LABEL_29;
          v52 = *(const wchar_t **)(v39 + 32);
          v24 = 0;
          LOBYTE(v59) = 0;
          if ( !*v52 )
            goto LABEL_29;
          while ( !v24 )
          {
            v24 = wcsicmp(v52, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
            v16 = -1LL;
            LOBYTE(v59) = v24;
            do
              ++v16;
            while ( v52[v16] );
            v52 += v16 + 1;
            if ( !*v52 )
              goto LABEL_61;
          }
        }
        else
        {
          LODWORD(v16) = wcsicmp(*(const wchar_t **)(v39 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL));
          if ( (_DWORD)v16 )
            goto LABEL_29;
          v24 = 1;
          LOBYTE(v59) = 1;
        }
      }
      else
      {
        v24 = 1;
        LOBYTE(v59) = 1;
LABEL_61:
        if ( !v24 )
          goto LABEL_29;
      }
      v16 = *(_QWORD *)(a1 + 24);
      if ( !*(_DWORD *)(v16 + 20) )
      {
        LODWORD(v16) = PiPnpRtlApplyMandatoryFilters(
                         *(__int64 *)&PiPnpRtlCtx,
                         *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL),
                         *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                         0LL,
                         (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                         &v59);
        AddObjectToResultSet = v16;
        if ( (_DWORD)v16 == -1073741772 || (_DWORD)v16 == -1073741275 )
        {
          v24 = 0;
          AddObjectToResultSet = 0;
          LOBYTE(v59) = 0;
        }
        else
        {
          v24 = v59;
        }
        if ( AddObjectToResultSet < 0 )
          goto LABEL_137;
      }
      if ( !v24 )
      {
LABEL_29:
        if ( !v23 )
        {
          v25 = 0;
          v26 = v56;
LABEL_31:
          if ( AddObjectToResultSet >= 0 )
          {
            if ( !v25 )
              return v16;
            v27 = PiDqQueryActionQueueEntryCreate(v26, *(_QWORD *)(a2 + 8), a2, &v57);
            if ( v27 >= 0 )
            {
              v28 = KeGetCurrentThread();
              --v28->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
              PiDqQueryAppendActionEntry(a1, v57);
              ExReleasePushLockEx(a1 + 64, 0LL);
              LODWORD(v16) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              return v16;
            }
          }
LABEL_137:
          v53 = KeGetCurrentThread();
          --v53->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
          *(_DWORD *)(a1 + 216) |= 1u;
          PiDqQueryFreeActiveData(a1);
          ExReleasePushLockEx(a1 + 64, 0LL);
          LODWORD(v16) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return v16;
        }
LABEL_82:
        v43 = KeGetCurrentThread();
        v25 = 1;
        v26 = 3;
        --v43->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
        PiDqQueryDeleteObjectFromResultSet(a1, *(unsigned int **)(a2 + 8));
        ExReleasePushLockEx(a1 + 64, 0LL);
        LODWORD(v16) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_31;
      }
      v16 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v16 + 88) )
      {
        LODWORD(v16) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), &v59);
        AddObjectToResultSet = v16;
        if ( (_DWORD)v16 == -1073741772 )
        {
          v24 = 0;
          AddObjectToResultSet = 0;
        }
        else
        {
          v24 = v59;
        }
        if ( AddObjectToResultSet < 0 )
          goto LABEL_137;
      }
    }
    else
    {
      v24 = v23;
    }
    if ( v24 )
    {
      if ( v23 )
      {
        v26 = 2;
        v25 = v58 != 0;
      }
      else
      {
        v44 = KeGetCurrentThread();
        v26 = 1;
        --v44->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
        AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
        ExReleasePushLockEx(a1 + 64, 0LL);
        LODWORD(v16) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v25 = 1;
      }
      goto LABEL_31;
    }
    goto LABEL_29;
  }
  return v16;
}
