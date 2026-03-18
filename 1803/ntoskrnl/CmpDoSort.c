/*
 * XREFs of CmpDoSort @ 0x1408B8608
 * Callers:
 *     CmpSortDriverList @ 0x1408B8454 (CmpSortDriverList.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     CmpSortByTag @ 0x1408B873C (CmpSortByTag.c)
 */

char __fastcall CmpDoSort(_QWORD *a1)
{
  unsigned __int16 *v2; // r11
  wchar_t *v3; // rbp
  __int16 v4; // r15
  _QWORD *v5; // r12
  wchar_t *i; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // r13
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp+18h]

  if ( !(unsigned __int8)CmpSortByTag() )
    return 0;
  v3 = (wchar_t *)*((_QWORD *)v2 + 1);
  v4 = 0;
  v5 = a1;
  for ( i = &v3[((unsigned __int64)*v2 >> 1) - 1]; i > v3; --i )
  {
    do
    {
      if ( !*i )
        v4 = (__int16)i;
      --i;
    }
    while ( i != v3 && *(i - 1) );
    v7 = (_QWORD *)a1[1];
    String1.Buffer = i;
    String1.Length = v4 - (_WORD)i;
    String1.MaximumLength = v4 - (_WORD)i;
    while ( v7 != v5 )
    {
      v8 = v7;
      if ( v7 == a1 )
        break;
      v9 = v7;
      v10 = v7 + 1;
      v7 = (_QWORD *)v7[1];
      v15 = v10;
      if ( v9[14] && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v9 + 13), 1u) )
      {
        v11 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v7 != v9 )
          __fastfail(3u);
        *v7 = v11;
        *(_QWORD *)(v11 + 8) = v7;
        v12 = *a1;
        if ( *(_QWORD **)(*a1 + 8LL) != a1 )
          __fastfail(3u);
        *v9 = v12;
        if ( v5 != a1 )
          v8 = v5;
        v5 = v8;
        *v15 = a1;
        *(_QWORD *)(v12 + 8) = v9;
        *a1 = v9;
      }
    }
  }
  return 1;
}
