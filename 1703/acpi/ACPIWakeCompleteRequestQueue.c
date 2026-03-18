/*
 * XREFs of ACPIWakeCompleteRequestQueue @ 0x1C00598A0
 * Callers:
 *     OSNotifyDeviceWakeCallBack @ 0x1C0051E20 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0059D70 (ACPIWakeEmptyRequestQueue.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqss @ 0x1C0046B54 (WPP_RECORDER_SF_qDqss.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0049408 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

void __fastcall ACPIWakeCompleteRequestQueue(_QWORD **a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rsi
  const char *v6; // r8
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *a1;
  while ( v2 != a1 )
  {
    v5 = (__int64)v2;
    v6 = byte_1C0066CD0;
    v2 = (_QWORD *)*v2;
    v7 = byte_1C0066CD0;
    LOBYTE(v8) = 0;
    v9 = *(_QWORD *)(v5 + 40);
    if ( v9 )
    {
      v8 = *(_QWORD *)(v5 + 40);
      v10 = *(_QWORD *)(v9 + 8);
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(v8 + 560);
        if ( (v10 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(v8 + 568);
      }
    }
    WPP_RECORDER_SF_qDqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xAu,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      v5,
      a2,
      v8,
      v6,
      v7);
    *(_DWORD *)(v5 + 256) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(v5);
  }
}
