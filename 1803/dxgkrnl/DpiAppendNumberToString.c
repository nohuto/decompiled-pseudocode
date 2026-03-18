/*
 * XREFs of DpiAppendNumberToString @ 0x1C01FCCE8
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C020CC00 (DpiPdoHandleQueryId.c)
 *     DpiGdoCreateGdiObjects @ 0x1C020E0A8 (DpiGdoCreateGdiObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C020E550 (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiAppendNumberToString(PCWSTR SourceString, ULONG Value, PUNICODE_STRING Destination)
{
  wchar_t *PoolWithTag; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  SIZE_T v9; // rdx
  wchar_t *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_DWORD *)&String.Length = 1441792;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x74727044u);
  String.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, String.MaximumLength);
    v7 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v7 >= 0 )
    {
      v9 = (unsigned __int16)(String.MaximumLength + DestinationString.MaximumLength);
      Destination->MaximumLength = v9;
      Destination->Length = 0;
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x74727044u);
      Destination->Buffer = v10;
      if ( v10 )
      {
        memset(v10, 0, Destination->MaximumLength);
        RtlCopyUnicodeString(Destination, &DestinationString);
        RtlAppendUnicodeStringToString(Destination, &String);
      }
      else
      {
        v7 = -1073741801;
        v12 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v12 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v12);
      }
    }
    ExFreePoolWithTag(String.Buffer, 0x74727044u);
  }
  else
  {
    v7 = -1073741801;
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v8);
  }
  return (unsigned int)v7;
}
