/*
 * XREFs of DpiCreateSpbResourceRecord @ 0x1C01CD530
 * Callers:
 *     DpOpenSpbResource @ 0x1C01CCDB0 (DpOpenSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCreateSpbResourceRecord(ULONG_PTR a1, ULONG_PTR a2, struct _EX_RUNDOWN_REF **a3)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  __int64 v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 result; // rax
  PKEVENT NotificationEvent; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF **v16; // rcx

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = WdLogNewEntry5_WdLowResource(v7);
    v10 = -1073741801;
    *(_QWORD *)(v9 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v9);
    return v10;
  }
  LODWORD(PoolWithTag[2].Count) = 1953656900;
  HIDWORD(PoolWithTag[2].Ptr) = 12;
  PoolWithTag[4].Count = a1;
  PoolWithTag[5].Count = a2;
  LODWORD(PoolWithTag[6].Count) = 1;
  NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)&PoolWithTag[7]);
  v8[8].Count = (ULONG_PTR)NotificationEvent;
  if ( !NotificationEvent )
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    v10 = -1073741670;
    *(_QWORD *)(v15 + 24) = -1073741670LL;
    WdLogEvent5_WdError(v15);
    ExFreePoolWithTag(a3, 0);
    return v10;
  }
  ExInitializeRundownProtection(v8 + 3);
  v16 = *(struct _EX_RUNDOWN_REF ***)(a1 + 2576);
  if ( *v16 != (struct _EX_RUNDOWN_REF *)(a1 + 2568) )
    __fastfail(3u);
  v8->Count = a1 + 2568;
  v8[1].Count = (ULONG_PTR)v16;
  *v16 = v8;
  *(_QWORD *)(a1 + 2576) = v8;
  result = 0LL;
  *a3 = v8;
  return result;
}
