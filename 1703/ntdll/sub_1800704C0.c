/*
 * XREFs of sub_1800704C0 @ 0x1800704C0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180070200 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_18007073C @ 0x18007073C (sub_18007073C.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800704C0(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  const WCHAR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v7; // edi
  HANDLE v8; // rbx
  USHORT *v9; // rdi
  NTSTATUS v10; // eax
  void *v11; // rsi
  int v12; // ecx
  ULONG v13; // r14d
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v16; // eax
  unsigned int v17; // eax
  ULONG Length[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD ProcessInformation[68]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+2B8h] [rbp+1B0h] BYREF

  KeyHandle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  Length[1] = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( (ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = sub_18007073C(ProcessInformation[1]);
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
              v9 = (USHORT *)KeyValueInformation;
              v10 = ZwQueryValueKey(
                      v8,
                      &DestinationString,
                      KeyValuePartialInformation,
                      KeyValueInformation,
                      0x400u,
                      Length);
              if ( v10 < 0 )
              {
                if ( v10 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v13 = Length[0];
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1572864, Length[0]);
                    v11 = Heap;
                    if ( !Heap )
                      break;
                    v9 = (USHORT *)Heap;
                    v16 = ZwQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, Heap, v13, Length);
                    if ( v16 >= 0 )
                      goto LABEL_18;
                    if ( v16 != -2147483643 )
                      goto LABEL_34;
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
                  }
                }
              }
              else
              {
                v11 = 0LL;
LABEL_18:
                v12 = *((_DWORD *)v9 + 1);
                if ( ((v12 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v12 == 4 )
                  {
                    if ( *((_DWORD *)v9 + 2) == 4 )
                    {
                      Length[0] = 4;
                      Length[1] = *((_DWORD *)v9 + 3);
                    }
                  }
                  else if ( v12 == 1 && ((unsigned __int8)&Length[1] & 3) == 0 )
                  {
                    Length[0] = 4;
                    DestinationString.Buffer = v9 + 6;
                    DestinationString.Length = v9[4];
                    DestinationString.MaximumLength = v9[4];
                    RtlUnicodeStringToInteger(&DestinationString, 0, &Length[1]);
                  }
                }
                else if ( v12 == 4 )
                {
                  Length[0] = *((_DWORD *)v9 + 2);
                  v17 = *((_DWORD *)v9 + 2);
                  if ( v17 <= 4 )
                    memmove(&Length[1], v9 + 6, v17);
                }
LABEL_34:
                if ( v11 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
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
  return Length[1];
}
