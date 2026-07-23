/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x180051168
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180005240 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180005620 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     GetNameFromLangListNode @ 0x1800518E0 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051DBC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpLangFallbackListAppendNode @ 0x180052170 (LdrpLangFallbackListAppendNode.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180052960 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008CB30 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A2010 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A2970 (NtQueryInstallUILanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EB470 (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        __int64 a2,
        PVOID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ecx
  PVOID *v16; // rbx
  NTSTATUS appended; // ebx
  __int64 v18; // r12
  __int64 v19; // r8
  int v20; // r13d
  int v21; // r14d
  __int64 v22; // rax
  unsigned int v23; // ebx
  _WORD *v24; // rdx
  int v25; // r8d
  __int64 v26; // rax
  _BYTE *v27; // rdx
  LANGID v28; // si
  __int64 v29; // r8
  wchar_t *Buffer; // rsi
  PVOID *v31; // r13
  _BYTE *v32; // rdx
  __int64 v33; // r8
  _BYTE *v34; // rdx
  _WORD *v36; // rdx
  bool v37; // zf
  __int64 v38; // rcx
  unsigned int i; // esi
  _WORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  char v43; // [rsp+28h] [rbp-69h]
  char v44; // [rsp+28h] [rbp-69h]
  char v45; // [rsp+28h] [rbp-69h]
  char v46; // [rsp+38h] [rbp-59h]
  _WORD v47[2]; // [rsp+3Ch] [rbp-55h] BYREF
  __int16 v48[2]; // [rsp+40h] [rbp-51h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+44h] [rbp-4Dh] BYREF
  __int16 v50; // [rsp+48h] [rbp-49h] BYREF
  PVOID *p_BaseAddress; // [rsp+50h] [rbp-41h]
  wchar_t *Heap; // [rsp+58h] [rbp-39h]
  int v53; // [rsp+60h] [rbp-31h]
  int v54; // [rsp+68h] [rbp-29h] BYREF
  __int64 v55; // [rsp+70h] [rbp-21h]
  PVOID BaseAddress; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v57; // [rsp+80h] [rbp-11h]
  unsigned int v58; // [rsp+84h] [rbp-Dh]
  _UNICODE_STRING String; // [rsp+88h] [rbp-9h] BYREF
  char v60; // [rsp+D8h] [rbp+47h]

  v60 = a1;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  v58 = 0;
  v53 = 0;
  v11 = 0LL;
  v47[0] = -1;
  v12 = 0LL;
  v50 = -1;
  v48[0] = -1;
  BaseAddress = 0LL;
  v46 = 0;
  if ( !a3 || !*a3 || !a2 || *((_WORD *)*a3 + 2) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v14 = 0LL;
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 40);
  else
    v15 = 0;
  v57 = v15;
  LODWORD(v16) = (_DWORD)a3;
  p_BaseAddress = a3;
  if ( v13 || (v15 & 6) == 0 )
  {
LABEL_13:
    v18 = 0LL;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
    v19 = (__int64)Heap;
    if ( !Heap )
      return 3221225495LL;
    if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
    {
      do
      {
        v36 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
        if ( *v36 )
        {
          v37 = *(_QWORD *)(a4 + 16) == 0LL;
          v38 = a2;
          v55 = v19;
          if ( !v37 )
            v38 = *(_QWORD *)(a4 + 16);
          v54 = 11141120;
          if ( (int)GetNameFromLangListNode(v38, v36, &v54) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode((_DWORD)v16, a2, 0, (unsigned int)v47, v55);
            if ( appended < 0 )
              goto LABEL_54;
          }
          v19 = (__int64)Heap;
        }
        v11 = (unsigned int)(v11 + 1);
        LODWORD(v16) = (_DWORD)p_BaseAddress;
      }
      while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
    }
    v20 = (int)p_BaseAddress;
    if ( a5 )
    {
      if ( !v13 )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = (__int64)Heap )
        {
          v40 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
          if ( *v40 )
          {
            v37 = *(_QWORD *)(a5 + 16) == 0LL;
            v41 = a2;
            v55 = v19;
            if ( !v37 )
              v41 = *(_QWORD *)(a5 + 16);
            v54 = 11141120;
            if ( (int)GetNameFromLangListNode(v41, v40, &v54) >= 0 )
            {
              appended = LdrpLangFallbackListAppendNode(v20, a2, 0, (unsigned int)v47, v55);
              if ( appended < 0 )
                goto LABEL_54;
            }
          }
          ++i;
        }
      }
    }
    v21 = v60 & 0x20;
    *(_DWORD *)InstallUILanguageId = v21;
    if ( (v60 & 0x20) != 0 && ((v22 = a6) != 0 && *(_WORD *)(a6 + 4) || (v22 = a7) != 0 && *(_WORD *)(a7 + 4)) )
    {
      v18 = v22;
      if ( *(_BYTE *)(v22 + 8) )
      {
        v12 = *(_QWORD *)(a2 + 40);
      }
      else
      {
        v12 = a8;
        if ( !a8 )
          v12 = *(_QWORD *)(a2 + 48);
      }
      v23 = 0;
      if ( *(_WORD *)(v22 + 4) )
      {
        do
        {
          v24 = (_WORD *)(*(_QWORD *)(v18 + 24) + 6LL * v23);
          if ( *v24 )
          {
            v55 = (__int64)Heap;
            v54 = 11141120;
            if ( (int)GetNameFromLangListNode(a2, v24, &v54) >= 0 )
            {
              LOBYTE(v25) = 1;
              if ( (int)LdrpLangFallbackListAppendNode(v20, a2, v25, (unsigned int)v47, v55) >= 0 && (v60 & 0x10) != 0 )
              {
                v26 = *(_QWORD *)(v18 + 24);
                if ( *(_WORD *)(v26 + 6LL * v23) == 2 )
                {
                  v27 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v23 + 4));
                  if ( (*v27 & 7) != 0
                    && ((*v27 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v20, (_DWORD)v27, a2, v12, v43) >= 0) )
                  {
                    ++v53;
                  }
                }
              }
            }
          }
          ++v23;
        }
        while ( v23 < *(unsigned __int16 *)(v18 + 4) );
        v21 = *(_DWORD *)InstallUILanguageId;
      }
    }
    appended = 0;
    InstallUILanguageId[0] = 0;
    v28 = 0;
    String.Buffer = Heap + 85;
    *(_DWORD *)&String.Length = 11141120;
    if ( *(_WORD *)(a2 + 4) )
    {
      v28 = *(_WORD *)(a2 + 4);
    }
    else
    {
      appended = NtQueryInstallUILanguage(InstallUILanguageId);
      if ( appended >= 0 )
      {
        if ( NtIsUILanguageComitted() >= 0 )
        {
          RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
          *(_WORD *)(a2 + 4) = InstallUILanguageId[0];
        }
        v28 = InstallUILanguageId[0];
      }
    }
    if ( appended >= 0 )
    {
      if ( RtlLCIDToCultureName(v28, &String) )
      {
        LOBYTE(v29) = 1;
        appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v28, v29, v48);
        if ( appended >= 0 )
        {
          Buffer = String.Buffer;
          if ( (v60 & 0x40) != 0 || a9 && v53 )
          {
            v31 = p_BaseAddress;
          }
          else
          {
            v31 = p_BaseAddress;
            appended = LdrpLangFallbackListAppendNode(
                         (_DWORD)p_BaseAddress,
                         a2,
                         0,
                         (unsigned int)&v50,
                         (__int64)String.Buffer);
            if ( appended >= 0 )
            {
              if ( v21 )
              {
                v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v48[0]);
                if ( (*v32 & 6) != 0 )
                {
                  if ( !v18 || (LODWORD(v42) = v12, !v12) )
                    v42 = *(_QWORD *)(a2 + 40);
                  appended = LdrpMergeParentBaseLanguagesToList((_DWORD)v31, (_DWORD)v32, a2, v42, v44);
                  if ( appended < 0 )
                    goto LABEL_54;
                }
              }
            }
          }
          if ( v46 )
          {
            if ( v31 )
            {
              v33 = v57 >> 2;
              LOBYTE(v33) = (v57 & 4) != 0;
              appended = RtlpFilterandReplaceConsoleLanguages(*v31, a2, v33, v58, a3);
              if ( appended >= 0 && (v60 & 0x30) == 0x30 )
              {
                appended = LdrpLangFallbackListAppendNode((_DWORD)a3, a2, 0, (unsigned int)&v50, (__int64)Buffer);
                if ( appended >= 0 )
                {
                  v34 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v48[0]);
                  if ( (*v34 & 6) != 0 )
                  {
                    if ( !v18 || !v12 )
                      v12 = *(_QWORD *)(a2 + 40);
                    appended = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v34, a2, v12, v45);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        appended = -1073741823;
      }
    }
LABEL_54:
    v11 = (unsigned __int64)Heap;
    if ( BaseAddress )
      RtlpMuiRegFreeLanguageList(BaseAddress);
    goto LABEL_56;
  }
  v46 = 1;
  v58 = HIWORD(v15);
  p_BaseAddress = &BaseAddress;
  BaseAddress = (PVOID)RtlpMuiRegCreateLanguageList(25LL, 0LL, a2);
  appended = BaseAddress == 0LL ? 0xC0000017 : 0;
  if ( BaseAddress )
  {
    v16 = &BaseAddress;
    goto LABEL_13;
  }
LABEL_56:
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
  return (unsigned int)appended;
}
