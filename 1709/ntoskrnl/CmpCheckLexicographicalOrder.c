/*
 * XREFs of CmpCheckLexicographicalOrder @ 0x140564F40
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AB5E0 (CmpCheckRegistry2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x140565134 (CmpCompareCompressedName.c)
 */

__int64 __fastcall CmpCheckLexicographicalOrder(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD, int *); // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int16 v9; // di
  unsigned __int16 v10; // bx
  unsigned __int8 *v11; // rsi
  unsigned __int8 *v12; // r14
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  int v15; // ecx
  unsigned int v16; // ebx
  __int64 v18; // r8
  __int64 v19; // r8
  _DWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING String1; // [rsp+38h] [rbp-38h] BYREF
  int v24; // [rsp+A8h] [rbp+38h] BYREF
  int v25; // [rsp+ACh] [rbp+3Ch]

  v25 = 0;
  v20[1] = 0;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8);
  v5 = a1;
  v24 = -1;
  v20[0] = -1;
  v6 = v3(a1, a3, &v24);
  *(_QWORD *)&String2.Length = v6;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v5 + 8))(v5, a2, v20);
  v8 = v7;
  if ( !v6 || !v7 )
  {
    v16 = -1073741670;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v6 + 2) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
    {
      v18 = *(unsigned __int16 *)(v7 + 72);
      String2.Buffer = (wchar_t *)(v6 + 76);
      String2.Length = *(_WORD *)(v6 + 72);
      String2.MaximumLength = String2.Length;
      if ( (int)CmpCompareCompressedName(&String2, v7 + 76, v18, 0LL) <= 0 )
      {
        v16 = -1073741492;
        goto LABEL_15;
      }
    }
    else
    {
      String1.Buffer = (wchar_t *)(v7 + 76);
      String1.Length = *(_WORD *)(v7 + 72);
      String1.MaximumLength = String1.Length;
      String2.Buffer = (wchar_t *)(v6 + 76);
      String2.Length = *(_WORD *)(v6 + 72);
      String2.MaximumLength = String2.Length;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
      {
        v16 = -1073741492;
        goto LABEL_15;
      }
    }
LABEL_14:
    v16 = 0;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v7 + 2) & 0x20) == 0 )
  {
    v19 = *(unsigned __int16 *)(v6 + 72);
    String1.Buffer = (wchar_t *)(v7 + 76);
    String1.Length = *(_WORD *)(v7 + 72);
    String1.MaximumLength = String1.Length;
    if ( (int)CmpCompareCompressedName(&String1, v6 + 76, v19, 0LL) >= 0 )
    {
      v16 = -1073741492;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v9 = *(_WORD *)(v7 + 72);
  v10 = *(_WORD *)(v6 + 72);
  v11 = (unsigned __int8 *)(v7 + 76);
  v12 = (unsigned __int8 *)(v6 + 76);
  if ( v9 )
  {
    while ( v10 )
    {
      v13 = *v11++;
      v14 = *v12++;
      if ( (_WORD)v13 != (_WORD)v14 )
      {
        if ( v13 >= 0x61 )
        {
          if ( v13 > 0x7A )
            LOWORD(v13) = RtlUpcaseUnicodeChar(v13);
          else
            LOWORD(v13) = v13 - 32;
        }
        if ( v14 >= 0x61 )
        {
          if ( v14 > 0x7A )
            LOWORD(v14) = RtlUpcaseUnicodeChar(v14);
          else
            LOWORD(v14) = v14 - 32;
        }
        v15 = (unsigned __int16)v13 - (unsigned __int16)v14;
        if ( (unsigned __int16)v13 != (unsigned __int16)v14 )
          goto LABEL_13;
      }
      --v10;
      if ( !--v9 )
        break;
    }
  }
  v15 = v9 - v10;
LABEL_13:
  v5 = a1;
  v6 = *(_QWORD *)&String2.Length;
  if ( v15 < 0 )
    goto LABEL_14;
  v16 = -1073741492;
LABEL_15:
  if ( v6 )
    (*(void (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v24);
  if ( v8 )
    (*(void (__fastcall **)(__int64, _DWORD *))(v5 + 16))(v5, v20);
  return v16;
}
