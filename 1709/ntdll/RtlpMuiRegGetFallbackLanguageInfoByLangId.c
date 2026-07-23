/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800FC520
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EB810 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FC6DC (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FC6DC (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5)
{
  __int16 v9; // r9
  __int16 i; // r8
  __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // rcx
  wchar_t *Heap; // rax
  wchar_t *v16; // rsi
  unsigned int FallbackLanguageInfoByName; // ebx
  _UNICODE_STRING String; // [rsp+30h] [rbp-38h] BYREF

  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  v9 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v11 = (*(_WORD *)(a2 + 8) >> i) & 3;
    if ( v11 == 2 )
    {
      v12 = *(__int16 *)(a2 + 2LL * v9 + 12);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      if ( *(_WORD *)(28 * v12 + v13 + 4) == a3 )
      {
        *(_OWORD *)a5 = *(_OWORD *)(28 * v12 + v13);
        *(_QWORD *)(a5 + 16) = *(_QWORD *)(28 * v12 + v13 + 16);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(28 * v12 + v13 + 24);
        return 0LL;
      }
    }
    else if ( *(__int16 *)(a2 + 2LL * v9 + 12) != a3 && v11 != 1 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 8) = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_DWORD *)(a5 + 24) = 0;
      *(_WORD *)(a5 + 6) = -1;
      *(_WORD *)(a5 + 4) = a3;
      return 0LL;
    }
    ++v9;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v16 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( a4
    && *(__int16 *)(a2 + 6) > 0
    && (String.Buffer = Heap, *(_DWORD *)&String.Length = 11141120, RtlLCIDToCultureName(a3, &String)) )
  {
    FallbackLanguageInfoByName = RtlpMuiRegGetFallbackLanguageInfoByName(a1, a2, String.Buffer, 0LL, a5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    return FallbackLanguageInfoByName;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    return 3221225524LL;
  }
}
