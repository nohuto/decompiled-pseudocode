/*
 * XREFs of CmpIsVirtEnabledForSubject @ 0x140565BA4
 * Callers:
 *     CmpIsSystemEntity @ 0x140565AF0 (CmpIsSystemEntity.c)
 * Callees:
 *     CmpEffectiveTokenForSubject @ 0x140105530 (CmpEffectiveTokenForSubject.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 */

char __fastcall CmpIsVirtEnabledForSubject(__int64 *a1)
{
  void *v1; // rax
  char v2; // bl
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(TokenInformation) = 0;
  v1 = (void *)CmpEffectiveTokenForSubject(a1, &v5);
  v2 = 1;
  if ( v5 != 1 )
    return 0;
  SeQueryInformationToken(v1, TokenVirtualizationEnabled, &TokenInformation);
  if ( !(_DWORD)TokenInformation )
    return 0;
  return v2;
}
