/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x180005570
 * Callers:
 *     HamIpcChannelObjectMakeZombie @ 0x180004AA0 (HamIpcChannelObjectMakeZombie.c)
 *     HamCloseActivity @ 0x1800051A0 (HamCloseActivity.c)
 *     HampIpcChannelWnfCallback @ 0x180005340 (HampIpcChannelWnfCallback.c)
 *     RmpClientWnfMessageQueueWorker @ 0x1800056F0 (RmpClientWnfMessageQueueWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(); // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r8

  v2 = *(__int64 (__fastcall **)())(*(_QWORD *)(a2 + 40) + 72LL);
  if ( v2 == RmpClientCallbackCompareToPayload )
  {
    if ( *(_DWORD *)a1 )
      v3 = *(_QWORD *)(a1 + 16);
    else
      v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a2 + 48);
    if ( v3 >= v4 )
      return v3 > v4;
    return 0xFFFFFFFFLL;
  }
  if ( v2 == HampConnectionObjectCompareToMessage )
  {
    v6 = *(_QWORD *)(a2 + 48);
    if ( *(_QWORD *)a1 >= v6 )
      return *(_QWORD *)a1 > v6;
    return 0xFFFFFFFFLL;
  }
  return v2();
}
