/*
 * XREFs of AuthzBasepEvaluateSetRelationship @ 0x14011626C
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140116338 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepValueInSet @ 0x1401163E8 (AuthzBasepValueInSet.c)
 *     AuthzBasepGetNextValue @ 0x1401164F8 (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x140116668 (AuthzBasepRestartOperandValueEnumeration.c)
 */

__int64 __fastcall AuthzBasepEvaluateSetRelationship(int a1, __int64 a2, _DWORD *a3)
{
  int v4; // r13d
  int v5; // edx
  int v6; // r12d
  int v8; // ecx
  __int64 v9; // r14
  int v10; // eax
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // r9
  char v15; // al
  char v16; // al
  unsigned int v17; // r14d
  int NextValue; // eax
  char v19; // al
  int v20; // eax
  unsigned int v21; // r14d
  int v22; // eax
  char v23; // al
  _WORD v24[2]; // [rsp+20h] [rbp-50h] BYREF
  char v25; // [rsp+24h] [rbp-4Ch]
  int v26; // [rsp+28h] [rbp-48h]
  __int64 v27; // [rsp+30h] [rbp-40h]
  int v28; // [rsp+38h] [rbp-38h]
  __int64 v29; // [rsp+40h] [rbp-30h]
  _BYTE v30[40]; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  *a3 = 0;
  if ( !a1 )
  {
    if ( *(_DWORD *)(a2 + 12) != 1 && *(_DWORD *)(a2 + 52) != 1 && *(_DWORD *)(a2 + 4) != *(_DWORD *)(a2 + 44) )
      return (unsigned int)v5;
    while ( 1 )
    {
      v17 = *(_DWORD *)(a2 + 8);
      NextValue = AuthzBasepGetNextValue(a2, v24);
      v5 = NextValue;
      if ( NextValue == -2147483622 )
        break;
      if ( NextValue < 0 )
        goto LABEL_12;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2, v30);
        if ( v5 < 0 )
          goto LABEL_12;
        v19 = *(_BYTE *)(a2 + 4);
        v26 = 0;
        v25 = v19;
        v24[0] = *(_WORD *)a2;
        v27 = *(_QWORD *)(a2 + 16);
        v28 = *(_DWORD *)(a2 + 8);
        v29 = *(_QWORD *)(a2 + 32) + v17;
      }
      ++v4;
      v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(v24, a2 + 40, a3, 0LL);
      if ( v5 < 0 )
      {
LABEL_12:
        *a3 = -1;
        return (unsigned int)v5;
      }
      if ( *a3 != 1 )
        return (unsigned int)v5;
    }
    v20 = *(_DWORD *)(a2 + 12);
    v5 = 0;
    if ( v20 == 1 && !*(_BYTE *)(a2 + 4) )
    {
      if ( *(_DWORD *)(a2 + 52) == 1 )
        goto LABEL_42;
      if ( *(_DWORD *)(a2 + 44) == 1 )
        return (unsigned int)v5;
    }
    if ( *(_DWORD *)(a2 + 52) != 1 )
    {
LABEL_45:
      AuthzBasepRestartOperandValueEnumeration(a2, 0LL);
      while ( 1 )
      {
        v21 = *(_DWORD *)(a2 + 48);
        v22 = AuthzBasepGetNextValue(a2 + 40, v24);
        v5 = v22;
        if ( v22 == -2147483622 )
          break;
        if ( v22 < 0 )
          goto LABEL_12;
        if ( *(_WORD *)a2 == 4 )
        {
          v5 = AuthzBasepGetNextValue(a2 + 40, v30);
          if ( v5 < 0 )
            goto LABEL_12;
          v23 = *(_BYTE *)(a2 + 44);
          v26 = 0;
          v25 = v23;
          v24[0] = *(_WORD *)(a2 + 40);
          v27 = *(_QWORD *)(a2 + 56);
          v28 = *(_DWORD *)(a2 + 48);
          v29 = *(_QWORD *)(a2 + 72) + v21;
        }
        ++v6;
        v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(v24, a2, a3, 0LL);
        if ( v5 < 0 )
          goto LABEL_12;
        if ( *a3 != 1 )
          return (unsigned int)v5;
      }
      v5 = 0;
      if ( v4 != v6 )
        *a3 = 0;
      return (unsigned int)v5;
    }
LABEL_42:
    if ( !*(_BYTE *)(a2 + 44) && v20 != 1 && *(_DWORD *)(a2 + 4) == 1 )
      return (unsigned int)v5;
    goto LABEL_45;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)v5;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a2 + 8);
      v13 = AuthzBasepGetNextValue(a2, v24);
      v5 = v13;
      if ( v13 == -2147483622 )
        return 0;
      if ( v13 < 0 )
        goto LABEL_12;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2, v30);
        if ( v5 < 0 )
          goto LABEL_12;
        v15 = *(_BYTE *)(a2 + 4);
        v26 = 0;
        v25 = v15;
        v24[0] = *(_WORD *)a2;
        v27 = *(_QWORD *)(a2 + 16);
        v28 = *(_DWORD *)(a2 + 8);
        v29 = *(_QWORD *)(a2 + 32) + v12;
      }
      LOBYTE(v14) = 1;
      v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, __int64))AuthzBasepValueInSet)(v24, a2 + 40, a3, v14);
      if ( v5 < 0 )
        goto LABEL_12;
      if ( *a3 )
        return (unsigned int)v5;
    }
  }
  if ( *(_DWORD *)(a2 + 12) == 1 || *(_DWORD *)(a2 + 52) == 1 || *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a2 + 44) )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(a2 + 48);
      v10 = AuthzBasepGetNextValue(a2 + 40, v24);
      v5 = v10;
      if ( v10 == -2147483622 )
        return 0;
      if ( v10 < 0 )
        goto LABEL_12;
      if ( *(_WORD *)a2 == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2 + 40, v30);
        if ( v5 < 0 )
          goto LABEL_12;
        v16 = *(_BYTE *)(a2 + 44);
        v26 = 0;
        v25 = v16;
        v24[0] = *(_WORD *)(a2 + 40);
        v27 = *(_QWORD *)(a2 + 56);
        v28 = *(_DWORD *)(a2 + 48);
        v29 = *(_QWORD *)(a2 + 72) + v9;
      }
      v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(v24, a2, a3, 0LL);
      if ( v5 < 0 )
        goto LABEL_12;
      if ( *a3 != 1 )
        return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
