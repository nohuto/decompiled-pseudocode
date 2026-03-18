/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x1404A3990
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140701250 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1405506AC (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x1406FA938 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        const UNICODE_STRING *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v7; // rbx
  const UNICODE_STRING *v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r12
  unsigned int *v11; // r13
  int v12; // r14d
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  wchar_t *v15; // rbp
  WCHAR *Buffer; // rsi
  unsigned __int16 v17; // di
  WCHAR v18; // r14
  unsigned int v19; // r15d
  int v20; // r14d
  __int64 result; // rax
  LONG v22; // eax
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-60h] BYREF
  int v29; // [rsp+B0h] [rbp+28h]

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v23 = 0xFFFFFFFFLL;
  if ( a3 )
  {
    v10 = 0LL;
    v11 = a2;
    v12 = a5 & 0x10000;
    v29 = a5 & 0x10000;
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v7 + 8))(v7, *v11, &v23);
      v14 = *(_WORD *)(v13 + 2);
      v15 = (wchar_t *)(v13 + 20);
      LOBYTE(v13) = *(_BYTE *)(v13 + 16);
      String2.Buffer = v15;
      String2.Length = v14;
      String2.MaximumLength = v14;
      if ( (v13 & 1) != 0 )
      {
        if ( v12 )
        {
          v22 = CmpCompareTwoCompressedNames(v8->Buffer, v8->Length, v15, v14);
          goto LABEL_31;
        }
        Buffer = v8->Buffer;
        v17 = v8->Length >> 1;
        if ( v17 )
        {
          while ( v14 )
          {
            v18 = *Buffer++;
            v19 = *(unsigned __int8 *)v15;
            v15 = (wchar_t *)((char *)v15 + 1);
            if ( v18 != (_WORD)v19 )
            {
              if ( v18 >= 0x61u )
              {
                if ( v18 > 0x7Au )
                  v18 = RtlUpcaseUnicodeChar(v18);
                else
                  v18 -= 32;
              }
              if ( v19 >= 0x61 )
              {
                if ( v19 > 0x7A )
                  LOWORD(v19) = RtlUpcaseUnicodeChar(v19);
                else
                  LOWORD(v19) = v19 - 32;
              }
              v20 = v18 - (unsigned __int16)v19;
              if ( v20 )
                goto LABEL_13;
            }
            --v14;
            if ( !--v17 )
              break;
          }
        }
        v20 = v17 - v14;
LABEL_13:
        v8 = a4;
        v9 = a3;
      }
      else
      {
        if ( !v12 )
        {
          v22 = RtlCompareUnicodeString(v8, &String2, 1u);
LABEL_31:
          v20 = v22;
          goto LABEL_14;
        }
        v20 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, wchar_t *, _QWORD, _QWORD, __int64))CmpCompareCompressedName)(
                      &String2,
                      v8->Buffer,
                      v8->Length,
                      0LL,
                      v23);
      }
LABEL_14:
      v7 = a1;
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v23);
      if ( !v20 )
      {
        result = 0LL;
        *a7 = a2[v10];
        if ( a6 )
          *a6 = v10;
        return result;
      }
      v12 = v29;
      v10 = (unsigned int)(v10 + 1);
      ++v11;
      if ( (unsigned int)v10 >= v9 )
      {
        *a7 = -1;
        if ( a6 )
          *a6 = v9;
        return 3221225524LL;
      }
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
