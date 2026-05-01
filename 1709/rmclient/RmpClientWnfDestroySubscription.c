/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x180001748
 * Callers:
 *     HampConnectionDestroy @ 0x18000169C (HampConnectionDestroy.c)
 *     HamIpcChannelRundown @ 0x1800016E4 (HamIpcChannelRundown.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x1800067A0 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000DC10 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfDestroySubscription(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID v3; // r8
  __int64 v5; // rax
  PVOID Pa; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-8h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*P);
  RtlAcquireSRWLockExclusive(P + 4);
  v2 = (_QWORD *)P[2];
  if ( v2 == P + 2 )
  {
    p_Pa = &Pa;
    Pa = &Pa;
  }
  else
  {
    p_Pa = (PVOID *)P[3];
    Pa = v2;
    v2[1] = &Pa;
    *p_Pa = &Pa;
    P[3] = P + 2;
    P[2] = P + 2;
  }
  RtlReleaseSRWLockExclusive(P + 4);
  while ( 1 )
  {
    v3 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa || (v5 = *(_QWORD *)Pa, *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa) )
      __fastfail(3u);
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v5 + 8) = &Pa;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  TpWaitForWork(P[7], 0LL);
  TpReleaseWork(P[7]);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
