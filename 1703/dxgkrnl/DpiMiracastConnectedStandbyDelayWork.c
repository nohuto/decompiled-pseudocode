/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C01C7170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00A6600 (DxgkMiracastStopAllMiracastSessions.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  _QWORD v7[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[7] = 0LL;
  v7[0] = 0x4000000006LL;
  memset(&v7[1], 0, 36);
  v7[6] = 0x100000049LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7, v2, v3, v4);
  v5 = qword_1C006FE20;
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64(&qword_1C006FE20, v5 & 0xFFFFFFFFFFFFFFFCuLL, v5);
  }
  while ( v6 != v5 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v6 & 2) != 0 )
  {
    IoFreeWorkItem((PIO_WORKITEM)(v6 & 0xFFFFFFFFFFFFFFFCuLL));
    qword_1C006FE20 = 0LL;
  }
}
