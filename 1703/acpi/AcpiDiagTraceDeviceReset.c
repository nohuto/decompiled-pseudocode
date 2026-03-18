/*
 * XREFs of AcpiDiagTraceDeviceReset @ 0x1C0041B44
 * Callers:
 *     AcpiDeviceReset @ 0x1C009DBE0 (AcpiDeviceReset.c)
 * Callees:
 *     AMLIGetNameSpaceObjectPath @ 0x1C0014558 (AMLIGetNameSpaceObjectPath.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     RtlStringCchLengthA @ 0x1C0042530 (RtlStringCchLengthA.c)
 */

void __fastcall AcpiDiagTraceDeviceReset(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rcx
  unsigned __int16 v4; // ax
  wchar_t *Buffer; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r8
  __int64 v8; // rcx
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  size_t pcchLength; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t *v13; // [rsp+68h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-98h]
  int *v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  int *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  char psz[128]; // [rsp+A8h] [rbp-60h] BYREF
  int v20; // [rsp+150h] [rbp+48h] BYREF
  int v21; // [rsp+158h] [rbp+50h] BYREF

  v21 = a3;
  v20 = a2;
  v3 = *(__int64 **)(a1 + 712);
  if ( v3 )
  {
    LODWORD(pcchLength) = 128;
    if ( (int)AMLIGetNameSpaceObjectPath(v3, psz, &pcchLength) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      if ( RtlStringCchLengthA(psz, 0x80uLL, &pcchLength) < 0 )
      {
        v4 = 512;
        LOWORD(v9) = 512;
      }
      else
      {
        v4 = pcchLength;
        LOWORD(v9) = pcchLength;
      }
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * v4 + 2, 0x53706341u);
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Buffer )
      {
        v6 = v9;
        v7 = 0;
        DestinationString.MaximumLength = 2 * (v9 + 1);
        for ( DestinationString.Length = DestinationString.MaximumLength - 2;
              v7 < (unsigned __int16)v9;
              Buffer = DestinationString.Buffer )
        {
          v8 = v7++;
          Buffer[v8] = psz[v8];
          v6 = v9;
        }
        Buffer[v6] = 0;
        UserData.Ptr = (unsigned __int64)&v9;
        v13 = DestinationString.Buffer;
        *(_QWORD *)&UserData.Size = 2LL;
        v14 = 2 * (unsigned int)(unsigned __int16)v9;
        v15 = &v20;
        v17 = &v21;
        v16 = 2LL;
        v18 = 4LL;
        EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_RESET, 0LL, 4u, &UserData);
        if ( DestinationString.Buffer )
          ExFreePoolWithTag(DestinationString.Buffer, 0);
      }
    }
  }
}
