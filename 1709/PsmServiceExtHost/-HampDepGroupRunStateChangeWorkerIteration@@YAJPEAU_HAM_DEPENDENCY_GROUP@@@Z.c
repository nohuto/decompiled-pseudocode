/*
 * XREFs of ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045038 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800446D8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18004478C (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_LIST_ENTRY@@PEAU_HAM_DEPEN.c)
 *     ?HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180044AC0 (-HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180044B08 (-HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180044B28 (-HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044CF4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampDepGroupProcessActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044DE4 (-HampDepGroupProcessActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800454E0 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampDepGroupRunStateChangeWorkerIteration(struct _HAM_DEPENDENCY_GROUP *a1)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  struct _LIST_ENTRY *v4; // r8
  unsigned __int64 v5; // rcx
  __int64 i; // rdx
  struct _LIST_ENTRY *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-79h] BYREF
  struct _LIST_ENTRY v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-59h] BYREF
  struct _HAM_ACTIVITY *v15; // [rsp+68h] [rbp-41h]
  unsigned int v16; // [rsp+70h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-29h] BYREF
  int *v18; // [rsp+A0h] [rbp-9h]
  int v19; // [rsp+A8h] [rbp-1h]
  int v20; // [rsp+ACh] [rbp+3h]
  struct _HAM_DEPENDENCY_GROUP *v21; // [rsp+B0h] [rbp+7h]
  int v22; // [rsp+B8h] [rbp+Fh]
  int v23; // [rsp+BCh] [rbp+13h]
  __int64 *v24; // [rsp+C0h] [rbp+17h]
  int v25; // [rsp+C8h] [rbp+1Fh]
  int v26; // [rsp+CCh] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp+27h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B6BE, v2, v3, 2u, &pData);
  if ( !HampDepGroupIsCurrentThreadWorker(a1) )
    __int2c();
  v12.Blink = &v12;
  v12.Flink = &v12;
  memset_0(v14, 0, 0x28uLL);
  v14[1] = v14;
  v14[0] = v14;
  RmpAcquireGlobalLock();
  while ( !(unsigned int)HampDepGroupLockAndReferenceMembers(a1, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v14) )
  {
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v14);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v14);
  }
  v4 = &v12;
  v5 = *((_QWORD *)a1 + 7) & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = *((_QWORD *)a1 + 13);
  v12.Blink = &v12;
  v12.Flink = &v12;
  for ( i = (v5 - 648) & -(__int64)(v5 != 0); i; i = (__int64)HampDepGroupGetNextHost((struct _RM_HAM_ACTIVITY_HOST *)i) )
  {
    if ( (*(_DWORD *)(i + 628) & 0x1000) != 0 )
    {
      v7 = (struct _LIST_ENTRY *)(i + 688);
      if ( v4->Flink != &v12 )
        __fastfail(3u);
      *(_QWORD *)(i + 696) = v4;
      v7->Flink = &v12;
      v4->Flink = v7;
      v12.Blink = (struct _LIST_ENTRY *)(i + 688);
      *(_DWORD *)(i + 704) |= 2u;
    }
  }
  HampDepGroupEvaluateDependencies(a1, &v12, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v14);
  HampDepGroupReleaseLockExclusive(a1);
  HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v14);
  RmpReleaseGlobalLock();
  HampDepGroupProcessActionForGroup((__int64)a1, 3u);
  v11 = HampDepGroupProcessActionForGroup((__int64)a1, 2u);
  if ( !v15 || (v11 = HampDepGroupProcessActionForActivity(v15, (v16 >> 1) & 7), v11 >= 0) )
  {
    v11 = HampDepGroupProcessActionForGroup((__int64)a1, 1u);
    if ( v11 >= 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( (v16 & 0xE) == 2 )
        HampDepGroupProcessActionForActivity(v15, 2);
      HampDepGroupProcessActionForGroup((__int64)a1, 4u);
    }
  }
  HampDepGroupAcquireLockExclusive(a1);
  *((_QWORD *)a1 + 12) = v13;
  HampDepGroupReleaseLockExclusive(a1);
  RmpAcquireGlobalLock();
  HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v14);
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = &v11;
    v24 = &v13;
    v19 = 4;
    v21 = a1;
    v22 = 8;
    v25 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B60B, v8, v9, 5u, &v17);
  }
  return (unsigned int)v11;
}
