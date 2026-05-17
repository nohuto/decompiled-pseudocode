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

__int64 __fastcall sub_18006E330(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // ecx
  char IsMultiSessionSku; // al
  int v10; // ecx
  int v11; // ecx

  if ( !a5 )
    return 3221225485LL;
  if ( dword_18015C004 )
  {
    v7 = dword_18015C430;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v7 = dword_18015C430;
    dword_18015C004 = 1;
    if ( !IsMultiSessionSku )
      v7 = 1;
    dword_18015C430 = v7;
  }
  if ( !v7 )
    return RtlOpenCurrentUser(a1, a5);
  v10 = v7 - 1;
  if ( !v10 )
    return sub_18010B5E8(a1, a2, a3, a5);
  v11 = v10 - 1;
  if ( !v11 )
    return sub_18010B5E8(a1, a2, a3, a5);
  if ( v11 == 1 )
    return 3221225474LL;
  return 3221225701LL;
}
