/*
 * XREFs of Interrupter_Create @ 0x1C0058BC8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Interrupter_CreateInterrupter @ 0x1C0058C58 (Interrupter_CreateInterrupter.c)
 */

__int64 __fastcall Interrupter_Create(int a1, __int64 a2, _QWORD *a3)
{
  int Interrupter; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-30h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  Interrupter = Interrupter_CreateInterrupter(a1, a2, 0, 0, 0LL, (__int64)v10, (__int64)&v11);
  v6 = Interrupter;
  if ( Interrupter >= 0 )
  {
    v7 = v11;
    *(_QWORD *)(v11 + 40) = v10[0];
    *(_DWORD *)(v7 + 64) = -1;
    *a3 = v7;
  }
  else
  {
    LODWORD(v9) = Interrupter;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 9u, 0xAu, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids, v9);
  }
  return v6;
}
