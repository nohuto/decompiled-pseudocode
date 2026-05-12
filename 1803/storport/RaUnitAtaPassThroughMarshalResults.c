/*
 * XREFs of RaUnitAtaPassThroughMarshalResults @ 0x1C0001A74
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001724 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001737C (GetSrbScsiData.c)
 */

__int64 __fastcall RaUnitAtaPassThroughMarshalResults(__int64 a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  bool v5; // zf
  _BYTE *v9; // rdx
  unsigned __int8 v10; // r9
  int v11; // eax
  char v12; // cl
  _BYTE *v13; // rsi
  unsigned __int8 v14; // r8
  char v15; // r10
  _BYTE *v16; // rcx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // al
  char *v20; // rax
  int v21; // edx
  __int64 result; // rax
  unsigned __int8 v23; // dl
  __int64 v24; // rcx
  _BYTE *v25; // [rsp+50h] [rbp+8h] BYREF
  char v26; // [rsp+60h] [rbp+18h] BYREF

  v25 = 0LL;
  v5 = *(_BYTE *)(a1 + 2) == 40;
  v26 = 0;
  if ( v5 )
  {
    GetSrbScsiData(a1, 0, 0, 0, (__int64)&v25, (__int64)&v26);
    v11 = *(_DWORD *)(a1 + 60);
    v9 = v25;
    v10 = v26;
  }
  else
  {
    v9 = *(_BYTE **)(a1 + 32);
    v10 = *(_BYTE *)(a1 + 11);
    v11 = *(_DWORD *)(a1 + 16);
  }
  *((_DWORD *)a2 + 2) = v11;
  if ( *(char *)(a1 + 3) >= 0 || !v9 )
    goto LABEL_26;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v12 = *v9 & 0x7F;
  if ( (unsigned __int8)(v12 - 114) > 1u )
  {
    if ( (unsigned __int8)(v12 - 112) > 1u || v10 < 0xCu )
      goto LABEL_26;
    *((_BYTE *)a2 + 40) = v9[3];
    *((_BYTE *)a2 + 41) = v9[6];
    *((_BYTE *)a2 + 42) = v9[11];
    *((_BYTE *)a2 + 43) = v9[10];
    *((_BYTE *)a2 + 44) = v9[9];
    *((_BYTE *)a2 + 45) = v9[5];
    *((_BYTE *)a2 + 46) = v9[4];
    goto LABEL_24;
  }
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( v10 )
  {
    if ( (unsigned __int8)(v12 - 114) > 1u )
      goto LABEL_26;
    v16 = 0LL;
    if ( v9 + 8 <= &v9[v10] )
    {
      v17 = v9[7];
      if ( v17 <= 0xF7u )
      {
        v18 = v10;
        v19 = v17 + 8;
        if ( v19 <= v10 )
          v18 = v19;
        v14 = v18 - 8;
        if ( v14 )
        {
          v13 = v9 + 8;
          v15 = 1;
          v16 = v9 + 8;
        }
      }
    }
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
  }
  if ( v15 )
  {
    v26 = 9;
    if ( v13 )
    {
      if ( v14 )
      {
LABEL_17:
        if ( v14 < 2u )
          goto LABEL_26;
        v20 = &v26;
        v21 = 0;
        while ( *v16 != *v20 )
        {
          ++v21;
          ++v20;
          if ( v21 )
          {
            v23 = v16[1] + 2;
            if ( v14 <= v23 )
              goto LABEL_26;
            v16 += v23;
            v14 -= v23;
            goto LABEL_17;
          }
        }
        if ( v14 < 0xEu || !v16 )
          goto LABEL_26;
        *((_BYTE *)a2 + 40) = v16[3];
        *((_BYTE *)a2 + 41) = v16[5];
        *((_BYTE *)a2 + 42) = v16[7];
        *((_BYTE *)a2 + 43) = v16[9];
        *((_BYTE *)a2 + 44) = v16[11];
        *((_BYTE *)a2 + 45) = v16[12];
        *((_BYTE *)a2 + 46) = v16[13];
        if ( (v16[2] & 1) != 0 )
        {
          *((_BYTE *)a2 + 33) = v16[4];
          *((_BYTE *)a2 + 34) = v16[6];
          *((_BYTE *)a2 + 35) = v16[8];
          *((_BYTE *)a2 + 36) = v16[10];
        }
LABEL_24:
        if ( (*(_BYTE *)(a1 + 3) & 0x3F) == 0xE )
        {
          *((_BYTE *)a2 + 46) = 65;
          *((_BYTE *)a2 + 40) = 1;
        }
      }
    }
  }
LABEL_26:
  if ( a3 != 1 && (a2[1] & 2) != 0 && (v24 = *((_QWORD *)a2 + 3)) != 0 )
    result = v24 + *((unsigned int *)a2 + 2);
  else
    result = *a2;
  *(_QWORD *)(a4 + 8) = result;
  *(_DWORD *)a4 = 0;
  return result;
}
