/*
 * XREFs of USBCaptureClosePin @ 0x1C0025CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C00050DC (USBCaptureWaitForWorkerComplete.c)
 *     USBHwFreeOffloadInformation @ 0x1C0020E74 (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBCaptureClosePin(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  void *v6; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 152);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x13u,
    (__int64)&WPP_53a1a3c61b3e356c0bbf99edf396b77c_Traceguids,
    a1);
  USBCaptureWaitForWorkerComplete(v2, (_BYTE *)(v4 + 208), (struct _KEVENT *)(v4 + 216));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 240));
  USBCaptureWaitForWorkerComplete(v2, (_BYTE *)(v4 + 248), (struct _KEVENT *)(v4 + 256));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 280));
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v6 = *(void **)(v5 + 72);
  if ( v6 )
  {
    ExFreePool(v6);
    *(_QWORD *)(v5 + 72) = 0LL;
  }
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
