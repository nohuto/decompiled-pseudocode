/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x140065D18
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x14006589C (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140065ED0 (AuthzBasepMemAlloc.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 */

UNICODE_STRING *__fastcall AuthzBasepAllocateSecurityAttribute(PCUNICODE_STRING SourceString, __int64 a2)
{
  UNICODE_STRING *v3; // rax
  UNICODE_STRING *v4; // rbx

  v3 = (UNICODE_STRING *)AuthzBasepMemAlloc(SourceString->Length + 112LL, a2, 1950442835LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x70uLL);
    v4[2].Length = 0;
    v4[2].MaximumLength = SourceString->Length;
    v4[2].Buffer = &v4[7].Length;
    RtlCopyUnicodeString(v4 + 2, SourceString);
    *(_QWORD *)&v4[5].Length = (char *)v4 + 72;
    v4[4].Buffer = (wchar_t *)&v4[4].Buffer;
    v4[6].Buffer = &v4[6].Length;
    *(_QWORD *)&v4[6].Length = v4 + 6;
  }
  return v4;
}
