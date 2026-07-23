/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x1405091A8
 * Callers:
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 *     SeTokenIsRestricted @ 0x140063230 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 *     SepCheckCapabilities @ 0x14053EE14 (SepCheckCapabilities.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(char *Token, __int64 a2)
{
  bool v3; // si
  BOOLEAN IsMultiSessionSku; // r14
  BOOLEAN result; // al
  PSID v7; // r15
  char v8; // bp
  PSID v9; // r15
  char v10; // bp
  char v11; // cl
  PSID v12; // r14
  char v13; // bp
  char v14; // al
  bool v15; // sf
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  if ( *(_DWORD *)(a2 + 120) != *((_DWORD *)Token + 30) || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0 )
    return 0;
  if ( !IsMultiSessionSku )
  {
    v7 = SeDefaultAccountAliasSid;
    v8 = SepSidInToken((__int64)Token, 0LL, SeDefaultAccountAliasSid, 0, 0, 0, 0);
    if ( v8 )
    {
      if ( SeTokenIsRestricted(Token) )
        v8 = SepSidInToken((__int64)Token, 0LL, v7, 0, 1, 0, 0);
      v3 = v8 != 0;
    }
  }
  if ( SepAllowSessionImpersonationCap && (*((_DWORD *)Token + 50) & 0x4000) == 0 )
  {
    v9 = SeSessionImpersonationCapabilityGroupSid;
    v10 = SepSidInToken((__int64)Token, 0LL, SeSessionImpersonationCapabilityGroupSid, 0, 0, 0, 0);
    if ( v10 )
    {
      if ( SeTokenIsRestricted(Token) )
        v10 = SepSidInToken((__int64)Token, 0LL, v9, 0, 1, 0, 0);
      if ( v10 )
        return 1;
    }
    v11 = v10;
    if ( v3 )
      v11 = 1;
    if ( v11 )
      return 1;
  }
  if ( IsMultiSessionSku || (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v12 = SeConstrainedImpersonationCapabilityGroupSid;
  v13 = SepSidInToken((__int64)Token, 0LL, SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0, 0);
  if ( v13 )
  {
    if ( SeTokenIsRestricted(Token) )
      v13 = SepSidInToken((__int64)Token, 0LL, v12, 0, 1, 0, 0);
    if ( v13 )
      goto LABEL_29;
  }
  v14 = v13;
  if ( v3 )
    v14 = 1;
  if ( v14 )
  {
LABEL_29:
    if ( (*((_DWORD *)Token + 50) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(
             (PSID_AND_ATTRIBUTES_HASH)(Token + 808),
             0LL,
             SeConstrainedImpersonationCapabilitySid,
             0,
             1,
             0,
             0);
  LOBYTE(v16) = result;
  if ( result )
  {
    v15 = (int)SepCheckCapabilities(Token, (__int64)&v16) < 0;
    result = v16;
    if ( !v15 && !(_BYTE)v16 )
      return RtlEqualSid(*((PSID *)Token + 98), *(PSID *)(a2 + 784));
  }
  return result;
}
