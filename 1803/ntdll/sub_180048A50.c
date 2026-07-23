/*
 * XREFs of sub_180048A50 @ 0x180048A50
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180048200 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18004945C @ 0x18004945C (sub_18004945C.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180048A50(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  const WCHAR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v7; // edi
  HANDLE v8; // rbx
  _BYTE *v9; // rdi
  NTSTATUS v10; // eax
  void *v11; // rsi
  ULONG v12; // r14d
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  ULONG Length; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _QWORD ProcessInformation[68]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  Value = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( (ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = sub_18004945C(ProcessInformation[1]);
    v4 = (const WCHAR *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      while ( *(_WORD *)(v3 + 2 * v5++ + 2) != 0 )
        ;
      v7 = 2 * v5 + 202;
      Destination.Length = 0;
      Destination.Buffer = (PWCH)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      if ( Destination.Buffer )
      {
        Destination.MaximumLength = v7;
        if ( RtlAppendUnicodeToString(
               &Destination,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString(&Destination, v4) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v8 = KeyHandle;
            if ( RtlInitUnicodeStringEx(&DestinationString, L"GlobalFlag") >= 0 )
            {
              v9 = KeyValueInformation;
              v10 = ZwQueryValueKey(
                      v8,
                      &DestinationString,
                      KeyValuePartialInformation,
                      KeyValueInformation,
                      0x400u,
                      &Length);
              if ( v10 >= 0 )
              {
                v11 = 0LL;
LABEL_25:
                v16 = *((_DWORD *)v9 + 1);
                if ( ((v16 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v16 == 4 )
                  {
                    if ( *((_DWORD *)v9 + 2) == 4 )
                    {
                      Length = 4;
                      Value = *((_DWORD *)v9 + 3);
                    }
                  }
                  else if ( v16 == 1 && ((unsigned __int8)&Value & 3) == 0 )
                  {
                    Length = 4;
                    DestinationString.Buffer = (PWCH)(v9 + 12);
                    DestinationString.Length = *((_WORD *)v9 + 4);
                    DestinationString.MaximumLength = *((_WORD *)v9 + 4);
                    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                  }
                }
                else if ( v16 == 4 )
                {
                  Length = *((_DWORD *)v9 + 2);
                  v17 = *((_DWORD *)v9 + 2);
                  if ( v17 <= 4 )
                    memmove(&Value, v9 + 12, v17);
                }
LABEL_35:
                if ( v11 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
              }
              else if ( v10 == -2147483643 )
              {
                while ( 1 )
                {
                  v12 = Length;
                  ProcessHeap = NtCurrentPeb()->ProcessHeap;
                  if ( !ProcessHeap )
                    break;
                  Heap = RtlAllocateHeap(ProcessHeap, Flags + 1572864, Length);
                  v11 = Heap;
                  if ( !Heap )
                    break;
                  v9 = Heap;
                  v15 = ZwQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, Heap, v12, &Length);
                  if ( v15 >= 0 )
                    goto LABEL_25;
                  if ( v15 != -2147483643 )
                    goto LABEL_35;
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Destination.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  return Value;
}
