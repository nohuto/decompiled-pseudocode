/*
 * XREFs of CrmStateMonitorConstrainedModeStart @ 0x180039DB4
 * Callers:
 *     CrmStateMonitorStart @ 0x180039514 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorConstrainedModeStart(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // r9
  void *v4; // r10
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v4, v3, v2);
  v5 = RtlSubscribeWnfStateChangeNotification(
         &v8,
         WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED,
         0LL,
         CrmStateMonitorWNFCallback,
         a1,
         0LL,
         0,
         0);
  if ( v5 < 0 )
  {
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
    *(_QWORD *)(a1 + 72) = v8;
    v5 = 0;
    v8 = 0LL;
  }
  if ( v6 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return (unsigned int)v5;
}
