/*
 * XREFs of sub_1800321EC @ 0x1800321EC
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800311A0 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_180032408 @ 0x180032408 (sub_180032408.c)
 *     sub_180035DEC @ 0x180035DEC (sub_180035DEC.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     sub_18003645C @ 0x18003645C (sub_18003645C.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 */

__int64 __fastcall sub_1800321EC(char a1, DWORD *a2, __int64 a3, _QWORD *a4)
{
  int v4; // r14d
  int v7; // ebx
  wchar_t *Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *v11; // r12
  __int64 v13; // r12
  _WORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  LANGID DefaultUILanguageId; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  wchar_t *v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  wchar_t *String1; // [rsp+50h] [rbp-20h]
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+C0h] [rbp+50h] BYREF

  v18 = 0LL;
  v4 = (int)a4;
  String1 = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  v7 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, a2) >= 0
    && RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      String1 = v9;
      LODWORD(v18) = 11141120;
      v7 = sub_180035DEC(a2, *(_QWORD *)(a3 + 24) + 6LL * i, &v18);
      if ( v7 < 0 )
        break;
      v11 = String1;
      v7 = sub_18003645C(v4, (_DWORD)a2, 0, (unsigned int)v14, (__int64)String1);
      if ( v7 < 0 )
        break;
      if ( a1 || !wcsicmp(v11, String.Buffer) )
      {
        v22 = 0;
        v17 = v9 + 170;
        LODWORD(v16) = 11141120;
        v7 = sub_180032408(a2, v11, &v16, &v22);
        if ( v7 < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v22 )
            break;
          v13 = (__int64)v17;
          v7 = sub_18003645C(v4, (_DWORD)a2, 0, (unsigned int)v14, (__int64)v17);
          if ( v7 < 0 )
            goto LABEL_16;
          v7 = sub_180032408(a2, v13, &v16, &v22);
        }
        while ( v7 >= 0 );
        if ( v7 < 0 )
          break;
      }
    }
  }
  else
  {
    v7 = -1073741823;
  }
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)v7;
}
