/*
 * XREFs of VfDeadlockReleaseResource @ 0x1407797A0
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x1407774B0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140777560 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140777610 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseMutant @ 0x1407776D0 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutex @ 0x1407777B0 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseSpinLock @ 0x140777870 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407778E0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierExReleaseFastMutex @ 0x14077FD10 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x14077FDA0 (VerifierExReleaseFastMutexUnsafe.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x140251888 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1402518A0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x14077A280 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x14077A724 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14077A75C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14077AA20 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x14077ACA0 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x14077B0AC (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x14077B200 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x14077B2AC (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14077B420 (ViIsThreadInsidePagingCodePaths.c)
 */

__int64 __fastcall VfDeadlockReleaseResource(const void *a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 v4; // rdi
  int v8; // r14d
  __int64 result; // rax
  __int64 *v10; // r13
  _QWORD *v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned __int8 v14; // si
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int *v18; // rax
  __int64 v19; // rdx
  int *v20; // rsi
  int v21; // eax
  __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 *v26; // rdi
  __int16 v27; // cx
  _DWORD *v28; // rdx
  int v29; // ecx
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rdx
  __int64 v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  _QWORD *v37; // rcx
  _QWORD *v38; // rbx
  unsigned __int8 v39; // [rsp+40h] [rbp-98h]
  PVOID Entry; // [rsp+48h] [rbp-90h] BYREF
  PVOID BackTrace[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v42; // [rsp+60h] [rbp-78h]
  __int128 v43; // [rsp+70h] [rbp-68h]
  __int128 v44; // [rsp+80h] [rbp-58h]

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
  v39 = ViRaiseIrqlToDpcLevel();
  v14 = v39;
  ViDeadlockDetectionLock(v13);
  v17 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v18 = (int *)ViDeadlockSearchResource(a1, &Entry, v15, v16);
    v20 = v18;
    if ( !v18 )
    {
LABEL_57:
      v14 = v39;
      goto LABEL_58;
    }
    v21 = *v18;
    if ( v21 != (_DWORD)v4 )
    {
      if ( v21 == 7 && (unsigned int)(v4 - 5) <= 1 )
      {
        *v20 = v4;
      }
      else
      {
        if ( v21 != 1 || (_DWORD)v4 != 2 )
        {
          ViDeadlockPreprocessOptions(
            byte_14034142C,
            "Releasing lock 0x%p using mismatched API for this lock type.",
            (const void *)0x1009);
          VfReportIssueWithOptions(0xC4u, 4105, (int)a1, *v20, v4, byte_14034142C);
LABEL_56:
          v34 = v42;
          *(_OWORD *)(v20 + 46) = *(_OWORD *)BackTrace;
          v35 = v43;
          *(_OWORD *)(v20 + 50) = v34;
          v36 = v44;
          *(_OWORD *)(v20 + 54) = v35;
          *(_OWORD *)(v20 + 58) = v36;
          goto LABEL_57;
        }
        if ( *((_WORD *)v20 + 3) > 1u )
          *((_WORD *)v20 + 3) = 1;
      }
    }
    v22 = *((_WORD *)v20 + 3);
    if ( v22 )
    {
      v11 = (_QWORD *)*((_QWORD *)v20 + 2);
      LOBYTE(v8) = *v11 != a3;
      if ( (unsigned int)(*v20 - 5) <= 1 )
        v26 = (__int64 *)v11[1];
      else
        v26 = (__int64 *)v11[2];
      v27 = v22 - 1;
      *((_WORD *)v20 + 3) = v27;
      if ( v27 )
      {
        v8 = 0;
      }
      else
      {
        v28 = ViDeadlockGlobals;
        *((_QWORD *)v20 + 2) = 0LL;
        ++v28[8210];
        if ( (int *)v26[7] == v20 )
        {
          *((_DWORD *)v26 + 18) &= ~1u;
          v10 = v26;
        }
        else
        {
          ++v28[8208];
          if ( (ViDeadlockResourceTypeInfo[*(int *)v26[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v20] & 4) == 0 )
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
              byte_140341424,
              "Releasing two locks in reverse order of their acquire.",
              4099LL,
              a1,
              *(_QWORD *)(v26[7] + 8),
              v11);
            VfReportIssueWithOptions(0xC4u, 4099, (int)a1, *(_QWORD *)(v26[7] + 8), (__int64)v11, byte_140341424);
            v28 = ViDeadlockGlobals;
          }
          while ( (int *)v26[7] != v20 )
          {
            v26 = (__int64 *)*v26;
            if ( !v26 )
              goto LABEL_39;
          }
          *((_DWORD *)v26 + 18) &= ~1u;
          v10 = v26;
          if ( (v26[9] & 4) == 0 )
            ++v28[8209];
          *((_DWORD *)v26 + 18) |= 4u;
        }
LABEL_39:
        v29 = v8;
        if ( (unsigned int)(*v20 - 5) <= 1 )
        {
          if ( v11[1] )
          {
            do
            {
              v32 = (__int64 *)v11[1];
              if ( (v32[9] & 1) != 0 )
              {
                v29 = v8;
                if ( (_QWORD *)v32[8] == v11 )
                  break;
              }
              v33 = *v32;
              v29 = v8;
              v11[1] = *v32;
            }
            while ( v33 );
          }
        }
        else if ( v11[2] )
        {
          do
          {
            v30 = (__int64 *)v11[2];
            if ( (v30[9] & 1) != 0 && (_QWORD *)v30[8] == v11 )
              break;
            v31 = *v30;
            v11[2] = *v30;
          }
          while ( v31 );
          v29 = v8;
        }
        if ( !v10 )
          goto LABEL_55;
        v10[8] = 0LL;
        --*((_DWORD *)v11 + 10);
        if ( v29 )
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
      ViDeadlockSearchThread(a3, v19, 0LL);
      ViDeadlockPreprocessOptions(
        &dword_140341430,
        "Releasing lock 0x%p that is not owned by the current thread.",
        (const void *)0x1007);
      v25 = ViDeadlockSearchThread(a3, v23, v24);
      VfReportIssueWithOptions(0xC4u, 4103, (int)a1, (int)v20, v25, &dword_140341430);
    }
    goto LABEL_56;
  }
LABEL_58:
  if ( MEMORY[0xFFFFF78000000320] - v17 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v17;
  ViDeadlockDetectionUnlock(1LL);
  result = ViLowerIrql(v14);
  v37 = Entry;
  if ( Entry )
  {
    do
    {
      v38 = (_QWORD *)*v37;
      result = ViDeadlockFree(v37);
      v37 = v38;
    }
    while ( v38 );
  }
  if ( v8 )
    return ViDeadlockFree(v11);
  return result;
}
