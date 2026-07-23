/*
 * XREFs of sub_18007BD78 @ 0x18007BD78
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180037F50 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x18009AD80 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 sub_18007BD78()
{
  unsigned int v0; // edi
  char v1; // si
  unsigned int v2; // ecx
  NTSTATUS v4; // ebx
  NTSTATUS Key; // ebx
  NTSTATUS ValueKey; // ebx
  PVOID v7; // rbx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-C0h] BYREF
  PVOID ProcedureAddress; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID DllHandle; // [rsp+70h] [rbp-98h] BYREF
  ULONG v15[2]; // [rsp+78h] [rbp-90h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp-88h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v20; // [rsp+DCh] [rbp-2Ch]
  _BYTE KeyValueInformation[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v22; // [rsp+FCh] [rbp-Ch]
  int v23; // [rsp+100h] [rbp-8h]
  unsigned int v24; // [rsp+104h] [rbp-4h]
  _BYTE v25[4]; // [rsp+148h] [rbp+40h] BYREF
  int v26; // [rsp+14Ch] [rbp+44h]
  int v27; // [rsp+150h] [rbp+48h]
  int v28; // [rsp+154h] [rbp+4Ch]
  PVOID *retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  DllHandle = 0LL;
  ProcedureAddress = 0LL;
  if ( byte_18015C298 )
    return 0LL;
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) > 1u )
    return 0LL;
  if ( ZwOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&stru_180110810) < 0
    || (v4 = ZwQueryValueKey(KeyHandle, (PUNICODE_STRING)&stru_180111298, KeyValuePartialInformation, v25, 0x50u, v15),
        ZwClose(KeyHandle),
        v4 < 0)
    || v26 != 4
    || v27 != 4
    || !v28 )
  {
    v10 = 0LL;
    v1 = 0;
    if ( ZwOpenKey(&v10, 0x20019u, &stru_1801565E8) >= 0 )
    {
      Key = ZwQueryKey(v10, KeyFullInformation, KeyInformation, 0x30u, ResultLength);
      ZwClose(v10);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v20 )
        goto LABEL_27;
    }
    if ( ZwOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_1801107E0) >= 0 )
    {
      if ( ZwQueryValueKey(
             Handle,
             (PUNICODE_STRING)&ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x50u,
             ResultLength) >= 0
        && v22 == 4
        && v23 == 4
        && v24 > 1 )
      {
        v1 = 1;
        ZwQueryValueKey(
          Handle,
          (PUNICODE_STRING)&stru_180111288,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x50u,
          ResultLength);
      }
      ZwClose(Handle);
      if ( v1 )
        goto LABEL_27;
    }
    if ( RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
    {
      v2 = CurrentUserKeyPath.Length + 120;
      Destination.Length = 0;
      if ( v2 <= 0xFFFE )
      {
        Destination.MaximumLength = CurrentUserKeyPath.Length + 120;
        Destination.Buffer = (PWCH)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, (unsigned __int16)v2);
        if ( Destination.Buffer )
        {
          if ( RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath) >= 0
            && RtlAppendUnicodeToString(
                 &Destination,
                 L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
            {
              ValueKey = ZwQueryValueKey(
                           Handle,
                           (PUNICODE_STRING)&ValueName,
                           KeyValuePartialInformation,
                           KeyValueInformation,
                           0x50u,
                           ResultLength);
              ZwClose(Handle);
              if ( ValueKey >= 0 && v22 == 4 && v23 == 4 && v24 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
        }
      }
      RtlFreeUnicodeString(&CurrentUserKeyPath);
      if ( v1 )
      {
LABEL_27:
        if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_180111278, &DllHandle) >= 0 )
        {
          v7 = DllHandle;
          if ( LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&stru_1801112A8,
                 0,
                 &ProcedureAddress,
                 0,
                 retaddr) >= 0
            && ProcedureAddress )
          {
            qword_18015BFA8 = __ROR8__(
                                (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                MEMORY[0x7FFE0330] & 0x3F);
            qword_18015D410 = (__int64)v7;
          }
          else
          {
            LdrUnloadDll(v7);
            return (unsigned int)-1073741511;
          }
        }
        else
        {
          return (unsigned int)-1073741515;
        }
      }
    }
  }
  return v0;
}
