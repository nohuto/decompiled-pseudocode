/*
 * XREFs of KbdConfiguration @ 0x1C000F4E0
 * Callers:
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0001A60 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002390 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0002980 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002E00 (memset.c)
 */

void KbdConfiguration()
{
  const WCHAR *v0; // rdi
  _DWORD *PoolWithTag; // rax
  int v2; // edx
  int v3; // r8d
  _DWORD *v4; // rbx
  WCHAR *v5; // rax
  int v6; // r8d
  int Length; // edx
  unsigned __int64 v8; // rdx
  PWSTR Buffer; // rdi
  PVOID SystemRoutineAddress; // rax
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  char v18; // al
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  int UserDataCounta; // [rsp+20h] [rbp-E0h]
  int UserDataCountb; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  KSPIN_LOCK Lock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  int *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  _DWORD *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  PWSTR v42; // [rsp+D0h] [rbp-30h]
  _DWORD v43[2]; // [rsp+D8h] [rbp-28h] BYREF
  KSPIN_LOCK *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  char *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]

  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&SourceString, 0LL);
  RtlInitUnicodeString(&SourceString, L"KeyboardClass");
  dword_1C00091D4 = 100;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 1;
  WPP_MAIN_CB.DeviceQueue.Lock = 1LL;
  RtlCopyUnicodeString(&::DestinationString, &SourceString);
  v0 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x150uLL, 0x4364624Bu);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v21 = 61;
LABEL_22:
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v2, v3, v21);
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  DestinationString.MaximumLength = word_1C00092C8 + 26;
  v5 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C00092C8 + 26), 0x4364624Bu);
  DestinationString.Buffer = v5;
  if ( !v5 )
  {
    v21 = 62;
    goto LABEL_22;
  }
  memset(v5, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v0);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  Length = DestinationString.Length;
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    v8 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v8 + 1] = 0;
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, v6, 63);
    v4[2] = 288;
    *((_QWORD *)v4 + 2) = L"KeyboardDataQueueSize";
    v4[8] = 67108868;
    *((_QWORD *)v4 + 3) = &dword_1C00091D4;
    v4[16] = 288;
    *((_QWORD *)v4 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v4 + 10) = &WPP_MAIN_CB.DeviceQueue.1;
    *((_QWORD *)v4 + 16) = L"KeyboardDeviceBaseName";
    *((_QWORD *)v4 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v4 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    *((_QWORD *)v4 + 30) = L"SendOutputToAllPorts";
    *((_QWORD *)v4 + 31) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    v4[22] = 67108868;
    v4[30] = 288;
    *((_QWORD *)v4 + 17) = &::DestinationString;
    v4[36] = 16777217;
    v4[44] = 288;
    v4[50] = 67108868;
    v4[58] = 288;
    v4[64] = 67108868;
    Buffer = DestinationString.Buffer;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    UserDataCount = 0;
    v11 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(
            0x80000000LL,
            Buffer,
            v4,
            0LL);
    if ( v11 < 0 )
    {
      LOBYTE(Length) = 3;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v6, 64, 0, v11);
    }
  }
LABEL_8:
  LOBYTE(Length) = 4;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, v6, 65);
  v14 = dword_1C00091D4;
  if ( dword_1C00091D4 )
  {
    if ( (unsigned int)dword_1C00091D4 > 0x15555555 )
    {
      v15 = 1200;
      goto LABEL_11;
    }
  }
  else
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v12, v13, 66, UserDataCount, 0);
    v14 = 100;
  }
  v15 = 12 * v14;
LABEL_11:
  dword_1C00091D4 = v15;
  WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v12, v13, 67, UserDataCount, v15);
  LOBYTE(v16) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v16, v17, 68, UserDataCounta, WPP_MAIN_CB.DeviceQueue.Busy);
  v18 = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) == 0;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) == 0;
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v19, v20, 69, UserDataCountb, v18);
  if ( (unsigned int)dword_1C0009010 > 5
    && (qword_1C0009020 & 0x400000000000LL) != 0
    && (qword_1C0009028 & 0x400000000000LL) == qword_1C0009028 )
  {
    v36 = &v26;
    v38 = &v27;
    v42 = ::DestinationString.Buffer;
    v44 = &Lock;
    v46 = (char *)&Lock + 4;
    v26 = dword_1C00091D4;
    v27 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    v37 = 4LL;
    v39 = 4LL;
    v40 = v43;
    v41 = 2LL;
    v43[0] = ::DestinationString.Length;
    v43[1] = 0;
    v45 = 4LL;
    v47 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)EventInformation;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C0007661 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)EventInformation;
    v33 = &unk_1C000766C;
    UserData.Reserved = 2;
    v34 = 126;
    v35 = 1;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
