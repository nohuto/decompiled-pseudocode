/*
 * XREFs of AuthzBasepValueInSet @ 0x1401163E8
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x14011626C (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepGetNextValue @ 0x1401164F8 (AuthzBasepGetNextValue.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1401165D0 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x140116668 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14028DF34 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14028E1A4 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14028E2E0 (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v4; // xmm0
  __int128 v6; // xmm1
  __int64 v9; // r12
  int NextValue; // eax
  __int64 v11; // rdx
  int v12; // ebx
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  int v18; // eax
  char v19; // al
  int v20; // eax
  _BYTE v21[48]; // [rsp+28h] [rbp-49h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v23; // [rsp+78h] [rbp+7h]
  _WORD v24[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v25; // [rsp+84h] [rbp+13h]
  int v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+90h] [rbp+1Fh]
  int v28; // [rsp+98h] [rbp+27h]
  __int64 v29; // [rsp+A0h] [rbp+2Fh]

  v4 = *a1;
  *a3 = 0;
  v6 = a1[1];
  v22[0] = v4;
  v23 = *((_QWORD *)a1 + 4);
  v22[1] = v6;
  while ( 1 )
  {
    v9 = *((unsigned int *)a2 + 2);
    NextValue = AuthzBasepGetNextValue(a2, v24);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      goto LABEL_16;
    v13 = v22[0];
    if ( LOWORD(v22[0]) == 4 )
    {
      v18 = AuthzBasepGetNextValue(a2, v21);
      v12 = v18;
      if ( v18 == -2147483622 )
        break;
      if ( v18 < 0 )
        goto LABEL_16;
      v19 = *((_BYTE *)a2 + 4);
      v26 = 0;
      v14 = *a2;
      v25 = v19;
      v27 = *((_QWORD *)a2 + 2);
      v28 = *((_DWORD *)a2 + 2);
      v29 = *((_QWORD *)a2 + 4) + v9;
      v24[0] = v14;
    }
    else
    {
      v14 = v24[0];
    }
    if ( (unsigned __int8)AuthzBasepOperandValueTypesCompatible(v22) )
    {
      if ( HIDWORD(v22[0]) == 1 )
        v13 = v14;
      if ( !v13 )
        goto LABEL_14;
      if ( v13 <= 2u )
      {
LABEL_30:
        LOBYTE(v15) = 0x80;
        v20 = AuthzBasepCompareIntegerOperands(v15, v22);
        goto LABEL_31;
      }
      switch ( v13 )
      {
        case 3u:
          v16 = AuthzBasepCompareUnicodeStringOperands(128, (__int64)v22, a3);
          goto LABEL_13;
        case 4u:
          LOBYTE(v15) = 0x80;
          v16 = AuthzBasepCompareFQBNOperands(v15, v22, a3);
LABEL_13:
          v12 = v16;
          if ( v16 < 0 )
            goto LABEL_16;
          break;
        case 5u:
          goto LABEL_28;
        case 6u:
          goto LABEL_30;
        case 0x10u:
LABEL_28:
          LOBYTE(v15) = 0x80;
          v20 = AuthzBasepCompareOctetStringOperands(v15, v22);
LABEL_31:
          *a3 = v20;
          break;
      }
LABEL_14:
      if ( *a3 == 1 )
        goto LABEL_15;
    }
    else if ( !a4 )
    {
      v12 = -1073741406;
LABEL_15:
      if ( v12 >= 0 )
        goto LABEL_18;
LABEL_16:
      *a3 = -1;
      goto LABEL_18;
    }
  }
  v12 = 0;
LABEL_18:
  AuthzBasepRestartOperandValueEnumeration(a2, v11);
  return (unsigned int)v12;
}
