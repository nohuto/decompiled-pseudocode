/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C011FC0C
 * Callers:
 *     DpiAcpiExposeInfo @ 0x1C011F4CC (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C011FBD0 (DpiAcpiGetAcpiChildName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C01CBEAC (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r14
  IRP *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS Status; // ebx
  ULONG OutputBufferLength; // ebx
  __int64 v10; // rsi
  PVOID PoolWithTag; // rax
  IRP *v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rax
  PVOID v15; // rax
  __int64 v16; // rax
  int v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  void *v21; // rcx
  void *v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-59h] BYREF
  int v38[2]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v39; // [rsp+88h] [rbp-39h]
  __int64 v40; // [rsp+90h] [rbp-31h]
  struct _STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  _QWORD InputBuffer[2]; // [rsp+A8h] [rbp-19h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v44; // [rsp+C8h] [rbp+7h]
  __int64 v45; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v46; // [rsp+D8h] [rbp+17h]
  __int64 v47; // [rsp+E0h] [rbp+1Fh]

  result = 0LL;
  InputBuffer[0] = 0LL;
  InputBuffer[1] = 0LL;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v44 = 0;
  *(_QWORD *)v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( *(_QWORD *)(a1 + 3136) && *(_QWORD *)(a1 + 3128) )
    return result;
  if ( *(_DWORD *)(a1 + 3120) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer[0] = 0x148696541LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x32C020u, v3, InputBuffer, 0x10u, NumberOfBytes, 0x14u, 0, &Event, &IoStatusBlock);
  if ( !v4 )
    goto LABEL_24;
  Status = IofCallDriver(v3, v4);
  if ( Status == 259 )
  {
    v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v13 = v23;
    if ( v23 )
    {
LABEL_33:
      v24 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v24 + 24) = v13;
LABEL_45:
      WdLogEvent5_WdError(v24);
LABEL_19:
      if ( (int)v13 < 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    v25 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v25 + 24) = Status;
    WdLogEvent5_WdError(v25);
LABEL_35:
    LODWORD(v13) = -1072431089;
    goto LABEL_27;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537
    || (OutputBufferLength = HIDWORD(NumberOfBytes[0]), HIDWORD(NumberOfBytes[0]) < 0x14) )
  {
    LODWORD(v13) = -1072431089;
    v24 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v24 + 24) = -1072431089LL;
    goto LABEL_45;
  }
  v10 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x74727044u);
  *(_QWORD *)(a1 + 3128) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_25:
    v19 = -1073741801LL;
    goto LABEL_26;
  }
  memset(PoolWithTag, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v12 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 3128),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
  {
LABEL_24:
    v19 = -1073741670LL;
LABEL_26:
    LODWORD(v13) = v19;
    v20 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdLowResource(v20);
    goto LABEL_27;
  }
  LODWORD(v13) = IofCallDriver(v3, v12);
  if ( (_DWORD)v13 == 259 )
  {
    v26 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v13 = v26;
    if ( !v26 )
    {
      LODWORD(v13) = IoStatusBlock.Status;
      goto LABEL_12;
    }
    goto LABEL_33;
  }
LABEL_12:
  v14 = *(_DWORD **)(a1 + 3128);
  if ( *v14 != 1198089537 || !v14[1] || IoStatusBlock.Information != v10 )
    goto LABEL_35;
  *(_DWORD *)(a1 + 3120) = 0;
  v15 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)v14[1], 0x74727044u);
  *(_QWORD *)(a1 + 3136) = v15;
  if ( !v15 )
    goto LABEL_25;
  v16 = *(_QWORD *)(a1 + 3128);
  v17 = 1;
  v18 = v16 + 8;
  if ( *(_DWORD *)(v16 + 4) <= 1u )
    goto LABEL_19;
  while ( 1 )
  {
    v18 += *(unsigned int *)(v18 + 4) + 8LL;
    if ( (*(_BYTE *)v18 & 1) != 0 )
      break;
LABEL_18:
    if ( (unsigned int)++v17 >= *(_DWORD *)(*(_QWORD *)(a1 + 3128) + 4LL) )
      goto LABEL_19;
  }
  RtlInitAnsiString(&DestinationString, (PCSZ)(v18 + 8));
  v27 = *(_QWORD *)(a1 + 24);
  qmemcpy(v38, "AeiC_ADR", sizeof(v38));
  v29 = DpiAcpiEvalAcpiMethodEx(v27, (int)&DestinationString, (int)v38, v28, &v45, 0x18u, 1);
  v13 = v29;
  if ( v29 < 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    *(_QWORD *)(v34 + 24) = v13;
    WdLogEvent5_WdWarning(v34);
    LODWORD(v13) = 0;
    goto LABEL_18;
  }
  if ( (_DWORD)v45 == 1114596673 && (_DWORD)v46 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 3136) + 16LL * *(unsigned int *)(a1 + 3120)) = v47;
    *(_QWORD *)(*(_QWORD *)(a1 + 3136) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3120))++ + 8) = v18 + 8;
    goto LABEL_18;
  }
  LODWORD(v13) = -1072431089;
  v35 = WdLogNewEntry5_WdError(v31, v30);
  *(_QWORD *)(v35 + 24) = -1072431089LL;
  WdLogEvent5_WdError(v35);
LABEL_27:
  *(_DWORD *)(a1 + 3120) = -1;
  v21 = *(void **)(a1 + 3136);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 3136) = 0LL;
  }
  v22 = *(void **)(a1 + 3128);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a1 + 3128) = 0LL;
  }
LABEL_20:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v13;
}
