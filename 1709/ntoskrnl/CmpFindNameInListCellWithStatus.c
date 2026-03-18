/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x140479530
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14069C584 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x140565134 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140697834 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const UNICODE_STRING *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v7; // rsi
  const UNICODE_STRING *v8; // rdi
  unsigned int v9; // ebx
  unsigned int *v10; // rdx
  int v11; // r8d
  __int64 v12; // r12
  int v13; // r15d
  unsigned int *v14; // r13
  __int64 v15; // rax
  unsigned __int16 v16; // r14
  wchar_t *v17; // rbp
  unsigned __int16 v18; // r15
  WCHAR *Buffer; // rbx
  WCHAR v20; // di
  unsigned int v21; // esi
  int v22; // edi
  int v23; // edi
  __int64 result; // rax
  LONG v25; // eax
  _BYTE v26[8]; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-60h] BYREF

  v7 = a1;
  v8 = a4;
  v9 = a3;
  HvpGetCellContextReinitialize((__int64)v26);
  if ( v11 )
  {
    v12 = 0LL;
    if ( !v9 )
    {
LABEL_18:
      *a7 = -1;
      if ( a6 )
        *a6 = v9;
      return 3221225524LL;
    }
    v13 = a5;
    v14 = v10;
    while ( 1 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v7 + 8))(v7, *v14, v26);
      v16 = *(_WORD *)(v15 + 2);
      v17 = (wchar_t *)(v15 + 20);
      LOBYTE(v15) = *(_BYTE *)(v15 + 16);
      String2.Buffer = v17;
      String2.Length = v16;
      String2.MaximumLength = v16;
      if ( (v15 & 1) != 0 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v25 = CmpCompareTwoCompressedNames(v8->Buffer, v8->Length, v17, v16);
          goto LABEL_33;
        }
        v18 = v8->Length >> 1;
        Buffer = v8->Buffer;
        if ( v18 )
        {
          while ( 1 )
          {
            if ( !v16 )
            {
LABEL_10:
              v7 = a1;
              goto LABEL_11;
            }
            v20 = *Buffer++;
            v21 = *(unsigned __int8 *)v17;
            v17 = (wchar_t *)((char *)v17 + 1);
            if ( v20 != (_WORD)v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                  v20 = RtlUpcaseUnicodeChar(v20);
                else
                  v20 -= 32;
              }
              if ( v21 >= 0x61 )
              {
                if ( v21 > 0x7A )
                  LOWORD(v21) = RtlUpcaseUnicodeChar(v21);
                else
                  LOWORD(v21) = v21 - 32;
              }
              v23 = v20 - (unsigned __int16)v21;
              if ( v23 )
                break;
            }
            --v16;
            if ( !--v18 )
              goto LABEL_10;
          }
          v7 = a1;
          v9 = a3;
          v13 = a5;
        }
        else
        {
LABEL_11:
          v9 = a3;
          v22 = v18;
          v13 = a5;
          v23 = v22 - v16;
        }
      }
      else
      {
        if ( (v13 & 0x10000) == 0 )
        {
          v25 = RtlCompareUnicodeString(v8, &String2, 1u);
LABEL_33:
          v23 = v25;
          goto LABEL_16;
        }
        v23 = -(int)CmpCompareCompressedName(&String2, v8->Buffer, v8->Length, 0LL);
      }
LABEL_16:
      (*(void (__fastcall **)(__int64, _BYTE *))(v7 + 16))(v7, v26);
      if ( !v23 )
      {
        result = 0LL;
        *a7 = *(_DWORD *)(a2 + 4 * v12);
        if ( a6 )
          *a6 = v12;
        return result;
      }
      v8 = a4;
      v12 = (unsigned int)(v12 + 1);
      ++v14;
      if ( (unsigned int)v12 >= v9 )
        goto LABEL_18;
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
