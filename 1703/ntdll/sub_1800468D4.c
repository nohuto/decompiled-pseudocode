/*
 * XREFs of sub_1800468D4 @ 0x1800468D4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     sub_180045CA4 @ 0x180045CA4 (sub_180045CA4.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046590 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_180046AF0 @ 0x180046AF0 (sub_180046AF0.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 */

__int64 __fastcall sub_1800468D4(char a1, DWORD *a2, __int64 a3, __int64 *a4)
{
  int v7; // ebx
  WCHAR *Heap; // rax
  WCHAR *v9; // rsi
  unsigned int i; // r15d
  const wchar_t *Buffer; // r12
  const WCHAR *v13; // r12
  __int16 v14[2]; // [rsp+30h] [rbp-40h] BYREF
  LANGID DefaultUILanguageId; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  const WCHAR *v17; // [rsp+40h] [rbp-30h]
  _UNICODE_STRING v18; // [rsp+48h] [rbp-28h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  char v21; // [rsp+C0h] [rbp+50h] BYREF

  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  v7 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
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
      v18.Buffer = v9;
      *(_DWORD *)&v18.Length = 11141120;
      v7 = sub_18004576C((__int64)a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v18);
      if ( v7 < 0 )
        break;
      Buffer = v18.Buffer;
      v7 = sub_180045CA4(a4, (__int64)a2, 0, v14, v18.Buffer);
      if ( v7 < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String.Buffer) )
      {
        v21 = 0;
        v17 = v9 + 170;
        LODWORD(v16) = 11141120;
        v7 = sub_180046AF0(a2, Buffer, &v16, &v21);
        if ( v7 < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v21 )
            break;
          v13 = v17;
          v7 = sub_180045CA4(a4, (__int64)a2, 0, v14, v17);
          if ( v7 < 0 )
            goto LABEL_16;
          v7 = sub_180046AF0(a2, v13, &v16, &v21);
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
