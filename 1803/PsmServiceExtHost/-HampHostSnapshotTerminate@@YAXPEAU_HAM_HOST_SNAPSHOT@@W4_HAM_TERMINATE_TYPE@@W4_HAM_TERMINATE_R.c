/*
 * XREFs of ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180005CE8
 * Callers:
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180003B04 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800351D8 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800665A8 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800688C4 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180005E80 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003319C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotTerminate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  struct _HAM_TERMINATION_HOST_BLOCK *Next; // rax
  __int64 *v11; // rbp
  int UnbiasedInterruptTimeMs64; // r15d
  struct _RM_HAM_ACTIVITY_HOST **v13; // rdi
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax
  bool v15; // zf
  struct _RM_HAM_ACTIVITY_HOST *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r13
  BOOL v20; // edi
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+90h] [rbp+28h]

  Next = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    Next = *(struct _HAM_TERMINATION_HOST_BLOCK **)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  while ( Next )
  {
    HampHostQueueTerminate(*(_QWORD *)Next, a2, a3, a4, 0);
    Next = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1);
  }
  v11 = &v21;
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v13 = 0LL;
  result = (struct _HAM_TERMINATION_HOST_BLOCK *)(a5 + UnbiasedInterruptTimeMs64);
  v15 = a5 == -1;
  v23 = a5 + UnbiasedInterruptTimeMs64;
  if ( v15 )
    v11 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v13 = *(struct _RM_HAM_ACTIVITY_HOST ***)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( v13 )
  {
    do
    {
      v16 = *v13;
      HampHostAcquireLockSharedEx(*v13, 0);
      v19 = v13 + 1;
      do
      {
        CempLockTrackerMarkReleased(v18, v17, 1LL);
        RtlReleaseSRWLockShared(v16);
        if ( v11 )
          v21 = -10000LL * (unsigned int)(v23 - UnbiasedInterruptTimeMs64);
        RtlWaitOnAddress((char *)v16 + 768, v19, 8LL, v11);
        if ( a5 == -1 )
        {
          v20 = 0;
        }
        else
        {
          UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
          v20 = v23 - UnbiasedInterruptTimeMs64 > a5;
        }
        HampHostAcquireLockSharedEx(v16, 0);
      }
      while ( *v19 == *((_QWORD *)v16 + 96) && !v20 );
      CempLockTrackerMarkReleased(v18, v17, 1LL);
      RtlReleaseSRWLockShared(v16);
      result = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1);
      v13 = (struct _RM_HAM_ACTIVITY_HOST **)result;
    }
    while ( result );
  }
  return result;
}
