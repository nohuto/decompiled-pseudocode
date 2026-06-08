/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C00259D0
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C0025E40 (CpcNativeInterruptWorker.c)
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C0028D90 (AcpiCppcGuaranteedNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002830 (WPP_RECORDER_SF_s.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00041A4 (ReadGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePccCapChange @ 0x1C000760C (ProcLibTracePccCapChange.c)
 *     ProcLibCapChange @ 0x1C001F970 (ProcLibCapChange.c)
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
        qword_1C0015D98,
        0LL);
      if ( !*(_BYTE *)(v7 + 101)
        || (*(int (__fastcall **)(_QWORD))(qword_1C0016298 + 88))(*(_QWORD *)(qword_1C0016298 + 56)) >= 0
        && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C0016298 + 104))(*(_QWORD *)(qword_1C0016298 + 56), 0LL) >= 0 )
      {
        GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v5, (char *)(v8 + 56));
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
          ((void (__fastcall *)(__int64))qword_1C0016140)(v5);
        }
        ProcLibTracePccCapChange(v5, v10);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C0015D98);
    }
  }
  return result;
}
