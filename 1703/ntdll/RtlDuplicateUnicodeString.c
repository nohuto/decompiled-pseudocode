/*
 * XREFs of RtlDuplicateUnicodeString @ 0x18007DE00
 * Callers:
 *     sub_1801060F4 @ 0x1801060F4 (sub_1801060F4.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     RtlValidateUnicodeString @ 0x18007DF40 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl RtlDuplicateUnicodeString(ULONG Flags, PUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  USHORT Length; // di
  WCHAR *v7; // rsi
  NTSTATUS result; // eax
  USHORT v9; // bx
  WCHAR *v10; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) == 0 && !Length )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  v10 = (WCHAR *)sub_180043FE0(v9);
  v7 = v10;
  if ( v10 )
  {
    if ( Length )
      memmove(v10, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
