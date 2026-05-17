/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x18000A2F0
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006D990 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006DBB4 (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180087630 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180087890 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlpDecRefWnfNameSubscription @ 0x18000B87C (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18000C4E0 (RtlpDecRefWnfUserSubscription.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtSubscribeWnfStateChange @ 0x1800A36B0 (NtSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x1800DDEE0 (RtlpWnfETWEventUnsubscribe.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // r8
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // edx
  unsigned int i; // ecx
  unsigned int v16; // edi
  int v17; // eax
  void (__fastcall *v19)(__int64); // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v5 = qword_1801600A8 + 8;
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( *(_DWORD *)(a2 + 96) )
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_1801600A8 + 8);
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v9 = 2147353486LL;
    if ( *(_BYTE *)v9 )
      RtlpWnfETWEventUnsubscribe(
        *(_QWORD *)(a1 + 16),
        a2,
        a1,
        *(_DWORD *)(a1 + 108),
        *(_QWORD *)(a2 + 32),
        *(_DWORD *)(a2 + 64));
    v10 = (_DWORD *)(a1 + 88);
    v11 = 0;
    *(_DWORD *)(a2 + 96) = 1;
    *a3 = 1;
    v12 = (_DWORD *)(a1 + 88);
    do
    {
      v13 = *(_DWORD *)(a2 + 64);
      if ( _bittest(&v13, v11) )
        --*v12;
      ++v11;
      ++v12;
    }
    while ( v11 < 5 );
    v14 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v10 )
        v14 |= 1 << i;
      ++v10;
    }
    --*(_DWORD *)(a1 + 80);
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      --*(_DWORD *)(a1 + 84);
    v16 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v17 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v14, &v21);
      v16 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741772 || v17 == -1073741431 )
          v16 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v21;
      }
    }
    RtlpDecRefWnfUserSubscription(a2, &v19, &v20);
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_1801600A8 + 8);
    if ( v19 )
      v19(v20);
    RtlpDecRefWnfNameSubscription(a1);
    return v16;
  }
}
