/*
 * XREFs of EtwpClockSourceRunDown @ 0x1407AE9A4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeGetDynamicTickDisableReason @ 0x1400D2DEC (KeGetDynamicTickDisableReason.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpClockSourceRunDown(__int64 a1, char a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h]
  _BYTE v8[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+44h] [rbp-3Ch]
  __int64 *v10; // [rsp+60h] [rbp-20h] BYREF
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  if ( a2 )
  {
    v7 = 0;
    ((void (__fastcall *)(_BYTE *))off_140398950[0])(v8);
    v6 = v9;
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v12 = 0;
    v4 = *(_DWORD *)a1;
    v5 = *(_QWORD *)(a1 + 1112);
    v10 = &v6;
    v7 = DynamicTickDisableReason;
    v11 = 12;
    EtwpLogKernelEvent((__int64)&v10, v5, v4, 1u, 0xF5Au, 0x401802u);
  }
}
