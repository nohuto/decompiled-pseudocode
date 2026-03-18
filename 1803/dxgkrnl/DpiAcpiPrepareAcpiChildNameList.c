/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C0207900
 * Callers:
 *     DpiAcpiExposeInfo @ 0x1C02070D0 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0207370 (DpiAcpiGetAcpiChildName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C0206E44 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r14
  IRP *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  NTSTATUS Status; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  ULONG OutputBufferLength; // ebx
  __int64 v15; // rsi
  PVOID PoolWithTag; // rax
  IRP *v17; // rax
  NTSTATUS v18; // eax
  _DWORD *v19; // rax
  PVOID v20; // rax
  __int64 v21; // rax
  int v22; // r15d
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rcx
  void *v33; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-59h] BYREF
  int v36[2]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v37; // [rsp+88h] [rbp-39h]
  __int64 v38; // [rsp+90h] [rbp-31h]
  struct _STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  _QWORD InputBuffer[2]; // [rsp+A8h] [rbp-19h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v42; // [rsp+C8h] [rbp+7h]
  __int64 OutputBuffer; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v44; // [rsp+D8h] [rbp+17h]
  __int64 v45; // [rsp+E0h] [rbp+1Fh]

  result = 0LL;
  InputBuffer[0] = 0LL;
  InputBuffer[1] = 0LL;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v42 = 0;
  *(_QWORD *)v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  OutputBuffer = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( *(_QWORD *)(a1 + 3160) && *(_QWORD *)(a1 + 3152) )
    return result;
  if ( *(_DWORD *)(a1 + 3144) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer[0] = 0x148696541LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x32C020u, v3, InputBuffer, 0x10u, NumberOfBytes, 0x14u, 0, &Event, &IoStatusBlock);
  if ( !v4 )
    goto LABEL_6;
  Status = IofCallDriver(v3, v4);
  if ( Status != 259 )
  {
LABEL_12:
    if ( Status != -2147483643 )
    {
      v13 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v13 + 24) = Status;
      WdLogEvent5_WdError(v13);
      goto LABEL_14;
    }
    if ( LODWORD(NumberOfBytes[0]) != 1198089537
      || (OutputBufferLength = HIDWORD(NumberOfBytes[0]), HIDWORD(NumberOfBytes[0]) < 0x14) )
    {
      LODWORD(v7) = -1072431089;
      v12 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v12 + 24) = -1072431089LL;
      goto LABEL_38;
    }
    v15 = HIDWORD(NumberOfBytes[0]);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x74727044u);
    *(_QWORD *)(a1 + 3152) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, OutputBufferLength);
      KeClearEvent(&Event);
      v17 = IoBuildDeviceIoControlRequest(
              0x32C020u,
              v3,
              InputBuffer,
              0x10u,
              *(PVOID *)(a1 + 3152),
              OutputBufferLength,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v17 )
      {
LABEL_6:
        v6 = -1073741670LL;
LABEL_7:
        LODWORD(v7) = v6;
        v8 = WdLogNewEntry5_WdLowResource(v5);
        *(_QWORD *)(v8 + 24) = v6;
        WdLogEvent5_WdLowResource(v8);
        goto LABEL_40;
      }
      LODWORD(v7) = IofCallDriver(v3, v17);
      if ( (_DWORD)v7 == 259 )
      {
        v18 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v7 = v18;
        if ( v18 )
          goto LABEL_10;
        LODWORD(v7) = IoStatusBlock.Status;
      }
      v19 = *(_DWORD **)(a1 + 3152);
      if ( *v19 != 1198089537 || !v19[1] || IoStatusBlock.Information != v15 )
      {
LABEL_14:
        LODWORD(v7) = -1072431089;
        goto LABEL_40;
      }
      *(_DWORD *)(a1 + 3144) = 0;
      v20 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)v19[1], 0x74727044u);
      *(_QWORD *)(a1 + 3160) = v20;
      if ( v20 )
      {
        v21 = *(_QWORD *)(a1 + 3152);
        v22 = 1;
        v23 = v21 + 8;
        if ( *(_DWORD *)(v21 + 4) > 1u )
        {
          while ( 1 )
          {
            v23 += *(unsigned int *)(v23 + 4) + 8LL;
            if ( (*(_BYTE *)v23 & 1) != 0 )
            {
              RtlInitAnsiString(&DestinationString, (PCSZ)(v23 + 8));
              v24 = *(_QWORD *)(a1 + 24);
              qmemcpy(v36, "AeiC_ADR", sizeof(v36));
              v26 = DpiAcpiEvalAcpiMethodEx(v24, (const void **)&DestinationString, v36, v25, &OutputBuffer, 0x18u, 1);
              v7 = v26;
              if ( v26 >= 0 )
              {
                if ( (_DWORD)OutputBuffer != 1114596673 || !(_DWORD)v44 )
                {
                  LODWORD(v7) = -1072431089;
                  v31 = WdLogNewEntry5_WdError(v28);
                  *(_QWORD *)(v31 + 24) = -1072431089LL;
                  WdLogEvent5_WdError(v31);
                  goto LABEL_40;
                }
                *(_DWORD *)(*(_QWORD *)(a1 + 3160) + 16LL * *(unsigned int *)(a1 + 3144)) = v45;
                *(_QWORD *)(*(_QWORD *)(a1 + 3160) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3144))++ + 8) = v23 + 8;
              }
              else
              {
                v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
                *(_QWORD *)(v30 + 24) = v7;
                WdLogEvent5_WdWarning(v30);
                LODWORD(v7) = 0;
              }
            }
            if ( (unsigned int)++v22 >= *(_DWORD *)(*(_QWORD *)(a1 + 3152) + 4LL) )
              goto LABEL_39;
          }
        }
        goto LABEL_39;
      }
    }
    v6 = -1073741801LL;
    goto LABEL_7;
  }
  v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v7 = v11;
  if ( !v11 )
  {
    Status = IoStatusBlock.Status;
    goto LABEL_12;
  }
LABEL_10:
  v12 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v12 + 24) = v7;
LABEL_38:
  WdLogEvent5_WdError(v12);
LABEL_39:
  if ( (int)v7 < 0 )
  {
LABEL_40:
    *(_DWORD *)(a1 + 3144) = -1;
    v32 = *(void **)(a1 + 3160);
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0);
      *(_QWORD *)(a1 + 3160) = 0LL;
    }
    v33 = *(void **)(a1 + 3152);
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      *(_QWORD *)(a1 + 3152) = 0LL;
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v7;
}
