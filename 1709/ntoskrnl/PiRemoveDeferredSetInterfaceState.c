/*
 * XREFs of PiRemoveDeferredSetInterfaceState @ 0x1405E2228
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PiRemoveDeferredSetInterfaceState(UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *v2; // rdi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // esi
  __int64 v7; // rax
  wchar_t *Buffer; // rcx

  v2 = a1 + 38;
  v4 = *(UNICODE_STRING **)&a1[38].Length;
  v5 = -1073741823;
  while ( v4 != v2 )
  {
    if ( RtlEqualUnicodeString(v4 + 1, a2, 1u) )
    {
      v7 = *(_QWORD *)&v4->Length;
      if ( *(UNICODE_STRING **)(*(_QWORD *)&v4->Length + 8LL) != v4
        || (Buffer = v4->Buffer, *(UNICODE_STRING **)Buffer != v4) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)Buffer = v7;
      *(_QWORD *)(v7 + 8) = Buffer;
      ExFreePoolWithTag(v4[1].Buffer, 0);
      ExFreePoolWithTag(v4, 0);
      return 0;
    }
    v4 = *(UNICODE_STRING **)&v4->Length;
  }
  return v5;
}
