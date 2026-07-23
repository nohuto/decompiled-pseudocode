/*
 * XREFs of sub_18006E330 @ 0x18006E330
 * Callers:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006E400 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     sub_1800EDDC4 @ 0x1800EDDC4 (sub_1800EDDC4.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F52EC @ 0x1800F52EC (sub_1800F52EC.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F9FF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x18003B960 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x18006EB40 (RtlIsMultiSessionSku.c)
 *     sub_18010B5E8 @ 0x18010B5E8 (sub_18010B5E8.c)
 */

NTSTATUS __fastcall sub_18006E330(
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
  if ( dword_18015C004 )
  {
    v6 = dword_18015C430;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_18015C430;
    dword_18015C004 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_18015C430 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(DesiredAccess, CurrentUserKey);
  v9 = v6 - 1;
  if ( !v9 )
    return sub_18010B5E8(DesiredAccess);
  v10 = v9 - 1;
  if ( !v10 )
    return sub_18010B5E8(DesiredAccess);
  if ( v10 == 1 )
    return -1073741822;
  return -1073741595;
}
