/*
 * XREFs of DpiInitializeEx @ 0x1C011F6D0
 * Callers:
 *     DpiKmdDodInitialize @ 0x1C00134B0 (DpiKmdDodInitialize.c)
 *     DpiInitializeInternal @ 0x1C0013558 (DpiInitializeInternal.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x1C011FE0C (DpiGetDriverDataSizeFromVersion.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
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
  __int64 v12; // rsi
  __int64 v13; // rdx
  _WORD *v14; // rcx
  void *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v25; // rax
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
          0x4B0u,
          &DriverObjectExtension);
  v12 = v10;
  if ( v10 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v25 + 24) = v12;
    WdLogEvent5_WdError(v25);
    goto LABEL_11;
  }
  v9 = 1;
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
    v13 = *Src;
    *((_DWORD *)DriverObjectExtension + 7) = v13;
    LODWORD(v12) = DpiGetDriverDataSizeFromVersion(0LL, v13, 1056LL, &Size);
    if ( (int)v12 < 0 )
      goto LABEL_24;
    memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
    *((_QWORD *)DriverObjectExtension + 149) = 0LL;
  }
  else
  {
    *((_BYTE *)DriverObjectExtension + 133) = 1;
    memset((char *)DriverObjectExtension + 136, 0, 0x428uLL);
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
    *((_QWORD *)DriverObjectExtension + 149) = *(_QWORD *)(a4 + 256);
    *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
    *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
    *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
    if ( *(_DWORD *)a4 >= 0x3005u )
      *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
    if ( *(_DWORD *)a4 < 0x3007u )
      *((_QWORD *)DriverObjectExtension + 63) = 0LL;
    else
      *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
    if ( *(_DWORD *)a4 >= 0x3009u )
    {
      *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
      *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
    }
    v14 = DriverObjectExtension;
    if ( *((_DWORD *)DriverObjectExtension + 7) < 0x5006u )
      goto LABEL_8;
    *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
  }
  v14 = DriverObjectExtension;
LABEL_8:
  v14[21] = SourceString->Length + 2;
  *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
  *((_QWORD *)DriverObjectExtension + 6) = ExAllocatePoolWithTag(
                                             PagedPool,
                                             *((unsigned __int16 *)DriverObjectExtension + 21),
                                             0x74727044u);
  v15 = (void *)*((_QWORD *)DriverObjectExtension + 6);
  if ( !v15 )
  {
    LODWORD(v12) = -1073741801;
    v26 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v26);
    goto LABEL_24;
  }
  memset(v15, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
  KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
  v16 = (char *)DriverObjectExtension + 56;
  *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
  *v16 = v16;
  AcquireMiniportListMutex();
  v17 = (_QWORD *)qword_1C0060880;
  v18 = DriverObjectExtension;
  if ( *(__int64 **)qword_1C0060880 != &qword_1C0060878 )
    __fastfail(3u);
  *(_QWORD *)DriverObjectExtension = &qword_1C0060878;
  v18[1] = v17;
  *v17 = v18;
  qword_1C0060880 = (__int64)v18;
  _InterlockedExchange64(&qword_1C0060888, 0LL);
  KeReleaseMutex(Mutex, 0);
  v23 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
  *(_QWORD *)(v23 + 24) = DriverObjectExtension;
  WdLogEvent5_WdEvent(v23);
  ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)DpiDispatchCreate;
  ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)DpiDispatchPnp;
  ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)DpiDispatchPower;
  ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)DpiDispatchIoctl;
  ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)DpiDispatchInternalIoctl;
  ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)&DpiDispatchSystemControl;
  ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->MajorFunction[18] = (PDRIVER_DISPATCH)DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
  ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
  if ( (int)KsrGetFirmwareInformation(v33) >= 0 && !qword_1C0060CD0 )
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_KsrDisplay__private_propertyCache,
      12075496LL,
      (__int64)&unk_1C0045DF0,
      0,
      v29);
LABEL_11:
  if ( (int)v12 < 0 )
  {
    if ( v9 == 1 )
    {
      if ( !DriverObjectExtension )
      {
LABEL_27:
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x800uLL, (int)v12, 0LL, 0LL);
        return (unsigned int)v12;
      }
      AcquireMiniportListMutex();
      v27 = *(_QWORD **)DriverObjectExtension;
      if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) != DriverObjectExtension
        || (v28 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1), *v28 != DriverObjectExtension) )
      {
        __fastfail(3u);
      }
      *v28 = v27;
      v27[1] = v28;
      _InterlockedExchange64(&qword_1C0060888, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
LABEL_24:
    if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
    goto LABEL_27;
  }
  return (unsigned int)v12;
}
