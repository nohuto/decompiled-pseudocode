/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x140545960
 * Callers:
 *     SeQuerySigningPolicy @ 0x140545370 (SeQuerySigningPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140088710 (RtlQueryPackageClaims.c)
 *     PsQueryProcessAttributesByToken @ 0x1404F77A0 (PsQueryProcessAttributesByToken.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140545D34 (SepIsNgenImage.c)
 *     SepIsLockedDown @ 0x1406F0554 (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        HANDLE TokenHandle,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  char v11; // di
  char v12; // cl
  char *v13; // rax
  NTSTATUS PackageClaims; // ecx
  char v16; // cl
  unsigned __int8 v17; // dl
  char v18; // dl
  char v19[8]; // [rsp+40h] [rbp-10h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-8h] BYREF

  TokenInformation = 0LL;
  PsQueryProcessAttributesByToken((__int64)TokenHandle, 0LL, v19);
  v11 = v19[0];
  if ( v19[0] )
  {
    PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, 0LL, 0LL, (PPS_PKG_CLAIM)&TokenInformation, 0LL);
    if ( PackageClaims < 0 )
      return (unsigned int)PackageClaims;
    v16 = v11;
    if ( ((unsigned __int8)TokenInformation & 4) != 0 )
      v16 = 0;
    if ( v16 )
    {
      if ( (a3 & 1) == 0 )
      {
        if ( BYTE2(TokenInformation) > 6uLL )
          return 0;
        if ( BYTE2(TokenInformation) > 1u )
        {
          if ( BYTE2(TokenInformation) == 2 )
          {
            *a5 = 8;
            *a6 = SeILSigningPolicy;
            goto LABEL_9;
          }
          if ( BYTE2(TokenInformation) == 3 )
          {
            *a5 = 6;
            v13 = a6;
LABEL_31:
            *v13 = 6;
            goto LABEL_9;
          }
          if ( (unsigned int)BYTE2(TokenInformation) - 4 > 2 )
            return 0;
          v12 = 0;
          if ( SeILSigningPolicy == 2 )
            v12 = 2;
          *a5 = v12;
          goto LABEL_7;
        }
        *a5 = SeILSigningPolicy;
LABEL_6:
        v12 = SeILSigningPolicy;
LABEL_7:
        v13 = a6;
        goto LABEL_8;
      }
      if ( !a4 )
      {
        *a5 = 4;
        *a6 = 4;
        *a7 = 18;
        return 0;
      }
    }
  }
  if ( !a2 || !(unsigned __int8)SepIsNgenImage(a2) )
  {
LABEL_4:
    if ( (a3 & 1) != 0 )
    {
      v17 = 18;
      if ( a4 )
        v17 = a4;
      *a7 = v17;
      *a5 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)v17 >> 4));
      *a6 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)*a7 >> 4) + 1);
      v18 = *a5;
      if ( (unsigned __int8)SeILSigningPolicy > (unsigned __int8)*a5 )
        v18 = SeILSigningPolicy;
      *a5 = v18;
      if ( (unsigned __int8)SeILSigningPolicy > (unsigned __int8)*a6 )
        *a6 = SeILSigningPolicy;
      return 0;
    }
    *a5 = SeILSigningPolicy;
    goto LABEL_6;
  }
  LODWORD(TokenInformation) = 0;
  PackageClaims = SeQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation);
  if ( PackageClaims < 0 )
    return (unsigned int)PackageClaims;
  *a5 = 11;
  if ( (a3 & 1) != 0 )
  {
    if ( !a4 )
    {
      if ( (_DWORD)TokenInformation )
        *a6 = 6;
      else
        *a6 = 8;
      *a7 = 33;
      return 0;
    }
    goto LABEL_4;
  }
  if ( !(_DWORD)TokenInformation )
  {
    *a6 = SeILSigningPolicy;
    *a7 = (unsigned __int8)SeILSigningPolicy >= 2u ? 0x21 : 0;
    return 0;
  }
  PackageClaims = SepIsLockedDown(v19);
  if ( PackageClaims < 0 )
    return (unsigned int)PackageClaims;
  v13 = a6;
  if ( v19[0] )
    goto LABEL_31;
  v12 = 0;
  if ( SeILSigningPolicy == 2 )
    v12 = 2;
LABEL_8:
  *v13 = v12;
LABEL_9:
  *a7 = 0;
  return 0;
}
