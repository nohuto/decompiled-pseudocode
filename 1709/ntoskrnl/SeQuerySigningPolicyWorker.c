/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x14053A578
 * Callers:
 *     SeQuerySigningPolicy @ 0x14053A940 (SeQuerySigningPolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140019A60 (RtlQueryPackageClaims.c)
 *     PsQueryProcessAttributesByToken @ 0x140483CF0 (PsQueryProcessAttributesByToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x14053A4C8 (SepIsNgenImage.c)
 *     SepIsLockedDown @ 0x140727FC4 (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        HANDLE TokenHandle,
        unsigned __int16 *a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  char v12; // di
  unsigned __int8 v13; // cl
  unsigned __int8 *v14; // rax
  __int64 v15; // rcx
  NTSTATUS v17; // eax
  char v18; // cl
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // cl
  _BYTE v21[8]; // [rsp+40h] [rbp-10h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-8h] BYREF

  TokenInformation = 0LL;
  PsQueryProcessAttributesByToken((__int64)TokenHandle, 0LL, v21);
  v12 = v21[0];
  if ( v21[0] )
  {
    LODWORD(v15) = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, 0LL, 0LL, (PPS_PKG_CLAIM)&TokenInformation, 0LL);
    if ( (int)v15 < 0 )
      return (unsigned int)v15;
    v18 = v12;
    if ( ((unsigned __int8)TokenInformation & 4) != 0 )
      v18 = 0;
    if ( v18 )
    {
      if ( (a3 & 1) == 0 )
      {
        if ( BYTE2(TokenInformation) > 6uLL )
          goto LABEL_9;
        if ( BYTE2(TokenInformation) <= 1u )
        {
          v13 = a5;
        }
        else
        {
          if ( BYTE2(TokenInformation) == 2 )
          {
            *a6 = 8;
            *a7 = a5;
            goto LABEL_8;
          }
          if ( BYTE2(TokenInformation) == 3 )
          {
            *a6 = 6;
            v14 = a7;
LABEL_36:
            *v14 = 6;
            goto LABEL_8;
          }
          if ( (unsigned int)BYTE2(TokenInformation) - 4 > 2 )
            goto LABEL_9;
          v13 = a5 != 2 ? 0 : 2;
        }
        *a6 = v13;
        goto LABEL_6;
      }
      if ( !a4 )
      {
        *a6 = 4;
        *a7 = 4;
        *a8 = 18;
        goto LABEL_9;
      }
    }
  }
  if ( !a2 || !SepIsNgenImage(a2) )
  {
LABEL_4:
    if ( (a3 & 1) != 0 )
    {
      v19 = 18;
      if ( a4 )
        v19 = a4;
      *a8 = v19;
      *a6 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)v19 >> 4));
      *a7 = *((_BYTE *)SeProtectedMapping + 2 * ((unsigned __int64)*a8 >> 4) + 1);
      v20 = *a6;
      if ( a5 > *a6 )
        v20 = a5;
      *a6 = v20;
      if ( a5 > *a7 )
        *a7 = a5;
      goto LABEL_9;
    }
    v13 = a5;
    *a6 = a5;
LABEL_6:
    v14 = a7;
    goto LABEL_7;
  }
  LODWORD(TokenInformation) = 0;
  v17 = SeQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation);
  v15 = (unsigned int)v17;
  if ( v17 < 0 )
    return (unsigned int)v15;
  *a6 = 11;
  if ( (a3 & 1) != 0 )
  {
    if ( !a4 )
    {
      if ( (_DWORD)TokenInformation )
        *a7 = 6;
      else
        *a7 = 8;
      *a8 = 33;
      goto LABEL_9;
    }
    goto LABEL_4;
  }
  LOBYTE(v15) = a5;
  if ( !(_DWORD)TokenInformation )
  {
    *a7 = a5;
    *a8 = a5 >= 2u ? 0x21 : 0;
    goto LABEL_9;
  }
  LODWORD(v15) = SepIsLockedDown(v15, v21);
  if ( (int)v15 < 0 )
    return (unsigned int)v15;
  v14 = a7;
  if ( v21[0] )
    goto LABEL_36;
  v13 = a5 != 2 ? 0 : 2;
LABEL_7:
  *v14 = v13;
LABEL_8:
  *a8 = 0;
LABEL_9:
  LODWORD(v15) = 0;
  return (unsigned int)v15;
}
