/*
 * XREFs of ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0001810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00101CC (ACPIDereferenceWaitWakePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceCancelWaitWakeIrpCallBack(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  void *v5; // r10
  char v6; // r8
  void *v8; // r11
  __int64 v9; // rcx
  char v11; // [rsp+28h] [rbp-30h]

  v4 = (_QWORD *)a4[5];
  v5 = &unk_1C0067B08;
  v6 = 0;
  v8 = &unk_1C0067B08;
  if ( v4 )
  {
    v9 = v4[1];
    v6 = a4[5];
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v4[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)v4[71];
    }
  }
  v11 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    13,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    v11,
    v6,
    (__int64)v5,
    (__int64)v8);
  return ACPIDereferenceWaitWakePowerRequest(a4);
}
