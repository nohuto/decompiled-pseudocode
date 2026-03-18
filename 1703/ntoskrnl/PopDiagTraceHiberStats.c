/*
 * XREFs of PopDiagTraceHiberStats @ 0x140577F20
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14014CFA8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x14040A738 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x14040A76C (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x1405782E0 (PopComputeDerivedHiberStats.c)
 */

char PopDiagTraceHiberStats()
{
  int v0; // eax
  HANDLE v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 *v4; // r12
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r15
  _BYTE *Data; // r13
  __int64 *v7; // rsi
  int v8; // ebx
  __int64 *v9; // rcx
  unsigned int *v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // ebx
  ULONG DataSize; // edi
  unsigned __int64 v14; // rax
  REGHANDLE v15; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  _BYTE v21[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v22[384]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF

  v0 = PopOpenPowerKey((__int64)&KeyHandle);
  v1 = KeyHandle;
  if ( v0 < 0 )
    v1 = 0LL;
  KeyHandle = v1;
  v2 = PopCaptureTimeOnProcZero();
  v3 = qword_14034B6B0;
  qword_14034B6F0 -= qword_14034B6D8 + qword_14034B6D0;
  qword_14034B6B8 = v2 - (qword_14034B6D8 + qword_14034B6D0);
  dword_14034B7BC = dword_14034B2E4;
  dword_14034B7B8 = dword_14034B368;
  v20 = qword_14034B6B0;
  LODWORD(qword_14034B768) = PopQpcTimeInMs(&qword_14034B598, &qword_14034B5A0);
  qword_14034B618 = (unsigned int)PopQpcTimeInMs(&qword_14034B568, &qword_14034B620);
  PopComputeDerivedHiberStats(&qword_14034B5D8, v3, v21);
  v4 = (unsigned __int64 *)v22;
  v19 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v22;
  v7 = &qword_14074EED0;
  do
  {
    v8 = *(_DWORD *)v7;
    v9 = (__int64 *)v21;
    if ( (*(_DWORD *)v7 & 0x40000000) == 0 )
      v9 = &qword_14034B5D8;
    v10 = (unsigned int *)((char *)v9 + *(v7 - 1));
    if ( (v8 & 2) != 0 )
      v11 = *(_QWORD *)v10;
    else
      v11 = *v10;
    *v4 = v11;
    if ( v8 < 0 )
      *v4 = v11 / v3;
    v12 = v8 & 0x20;
    DataSize = v12 != 0 ? 8 : 4;
    if ( v1 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)*(v7 - 2));
      ZwSetValueKey(v1, &DestinationString, 0, v12 != 0 ? 11 : 4, Data, DataSize);
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v3 = v20;
    v7 += 3;
    p_Reserved->Reserved = 0;
    ++v4;
    p_Reserved += 4;
    --v19;
  }
  while ( v19 );
  qword_14034B730 /= v3;
  qword_14034B5E0 /= v3;
  v14 = qword_14034B6B8 / v3 - (unsigned int)qword_14034B628 - (unsigned int)dword_14034B630;
  qword_14034B7C0 = v14;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_14034B730, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_14034B5E0, 4u);
    if ( qword_14034B758 )
    {
      dword_14034B2C4 += PopQpcTimeInMs(&qword_14034B588, &qword_14034B760);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_14034B2C4, 4u);
    }
    qword_14034B7C8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_14034B7C8, 8u);
    LOBYTE(v14) = ZwClose(KeyHandle);
  }
  if ( PopDiagHandleRegistered )
  {
    v15 = PopDiagHandle;
    LOBYTE(v14) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( (_BYTE)v14 )
      LOBYTE(v14) = EtwWrite(v15, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x2Fu, &UserData);
  }
  return v14;
}
