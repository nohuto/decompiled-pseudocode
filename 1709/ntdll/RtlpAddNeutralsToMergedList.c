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
  wchar_t *Heap; // rax
  wchar_t *v9; // r14
  NTSTATUS InstallUILanguage; // esi
  LANGID v11; // ax
  unsigned int i; // esi
  wchar_t *v13; // r15
  wchar_t *Buffer; // r15
  LANGID InstallUILanguageId[2]; // [rsp+30h] [rbp-40h] BYREF
  _WORD v17[2]; // [rsp+34h] [rbp-3Ch] BYREF
  _UNICODE_STRING v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  wchar_t *String1; // [rsp+50h] [rbp-20h]
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  char v23; // [rsp+C0h] [rbp+50h] BYREF

  v19 = 0LL;
  v4 = (int)a4;
  String1 = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  NameFromLangListNode = 0;
  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  v17[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v9 = Heap;
  if ( Heap )
  {
    InstallUILanguageId[0] = 0;
    String.Buffer = Heap + 85;
    InstallUILanguage = 0;
    *(_DWORD *)&String.Length = 11141120;
    v11 = *(_WORD *)(a2 + 4);
    if ( !v11 )
    {
      InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
      if ( InstallUILanguage < 0 )
        goto LABEL_29;
      if ( NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = InstallUILanguageId[0];
      }
      v11 = InstallUILanguageId[0];
    }
    if ( InstallUILanguage >= 0 && RtlLCIDToCultureName(v11, &String) )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
      {
        String1 = v9;
        LODWORD(v19) = 11141120;
        NameFromLangListNode = GetNameFromLangListNode(a2, *(_QWORD *)(a3 + 24) + 6LL * i, &v19);
        if ( NameFromLangListNode < 0 )
          break;
        v13 = String1;
        NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)v17, (__int64)String1);
        if ( NameFromLangListNode < 0 )
          break;
        if ( a1 || !wcsicmp(v13, String.Buffer) )
        {
          v23 = 0;
          v18.Buffer = v9 + 170;
          *(_DWORD *)&v18.Length = 11141120;
          NameFromLangListNode = RtlGetNeutralFallback(a2, v13, &v18, &v23);
          if ( NameFromLangListNode < 0 )
            break;
          do
          {
            if ( !v18.Length || v23 )
              break;
            Buffer = v18.Buffer;
            NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)v17, (__int64)v18.Buffer);
            if ( NameFromLangListNode < 0 )
              goto LABEL_17;
            NameFromLangListNode = RtlGetNeutralFallback(a2, Buffer, &v18, &v23);
          }
          while ( NameFromLangListNode >= 0 );
          if ( NameFromLangListNode < 0 )
            break;
        }
      }
      goto LABEL_17;
    }
LABEL_29:
    NameFromLangListNode = -1073741823;
LABEL_17:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return (unsigned int)NameFromLangListNode;
  }
  return 3221225495LL;
}
