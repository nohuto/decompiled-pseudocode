/*
 * XREFs of VfDeadlockReleaseResource @ 0x1407BB6AC
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x1407B9330 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1407B93F0 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1407B94B0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseMutant @ 0x1407B9590 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutex @ 0x1407B9670 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseSpinLock @ 0x1407B9730 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407B97A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierExReleaseFastMutex @ 0x1407C1D00 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x1407C1D90 (VerifierExReleaseFastMutexUnsafe.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x1402780F8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140278110 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x1407BC164 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x1407BC61C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407BC654 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1407BC91C (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x1407BCBAC (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x1407BCFB8 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x1407BD10C (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x1407BD1B8 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1407BD32C (ViIsThreadInsidePagingCodePaths.c)
 */

__int64 __fastcall VfDeadlockReleaseResource(const void *a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 v4; // rdi
  int v8; // r12d
  __int64 result; // rax
  __int64 *v10; // rbp
  _QWORD *v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned __int8 v14; // si
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int *v18; // rax
  int *v19; // rsi
  int v20; // eax
  __int16 v21; // cx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 *v26; // rdi
  __int16 v27; // cx
  _DWORD *v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _QWORD *v36; // rcx
  _QWORD *v37; // rbx
  unsigned __int8 v38; // [rsp+40h] [rbp-98h]
  PVOID Entry; // [rsp+48h] [rbp-90h] BYREF
  PVOID BackTrace[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v41; // [rsp+60h] [rbp-78h]
  __int128 v42; // [rsp+70h] [rbp-68h]
  __int128 v43; // [rsp+80h] [rbp-58h]

  v4 = (int)a2;
  Entry = 0LL;
  v8 = 0;
  result = ViDeadlockCanProceed(a1, a2);
  if ( !(_DWORD)result )
    return result;
  result = ViIsThreadInsidePagingCodePaths();
  if ( (_DWORD)result )
    return result;
  result = (__int64)ViDeadlockGlobals;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return result;
  result = (unsigned int)ViDeadlockChildrenCountMaximum;
  if ( *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    return result;
  v10 = 0LL;
  v11 = 0LL;
  v12 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  if ( !(_WORD)v12 )
  {
    BackTrace[0] = a4;
    v12 = 1LL;
  }
  if ( (unsigned int)v12 < 8 )
    BackTrace[v12] = 0LL;
  v38 = ViRaiseIrqlToDpcLevel();
  v14 = v38;
  ViDeadlockDetectionLock(v13);
  v17 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v18 = (int *)ViDeadlockSearchResource(a1, &Entry, v15, v16);
    v19 = v18;
    if ( !v18 )
    {
LABEL_57:
      v14 = v38;
      goto LABEL_58;
    }
    v20 = *v18;
    if ( v20 == (_DWORD)v4 )
      goto LABEL_15;
    if ( v20 == 7 )
    {
      if ( (unsigned int)(v4 - 5) <= 1 )
      {
        *v19 = v4;
        goto LABEL_15;
      }
    }
    else if ( v20 == 1 && (_DWORD)v4 == 2 )
    {
      if ( *((_WORD *)v19 + 3) > 1u )
        *((_WORD *)v19 + 3) = 1;
LABEL_15:
      v21 = *((_WORD *)v19 + 3);
      if ( v21 )
      {
        v11 = (_QWORD *)*((_QWORD *)v19 + 2);
        v25 = *v11;
        if ( (unsigned int)(*v19 - 5) <= 1 )
          v26 = (__int64 *)v11[1];
        else
          v26 = (__int64 *)v11[2];
        v27 = v21 - 1;
        *((_WORD *)v19 + 3) = v27;
        if ( v27 )
        {
          v8 = 0;
        }
        else
        {
          v28 = ViDeadlockGlobals;
          *((_QWORD *)v19 + 2) = 0LL;
          ++v28[8210];
          if ( (int *)v26[7] == v19 )
          {
            *((_DWORD *)v26 + 18) &= ~1u;
            v10 = v26;
          }
          else
          {
            ++v28[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v26[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v19] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v26[7] + 8),
                v11,
                a1);
              ViDeadlockPreprocessOptions(
                byte_140359AC4,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v26[7] + 8),
                v11);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v26[7] + 8),
                (__int64)v11,
                byte_140359AC4);
            }
            while ( (int *)v26[7] != v19 )
            {
              v26 = (__int64 *)*v26;
              if ( !v26 )
                goto LABEL_39;
            }
            *((_DWORD *)v26 + 18) &= ~1u;
            v10 = v26;
            if ( (v26[9] & 4) == 0 )
              ++*((_DWORD *)ViDeadlockGlobals + 8209);
            *((_DWORD *)v26 + 18) |= 4u;
          }
LABEL_39:
          if ( (unsigned int)(*v19 - 5) <= 1 )
          {
            if ( v11[1] )
            {
              do
              {
                v31 = (__int64 *)v11[1];
                if ( (v31[9] & 1) != 0 && (_QWORD *)v31[8] == v11 )
                  break;
                v32 = *v31;
                v11[1] = *v31;
              }
              while ( v32 );
            }
          }
          else if ( v11[2] )
          {
            do
            {
              v29 = (__int64 *)v11[2];
              if ( (v29[9] & 1) != 0 && (_QWORD *)v29[8] == v11 )
                break;
              v30 = *v29;
              v11[2] = *v29;
            }
            while ( v30 );
          }
          if ( !v10 )
            goto LABEL_55;
          v10[8] = 0LL;
          --*((_DWORD *)v11 + 10);
          if ( v25 != a3 )
            *((_DWORD *)v10 + 18) |= 4u;
          if ( *((_DWORD *)v11 + 10) )
          {
LABEL_55:
            v8 = 0;
          }
          else
          {
            v8 = 1;
            ViDeadlockRemoveThread((ULONG_PTR)v11);
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196)
             && *((_DWORD *)ViDeadlockGlobals + 8282) <= ViDeadlockChildrenCountMaximum )
      {
        ViDeadlockSearchThread(a3, 0LL, 1LL);
        ViDeadlockPreprocessOptions(
          &dword_140359AC0,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v24 = ViDeadlockSearchThread(a3, v22, v23);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v19, v24, &dword_140359AC0);
      }
      goto LABEL_56;
    }
    ViDeadlockPreprocessOptions(
      byte_140359ACC,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      (const void *)0x1009);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v19, v4, byte_140359ACC);
LABEL_56:
    v33 = v41;
    *(_OWORD *)(v19 + 46) = *(_OWORD *)BackTrace;
    v34 = v42;
    *(_OWORD *)(v19 + 50) = v33;
    v35 = v43;
    *(_OWORD *)(v19 + 54) = v34;
    *(_OWORD *)(v19 + 58) = v35;
    goto LABEL_57;
  }
LABEL_58:
  if ( MEMORY[0xFFFFF78000000320] - v17 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v17;
  ViDeadlockDetectionUnlock(1LL);
  result = ViLowerIrql(v14);
  v36 = Entry;
  if ( Entry )
  {
    do
    {
      v37 = (_QWORD *)*v36;
      result = ViDeadlockFree(v36);
      v36 = v37;
    }
    while ( v37 );
  }
  if ( v8 )
    return ViDeadlockFree(v11);
  return result;
}
