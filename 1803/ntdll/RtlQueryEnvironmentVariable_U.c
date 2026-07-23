/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18004BD30
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_18004B1D4 @ 0x18004B1D4 (sub_18004B1D4.c)
 *     sub_18004BC58 @ 0x18004BC58 (sub_18004BC58.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable_U(PVOID Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  NTSTATUS result; // eax
  __int16 v5; // cx
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             Environment,
             Name->Buffer,
             (unsigned __int64)Name->Length >> 1,
             Value->Buffer,
             (unsigned __int64)Value->MaximumLength >> 1,
             &ReturnLength);
  v5 = ReturnLength;
  if ( ReturnLength > 0x7FFF )
    return -1073741801;
  if ( result == -1073741789 )
    v5 = ReturnLength - 1;
  Value->Length = 2 * v5;
  return result;
}
