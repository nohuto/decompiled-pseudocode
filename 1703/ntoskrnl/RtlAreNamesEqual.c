/*
 * XREFs of RtlAreNamesEqual @ 0x1400071B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140115698 (RtlpUpcaseUnicodeStringPrivate.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

BOOLEAN __stdcall RtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  char v4; // di
  PCUNICODE_STRING v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rax
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  NTSTATUS v14; // ebx
  BOOLEAN v15; // bl
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v6 = ConstantNameB;
  if ( ConstantNameA->Length != ConstantNameB->Length )
    return 0;
  v7 = ConstantNameA->Length >> 1;
  if ( IgnoreCase )
  {
    if ( UpcaseTable )
    {
      v8 = 0LL;
      if ( !(_DWORD)v7 )
        return 1;
      while ( UpcaseTable[ConstantNameA->Buffer[v8]] == UpcaseTable[ConstantNameB->Buffer[v8]] )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= (unsigned int)v7 )
          return 1;
      }
      return 0;
    }
    v10 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, ConstantNameA, IgnoreCase, v7);
    if ( v10 < 0 )
      RtlRaiseStatus(v10);
    v13 = RtlpUpcaseUnicodeStringPrivate(&v17, v6, v11, v12);
    ConstantNameA = &UnicodeString;
    v14 = v13;
    if ( v13 < 0 )
    {
      RtlFreeUnicodeString(&UnicodeString);
      RtlRaiseStatus(v14);
    }
    v6 = &v17;
    v4 = 1;
  }
  v15 = memcmp(ConstantNameA->Buffer, v6->Buffer, ConstantNameA->Length) == 0;
  if ( v4 )
  {
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v17);
  }
  return v15;
}
