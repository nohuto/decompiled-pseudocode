/*
 * XREFs of PipDeleteBindingId @ 0x1406BEBF8
 * Callers:
 *     IoResolveDependency @ 0x14014E140 (IoResolveDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     PipFreeBindingId @ 0x1406BED94 (PipFreeBindingId.c)
 */

__int64 __fastcall PipDeleteBindingId(__int64 a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *v2; // rdi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // esi
  __int64 v7; // rax
  wchar_t *Buffer; // rcx

  v2 = (UNICODE_STRING *)(a1 + 56);
  v4 = *(UNICODE_STRING **)(a1 + 56);
  v5 = -1073741275;
  while ( v4 != v2 )
  {
    if ( RtlEqualUnicodeString(v4 + 1, a2, 0) )
    {
      v7 = *(_QWORD *)&v4->Length;
      if ( *(UNICODE_STRING **)(*(_QWORD *)&v4->Length + 8LL) != v4
        || (Buffer = v4->Buffer, *(UNICODE_STRING **)Buffer != v4) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)Buffer = v7;
      *(_QWORD *)(v7 + 8) = Buffer;
      PipFreeBindingId(v4);
      return 0;
    }
    v4 = *(UNICODE_STRING **)&v4->Length;
  }
  return v5;
}
