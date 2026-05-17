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

__int64 __fastcall sub_180049E24(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
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
  v6 = qword_18015D058 + 8;
  *(_DWORD *)a3 = 0;
  RtlAcquireSRWLockExclusive(v6, a2, a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 56, v8, v9, v10);
  if ( *(_DWORD *)(a2 + 96) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015D058 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
    else
      v11 = 2147353486LL;
    if ( *(_BYTE *)v11 )
      sub_1800D8DE0(*(_QWORD *)(a1 + 16), a2, a1, *(_DWORD *)(a1 + 108), *(_QWORD *)(a2 + 32), *(_DWORD *)(a2 + 64));
    v12 = (_DWORD *)(a1 + 88);
    v13 = 0;
    *(_DWORD *)(a2 + 96) = 1;
    *(_DWORD *)a3 = 1;
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
    sub_18004A688(a2, &v21, &v22);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015D058 + 8));
    if ( v21 )
      v21(v22);
    sub_18004A750(a1);
    return v18;
  }
}
