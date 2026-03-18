/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C0110AC0
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0094B5C (WPP_RECORDER_SF_qqD.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 v5; // rdx
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  unsigned int v10; // [rsp+38h] [rbp-10h]

  v2 = a2;
  v4 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    28,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  v6 = *(void **)(v2 + 248);
  *(_DWORD *)(v2 + 184) &= ~4u;
  if ( v6 )
  {
    v7 = IoUnregisterPlugPlayNotification(v6);
    v8 = *(void **)(v2 + 32);
    v4 = v7;
    *(_QWORD *)(v2 + 248) = 0LL;
    ObfDereferenceObject(v8);
  }
  v10 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    0x13u,
    0x1Du,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
    a1,
    v2,
    v10);
  return v4;
}
