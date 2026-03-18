/*
 * XREFs of DpEvalAcpiMethod @ 0x1C01ED000
 * Callers:
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C00396A8 (DpiFdoGetChildDescriptor.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C0206E44 (DpiAcpiEvalAcpiMethodEx.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0207370 (DpiAcpiGetAcpiChildName.c)
 */

__int64 __fastcall DpEvalAcpiMethod(
        __int64 a1,
        __int64 a2,
        int *a3,
        ULONG a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v7; // rcx
  int *v8; // rdi
  int v9; // r12d
  __int64 v10; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rax
  int v17; // eax
  IRP *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  const char *AcpiChildName; // rax
  struct _STRING *p_DestinationString; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  NTSTATUS v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  struct _KMUTANT *v30; // r15
  _QWORD *ChildDescriptor; // rax
  char v32; // si
  int v33; // r9d
  struct _STRING DestinationString; // [rsp+58h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-50h] BYREF
  char v38; // [rsp+D0h] [rbp+8h]

  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v38 = 0;
  v8 = a3;
  DestinationString.Buffer = 0LL;
  v9 = a2;
  LODWORD(v10) = 0;
  AttachedDeviceReference = 0LL;
  if ( !a1 )
    goto LABEL_2;
  v14 = *(_QWORD *)(a1 + 64);
  if ( !v14 || *(_DWORD *)(v14 + 16) != 1953656900 || *(_DWORD *)(v14 + 20) != 2 )
  {
    v29 = -1073741811LL;
    goto LABEL_45;
  }
  if ( KeGetCurrentIrql() )
  {
    v12 = -1073741811LL;
    LODWORD(v10) = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v14 + 40) + 28LL) >= 0x2003u )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL);
      v15[3] = 275LL;
      v15[4] = 21LL;
      v15[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    goto LABEL_4;
  }
  if ( !*(_BYTE *)(v14 + 1141) )
  {
    LODWORD(v10) = -1073741637;
    v16 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v16 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v10;
  }
  if ( !a3 || !a4 || !OutputBuffer && OutputBufferLength )
    goto LABEL_2;
  v17 = *a3;
  if ( *a3 == 1634885968 )
  {
    v38 = 1;
    *a3 = 1130980673;
    goto LABEL_19;
  }
  if ( v17 == 543451477 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    *a3 = 1130980673;
    AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v21);
    if ( !AcpiChildName )
      goto LABEL_43;
    RtlInitAnsiString(&DestinationString, AcpiChildName);
    LODWORD(a3) = (_DWORD)v8;
    p_DestinationString = &DestinationString;
LABEL_25:
    LODWORD(v10) = DpiAcpiEvalAcpiMethodEx(
                     a1,
                     (int)p_DestinationString,
                     (int)a3,
                     a4,
                     OutputBuffer,
                     OutputBufferLength,
                     1);
    return (unsigned int)v10;
  }
  if ( v17 == 2017818181 )
  {
    if ( (_DWORD)a2 != -1 )
    {
LABEL_2:
      v12 = -1073741811LL;
LABEL_3:
      LODWORD(v10) = v12;
LABEL_4:
      v13 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v13 + 24) = v12;
      WdLogEvent5_WdError(v13);
      return (unsigned int)v10;
    }
    *a3 = 1130980673;
    LODWORD(p_DestinationString) = 0;
    goto LABEL_25;
  }
LABEL_19:
  if ( (_DWORD)a2 != -1 )
  {
    v30 = (struct _KMUTANT *)(v14 + 3272);
    KeWaitForSingleObject((PVOID)(v14 + 3272), Executive, 0, 0, 0LL);
    ChildDescriptor = DpiFdoGetChildDescriptor(v14, v9);
    if ( ChildDescriptor )
    {
      v32 = 1;
      RtlInitAnsiString(&DestinationString, (PCSZ)ChildDescriptor[10]);
      LODWORD(v10) = DpiAcpiEvalAcpiMethodEx(
                       a1,
                       (int)&DestinationString,
                       (int)v8,
                       v33,
                       OutputBuffer,
                       OutputBufferLength,
                       v38);
    }
    else
    {
      v32 = 0;
    }
    KeReleaseMutex(v30, 0);
    if ( v32 )
      return (unsigned int)v10;
LABEL_43:
    v12 = -1073741810LL;
    goto LABEL_3;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(v14 + 24));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v18 = IoBuildDeviceIoControlRequest(
          0x32C004u,
          AttachedDeviceReference,
          v8,
          a4,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v18 )
  {
    LODWORD(v10) = -1073741670;
    v20 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v20 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v20);
    goto LABEL_47;
  }
  LODWORD(v10) = IofCallDriver(AttachedDeviceReference, v18);
  if ( (_DWORD)v10 == 259 )
  {
    v26 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v10 = v26;
    if ( v26 )
    {
      v27 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v27 + 24) = v10;
LABEL_46:
      WdLogEvent5_WdError(v27);
      goto LABEL_47;
    }
    LODWORD(v10) = IoStatusBlock.Status;
  }
  if ( (int)v10 < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v7, v24, v25);
    *(_QWORD *)(v28 + 24) = (int)v10;
    WdLogEvent5_WdWarning(v28);
    goto LABEL_47;
  }
  if ( OutputBufferLength && (*OutputBuffer != 1114596673 || !OutputBuffer[2]) )
  {
    v29 = -1072431089LL;
LABEL_45:
    LODWORD(v10) = v29;
    v27 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v27 + 24) = v29;
    goto LABEL_46;
  }
LABEL_47:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)v10;
}
