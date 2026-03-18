/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C010F548
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000BFC8 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  unsigned int v10; // [rsp+38h] [rbp-10h]

  v4 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Cu,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  v6 = *(void **)(a2 + 248);
  *(_DWORD *)(a2 + 184) &= ~4u;
  if ( v6 )
  {
    v7 = IoUnregisterPlugPlayNotification(v6);
    v8 = *(void **)(a2 + 32);
    v4 = v7;
    *(_QWORD *)(a2 + 248) = 0LL;
    ObfDereferenceObject(v8);
  }
  v10 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    0x13u,
    0x1Du,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
    a1,
    a2,
    v10);
  return v4;
}
