/*
 * XREFs of CmpSortedValueEnumStackValueCompareFunction @ 0x14041CCF0
 * Callers:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x14041C86C (CmpSortedValueEnumStackAdvanceInternal.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 */

LONG __fastcall CmpSortedValueEnumStackValueCompareFunction(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int16 v4; // r10
  wchar_t *v5; // rcx
  unsigned __int16 v6; // dx
  __int16 v7; // r11
  __int16 v8; // r11
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = *(_WORD *)(*a1 + 2);
  v5 = (wchar_t *)(*a1 + 20);
  v6 = *(_WORD *)(*a2 + 2);
  String2.Buffer = (wchar_t *)(v3 + 20);
  String1.Buffer = v5;
  String1.Length = v4;
  String1.MaximumLength = v4;
  v7 = *(_WORD *)(v2 + 16);
  String2.Length = v6;
  String2.MaximumLength = v6;
  v8 = v7 & 1;
  if ( v8 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
      return CmpCompareTwoCompressedNames(v5, v4, v3 + 20, v6);
  }
  else if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(UNICODE_STRING *, __int64, _QWORD, _QWORD, _DWORD, wchar_t *))CmpCompareCompressedName)(
             &String1,
             v3 + 20,
             v6,
             0LL,
             *(_DWORD *)&String2.Length,
             String2.Buffer);
  }
  if ( v8 )
    return -(int)((__int64 (__fastcall *)(UNICODE_STRING *, wchar_t *, _QWORD, _QWORD))CmpCompareCompressedName)(
                   &String2,
                   v5,
                   v4,
                   0LL);
  else
    return RtlCompareUnicodeString(&String1, &String2, 1u);
}
