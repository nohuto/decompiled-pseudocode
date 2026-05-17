/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180005B30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetSystemDefaultUILanguage @ 0x180003570 (RtlpGetSystemDefaultUILanguage.c)
 *     InitializeUserOrMachineLangList @ 0x180005C60 (InitializeUserOrMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180005E78 (InitializeTEBUserLangList.c)
 *     GetLCIDFromLangListNode @ 0x18000615C (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int LCIDFromLangListNode; // esi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v13);
    v4 = v13;
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = a2;
      if ( (int)InitializeTEBUserLangList(v7, v13) >= 0 )
      {
        if ( NtCurrentTeb()->UserPrefLanguages )
          v8 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        else
          v8 = 0LL;
        v4 = v13;
        v12 = v8;
        if ( v8 )
        {
          if ( *(_WORD *)(v8 + 4) )
          {
            LCIDFromLangListNode = GetLCIDFromLangListNode(v13, *(_QWORD *)(v8 + 24), a1);
            if ( LCIDFromLangListNode >= 0 )
              goto LABEL_13;
          }
          v12 = 0LL;
        }
        v9 = InitializeUserOrMachineLangList(v4, 0, (unsigned int)&v12, 3 - (unsigned int)(a2 != 0), a2 == 0);
        v5 = v12;
        if ( v9 >= 0 )
        {
          if ( v12 && *(_WORD *)(v12 + 4) )
            LCIDFromLangListNode = GetLCIDFromLangListNode(v4, *(_QWORD *)(v12 + 24), a1);
          else
            LCIDFromLangListNode = -1073741823;
LABEL_13:
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_14;
        }
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage(a1, v4);
  if ( LCIDFromLangListNode < 0 )
    *a1 = 0;
LABEL_14:
  if ( v5 )
    RtlpMuiRegFreeLanguageList(v5);
  return (unsigned int)LCIDFromLangListNode;
}
