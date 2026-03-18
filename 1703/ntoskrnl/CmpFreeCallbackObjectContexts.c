/*
 * XREFs of CmpFreeCallbackObjectContexts @ 0x140660A04
 * Callers:
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall CmpFreeCallbackObjectContexts(__int64 a1)
{
  char v1; // di
  struct _KTHREAD *CurrentThread; // rax
  PVOID ***v4; // rbx
  PVOID **v5; // rax
  PVOID *v6; // rcx
  PVOID *v7; // r8
  PVOID ***v8; // rdx
  PVOID *v9; // rcx
  PVOID v10; // rcx
  PVOID *result; // rax
  PVOID *v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-30h] BYREF
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  v1 = 0;
  p_P = &P;
  P = &P;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v4 = (PVOID ***)(a1 + 72);
  while ( *v4 != (PVOID **)v4 )
  {
    v5 = *v4;
    v6 = **v4;
    if ( (*v4)[1] != (PVOID *)v4 || v6[1] != v5 )
      __fastfail(3u);
    *v4 = (PVOID **)v6;
    v6[1] = v4;
    v7 = v5[2];
    v8 = (PVOID ***)v5[3];
    if ( v7[1] != v5 + 2 || *v8 != v5 + 2 )
      __fastfail(3u);
    *v8 = (PVOID **)v7;
    v7[1] = v8;
    if ( v8 == (PVOID ***)v7 )
      v1 = 1;
    v9 = p_P;
    if ( *p_P != &P )
      __fastfail(3u);
    v5[1] = p_P;
    *v5 = &P;
    *v9 = v5;
    p_P = (PVOID *)v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v1 )
  {
    _InterlockedOr(v13, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  while ( 1 )
  {
    v10 = P;
    result = &P;
    if ( P == &P )
      break;
    v12 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v12[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v12[1] = &P;
    ExFreePoolWithTag(v10, 0x63634D43u);
  }
  return result;
}
