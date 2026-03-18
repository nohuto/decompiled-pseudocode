/*
 * XREFs of InitProcessSystemDpi @ 0x1C00E0EF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     GetDPIServerInfoForDpi @ 0x1C00825C8 (GetDPIServerInfoForDpi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E1100 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

char __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 v2; // rbx
  __int64 ThreadTeb; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r15
  bool v7; // r13
  __int64 v8; // rbx
  int v9; // r14d
  void *v10; // r12
  int v11; // eax
  __int16 v12; // ax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  const GUID *v16; // r8
  const GUID *v17; // r9
  bool v19; // [rsp+31h] [rbp-2C7h] BYREF
  bool v20; // [rsp+32h] [rbp-2C6h] BYREF
  _DWORD v21[3]; // [rsp+34h] [rbp-2C4h] BYREF
  __int64 v22; // [rsp+40h] [rbp-2B8h]
  ULONG ResultLength; // [rsp+48h] [rbp-2B0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-2A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-298h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-288h] BYREF
  bool *v27; // [rsp+90h] [rbp-268h]
  int v28; // [rsp+98h] [rbp-260h]
  int v29; // [rsp+9Ch] [rbp-25Ch]
  bool *v30; // [rsp+A0h] [rbp-258h]
  int v31; // [rsp+A8h] [rbp-250h]
  int v32; // [rsp+ACh] [rbp-24Ch]
  _DWORD *v33; // [rsp+B0h] [rbp-248h]
  int v34; // [rsp+B8h] [rbp-240h]
  int v35; // [rsp+BCh] [rbp-23Ch]
  char KeyValueInformation[4]; // [rsp+C0h] [rbp-238h] BYREF
  int v37; // [rsp+C4h] [rbp-234h]
  int v38; // [rsp+CCh] [rbp-22Ch]

  v24 = a1;
  v22 = 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    v4 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v5 = *(unsigned int *)(v4 + 48);
    ProbeForRead((volatile void *)(unsigned int)v5, 0x468uLL, 4u);
    v2 = *(_QWORD *)(v5 + 480);
  }
  else
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1016LL) + 720LL);
  }
  v22 = v2;
  v6 = v2 & 0x40000000000000LL;
  v7 = (v2 & 0x40000000000000LL) != 0;
  v8 = v2 & 0x20000000000000LL;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_PerProcessSystemDpi__private_propertyCache,
    5101203LL,
    &unk_1C02DC96C,
    0LL);
  v21[1] = 1;
  v9 = 0;
  v10 = (void *)OpenCacheKeyEx(0LL, 4LL, 131097LL);
  if ( v10 )
  {
    RtlInitUnicodeString(&DestinationString, L"EnablePerProcessSystemDPI");
    if ( ZwQueryValueKey(
           v10,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x208u,
           &ResultLength) >= 0
      && v37 == 4 )
    {
      v21[0] = v38;
      v9 = 1;
    }
    ZwClose(v10);
  }
  if ( v6 )
    goto LABEL_12;
  if ( v8 )
    goto LABEL_19;
  v11 = 0;
  if ( v9 )
    LOBYTE(v11) = v21[0] != 0;
  if ( v11 )
  {
LABEL_19:
    v13 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL) + 64LL);
    *(_WORD *)(a1 + 284) = v13;
    LOBYTE(v12) = GetDPIServerInfoForDpi(v13, v14, v15);
  }
  else
  {
LABEL_12:
    v12 = *(_WORD *)(gpsi + 9974LL);
    *(_WORD *)(a1 + 284) = v12;
  }
  if ( v8 || v6 || v9 )
  {
    v21[0] = 100;
    v21[0] = EngMulDiv(100, *(unsigned __int16 *)(a1 + 284), 96);
    v19 = v7;
    LOBYTE(v12) = v8 != 0;
    v20 = v8 != 0;
    if ( hProvider > 5u )
    {
      LOBYTE(v12) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL);
      if ( (_BYTE)v12 )
      {
        v27 = &v19;
        v28 = 1;
        v29 = 0;
        v30 = &v20;
        v31 = 1;
        v32 = 0;
        v33 = v21;
        v34 = 4;
        v35 = 0;
        LOBYTE(v12) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8809, v16, v17, 5u, &pData);
      }
    }
  }
  return v12;
}
