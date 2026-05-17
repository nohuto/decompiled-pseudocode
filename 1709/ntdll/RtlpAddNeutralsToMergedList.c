/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x180050F1C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlGetNeutralFallback @ 0x180050E04 (RtlGetNeutralFallback.c)
 *     GetNameFromLangListNode @ 0x1800518E0 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x180052170 (LdrpLangFallbackListAppendNode.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008CB30 (RtlpLoadInstallLanguageFallback.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     NtIsUILanguageComitted @ 0x1800A2010 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A2970 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r12d
  int NameFromLangListNode; // ebx
  __int64 Heap; // rax
  wchar_t *v9; // r14
  unsigned __int16 v10; // ax
  unsigned int i; // esi
  wchar_t *v12; // r15
  const WCHAR *v14; // r15
  _WORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _WORD v16[2]; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  const WCHAR *v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  wchar_t *String1; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-10h]
  char v24; // [rsp+C0h] [rbp+50h] BYREF

  v19 = 0LL;
  v4 = (int)a4;
  String1 = 0LL;
  v21 = 0LL;
  String2 = 0LL;
  NameFromLangListNode = 0;
  v17 = 0LL;
  v18 = 0LL;
  v16[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 510LL);
  v9 = (wchar_t *)Heap;
  if ( Heap )
  {
    v15[0] = 0;
    String2 = (wchar_t *)(Heap + 170);
    LODWORD(v21) = 11141120;
    v10 = *(_WORD *)(a2 + 4);
    if ( !v10 )
    {
      if ( (int)NtQueryInstallUILanguage(v15) < 0 )
        goto LABEL_28;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = v15[0];
      }
      v10 = v15[0];
    }
    if ( (unsigned __int8)RtlLCIDToCultureName(v10, &v21) )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
      {
        String1 = v9;
        LODWORD(v19) = 11141120;
        NameFromLangListNode = GetNameFromLangListNode(a2, *(_QWORD *)(a3 + 24) + 6LL * i, &v19);
        if ( NameFromLangListNode < 0 )
          break;
        v12 = String1;
        NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)v16, (__int64)String1);
        if ( NameFromLangListNode < 0 )
          break;
        if ( a1 || !wcsicmp(v12, String2) )
        {
          v24 = 0;
          v18 = v9 + 170;
          LODWORD(v17) = 11141120;
          NameFromLangListNode = RtlGetNeutralFallback(a2, v12, (__int64)&v17, &v24);
          if ( NameFromLangListNode < 0 )
            break;
          do
          {
            if ( !(_WORD)v17 || v24 )
              break;
            v14 = v18;
            NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)v16, (__int64)v18);
            if ( NameFromLangListNode < 0 )
              goto LABEL_16;
            NameFromLangListNode = RtlGetNeutralFallback(a2, v14, (__int64)&v17, &v24);
          }
          while ( NameFromLangListNode >= 0 );
          if ( NameFromLangListNode < 0 )
            break;
        }
      }
      goto LABEL_16;
    }
LABEL_28:
    NameFromLangListNode = -1073741823;
LABEL_16:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
    return (unsigned int)NameFromLangListNode;
  }
  return 3221225495LL;
}
