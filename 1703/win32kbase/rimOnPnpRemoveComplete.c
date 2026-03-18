/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C0094A7C
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0094120 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMRemoveDevOfInputType @ 0x1C0094240 (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     rimFakePnpRemoveComplete @ 0x1C0110934 (rimFakePnpRemoveComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0094B5C (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C0094C40 (RIMCloseDev.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(char a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // eax
  int v5; // edx
  void *v6; // rcx
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  int v9; // eax
  void *v10; // rcx

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    24,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~8u;
  v4 = RIMCloseDev(v2);
  v6 = *(void **)(v2 + 248);
  v7 = v4;
  if ( v6 )
  {
    v8 = IoUnregisterPlugPlayNotification(v6);
    *(_QWORD *)(v2 + 248) = 0LL;
    v7 = v8;
    v9 = *(_DWORD *)(v2 + 184);
    *(_DWORD *)(v2 + 200) &= ~0x20u;
    v10 = *(void **)(v2 + 32);
    *(_DWORD *)(v2 + 184) = v9 & 0xFFFFFDBF | 0x200;
    ObfDereferenceObject(v10);
  }
  WPP_RECORDER_SF_qqD(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    19,
    25,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
    a1,
    v2,
    v7);
  return v7;
}
