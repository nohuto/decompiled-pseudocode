/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x140528A70
 * Callers:
 *     PiPnpRtlObjectEventCallback @ 0x140528A40 (PiPnpRtlObjectEventCallback.c)
 *     PiDqIrpPropertySet @ 0x1406C42C0 (PiDqIrpPropertySet.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140528F4C (PiPnpRtlObjectEventDispatch.c)
 *     PiDmObjectProcessPropertyChange @ 0x140528FC4 (PiDmObjectProcessPropertyChange.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x14058238C (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1406C4660 (PiDqObjectManagerMakeInconsistent.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *v9; // rax
  int PWSTR; // r15d
  void *v11; // rdx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  _DWORD *v16; // rcx
  __int128 *v17; // rax
  const wchar_t *v18; // rdi
  __int128 v19; // xmm0
  unsigned int v20; // r13d
  int v21; // eax
  char *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  const wchar_t *v27; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v29; // rbx
  _RTL_AVL_TABLE *v30; // rcx
  int v31; // eax
  ULONG_PTR v32; // rcx
  struct _KTHREAD *v33; // rax
  __int64 v34; // rcx
  int v35; // ebx
  void *v36; // r8
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rax
  __int64 *i; // rdi
  __int64 *v40; // rax
  __int64 v41; // rbx
  _QWORD *v42; // rbx
  void **v43; // rcx
  char *v44; // rbx
  char *v45; // rbx
  char *v46; // rax
  char **v47; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v49; // rbx
  char *v50; // rbx
  char *v51; // rax
  char **v52; // rcx
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v55[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v57; // [rsp+48h] [rbp-28h]
  __int128 v58; // [rsp+58h] [rbp-18h] BYREF

  if ( (int)a2 < 6 )
  {
    P = 0LL;
    Src = 0LL;
    if ( a3 == 1 )
    {
LABEL_62:
      ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(a2);
      if ( ObjectManagerForPnpObjectType )
        PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
      goto LABEL_21;
    }
    if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) < 0
      || (v9 = KeGetCurrentThread(),
          --v9->KernelApcDisable,
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u),
          PWSTR = PiPnpRtlObjectEventCreate(a1, a2, (__int64)P, &Src),
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock),
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread()),
          PWSTR < 0) )
    {
      v11 = Src;
LABEL_56:
      if ( v11 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        if ( !*((_QWORD *)Src + 7) )
        {
          v49 = (char *)P;
          RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
          v50 = v49 + 128;
          v51 = (char *)Src + 56;
          v52 = (char **)*((_QWORD *)v50 + 1);
          if ( *v52 != v50 )
            __fastfail(3u);
          *(_QWORD *)v51 = v50;
          *((_QWORD *)v51 + 1) = v52;
          *v52 = v51;
          *((_QWORD *)v50 + 1) = v51;
        }
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      goto LABEL_62;
    }
    v11 = Src;
    if ( Src )
    {
      v12 = a3 - 2;
      if ( !v12 )
      {
        *((_DWORD *)Src + 1) |= 1u;
        goto LABEL_19;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        if ( !(_DWORD)v14 )
        {
          PiDmObjectProcessPropertyChange(
            a2,
            a1,
            *((_QWORD *)Src + 1),
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            (__int64)v55);
          if ( v55[0] )
          {
LABEL_19:
            v11 = Src;
            goto LABEL_20;
          }
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
          v16 = Src;
          if ( !*((_QWORD *)Src + 7) )
          {
            v17 = *(__int128 **)(a4 + 16);
            v18 = *(const wchar_t **)(a4 + 8);
            v19 = *v17;
            v20 = *((_DWORD *)v17 + 4);
            *(_QWORD *)&v58 = __PAIR64__(a5, v20);
            v57 = v19;
            *((_QWORD *)&v58 + 1) = v18;
            if ( *((_DWORD *)Src + 19) )
            {
              do
              {
                if ( v20 == v16[8 * v14 + 24] )
                {
                  v25 = 8LL * (unsigned int)v14;
                  v26 = v57 - *(_QWORD *)&v16[v25 + 20];
                  if ( (_QWORD)v57 == *(_QWORD *)&v16[v25 + 20] )
                    v26 = *((_QWORD *)&v57 + 1) - *(_QWORD *)&v16[v25 + 22];
                  if ( !v26 && a5 == v16[v25 + 25] )
                  {
                    v27 = *(const wchar_t **)&v16[v25 + 26];
                    if ( v18 == v27 )
                      goto LABEL_18;
                    if ( v18 && v27 )
                    {
                      if ( !wcsicmp(v18, v27) )
                        goto LABEL_18;
                      v16 = Src;
                    }
                  }
                }
                v14 = (unsigned int)(v14 + 1);
              }
              while ( (unsigned int)v14 < v16[19] );
            }
            if ( a5 == 1 )
            {
              v31 = v16[1];
              if ( (v31 & 4) == 0 )
              {
                v16[1] = v31 | 4;
                SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
                v16 = Src;
              }
            }
            v21 = v16[18];
            if ( v16[19] != v21 )
              goto LABEL_16;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(2 * v21) + 80, 0x41706E50u);
            v29 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src, 32LL * *((unsigned int *)Src + 19) + 80);
              v30 = (_RTL_AVL_TABLE *)((char *)P + 24);
              v29[18] *= 2;
              *(_QWORD *)RtlLookupElementGenericTableAvl(v30, &Src) = v29;
              ExFreePoolWithTag(Src, 0x41706E50u);
              Src = v29;
LABEL_16:
              PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v58 + 1);
              if ( PWSTR >= 0 )
              {
                v22 = (char *)Src;
                v23 = v58;
                v24 = 32LL * *((unsigned int *)Src + 19);
                *(_OWORD *)((char *)Src + v24 + 80) = v57;
                *(_OWORD *)&v22[v24 + 96] = v23;
                ++*((_DWORD *)Src + 19);
              }
              goto LABEL_18;
            }
            PWSTR = -1073741670;
          }
LABEL_18:
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_19;
        }
        if ( (_DWORD)v14 == 1 )
        {
          *((_DWORD *)Src + 1) |= 8u;
          goto LABEL_19;
        }
      }
      else
      {
        *((_DWORD *)Src + 1) |= 2u;
        v32 = *((_QWORD *)Src + 1);
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v32, 0LL);
        v34 = *((_QWORD *)Src + 1);
        v35 = *(_DWORD *)(v34 + 32);
        *(_DWORD *)(v34 + 32) = v35 & 0xFFFFFFFE;
        ExReleasePushLockEx(*((_QWORD *)Src + 1), 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( (v35 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(a2, a1, v36);
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
        for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; i = (__int64 *)*i )
        {
          if ( i != P )
          {
            v40 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), &Src);
            if ( v40 )
            {
              v41 = *v40;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), v40);
              v42 = (_QWORD *)(v41 + 56);
              v43 = (void **)i[17];
              if ( *v43 != i + 16 )
                __fastfail(3u);
              *v42 = i + 16;
              v42[1] = v43;
              *v43 = v42;
              i[17] = (__int64)v42;
            }
          }
        }
        ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PiPnpRtlObjectEventDispatch(Src);
        v44 = (char *)P;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
        v45 = v44 + 128;
        v46 = (char *)Src + 56;
        v47 = (char **)*((_QWORD *)v45 + 1);
        if ( *v47 != v45 )
          __fastfail(3u);
        *((_QWORD *)Src + 8) = v47;
        *(_QWORD *)v46 = v45;
        *v47 = v46;
        *((_QWORD *)v45 + 1) = v46;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v11 = 0LL;
        Src = 0LL;
      }
    }
LABEL_20:
    if ( PWSTR >= 0 )
    {
LABEL_21:
      if ( P )
        PiPnpRtlEndOperation(P);
      return;
    }
    goto LABEL_56;
  }
}
