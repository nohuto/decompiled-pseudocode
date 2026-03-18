/*
 * XREFs of DpiInitializeEx @ 0x1C0205138
 * Callers:
 *     DpiInitializeInternal @ 0x1C0041238 (DpiInitializeInternal.c)
 *     DpiKmdDodInitialize @ 0x1C0041300 (DpiKmdDodInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x1C01FDD48 (DpiGetDriverDataSizeFromVersion.c)
 */

__int64 __fastcall DpiInitializeEx(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PCUNICODE_STRING SourceString,
        unsigned int *Src,
        __int64 a4,
        char a5)
{
  char v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // edx
  int DriverDataSizeFromVersion; // eax
  unsigned int v16; // eax
  _WORD *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  PVOID *v28; // rdx
  int v29; // [rsp+20h] [rbp-51h]
  PVOID DriverObjectExtension; // [rsp+30h] [rbp-41h] BYREF
  size_t Size; // [rsp+38h] [rbp-39h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v33[8]; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v34[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v35; // [rsp+78h] [rbp+7h]

  DriverObjectExtension = 0LL;
  v34[0] = *(_OWORD *)L"\\Driver\\IndirectKmd";
  v35 = *(_QWORD *)L"Kmd";
  *(_DWORD *)&String1.Length = 2621478;
  v9 = 0;
  String1.Buffer = (wchar_t *)v34;
  v34[1] = *(_OWORD *)L"IndirectKmd";
  v10 = IoAllocateDriverObjectExtension(
          ClientIdentificationAddress,
          ClientIdentificationAddress,
          0x510u,
          &DriverObjectExtension);
  v12 = v10;
  if ( v10 < 0 )
    goto LABEL_2;
  *((_DWORD *)DriverObjectExtension + 4) = 1953656900;
  *((_DWORD *)DriverObjectExtension + 5) = 1;
  *((_DWORD *)DriverObjectExtension + 6) = 2;
  *((_QWORD *)DriverObjectExtension + 4) = ClientIdentificationAddress;
  *((_BYTE *)DriverObjectExtension + 132) = a5;
  *((_BYTE *)DriverObjectExtension + 134) = 0;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
    *((_BYTE *)DriverObjectExtension + 134) = 1;
  if ( Src )
  {
    *((_BYTE *)DriverObjectExtension + 133) = 0;
    v14 = *Src;
    *((_DWORD *)DriverObjectExtension + 7) = *Src;
    DriverDataSizeFromVersion = DpiGetDriverDataSizeFromVersion(0, v14, 1152, (int *)&Size);
    v12 = DriverDataSizeFromVersion;
    if ( DriverDataSizeFromVersion < 0 )
    {
LABEL_2:
      v13 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v13 + 24) = v12;
      WdLogEvent5_WdError(v13);
      goto LABEL_30;
    }
    memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
    *((_QWORD *)DriverObjectExtension + 161) = 0LL;
  }
  else
  {
    *((_BYTE *)DriverObjectExtension + 133) = 1;
    memset((char *)DriverObjectExtension + 136, 0, 0x488uLL);
    *((_DWORD *)DriverObjectExtension + 7) = *(_DWORD *)a4;
    *((_DWORD *)DriverObjectExtension + 34) = *(_DWORD *)a4;
    *((_QWORD *)DriverObjectExtension + 18) = *(_QWORD *)(a4 + 8);
    *((_QWORD *)DriverObjectExtension + 19) = *(_QWORD *)(a4 + 16);
    *((_QWORD *)DriverObjectExtension + 20) = *(_QWORD *)(a4 + 24);
    *((_QWORD *)DriverObjectExtension + 21) = *(_QWORD *)(a4 + 32);
    *((_QWORD *)DriverObjectExtension + 22) = *(_QWORD *)(a4 + 40);
    *((_QWORD *)DriverObjectExtension + 23) = *(_QWORD *)(a4 + 48);
    *((_QWORD *)DriverObjectExtension + 24) = *(_QWORD *)(a4 + 56);
    *((_QWORD *)DriverObjectExtension + 25) = *(_QWORD *)(a4 + 64);
    *((_QWORD *)DriverObjectExtension + 26) = *(_QWORD *)(a4 + 72);
    *((_QWORD *)DriverObjectExtension + 27) = *(_QWORD *)(a4 + 80);
    *((_QWORD *)DriverObjectExtension + 28) = *(_QWORD *)(a4 + 88);
    *((_QWORD *)DriverObjectExtension + 29) = *(_QWORD *)(a4 + 96);
    *((_QWORD *)DriverObjectExtension + 30) = *(_QWORD *)(a4 + 104);
    *((_QWORD *)DriverObjectExtension + 31) = *(_QWORD *)(a4 + 112);
    *((_QWORD *)DriverObjectExtension + 32) = *(_QWORD *)(a4 + 120);
    *((_QWORD *)DriverObjectExtension + 33) = *(_QWORD *)(a4 + 128);
    *((_QWORD *)DriverObjectExtension + 34) = *(_QWORD *)(a4 + 136);
    *((_QWORD *)DriverObjectExtension + 46) = *(_QWORD *)(a4 + 144);
    *((_QWORD *)DriverObjectExtension + 47) = *(_QWORD *)(a4 + 152);
    *((_QWORD *)DriverObjectExtension + 48) = *(_QWORD *)(a4 + 160);
    *((_QWORD *)DriverObjectExtension + 51) = *(_QWORD *)(a4 + 168);
    *((_QWORD *)DriverObjectExtension + 52) = *(_QWORD *)(a4 + 176);
    *((_QWORD *)DriverObjectExtension + 54) = *(_QWORD *)(a4 + 184);
    *((_QWORD *)DriverObjectExtension + 55) = *(_QWORD *)(a4 + 192);
    *((_QWORD *)DriverObjectExtension + 56) = *(_QWORD *)(a4 + 200);
    *((_QWORD *)DriverObjectExtension + 58) = *(_QWORD *)(a4 + 208);
    *((_QWORD *)DriverObjectExtension + 59) = *(_QWORD *)(a4 + 216);
    *((_QWORD *)DriverObjectExtension + 60) = *(_QWORD *)(a4 + 224);
    *((_QWORD *)DriverObjectExtension + 61) = *(_QWORD *)(a4 + 232);
    *((_QWORD *)DriverObjectExtension + 63) = *(_QWORD *)(a4 + 240);
    *((_QWORD *)DriverObjectExtension + 87) = *(_QWORD *)(a4 + 248);
    *((_QWORD *)DriverObjectExtension + 161) = *(_QWORD *)(a4 + 256);
    *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
    *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
    *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
    v16 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 >= 0x3005u )
    {
      *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
      v16 = *(_DWORD *)a4;
    }
    if ( v16 < 0x3007 )
      *((_QWORD *)DriverObjectExtension + 63) = 0LL;
    else
      *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
    if ( *(_DWORD *)a4 >= 0x3009u )
    {
      *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
      *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
    }
    v17 = DriverObjectExtension;
    if ( *((_DWORD *)DriverObjectExtension + 7) < 0x5006u )
      goto LABEL_18;
    *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
  }
  v17 = DriverObjectExtension;
