/*
 * XREFs of sub_18000FFDC @ 0x18000FFDC
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18000B4A0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     sub_1800198E4 @ 0x1800198E4 (sub_1800198E4.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180088060 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180088FC0 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     sub_18000FF10 @ 0x18000FF10 (sub_18000FF10.c)
 *     sub_1800129DC @ 0x1800129DC (sub_1800129DC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwSubscribeWnfStateChange @ 0x1800A8890 (ZwSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800DF560 @ 0x1800DF560 (sub_1800DF560.c)
 */

__int64 __fastcall sub_18000FFDC(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r8
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // edx
  unsigned int i; // ecx
  unsigned int v18; // edi
  int v19; // eax
  void (__fastcall *v21)(__int64); // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v5 = qword_18015C008 + 8;
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( *(_DWORD *)(a2 + 96) )
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_18015C008 + 8);
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7, v9, v10) )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
    else
      v11 = 2147353486LL;
    if ( *(_BYTE *)v11 )
      sub_1800DF560(*(_QWORD *)(a1 + 16), a2, a1, *(_DWORD *)(a1 + 108), *(_QWORD *)(a2 + 32), *(_DWORD *)(a2 + 64));
    v12 = (_DWORD *)(a1 + 88);
    v13 = 0;
    *(_DWORD *)(a2 + 96) = 1;
    *a3 = 1;
    v14 = (_DWORD *)(a1 + 88);
    do
    {
      v15 = *(_DWORD *)(a2 + 64);
      if ( _bittest(&v15, v13) )
        --*v14;
      ++v13;
      ++v14;
    }
    while ( v13 < 5 );
    v16 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v12 )
        v16 |= 1 << i;
      ++v12;
    }
    --*(_DWORD *)(a1 + 80);
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      --*(_DWORD *)(a1 + 84);
    v18 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v19 = ZwSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v16, &v23);
      v18 = v19;
      if ( v19 < 0 )
      {
        if ( v19 == -1073741772 || v19 == -1073741431 )
          v18 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v23;
      }
    }
    sub_18000FF10(a2, &v21, &v22);
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_18015C008 + 8);
    if ( v21 )
      v21(v22);
    sub_1800129DC(a1);
    return v18;
  }
}
