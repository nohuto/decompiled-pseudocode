/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x1405132F0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     SepSidInToken @ 0x1400D5100 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x1400D5140 (SeTokenIsRestricted.c)
 *     SepCheckCapabilities @ 0x140447668 (SepCheckCapabilities.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(char *Token, __int64 a2)
{
  bool v4; // si
  BOOLEAN IsMultiSessionSku; // r14
  PSID v6; // r15
  bool v7; // bp
  PSID v8; // r15
  bool v9; // bp
  char v10; // cl
  BOOLEAN result; // al
  PSID v12; // r14
  bool v13; // bp
  char v14; // al
  __int64 v15; // r9
  bool v16; // sf
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  if ( *(_DWORD *)(a2 + 120) != *((_DWORD *)Token + 30) || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0 )
    return 0;
  if ( !IsMultiSessionSku )
  {
    v6 = SeDefaultAccountAliasSid;
    v7 = SepSidInToken((__int64)Token, 0LL, SeDefaultAccountAliasSid, 0, 0, 0);
    if ( v7 )
    {
      if ( SeTokenIsRestricted(Token) )
        v7 = SepSidInToken((__int64)Token, 0LL, v6, 0, 1, 0);
      v4 = v7;
    }
  }
  if ( SepAllowSessionImpersonationCap && (*((_DWORD *)Token + 50) & 0x4000) == 0 )
  {
    v8 = SeSessionImpersonationCapabilityGroupSid;
    v9 = SepSidInToken((__int64)Token, 0LL, SeSessionImpersonationCapabilityGroupSid, 0, 0, 0);
    if ( v9 )
    {
      if ( SeTokenIsRestricted(Token) )
        v9 = SepSidInToken((__int64)Token, 0LL, v8, 0, 1, 0);
      if ( v9 )
        return 1;
    }
    v10 = v9;
    if ( v4 )
      v10 = 1;
    if ( v10 )
      return 1;
  }
  if ( IsMultiSessionSku || (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v12 = SeConstrainedImpersonationCapabilityGroupSid;
  v13 = SepSidInToken((__int64)Token, 0LL, SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0);
  if ( v13 )
  {
    if ( SeTokenIsRestricted(Token) )
      v13 = SepSidInToken((__int64)Token, 0LL, v12, 0, 1, 0);
    if ( v13 )
      goto LABEL_27;
  }
  v14 = v13;
  if ( v4 )
    v14 = 1;
  if ( v14 )
  {
LABEL_27:
    if ( (*((_DWORD *)Token + 50) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(
             (PSID_AND_ATTRIBUTES_HASH)(Token + 808),
             0LL,
             SeConstrainedImpersonationCapabilitySid,
             0,
             1,
             0);
  LOBYTE(v17) = result;
  if ( result )
  {
    v16 = (int)SepCheckCapabilities(Token, *(_DWORD *)(a2 + 800), *(_QWORD *)(a2 + 792), v15, (char *)&v17) < 0;
    result = v17;
    if ( !v16 && !(_BYTE)v17 )
      return RtlEqualSid(*((PSID *)Token + 98), *(PSID *)(a2 + 784));
  }
  return result;
}
