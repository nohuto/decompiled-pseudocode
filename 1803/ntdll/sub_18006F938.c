/*
 * XREFs of sub_18006F938 @ 0x18006F938
 * Callers:
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FA90 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     sub_1800E9B84 @ 0x1800E9B84 (sub_1800E9B84.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F287C @ 0x1800F287C (sub_1800F287C.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x180044370 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x18006F9B0 (RtlOpenCurrentUser.c)
 *     sub_18010E7D8 @ 0x18010E7D8 (sub_18010E7D8.c)
 */

__int64 __fastcall sub_18006F938(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // ecx
  char IsMultiSessionSku; // al
  int v10; // ecx
  int v11; // ecx

  if ( !a5 )
    return 3221225485LL;
  if ( dword_18015D054 )
  {
    v7 = dword_18015D470;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v7 = dword_18015D470;
    dword_18015D054 = 1;
    if ( !IsMultiSessionSku )
      v7 = 1;
    dword_18015D470 = v7;
  }
  if ( !v7 )
    return RtlOpenCurrentUser(a1, a5);
  v10 = v7 - 1;
  if ( !v10 )
    return sub_18010E7D8(a1, a2, a3, a5);
  v11 = v10 - 1;
  if ( !v11 )
    return sub_18010E7D8(a1, a2, a3, a5);
  if ( v11 == 1 )
    return 3221225474LL;
  return 3221225701LL;
}
