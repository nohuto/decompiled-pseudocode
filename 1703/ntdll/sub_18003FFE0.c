/*
 * XREFs of sub_18003FFE0 @ 0x18003FFE0
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 */

void *__fastcall sub_18003FFE0(PWCH *a1)
{
  PWCH *v2; // rdi
  WCHAR *v3; // rax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)a1 + 80) )
  {
    v2 = a1 + 2;
    if ( a1 != (PWCH *)-16LL && *v2 )
    {
      if ( *v2 != a1[3] )
      {
        UnicodeString.Buffer = *v2;
        RtlFreeUnicodeString(&UnicodeString);
      }
      *v2 = a1[3];
      a1[4] = a1[5];
    }
    v3 = a1[3];
    a1[1] = v3;
    if ( v3 )
      *v3 = 0;
    *((_WORD *)a1 + 1) = *((_WORD *)a1 + 20);
    *(_WORD *)a1 = 0;
  }
  return memset(a1, 0, 0x58uLL);
}
