/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x14016A300
 * Callers:
 *     NtSetDefaultLocale @ 0x14060E4A0 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14060EC80 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1402BE134 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x14060EE80 (RtlOpenCurrentUser.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        PHANDLE KeyHandle)
{
  int v6; // ecx
  BOOLEAN IsMultiSessionSku; // al
  __int64 v9; // rcx

  if ( !KeyHandle )
    return -1073741811;
  if ( dword_1403D17B8 )
  {
    v6 = dword_1403E9ABC;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_1403E9ABC;
    dword_1403D17B8 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_1403E9ABC = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(8u, KeyHandle);
  v9 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v9, a2, a3, KeyHandle);
  v9 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v9, a2, a3, KeyHandle);
  if ( (_DWORD)v9 == 1 )
    return -1073741822;
  return -1073741595;
}
