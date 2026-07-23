/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x180004C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegDupLanguageList @ 0x180004568 (RtlpMuiRegDupLanguageList.c)
 *     LdrpMultiSZCchLength @ 0x180004F4C (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180004FEC (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitializeUserList @ 0x18000505C (RtlpInitializeUserList.c)
 *     RtlpUpdateTEBLanguage @ 0x180006630 (RtlpUpdateTEBLanguage.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18002CBA4 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180051984 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpCreateLangFallbackList @ 0x180052B14 (LdrpCreateLangFallbackList.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, _WORD *a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  __int64 v8; // rdx
  int updated; // ebx
  __int64 v10; // rdx
  _DWORD *MergedPrefLanguages; // rcx
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  ULONG NumberOfLanguages; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B8h] [rbp+58h] BYREF

  v22 = 0;
  ReturnLength = 0;
  v5 = a1;
  BaseAddress = 0LL;
  v6 = 0;
  v21 = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return 3221225485LL;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x300) == 0x300 || (v5 & 1) != 0 && (v5 & 0x300) != 0 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v21);
  updated = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      RtlpInitializeUserList(v21);
      goto LABEL_18;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v10, &v22) < 0 )
      return (unsigned int)-1073741811;
    if ( v22 < 2 || *a2 || a2[1] )
    {
      if ( (int)LdrpCreateLangFallbackList(&BaseAddress, v21, 5LL) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v22, v5 | 2u, 26, 5, &BaseAddress);
      if ( updated < 0 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        goto LABEL_21;
      }
      v15 = *((_WORD *)BaseAddress + 2);
      if ( !v15 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v15;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_18:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    if ( (MergedPrefLanguages[10] & 0x40) == 0 )
    {
LABEL_20:
      MergedPrefLanguages[10] |= 0x80u;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_21;
    }
    v16 = RtlpMuiRegDupLanguageList((__int64)MergedPrefLanguages, v8);
    MergedPrefLanguages = (_DWORD *)v16;
    if ( v16 )
    {
      *(_DWORD *)(v16 + 40) &= ~0x40u;
      goto LABEL_20;
    }
    return (unsigned int)-1073741823;
  }
LABEL_21:
  if ( updated || !v6 )
    return (unsigned int)updated;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v12 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v12 = 0LL;
  if ( !v12 )
    goto LABEL_40;
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x100) != 0 )
    {
      if ( (*(_BYTE *)(v12 + 40) & 0x40) == 0 )
      {
LABEL_35:
        v13 = *(_DWORD *)(v12 + 40) & 0xFFFFFFF9 | 2;
LABEL_36:
        *(_DWORD *)(v12 + 40) = v13;
        if ( (v5 & 0x8000) != 0 && a3 )
        {
          v14 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v12 + 42) = 0;
            *(_DWORD *)(v12 + 40) |= v14 << 16;
          }
        }
        goto LABEL_40;
      }
      v17 = RtlpMuiRegDupLanguageList(v12, v8);
      v12 = v17;
      if ( v17 )
      {
        updated = RtlpUpdateTEBLanguage(v17, 0LL, 4LL);
        if ( !updated )
        {
          *(_DWORD *)(v12 + 40) &= ~0x40u;
          goto LABEL_35;
        }
      }
      return 3221225473LL;
    }
    if ( (*(_BYTE *)(v12 + 40) & 0x40) != 0 )
    {
      v18 = RtlpMuiRegDupLanguageList(v12, v8);
      v12 = v18;
      if ( !v18 )
        return 3221225473LL;
      updated = RtlpUpdateTEBLanguage(v18, 0LL, 4LL);
      if ( updated )
        return 3221225473LL;
      *(_DWORD *)(v12 + 40) &= ~0x40u;
    }
    v13 = *(_DWORD *)(v12 + 40) & 0xFFFFFFF9 | 4;
    goto LABEL_36;
  }
  *(_DWORD *)(v12 + 40) &= 0xFFFFFFF9;
LABEL_40:
  RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
  return (unsigned int)updated;
}
