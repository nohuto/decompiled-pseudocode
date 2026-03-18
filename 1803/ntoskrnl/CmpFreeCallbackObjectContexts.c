/*
 * XREFs of CmpFreeCallbackObjectContexts @ 0x1406EDD90
 * Callers:
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall CmpFreeCallbackObjectContexts(__int64 a1)
{
  char v1; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID ***v6; // rbx
  PVOID **v7; // rax
  PVOID **v8; // rcx
  __int64 *v9; // rdx
  PVOID *v10; // rcx
  PVOID v11; // rcx
  PVOID *result; // rax
  __int64 v13; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-30h] BYREF
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  v1 = 0;
  p_P = &P;
  P = &P;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v6 = (PVOID ***)(a1 + 72);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (PVOID **)v6 )
      break;
    if ( v7[1] != (PVOID *)v6 || (v8 = (PVOID **)*v7, (*v7)[1] != v7) )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = (PVOID *)v6;
    v4 = (__int64)v7[2];
    v9 = (__int64 *)v7[3];
    if ( *(PVOID ***)(v4 + 8) != v7 + 2 || (PVOID **)*v9 != v7 + 2 )
      __fastfail(3u);
    *v9 = v4;
    *(_QWORD *)(v4 + 8) = v9;
    if ( v9 == (__int64 *)v4 )
      v1 = 1;
    v10 = p_P;
    if ( *p_P != &P )
      __fastfail(3u);
    v7[1] = p_P;
    *v7 = &P;
    *v10 = v7;
    p_P = (PVOID *)v7;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v4, v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v1 )
  {
    _InterlockedOr(v14, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  while ( 1 )
  {
    v11 = P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v13 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v13 + 8) = &P;
    ExFreePoolWithTag(v11, 0x63634D43u);
  }
  return result;
}
