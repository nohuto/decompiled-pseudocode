/*
 * XREFs of EtwpClockSourceRunDown @ 0x1407100C8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeGetDynamicTickDisableReason @ 0x1400350C0 (KeGetDynamicTickDisableReason.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpClockSourceRunDown(unsigned int a1, char a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  __int64 v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+38h] [rbp-48h]
  _BYTE v6[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+44h] [rbp-3Ch]
  __int64 *v8; // [rsp+60h] [rbp-20h] BYREF
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]

  if ( a2 )
  {
    ((void (__fastcall *)(_BYTE *))off_14033B580[0])(v6);
    v4 = v7;
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v10 = 0;
    v8 = &v4;
    v5 = DynamicTickDisableReason;
    v9 = 12;
    EtwpLogKernelEvent((__int64)&v8, EtwpHostSiloState, a1, 1u, 0xF5Au, 0x401802u);
  }
}
