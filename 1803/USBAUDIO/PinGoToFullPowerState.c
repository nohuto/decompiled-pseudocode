/*
 * XREFs of PinGoToFullPowerState @ 0x1C0018840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PinGoToFullPowerState(PKSPIN Pin, __int64 State)
{
  _QWORD *Context; // rbp
  unsigned int v3; // r14d
  int v5; // ebx
  __int64 (__fastcall *v6)(PKSPIN, _QWORD); // rsi
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-28h]

  Context = Pin->Context;
  v3 = State;
  v5 = 0;
  v6 = *(__int64 (__fastcall **)(PKSPIN, _QWORD))(*(_QWORD *)(Context[18] + 128LL) + 40LL);
  v8 = State - 1;
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    State,
    2u,
    0xCu,
    (__int64)&WPP_1eb1219369133eb445a80eae098b7c49_Traceguids,
    Pin,
    v8);
  if ( !*((_BYTE *)Context + 168) )
  {
    if ( v6 )
      v5 = v6(Pin, v3);
    *((_BYTE *)Context + 168) = 1;
    if ( v5 < 0 )
    {
      LODWORD(v9) = v5;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        2u,
        0xDu,
        (__int64)&WPP_1eb1219369133eb445a80eae098b7c49_Traceguids,
        Pin,
        v9);
    }
  }
}
