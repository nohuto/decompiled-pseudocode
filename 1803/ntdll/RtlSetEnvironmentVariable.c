/*
 * XREFs of RtlSetEnvironmentVariable @ 0x18004BDA0
 * Callers:
 *     sub_18004B13C @ 0x18004B13C (sub_18004B13C.c)
 *     sub_18004BC58 @ 0x18004BC58 (sub_18004BC58.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x18004BDF0 (RtlSetEnvironmentVar.c)
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
