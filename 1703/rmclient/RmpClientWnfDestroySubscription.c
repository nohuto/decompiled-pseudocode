/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x18000E8D8
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180006840 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     RmpClientSubscriptionCleanup @ 0x18000BDD0 (RmpClientSubscriptionCleanup.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000C7BC (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfDestroySubscription(_QWORD *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  PVOID v5; // r8
  PVOID *v6; // rax
  PVOID Pa; // [rsp+20h] [rbp-18h] BYREF
  PVOID **v9; // [rsp+28h] [rbp-10h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*P);
  RtlAcquireSRWLockExclusive(P + 4, v2, v3);
  v4 = (_QWORD *)P[2];
  v9 = (PVOID **)P[3];
  Pa = v4;
  v4[1] = &Pa;
  *v9 = &Pa;
  P[3] = P + 2;
  P[2] = P + 2;
  RtlReleaseSRWLockExclusive(P + 4);
  while ( 1 )
  {
    v5 = Pa;
    if ( Pa != &Pa )
      break;
    v6 = *(PVOID **)Pa;
    if ( *((PVOID **)Pa + 1) != &Pa || v6[1] != Pa )
      __fastfail(3u);
    Pa = *(PVOID *)Pa;
    v6[1] = &Pa;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  TpWaitForWork(P[7], 0LL);
  TpReleaseWork(P[7]);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
