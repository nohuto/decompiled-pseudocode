/*
 * XREFs of PopDiagTraceHiberStats @ 0x140703B78
 * Callers:
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopOpenPowerKey @ 0x14013A270 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     PopCaptureTimeOnProcZero @ 0x1404314C4 (PopCaptureTimeOnProcZero.c)
 *     PopQpcTimeInMs @ 0x140439734 (PopQpcTimeInMs.c)
 *     PopComputeDerivedHiberStats @ 0x14070141C (PopComputeDerivedHiberStats.c)
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
  v3 = qword_140365D30;
  qword_140365D70 -= qword_140365D58 + qword_140365D50;
  qword_140365D38 = v2 - (qword_140365D58 + qword_140365D50);
  dword_140365E3C = dword_140365B44;
  dword_140365E38 = dword_140365BC8;
  v20 = qword_140365D30;
  LODWORD(qword_140365DE8) = PopQpcTimeInMs(&qword_140365C18, &qword_140365C20);
  qword_140365C98 = (unsigned int)PopQpcTimeInMs(&qword_140365BE8, &qword_140365CA0);
  PopComputeDerivedHiberStats((unsigned __int64 *)&qword_140365C58, v3, (__int64)v21);
  v4 = (unsigned __int64 *)v22;
  v19 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v22;
  v7 = qword_1407917C8;
  do
  {
    v8 = *((_DWORD *)v7 + 2);
    v9 = (__int64 *)v21;
    if ( (v8 & 0x40000000) == 0 )
      v9 = &qword_140365C58;
    v10 = (unsigned int *)((char *)v9 + *v7);
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
      RtlInitUnicodeString(&DestinationString, (PCWSTR)*(v7 - 1));
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
  qword_140365DB0 /= v3;
  qword_140365C60 /= v3;
  v14 = qword_140365D38 / v3 - (unsigned int)qword_140365CA8 - (unsigned int)dword_140365CB0;
  qword_140365E40 = v14;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140365DB0, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140365C60, 4u);
    if ( qword_140365DD8 )
    {
      dword_140365B24 += PopQpcTimeInMs(&qword_140365C08, &qword_140365DE0);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_140365B24, 4u);
    }
    qword_140365E48 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_140365E48, 8u);
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
