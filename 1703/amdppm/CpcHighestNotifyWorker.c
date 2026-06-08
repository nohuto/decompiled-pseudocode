/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C0021D98
 * Callers:
 *     AcpiCppcHighestNotifyWorker @ 0x1C001B5C0 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000597C (ProcLibTraceProcessorSpecificEvent.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0008C2C (ReadGenAddrMaybeHidden.c)
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     GetPerfDomain @ 0x1C0021708 (GetPerfDomain.c)
 */

__int64 __fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int16 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13[5]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v14[44]; // [rsp+60h] [rbp-A0h] BYREF

  IoFreeWorkItem(a2);
  v3 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v3 + 264);
  if ( (result & 0x8000000) == 0 )
  {
    v5 = 20;
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             v5,
             (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
             "Notify 0x85");
  }
  v6 = *(_QWORD *)(v3 + 240);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 112);
    if ( *(_BYTE *)(v7 + 8) == 126 )
    {
      v5 = 21;
      return WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               1u,
               v5,
               (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
               "Notify 0x85");
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00113E8,
      0LL);
    if ( !*(_BYTE *)(v6 + 102)
      || (*(int (__fastcall **)(_QWORD))(qword_1C00118E8 + 88))(*(_QWORD *)(qword_1C00118E8 + 56)) >= 0
      && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C00118E8 + 104))(*(_QWORD *)(qword_1C00118E8 + 56), 0LL) >= 0 )
    {
      GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v3, v7 + 8);
      v9 = *(_QWORD *)(v6 + 16);
      if ( GenAddrMaybeHidden < v9 )
      {
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x16u,
          (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
          "Notify 0x85");
        v9 = *(_QWORD *)(v6 + 16);
        GenAddrMaybeHidden = v9;
      }
      *(_QWORD *)(v6 + 8) = GenAddrMaybeHidden;
      v10 = 100 * GenAddrMaybeHidden / v9;
      *(_DWORD *)(v6 + 68) = v10;
      if ( (unsigned int)v10 > *(_DWORD *)(v6 + 72) )
        *(_DWORD *)(v6 + 72) = v10;
      memset(v14, 0, sizeof(v14));
      v14[0] = *(_DWORD *)(v6 + 68);
      KeInitializeAffinityEx(&v14[2]);
      GetPerfDomain((_QWORD *)v3, (__int64)v13, &v12);
      ResetEnumerationContext(v13);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v13, &v12) )
      {
        v11 = v12;
        KeAddProcessorAffinityEx(&v14[2], *(unsigned int *)(v12 + 56));
        if ( v3 != v11 )
        {
          *(_QWORD *)(*(_QWORD *)(v11 + 240) + 8LL) = *(_QWORD *)(v6 + 8);
          *(_DWORD *)(*(_QWORD *)(v11 + 240) + 68LL) = *(_DWORD *)(v6 + 68);
          *(_DWORD *)(*(_QWORD *)(v11 + 240) + 72LL) = *(_DWORD *)(v6 + 72);
        }
      }
      ((void (__fastcall *)(_DWORD *))qword_1C00115F0)(v14);
      ProcLibTraceProcessorSpecificEvent(v3, &PPM_ETW_NOTIFY_85, 0, 0LL);
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C00113E8);
  }
  return result;
}
