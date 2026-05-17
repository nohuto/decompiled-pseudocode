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

__int64 __fastcall sub_1800468D4(char a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v7; // ebx
  __int64 Heap; // rax
  unsigned __int64 v9; // rsi
  unsigned int i; // r15d
  wchar_t *Buffer; // r12
  const WCHAR *v13; // r12
  __int16 v14[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v15; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  const WCHAR *v17; // [rsp+40h] [rbp-30h]
  UNICODE_STRING v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-10h]
  char v22; // [rsp+C0h] [rbp+50h] BYREF

  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  v19 = 0LL;
  String2 = 0LL;
  v7 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 510LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  LODWORD(v19) = 11141120;
  String2 = (wchar_t *)(Heap + 170);
  if ( (int)RtlpGetSystemDefaultUILanguage(&v15, a2) >= 0 && RtlLCIDToCultureName(v15, (__int64)&v19) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v18.Buffer = (wchar_t *)v9;
      *(_DWORD *)&v18.Length = 11141120;
      v7 = sub_18004576C(a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v18);
      if ( v7 < 0 )
        break;
      Buffer = v18.Buffer;
      v7 = sub_180045CA4(a4, a2, 0, v14, v18.Buffer);
      if ( v7 < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String2) )
      {
        v22 = 0;
        v17 = (const WCHAR *)(v9 + 340);
        LODWORD(v16) = 11141120;
        v7 = sub_180046AF0(a2, Buffer, &v16, &v22);
        if ( v7 < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v22 )
            break;
          v13 = v17;
          v7 = sub_180045CA4(a4, a2, 0, v14, v17);
          if ( v7 < 0 )
            goto LABEL_16;
          v7 = sub_180046AF0(a2, v13, &v16, &v22);
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
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)v7;
}