LABEL_18:
  v17[21] = SourceString->Length + 2;
  *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
  *((_QWORD *)DriverObjectExtension + 6) = ExAllocatePoolWithTag(
                                             PagedPool,
                                             *((unsigned __int16 *)DriverObjectExtension + 21),
                                             0x74727044u);
  v18 = (void *)*((_QWORD *)DriverObjectExtension + 6);
  if ( !v18 )
  {
    LODWORD(v12) = -1073741801;
    v19 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v19 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
LABEL_20:
    if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
    goto LABEL_23;
  }
  memset(v18, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
  KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
  v21 = (char *)DriverObjectExtension + 56;
  *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
  *v21 = v21;
  AcquireMiniportListMutex();
  v22 = (_QWORD *)qword_1C007A780;
  v23 = DriverObjectExtension;
  if ( *(__int64 **)qword_1C007A780 != &qword_1C007A778 )
    __fastfail(3u);
  *(_QWORD *)DriverObjectExtension = &qword_1C007A778;
  v23[1] = v22;
  *v22 = v23;
  qword_1C007A780 = (__int64)v23;
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  v9 = 1;
  v26 = WdLogNewEntry5_WdEvent(v25, v24);
  *(_QWORD *)(v26 + 24) = DriverObjectExtension;
  WdLogEvent5_WdEvent(v26);
  ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)DpiDispatchCreate;
  ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)DpiDispatchPnp;
  ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)DpiDispatchPower;
  ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)DpiDispatchIoctl;
  ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)DpiDispatchInternalIoctl;
  ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)DpiDispatchSystemControl;
  ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->MajorFunction[18] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
  ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
  if ( (int)KsrGetFirmwareInformation(v33) >= 0 && !qword_1C007AC28 )
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_KsrDisplay__private_propertyCache,
      12075496LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005F8AC,
      0,
      v29);
LABEL_30:
  if ( (int)v12 >= 0 )
    return (unsigned int)v12;
  if ( v9 != 1 )
    goto LABEL_20;
  if ( DriverObjectExtension )
  {
    AcquireMiniportListMutex();
    v27 = *(_QWORD **)DriverObjectExtension;
    if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) != DriverObjectExtension
      || (v28 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1), *v28 != DriverObjectExtension) )
    {
      __fastfail(3u);
    }
    *v28 = v27;
    v27[1] = v28;
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
    goto LABEL_20;
  }
LABEL_23:
  DxgCreateLiveDumpWithWdLogs(0x193u, 2048LL, (int)v12, 0LL, 0LL);
  return (unsigned int)v12;
}
