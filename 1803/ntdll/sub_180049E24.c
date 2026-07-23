/*
 * XREFs of sub_180049E24 @ 0x180049E24
 * Callers:
 *     sub_1800496F4 @ 0x1800496F4 (sub_1800496F4.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180049DA0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180049DC0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x18004AEA0 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004A688 @ 0x18004A688 (sub_18004A688.c)
 *     sub_18004A750 @ 0x18004A750 (sub_18004A750.c)
 *     ZwSubscribeWnfStateChange @ 0x18009E0F0 (ZwSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800D8DE0 @ 0x1800D8DE0 (sub_1800D8DE0.c)
 */

__int64 __fastcall sub_180049E24(char *BaseAddress, _QWORD *a2, _DWORD *a3)
{
  _RTL_SRWLOCK *v5; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v11; // eax
  ULONG v12; // edx
  unsigned int i; // ecx
  unsigned __int32 v14; // edi
  NTSTATUS v15; // eax
  unsigned __int64 SubscriptionId; // [rsp+60h] [rbp+18h] BYREF

  v5 = (_RTL_SRWLOCK *)(qword_18015D058 + 8);
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( *((_DWORD *)a2 + 24) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015D058 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
    else
      v7 = 2147353486LL;
    if ( *(_BYTE *)v7 )
      sub_1800D8DE0(
        *((_QWORD *)BaseAddress + 2),
        (_DWORD)a2,
        (_DWORD)BaseAddress,
        *((_DWORD *)BaseAddress + 27),
        a2[4],
        *((_DWORD *)a2 + 16));
    v8 = BaseAddress + 88;
    v9 = 0;
    *((_DWORD *)a2 + 24) = 1;
    *a3 = 1;
    v10 = BaseAddress + 88;
    do
    {
      v11 = *((_DWORD *)a2 + 16);
      if ( _bittest(&v11, v9) )
        --*v10;
      ++v9;
      ++v10;
    }
    while ( v9 < 5 );
    v12 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v8 )
        v12 |= 1 << i;
      ++v8;
    }
    --*((_DWORD *)BaseAddress + 20);
    if ( (*((_BYTE *)a2 + 60) & 4) != 0 )
      --*((_DWORD *)BaseAddress + 21);
    v14 = 0;
    if ( *((_QWORD *)BaseAddress + 1) )
    {
      v15 = ZwSubscribeWnfStateChange(
              (PCWNF_STATE_NAME)BaseAddress + 2,
              *((_DWORD *)BaseAddress + 6),
              v12,
              &SubscriptionId);
      v14 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073741772 || v15 == -1073741431 )
          v14 = 0;
      }
      else
      {
        *((_QWORD *)BaseAddress + 1) = SubscriptionId;
      }
    }
    sub_18004A688(a2);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015D058 + 8));
    sub_18004A750(BaseAddress);
    return v14;
  }
}
