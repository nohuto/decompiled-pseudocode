/*
 * XREFs of PortRegistrySetValueKey @ 0x1C0016D48
 * Callers:
 *     PortMapBuildLunEntry @ 0x1C0016C4C (PortMapBuildLunEntry.c)
 *     PortMapBuildAdapterEntry @ 0x1C00480C8 (PortMapBuildAdapterEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PortRegistrySetValueKey(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, char *Buffer, ULONG a5)
{
  char v5; // bp
  struct _UNICODE_STRING *v10; // rbx
  ULONG DataSize; // eax
  NTSTATUS v12; // ebx
  NTSTATUS result; // eax
  struct _STRING SourceString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING v16; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  if ( a2 )
    RtlInitUnicodeString(&v16, a2);
  v10 = (struct _UNICODE_STRING *)((unsigned __int64)&v16 & -(__int64)(a2 != 0LL));
  DataSize = a5;
  if ( a3 != 119742466 )
    goto LABEL_4;
  if ( a5 > 0xFFFF )
    return -1073741675;
  a3 = 1;
  SourceString.Length = a5;
  SourceString.MaximumLength = a5;
  SourceString.Buffer = Buffer;
  result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( result >= 0 )
  {
    v5 = 1;
    Buffer = (char *)DestinationString.Buffer;
    DataSize = DestinationString.Length + 2;
LABEL_4:
    v12 = ZwSetValueKey(KeyHandle, v10, 0, a3, Buffer, DataSize);
    if ( v5 )
      RtlFreeUnicodeString(&DestinationString);
    return v12;
  }
  return result;
}
