/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C01E1290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00FC1C0 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdi
  struct _IO_WORKITEM *v4; // rbx
  _QWORD v5[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[7] = 0LL;
  v5[0] = 0x4000000006LL;
  memset(&v5[1], 0, 36);
  v5[6] = 0x100000049LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v5);
  v2 = qword_1C0060CA0;
  do
  {
    v3 = v2;
    v4 = (struct _IO_WORKITEM *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v2 = _InterlockedCompareExchange64(&qword_1C0060CA0, v2 & 0xFFFFFFFFFFFFFFFCuLL, v2);
  }
  while ( v3 != v2 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v3 & 2) != 0 )
  {
    IoFreeWorkItem(v4);
    qword_1C0060CA0 = 0LL;
  }
}
