/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C002F740
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C002B9F0 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C0030F00 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C001D008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C001D43C (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  char *v3; // rbx
  int PerfDomain; // r12d
  SIZE_T v5; // r14
  char *PoolWithTag; // rax
  char *v7; // rsi
  int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  char *v11; // rax
  _DWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // r15
  char *v17; // r11
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v21[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF

  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195D8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v21, &v23);
  v5 = (unsigned int)(80 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, v5),
        v9 = (32 * PerfDomain + 439) & 0xFFFFFFF8,
        v10 = (v9 + 31) & 0xFFFFFFF8,
        v11 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 8 * PerfDomain, 0x72637250u),
        (v3 = v11) != 0LL) )
  {
    memset(v11, 0, v10 + 8 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1106) )
      *((_QWORD *)v3 + 48) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v3 + 49) = PepParkMask;
      *((_QWORD *)v3 + 50) = PepPerfCheckComplete;
      *((_QWORD *)v3 + 8) = *(_QWORD *)(a1 + 1088);
    }
    *(_DWORD *)v3 = 52;
    *((_DWORD *)v3 + 3) = PerfDomain;
    *((_QWORD *)v3 + 52) = v3 + 432;
    *((_DWORD *)v3 + 8) = 1;
    *((_QWORD *)v3 + 51) = &v3[v9];
    v12 = v3 + 16;
    *((_DWORD *)v3 + 4) = 0;
    *((_WORD *)v3 + 3) = 1;
    *((_QWORD *)v3 + 53) = &v3[v10];
    *((_WORD *)v3 + 2) = v23;
    *((_QWORD *)v3 + 42) = AcpiCStateIdleCancel;
    *((_QWORD *)v3 + 43) = AcpiCStateIdleCancel;
    *((_QWORD *)v3 + 41) = PerfSelectionFeedback;
    v3[40] = 1;
    *((_DWORD *)v3 + 5) = 100;
    *((_DWORD *)v3 + 6) = 100;
    *((_DWORD *)v3 + 7) = 100;
    *((_QWORD *)v3 + 6) = 100LL;
    *((_QWORD *)v3 + 7) = 100LL;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                (__int64)L"~MHz",
                (__int64)(v3 + 16)) < 0 )
      *v12 = 0;
    if ( *v12 )
    {
      v13 = *(_QWORD *)(a1 + 320);
      if ( v13 )
        *((_QWORD *)v3 + 31) = v13;
      v14 = *((_QWORD *)v3 + 51);
      *(_DWORD *)(v14 + 12) = 0;
      *(_QWORD *)v14 = PerfReadWrappingCounter;
      *(_DWORD *)(v14 + 8) = 100;
      *(_WORD *)(v14 + 16) = 257;
      v15 = *((_QWORD *)v3 + 52);
      v16 = (_QWORD *)*((_QWORD *)v3 + 53);
      ResetEnumerationContext(v21);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v21, &v23) )
      {
        v17 = v7 + 56;
        do
        {
          InitCommonPerfStateContext(v23, (_QWORD *)v17 - 7, v15, 100, 0);
          *(_DWORD *)(v18 + 16) = *v12;
          v15 += 32LL;
          *(_QWORD *)v18 = *(_QWORD *)(v19 + 312);
          *v16++ = v18 - 48;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v21, &v23) );
      }
      v8 = a2(v3, v10 + 8 * PerfDomain);
      if ( v8 >= 0 )
      {
        ResetEnumerationContext(v21);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v21, &v23) )
        {
          *(_QWORD *)(v23 + 224) = v7;
          v7 += 80;
        }
        v7 = 0LL;
        v8 = 0;
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
      *(_QWORD *)(a1 + 264) &= ~0x4000000uLL;
      v8 = -1073741823;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
