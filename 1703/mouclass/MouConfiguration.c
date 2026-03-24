/*
 * XREFs of MouConfiguration @ 0x1C000F030
 * Callers:
 *     DriverEntry @ 0x1C000F4D0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0001E70 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C00022E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0002520 (WPP_RECORDER_SF_Dd.c)
 *     __security_check_cookie @ 0x1C0002AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002FC0 (memset.c)
 *     WPP_RECORDER_SF_D @ 0x1C0005114 (WPP_RECORDER_SF_D.c)
 */

void MouConfiguration()
{
  const wchar_t *v0; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v2; // rbx
  WCHAR *v3; // rax
  PWSTR Buffer; // rdi
  PVOID SystemRoutineAddress; // rax
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  int v13; // ecx
  char v14; // al
  int v15; // edx
  int v16; // r8d
  unsigned __int16 v17; // r9
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  int UserDataCounta; // [rsp+20h] [rbp-E0h]
  int UserDataCountb; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int Lock_high; // [rsp+54h] [rbp-ACh] BYREF
  int Lock; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  _DWORD *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  PWSTR v38; // [rsp+E0h] [rbp-20h]
  _DWORD v39[2]; // [rsp+E8h] [rbp-18h] BYREF
  int *p_Lock; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PointerClass");
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 100;
  WPP_MAIN_CB.DeviceQueue.Lock = 0x100000000LL;
  RtlCopyUnicodeString(&::DestinationString, &DestinationString);
  v0 = (const wchar_t *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x43756F4Du);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v17 = 59;
LABEL_22:
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, v17, UserDataCount, v0);
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x118uLL);
  RtlInitUnicodeString(&Destination, 0LL);
  Destination.MaximumLength = word_1C00092A0 + 26;
  v3 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C00092A0 + 26), 0x43756F4Du);
  Destination.Buffer = v3;
  if ( !v3 )
  {
    v17 = 60;
    goto LABEL_22;
  }
  memset(v3, 0, Destination.MaximumLength);
  RtlAppendUnicodeToString(&Destination, v0);
  RtlAppendUnicodeToString(&Destination, L"\\Parameters");
  if ( Destination.MaximumLength >= (unsigned __int64)Destination.Length + 2 )
  {
    Destination.Buffer[((unsigned __int64)Destination.Length >> 1) + 1] = 0;
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Du, UserDataCount, Destination.Buffer);
    v2[2] = 288;
    *((_QWORD *)v2 + 2) = L"MouseDataQueueSize";
    v2[8] = 67108868;
    *((_QWORD *)v2 + 3) = &WPP_MAIN_CB.Reserved + 1;
    v2[16] = 288;
    *((_QWORD *)v2 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v2 + 10) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    *((_QWORD *)v2 + 16) = L"PointerDeviceBaseName";
    *((_QWORD *)v2 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v2 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    v2[22] = 67108868;
    v2[30] = 288;
    *((_QWORD *)v2 + 17) = &::DestinationString;
    v2[36] = 16777217;
    v2[44] = 288;
    v2[50] = 67108868;
    Buffer = Destination.Buffer;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    UserDataCount = 0;
    v6 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(0x80000000LL, Buffer, v2, 0LL);
    if ( v6 < 0 )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v7, v8, 62, 0, v6);
    }
  }
LABEL_8:
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x3Fu,
    UserDataCount,
    ::DestinationString.Buffer);
  v12 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) > 0xAAAAAAAu )
    {
      v13 = 2400;
      goto LABEL_11;
    }
  }
  else
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, UserDataCounta, 0);
    v12 = 100;
  }
  v13 = 24 * v12;
LABEL_11:
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v13;
  WPP_RECORDER_SF_Dd(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    v10,
    v11,
    UserDataCounta,
    v13,
    SBYTE4(WPP_MAIN_CB.DeviceQueue.Lock));
  v14 = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) == 0;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) == 0;
  LOBYTE(v15) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v15, v16, 66, UserDataCountb, v14);
  if ( (unsigned int)dword_1C0009010 > 5
    && (qword_1C0009020 & 0x400000000000LL) != 0
    && (qword_1C0009028 & 0x400000000000LL) == qword_1C0009028 )
  {
    v32 = &v22;
    v34 = &Lock_high;
    v38 = ::DestinationString.Buffer;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    p_Lock = &Lock;
    v22 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
    Lock_high = HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    v33 = 4LL;
    v35 = 4LL;
    v36 = v39;
    v37 = 2LL;
    v39[0] = ::DestinationString.Length;
    v39[1] = 0;
    v41 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)EventInformation;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C0007439 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)EventInformation;
    v29 = &unk_1C0007444;
    UserData.Reserved = 2;
    v30 = 101;
    v31 = 1;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
