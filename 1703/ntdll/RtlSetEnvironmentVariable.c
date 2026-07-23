/*
 * XREFs of RtlSetEnvironmentVariable @ 0x180062E10
 * Callers:
 *     sub_1800621E4 @ 0x1800621E4 (sub_1800621E4.c)
 *     sub_180062CC4 @ 0x180062CC4 (sub_180062CC4.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x180062E60 (RtlSetEnvironmentVar.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVariable(PVOID *Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  const WCHAR *Buffer; // r9
  SIZE_T ValueLength; // rax

  Buffer = 0LL;
  if ( Value )
    ValueLength = (unsigned __int64)Value->Length >> 1;
  else
    ValueLength = 0LL;
  if ( Value )
    Buffer = Value->Buffer;
  return RtlSetEnvironmentVar(Environment, Name->Buffer, (unsigned __int64)Name->Length >> 1, Buffer, ValueLength);
}
