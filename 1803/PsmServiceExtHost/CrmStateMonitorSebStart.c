/*
 * XREFs of CrmStateMonitorSebStart @ 0x180039BB0
 * Callers:
 *     CrmStateMonitorStart @ 0x180039514 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorSebStart(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v4 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v6, v5, v4);
  v7 = RtlSubscribeWnfStateChangeNotification(&v10, a2, 0LL, CrmStateMonitorSebCallback, a1, 0LL, 0, 0);
  if ( v7 < 0 )
  {
    v8 = v10;
  }
  else
  {
    v8 = 0LL;
    *(_QWORD *)(a1 + 72) = v10;
    v7 = 0;
    v10 = 0LL;
  }
  if ( v8 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return (unsigned int)v7;
}
