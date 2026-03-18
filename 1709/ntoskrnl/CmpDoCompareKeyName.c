/*
 * XREFs of CmpDoCompareKeyName @ 0x140481960
 * Callers:
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404814F0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpCompareInIndex @ 0x140481810 (CmpCompareInIndex.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1405BC750 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpSelectLeaf @ 0x1405E819C (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall CmpDoCompareKeyName(__int64 a1, const UNICODE_STRING *a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int8 *v7; // rbp
  unsigned __int16 v8; // di
  WCHAR *Buffer; // rsi
  unsigned __int16 v10; // bx
  WCHAR v11; // r15
  unsigned int v12; // r14d
  LONG v13; // r14d
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+64h] [rbp+Ch]

  v16 = -1;
  v17 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a3, &v16);
  v6 = v5;
  if ( !v5 )
    return 2LL;
  if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
  {
    v7 = (unsigned __int8 *)(v5 + 76);
    v8 = a2->Length >> 1;
    Buffer = a2->Buffer;
    v10 = *(_WORD *)(v5 + 72);
    if ( v8 )
    {
      while ( v10 )
      {
        v11 = *Buffer++;
        v12 = *v7++;
        if ( v11 != (_WORD)v12 )
        {
          if ( v11 >= 0x61u )
          {
            if ( v11 > 0x7Au )
              v11 = RtlUpcaseUnicodeChar(v11);
            else
              v11 -= 32;
          }
          if ( v12 >= 0x61 )
          {
            if ( v12 > 0x7A )
              LOWORD(v12) = RtlUpcaseUnicodeChar(v12);
            else
              LOWORD(v12) = v12 - 32;
          }
          v13 = v11 - (unsigned __int16)v12;
          if ( v13 )
            goto LABEL_8;
        }
        --v10;
        if ( !--v8 )
          break;
      }
    }
    v13 = v8 - v10;
  }
  else
  {
    String2.Buffer = (wchar_t *)(v5 + 76);
    String2.Length = *(_WORD *)(v5 + 72);
    String2.MaximumLength = String2.Length;
    v13 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
LABEL_8:
  (*(void (__fastcall **)(__int64, int *, __int64))(a1 + 16))(a1, &v16, v6);
  if ( v13 )
    return ((v13 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
