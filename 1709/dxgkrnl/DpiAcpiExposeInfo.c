/*
 * XREFs of DpiAcpiExposeInfo @ 0x1C011EABC
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C011ED3C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C011F1F8 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiExposeInfo(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  _DWORD *v4; // rax
  CHAR *PoolWithTag; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rax
  struct _STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  STRING Source; // [rsp+70h] [rbp-49h] BYREF
  int v16; // [rsp+80h] [rbp-39h] BYREF
  _OWORD *v17; // [rsp+88h] [rbp-31h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v19[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v20; // [rsp+E0h] [rbp+27h]
  wchar_t v21; // [rsp+E4h] [rbp+2Bh]

  v1 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)&Source.Length = 65537;
  Source.Buffer = (PCHAR)File;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  result = DpiAcpiPrepareAcpiChildNameList(v1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD **)(v1 + 3152);
    if ( *v4 == 1198089537 && v4[1] )
    {
      Destination.MaximumLength = 4096;
      PoolWithTag = (CHAR *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x74727044u);
      Destination.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Destination.MaximumLength);
        v7 = *(_QWORD *)(v1 + 3152);
        v8 = 1;
        v9 = v7 + 8;
        if ( *(_DWORD *)(v7 + 4) > 1u )
        {
          do
          {
            v9 += *(unsigned int *)(v9 + 4) + 8LL;
            if ( (*(_BYTE *)v9 & 1) == 0 )
            {
              RtlInitAnsiString(&DestinationString, (PCSZ)(v9 + 8));
              RtlAppendStringToString(&Destination, &DestinationString);
              RtlAppendStringToString(&Destination, &Source);
            }
            ++v8;
          }
          while ( v8 < *(_DWORD *)(*(_QWORD *)(v1 + 3152) + 4LL) );
        }
        if ( !Destination.Buffer )
          return (unsigned int)v3;
        if ( Destination.Length )
        {
          v20 = *(_DWORD *)L"FO";
          v21 = aDisplayAcpiInf[18];
          v16 = 2490404;
          v17 = v19;
          v19[0] = *(_OWORD *)L"_DISPLAY_ACPI_INFO";
          *(_DWORD *)&DestinationString.Length = 0;
          DestinationString.Buffer = 0LL;
          KeyHandle = 0LL;
          v19[1] = *(_OWORD *)L"_ACPI_INFO";
          Handle = 0LL;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
          if ( v3 >= 0 )
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v3 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
            ZwClose(KeyHandle);
            if ( v3 >= 0 )
            {
              v3 = ZwSetValueKey(
                     Handle,
                     (PUNICODE_STRING)&DestinationString,
                     0,
                     3u,
                     Destination.Buffer,
                     Destination.Length);
              ZwClose(Handle);
            }
          }
        }
      }
      else
      {
        v3 = -1073741801;
        v10 = WdLogNewEntry5_WdLowResource(v6);
        *(_QWORD *)(v10 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v10);
      }
    }
    else
    {
      v3 = -1072431089;
    }
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)v3;
  }
  return result;
}
