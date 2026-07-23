/*
 * XREFs of sub_180085718 @ 0x180085718
 * Callers:
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwOpenProcess @ 0x18009AF80 (ZwOpenProcess.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 */

int __fastcall sub_180085718(HANDLE SourceHandle, __int64 a2, _QWORD *a3, HANDLE *a4, _CLIENT_ID *a5)
{
  int result; // eax
  NTSTATUS InformationThread; // ebx
  HANDLE TargetHandle; // [rsp+48h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  _BYTE ThreadInformation[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  _CLIENT_ID ClientId; // [rsp+90h] [rbp+27h] BYREF

  result = ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             SourceHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x800u,
             0,
             0);
  if ( result >= 0 )
  {
    InformationThread = ZwQueryInformationThread(TargetHandle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    ZwClose(TargetHandle);
    if ( InformationThread >= 0 )
    {
      if ( a5 )
        *a5 = ClientId;
      if ( a3 )
        *a3 = v12;
      if ( a4 )
      {
        if ( ClientId.UniqueProcess == NtCurrentTeb()->ClientId.UniqueProcess )
        {
          *a4 = (HANDLE)-1LL;
        }
        else
        {
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          return ZwOpenProcess(a4, 0x452u, &ObjectAttributes, &ClientId);
        }
      }
    }
    return InformationThread;
  }
  return result;
}
