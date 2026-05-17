/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x180006630
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180004C20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x18000505C (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x180005E78 (InitializeTEBUserLangList.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x18000442C (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD *Heap; // rax
  _QWORD *UserPrefLanguages; // rdi
  int v9; // esi
  __int64 v11; // rcx

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (_QWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
    UserPrefLanguages = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    *Heap = 0LL;
    Heap[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap;
  }
  v9 = a3 - 4;
  if ( !v9 )
  {
    if ( a1 )
    {
      if ( *UserPrefLanguages )
      {
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40LL);
        RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
      }
      *UserPrefLanguages = a1;
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return v3;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v11 = UserPrefLanguages[1];
  if ( v11 )
    RtlpMuiRegFreeStringPool(v11);
  UserPrefLanguages[1] = a2;
  return v3;
}
