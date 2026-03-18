/*
 * XREFs of AuthzBasepValueInSet @ 0x1401159D4
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x140115DDC (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepGetNextValue @ 0x140115AEC (AuthzBasepGetNextValue.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140115BC4 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x140115EA8 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140263C04 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140263E78 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x140263FB4 (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v4; // xmm0
  __int128 v6; // xmm1
  __int64 v9; // r12
  int NextValue; // eax
  int v11; // ebx
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  int v17; // eax
  char v18; // al
  int v19; // eax
  _BYTE v20[48]; // [rsp+28h] [rbp-49h] BYREF
  _OWORD v21[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v22; // [rsp+78h] [rbp+7h]
  _WORD v23[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v24; // [rsp+84h] [rbp+13h]
  int v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+98h] [rbp+27h]
  __int64 v28; // [rsp+A0h] [rbp+2Fh]

  v4 = *a1;
  *a3 = 0;
  v6 = a1[1];
  v21[0] = v4;
  v22 = *((_QWORD *)a1 + 4);
  v21[1] = v6;
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v23);
      v11 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_17:
        v11 = 0;
        goto LABEL_16;
      }
      if ( NextValue < 0 )
        goto LABEL_18;
      v12 = v21[0];
      if ( LOWORD(v21[0]) == 4 )
      {
        v17 = AuthzBasepGetNextValue(a2, v20);
        v11 = v17;
        if ( v17 == -2147483622 )
          goto LABEL_17;
        if ( v17 < 0 )
          goto LABEL_18;
        v18 = *((_BYTE *)a2 + 4);
        v25 = 0;
        v13 = *a2;
        v24 = v18;
        v26 = *((_QWORD *)a2 + 2);
        v27 = *((_DWORD *)a2 + 2);
        v28 = *((_QWORD *)a2 + 4) + v9;
        v23[0] = v13;
      }
      else
      {
        v13 = v23[0];
      }
      if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(v21) )
        break;
      if ( HIDWORD(v21[0]) == 1 )
        v12 = v13;
      if ( !v12 )
        goto LABEL_14;
      if ( v12 <= 2u )
      {
LABEL_30:
        LOBYTE(v14) = 0x80;
        v19 = AuthzBasepCompareIntegerOperands(v14, v21);
        goto LABEL_31;
      }
      switch ( v12 )
      {
        case 3u:
          v15 = AuthzBasepCompareUnicodeStringOperands(128, (__int64)v21, a3);
          goto LABEL_13;
        case 4u:
          LOBYTE(v14) = 0x80;
          v15 = AuthzBasepCompareFQBNOperands(v14, v21, a3);
LABEL_13:
          v11 = v15;
          if ( v15 < 0 )
            goto LABEL_18;
          break;
        case 5u:
          goto LABEL_28;
        case 6u:
          goto LABEL_30;
        case 0x10u:
LABEL_28:
          LOBYTE(v14) = 0x80;
          v19 = AuthzBasepCompareOctetStringOperands(v14, v21);
LABEL_31:
          *a3 = v19;
          break;
      }
LABEL_14:
      if ( *a3 == 1 )
        goto LABEL_15;
    }
  }
  while ( a4 );
  v11 = -1073741406;
LABEL_15:
  if ( v11 >= 0 )
    goto LABEL_16;
LABEL_18:
  *a3 = -1;
LABEL_16:
  AuthzBasepRestartOperandValueEnumeration(a2);
  return (unsigned int)v11;
}
