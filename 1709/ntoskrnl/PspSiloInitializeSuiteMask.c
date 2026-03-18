/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x1407158E8
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140715AD4 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     ExGetSuiteMask @ 0x1405DE114 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x140715774 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140715804 (PspSiloGetSuiteMaskStringFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeSuiteMask(__int64 a1)
{
  int SuiteMaskStringFromRegistry; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  SuiteMaskStringFromRegistry = PspSiloGetSuiteMaskStringFromRegistry(&UnicodeString);
  if ( SuiteMaskStringFromRegistry >= 0 )
  {
    SuiteMaskStringFromRegistry = PspSiloGetMultiUserTsFromRegistry(&v5);
    if ( SuiteMaskStringFromRegistry >= 0 )
      *(_DWORD *)(a1 + 20) = ExGetSuiteMask((__int64)UnicodeString.Buffer, v5);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)SuiteMaskStringFromRegistry;
}
