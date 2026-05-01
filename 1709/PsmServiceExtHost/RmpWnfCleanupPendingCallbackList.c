/*
 * XREFs of RmpWnfCleanupPendingCallbackList @ 0x18001F5D0
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180035454 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RmpWnfCleanupPendingCallbackList(_QWORD *P)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  char v4; // bl
  BOOLEAN result; // al
  PVOID v6; // r8
  __int64 v7; // rax
  PVOID Pa; // [rsp+20h] [rbp-18h] BYREF
  PVOID **v9; // [rsp+28h] [rbp-10h]

  RtlAcquireSRWLockExclusive(P + 3);
  v2 = (_QWORD *)*P;
  if ( (_QWORD *)*P != P )
  {
    v9 = (PVOID **)P[1];
    Pa = v2;
    v2[1] = &Pa;
    *v9 = &Pa;
    P[1] = P;
    *P = P;
    while ( 1 )
    {
      v6 = Pa;
      if ( Pa == &Pa )
        break;
      if ( *((PVOID **)Pa + 1) != &Pa || (v7 = *(_QWORD *)Pa, *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa) )
        __fastfail(3u);
      Pa = *(PVOID *)Pa;
      *(_QWORD *)(v7 + 8) = &Pa;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
  }
  v3 = P[2];
  *((_BYTE *)P + 33) = 1;
  TpReleaseWork(v3);
  v4 = *((_BYTE *)P + 32);
  result = RtlReleaseSRWLockExclusive(P + 3);
  if ( !v4 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
