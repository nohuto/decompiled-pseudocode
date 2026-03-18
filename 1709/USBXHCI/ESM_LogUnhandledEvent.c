/*
 * XREFs of ESM_LogUnhandledEvent @ 0x1C003E480
 * Callers:
 *     ESM_FindAndSetTargetState @ 0x1C003E0F0 (ESM_FindAndSetTargetState.c)
 * Callees:
 *     WPP_RECORDER_SF_qLL @ 0x1C0006A60 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001EFB4 (WPP_RECORDER_SF_qdd.c)
 */

BOOLEAN __fastcall ESM_LogUnhandledEvent(__int64 a1, int a2)
{
  BOOLEAN result; // al
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 976) == 2000 )
  {
    v8 = *(_DWORD *)(a1 + 852);
    WPP_RECORDER_SF_qLL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xAu,
      (__int64)&WPP_82a271e188d93b9f1b75d5b9870c9fdc_Traceguids,
      *(_QWORD *)(a1 + 960),
      a2,
      v8);
    if ( !KdRefreshDebuggerNotPresent() )
      DbgPrint(
        "ESM 0x%p: is not handling Event %u, Current Top Level State is %u\n",
        *(const void **)(a1 + 960),
        a2,
        *(_DWORD *)(a1 + 852));
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 852);
    WPP_RECORDER_SF_qdd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xBu,
      (__int64)&WPP_82a271e188d93b9f1b75d5b9870c9fdc_Traceguids,
      *(_QWORD *)(a1 + 960),
      a2,
      v7);
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    DbgPrint("Unhandled event in USBXHCI Endpoint State Machine\n");
    __debugbreak();
  }
  return result;
}
