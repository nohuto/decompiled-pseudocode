/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C0021BA4
 * Callers:
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C001B5A0 (AcpiCppcGuaranteedNotifyWorker.c)
 *     CpcNativeInterruptWorker @ 0x1C0021B90 (CpcNativeInterruptWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 *     ProcLibTracePccCapChange @ 0x1C0005BA8 (ProcLibTracePccCapChange.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0008C2C (ReadGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C001CC38 (ProcLibCapChange.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 GenAddrMaybeHidden; // r8
  unsigned __int64 v10; // rsi

  IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 264);
  if ( (result & 0x8000000) == 0 )
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             0x11u,
             (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
             a3);
  v7 = *(_QWORD *)(v5 + 240);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 112);
    if ( *(_BYTE *)(v7 + 99) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00113E8,
        0LL);
      if ( !*(_BYTE *)(v7 + 101)
        || (*(int (__fastcall **)(_QWORD))(qword_1C00118E8 + 88))(*(_QWORD *)(qword_1C00118E8 + 56)) >= 0
        && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C00118E8 + 104))(*(_QWORD *)(qword_1C00118E8 + 56), 0LL) >= 0 )
      {
        GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v5, v8 + 56);
        if ( GenAddrMaybeHidden > *(_QWORD *)(v7 + 16) )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x12u,
            (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
            a3);
          GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
        }
        if ( GenAddrMaybeHidden < *(_QWORD *)(v7 + 32) )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x13u,
            (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
            a3);
          GenAddrMaybeHidden = *(_QWORD *)(v7 + 32);
        }
        *(_QWORD *)(v7 + 56) = GenAddrMaybeHidden;
        v10 = 100 * GenAddrMaybeHidden / *(_QWORD *)(v7 + 16);
        if ( (unsigned int)v10 <= *(_DWORD *)(v7 + 80) )
          LODWORD(v10) = *(_DWORD *)(v7 + 80);
        *(_DWORD *)(v7 + 84) = v10;
        if ( (_DWORD)v10 != *(_DWORD *)(v5 + 708) )
        {
          ProcLibCapChange(v5, *(_DWORD *)(v5 + 432), *(_DWORD *)(v5 + 480), v10);
          ((void (__fastcall *)(__int64))qword_1C0011790)(v5);
        }
        ProcLibTracePccCapChange(v5, v10);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C00113E8);
    }
  }
  return result;
}
