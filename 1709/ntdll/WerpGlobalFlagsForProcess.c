/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x180076860
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800765A0 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     WerpPathTail @ 0x180076ADC (WerpPathTail.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
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
  void *ProcessHeap; // rcx
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
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (const WCHAR *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      while ( *(_WORD *)(v3 + 2 * v5++ + 2) != 0 )
        ;
      v7 = 2 * v5 + 202;
      Destination.Length = 0;
      Destination.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
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
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v8 = KeyHandle;
            if ( RtlInitUnicodeStringEx(&DestinationString, L"GlobalFlag") >= 0 )
            {
              v9 = KeyValueInformation;
              v10 = NtQueryValueKey(
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
                    DestinationString.Buffer = (wchar_t *)(v9 + 12);
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
                  Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
                  v11 = Heap;
                  if ( !Heap )
                    break;
                  v9 = Heap;
                  v15 = NtQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, Heap, v12, &Length);
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
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Destination.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  return Value;
}
