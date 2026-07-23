/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x180052960
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800502E0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     GetNameFromLangListNode @ 0x1800518E0 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x180052170 (LdrpLangFallbackListAppendNode.c)
 *     LdrpCreateLangFallbackList @ 0x180052B14 (LdrpCreateLangFallbackList.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int16 a4,
        __int64 *a5)
{
  int NameFromLangListNode; // ebx
  unsigned int v10; // edi
  wchar_t *Buffer; // rbx
  int appended; // eax
  _QWORD *v13; // rdi
  unsigned int v14; // r15d
  bool v16; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v17[2]; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING v18; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[176]; // [rsp+60h] [rbp-A0h] BYREF

  BaseAddress = 0LL;
  memset(v21, 0, 0xAAuLL);
  v16 = 0;
  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  NameFromLangListNode = LdrpCreateLangFallbackList(&BaseAddress, a2, 25LL);
  if ( NameFromLangListNode >= 0 )
  {
    v10 = 0;
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_13:
      v13 = BaseAddress;
      v14 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        do
        {
          *(_DWORD *)&v18.Length = 11141120;
          v18.Buffer = (wchar_t *)v21;
          NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(v13[3] + 6LL * v14), &v18);
          if ( NameFromLangListNode < 0 )
            break;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, v17, v18.Buffer);
          ++v14;
        }
        while ( v14 < *((unsigned __int16 *)v13 + 2) );
      }
      goto LABEL_14;
    }
    while ( 1 )
    {
      *(_DWORD *)&v18.Length = 11141120;
      v18.Buffer = (wchar_t *)v21;
      NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a1 + 24) + 6LL * v10), &v18);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v18.Buffer;
      v20.Buffer = 0LL;
      if ( (int)RtlpConsoleFallbackNameFromLocaleName(v18.Buffer, a3, &v16, &v20, a2, a4) >= 0 && v16 )
        appended = LdrpLangFallbackListAppendNode((__int64 *)&BaseAddress, a2, 0, v17, v20.Buffer);
      else
        appended = LdrpLangFallbackListAppendNode(a5, a2, 0, v17, Buffer);
      NameFromLangListNode = appended;
      if ( appended < 0 )
        break;
      if ( ++v10 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  v13 = BaseAddress;
LABEL_14:
  if ( v13 )
    RtlpMuiRegFreeLanguageList(v13);
  if ( NameFromLangListNode < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)NameFromLangListNode;
}
