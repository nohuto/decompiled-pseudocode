/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C001E52C
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C001B480 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C001E8E0 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     ResetEnumerationContext @ 0x1C0003930 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000394C (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     GetPerfDomain @ 0x1C0021CB0 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021D48 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  char *v3; // rbx
  int PerfDomain; // r15d
  char *PoolWithTag; // rax
  char *v6; // rsi
  int v7; // edi
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  char *v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // r10
  char *v17; // r11
  __int64 v18; // rcx
  int v19; // eax
  __int64 v21[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF

  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011418,
    0LL);
  PerfDomain = GetPerfDomain(a1, v21, &v23);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(80 * PerfDomain), 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag
    || (memset(PoolWithTag, 0, (unsigned int)(80 * PerfDomain)),
        v8 = (32 * PerfDomain + 439) & 0xFFFFFFF8,
        v9 = (v8 + 31) & 0xFFFFFFF8,
        v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 8 * PerfDomain, 0x72637250u),
        (v3 = v10) == 0LL) )
  {
    v7 = -1073741670;
    goto LABEL_25;
  }
  memset(v10, 0, v9 + 8 * PerfDomain);
  if ( *(_BYTE *)(a1 + 1106) )
    *((_QWORD *)v3 + 48) = PepParkPreference;
  if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
  {
    *((_QWORD *)v3 + 49) = PepParkMask;
    *((_QWORD *)v3 + 50) = PepPerfCheckComplete;
    *((_QWORD *)v3 + 8) = *(_QWORD *)(a1 + 1088);
  }
  *(_DWORD *)v3 = 56;
  *((_DWORD *)v3 + 6) = 100;
  *((_QWORD *)v3 + 52) = v3 + 432;
  v11 = v8;
  v12 = v3 + 20;
  *((_DWORD *)v3 + 7) = 100;
  *((_QWORD *)v3 + 51) = &v3[v11];
  *((_DWORD *)v3 + 8) = 100;
  *((_QWORD *)v3 + 6) = 100LL;
  *((_QWORD *)v3 + 7) = 100LL;
  *((_DWORD *)v3 + 4) = PerfDomain;
  *((_QWORD *)v3 + 53) = &v3[v9];
  *((_WORD *)v3 + 2) = v23;
  *((_QWORD *)v3 + 42) = AcpiCStateIdleCancel;
  *((_QWORD *)v3 + 43) = AcpiCStateIdleCancel;
  *((_QWORD *)v3 + 41) = PerfSelectionFeedback;
  *((_DWORD *)v3 + 9) = 1;
  *((_WORD *)v3 + 3) = 1;
  v3[44] = 1;
  *((_DWORD *)v3 + 5) = 0;
  if ( (int)GetRegistryDwordValueNoDefault(
              L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
              L"~MHz",
              v3 + 20) < 0 )
  {
    *v12 = 0;
LABEL_11:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x20u,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
    *(_QWORD *)(a1 + 264) &= ~0x4000000uLL;
    v7 = -1073741823;
    goto LABEL_25;
  }
  if ( !*((_DWORD *)v3 + 5) )
    goto LABEL_11;
  v13 = *(_QWORD *)(a1 + 320);
  if ( v13 )
    *((_QWORD *)v3 + 31) = v13;
  v14 = *((_QWORD *)v3 + 51);
  *(_QWORD *)v14 = PerfReadWrappingCounter;
  *(_QWORD *)(v14 + 8) = 100LL;
  *(_WORD *)(v14 + 16) = 257;
  v15 = (_QWORD *)*((_QWORD *)v3 + 53);
  ResetEnumerationContext(v21);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v21, &v23) )
  {
    v17 = v6 + 56;
    do
    {
      v18 = v23;
      *((_QWORD *)v17 - 7) = v23;
      *(_QWORD *)(v16 + 8) = v17 - 56;
      if ( *(_BYTE *)(v18 + 78) )
      {
        v19 = *(_DWORD *)(v18 + 80);
        *(_BYTE *)(v16 + 28) = 1;
      }
      else
      {
        v19 = *(_DWORD *)(v18 + 56);
      }
      *(_DWORD *)v16 = v19;
      *(_DWORD *)(v16 + 20) = *(_DWORD *)(v18 + 704);
      *(_DWORD *)(v16 + 16) = 100;
      *(_DWORD *)(v16 + 24) = 0;
      *((_DWORD *)v17 + 4) = *v12;
      *(_QWORD *)v17 = *(_QWORD *)(v18 + 312);
      *v15++ = v17 - 48;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v21, &v23) );
  }
  v7 = a2(v3, v9 + 8 * PerfDomain);
  if ( v7 >= 0 )
  {
    ResetEnumerationContext(v21);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v21, &v23) )
    {
      *(_QWORD *)(v23 + 224) = v6;
      v6 += 80;
    }
    v6 = 0LL;
    v7 = 0;
  }
LABEL_25:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011418);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v7;
}
