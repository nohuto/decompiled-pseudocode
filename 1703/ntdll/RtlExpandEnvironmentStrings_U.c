/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x18005DF10
 * Callers:
 *     sub_18005683C @ 0x18005683C (sub_18005683C.c)
 *     sub_18005DD3C @ 0x18005DD3C (sub_18005DD3C.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 *     sub_1800E0020 @ 0x1800E0020 (sub_1800E0020.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x18003AFF0 (RtlExpandEnvironmentStrings.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings_U(
        PVOID Environment,
        PUNICODE_STRING Source,
        PUNICODE_STRING Destination,
        PULONG ReturnedLength)
{
  unsigned __int64 MaximumLength; // rax
  unsigned __int64 Length; // r8
  const WCHAR *Buffer; // rdx
  NTSTATUS v9; // eax
  int v10; // edx
  NTSTATUS v11; // ecx
  ULONG_PTR v13; // [rsp+48h] [rbp+10h] BYREF

  MaximumLength = Destination->MaximumLength;
  Length = Source->Length;
  Buffer = Source->Buffer;
  v13 = 0LL;
  v9 = RtlExpandEnvironmentStrings(Environment, Buffer, Length >> 1, Destination->Buffer, MaximumLength >> 1, &v13);
  v10 = v13;
  v11 = v9;
  if ( v13 > 0x7FFF )
  {
    v11 = -1073741823;
    if ( ReturnedLength )
      *ReturnedLength = 0;
  }
  else
  {
    if ( v9 >= 0 )
      Destination->Length = 2 * (v13 - 1);
    if ( ReturnedLength )
      *ReturnedLength = 2 * v10;
  }
  return v11;
}
