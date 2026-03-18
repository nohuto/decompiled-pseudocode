/*
 * XREFs of PiDmInitializeComparisonObject @ 0x140507674
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x140504830 (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x140507574 (PiDmLookupObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x140507780 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall PiDmInitializeComparisonObject(wchar_t *a1, int a2, __int64 a3)
{
  wchar_t *v4; // rdx
  NTSTATUS result; // eax
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r10
  __int64 v10; // rcx
  wchar_t *v11; // rax
  __int16 v12; // r8
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a3 + 28) = a2;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)&String.Length = 0;
  v4 = 0LL;
  String.Buffer = 0LL;
  result = 0;
  v8 = 0;
  v9 = 0;
  if ( a1 )
  {
    v10 = 0x7FFFLL;
    v11 = a1;
    do
    {
      if ( !*v11 )
        break;
      ++v11;
      --v10;
    }
    while ( v10 );
    result = v10 == 0 ? 0xC000000D : 0;
    if ( v10 )
      v12 = 0x7FFF - v10;
    else
      v12 = 0;
    if ( v10 )
    {
      v8 = 2 * v12;
      v4 = a1;
      v9 = 2 * v12 + 2;
      String.Length = 2 * v12;
      String.MaximumLength = v9;
      String.Buffer = a1;
    }
  }
  if ( result >= 0 )
  {
    if ( a2 == 3 )
    {
      if ( v8 <= 8u )
        return -1073741772;
      String.Length = v8 - 8;
      String.Buffer = v4 + 4;
      String.MaximumLength = v9 - 8;
    }
    return RtlHashUnicodeString(&String, 1u, 0, (PULONG)(a3 + 24));
  }
  return result;
}
