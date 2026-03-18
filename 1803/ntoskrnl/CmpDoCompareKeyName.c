/*
 * XREFs of CmpDoCompareKeyName @ 0x1404A9790
 * Callers:
 *     CmpCompareInIndex @ 0x1404A8E10 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404A8F60 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1405DDFC8 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpSelectLeaf @ 0x1405E55DC (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall CmpDoCompareKeyName(__int64 a1, const UNICODE_STRING *a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rsi
  unsigned __int16 v7; // di
  WCHAR *Buffer; // r14
  unsigned __int16 v9; // bx
  WCHAR v10; // r15
  unsigned int v11; // ebp
  LONG v12; // ebp
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v15 = -1;
  v16 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a3, &v15);
  if ( !v5 )
    return 2LL;
  v6 = (unsigned __int8 *)(v5 + 76);
  if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
  {
    v7 = a2->Length >> 1;
    Buffer = a2->Buffer;
    v9 = *(_WORD *)(v5 + 72);
    if ( v7 )
    {
      while ( v9 )
      {
        v10 = *Buffer++;
        v11 = *v6++;
        if ( v10 != (_WORD)v11 )
        {
          if ( v10 >= 0x61u )
          {
            if ( v10 > 0x7Au )
              v10 = RtlUpcaseUnicodeChar(v10);
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              LOWORD(v11) = RtlUpcaseUnicodeChar(v11);
            else
              LOWORD(v11) = v11 - 32;
          }
          v12 = v10 - (unsigned __int16)v11;
          if ( v12 )
            goto LABEL_11;
        }
        --v9;
        if ( !--v7 )
          break;
      }
    }
    v12 = v7 - v9;
  }
  else
  {
    String2.Length = *(_WORD *)(v5 + 72);
    String2.MaximumLength = String2.Length;
    String2.Buffer = (wchar_t *)(v5 + 76);
    v12 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
LABEL_11:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v15);
  if ( v12 )
    return ((v12 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
