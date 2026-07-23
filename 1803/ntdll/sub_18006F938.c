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

NTSTATUS __fastcall sub_18006F938(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE CurrentUserKey)
{
  int v6; // ecx
  BOOLEAN IsMultiSessionSku; // al
  int v9; // ecx
  int v10; // ecx

  if ( !CurrentUserKey )
    return -1073741811;
  if ( dword_18015D054 )
  {
    v6 = dword_18015D470;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_18015D470;
    dword_18015D054 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_18015D470 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(DesiredAccess, CurrentUserKey);
  v9 = v6 - 1;
  if ( !v9 )
    return sub_18010E7D8(DesiredAccess);
  v10 = v9 - 1;
  if ( !v10 )
    return sub_18010E7D8(DesiredAccess);
  if ( v10 == 1 )
    return -1073741822;
  return -1073741595;
}
