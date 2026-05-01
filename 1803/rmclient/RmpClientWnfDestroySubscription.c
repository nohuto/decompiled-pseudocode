/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x18000D930
 * Callers:
 *     HampConnectionDestroy @ 0x18000D468 (HampConnectionDestroy.c)
 *     HamIpcChannelRundown @ 0x18000D7FC (HamIpcChannelRundown.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000DD24 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000EA28 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfDestroySubscription(_DWORD *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  PVOID v5; // r8
  __int64 v6; // rax
  PVOID Pa; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-8h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*(_QWORD *)P);
  RtlAcquireSRWLockExclusive(P + 8, v2, v3);
  P[16] |= 4u;
  v4 = (_QWORD *)*((_QWORD *)P + 2);
  if ( v4 == (_QWORD *)(P + 4) )
  {
    p_Pa = &Pa;
    Pa = &Pa;
  }
  else
  {
    p_Pa = (PVOID *)*((_QWORD *)P + 3);
    Pa = v4;
    v4[1] = &Pa;
    *p_Pa = &Pa;
    *((_QWORD *)P + 3) = P + 4;
    *((_QWORD *)P + 2) = P + 4;
  }
  RtlReleaseSRWLockExclusive(P + 8);
  while ( 1 )
  {
    v5 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa || (v6 = *(_QWORD *)Pa, *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa) )
      __fastfail(3u);
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v6 + 8) = &Pa;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  TpWaitForWork(*((_QWORD *)P + 7), 0LL);
  TpReleaseWork(*((_QWORD *)P + 7));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
