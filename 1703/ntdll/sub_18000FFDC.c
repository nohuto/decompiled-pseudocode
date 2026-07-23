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

__int64 __fastcall sub_18000FFDC(char *BaseAddress, _QWORD *a2, _DWORD *a3)
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
  void (__fastcall *v17)(__int64); // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 SubscriptionId; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v5 = (_RTL_SRWLOCK *)(qword_18015C008 + 8);
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( *((_DWORD *)a2 + 24) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
    else
      v7 = 2147353486LL;
    if ( *(_BYTE *)v7 )
      sub_1800DF560(
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
    sub_18000FF10((volatile signed __int32 *)a2, &v17, &v18);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 8));
    if ( v17 )
      v17(v18);
    sub_1800129DC(BaseAddress);
    return v14;
  }
}
