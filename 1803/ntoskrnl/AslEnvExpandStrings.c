/*
 * XREFs of AslEnvExpandStrings @ 0x14061EF34
 * Callers:
 *     AslEnvExpandStrings2 @ 0x14061EB74 (AslEnvExpandStrings2.c)
 * Callees:
 *     AslEnvVarQuery @ 0x14061F0D4 (AslEnvVarQuery.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvExpandStrings(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4, unsigned __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // r10
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  _WORD *v15; // r13
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-58h]
  _WORD *v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v6 = a5;
  v7 = a3;
  v9 = a1;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  do
  {
    if ( *a2 != 37 )
      goto LABEL_3;
    v13 = 0LL;
    v14 = v7 - 1;
    v18 = a2 + 1;
    v15 = a2 + 1;
    if ( v7 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v15 == 37 )
        break;
      ++v15;
      ++v13;
    }
    while ( v13 < v14 );
    if ( v13 && v13 < v14 )
    {
      v16 = AslEnvVarQuery(v9, a2 + 1, v13, a4, v6, &v20);
      if ( v16 == -1073741789 )
      {
        a2 = v15 + 1;
        v9 = a1;
        v11 += v20 - 1;
        v10 = -1073741789;
        v7 += -2LL - v13;
      }
      else if ( v16 < 0 )
      {
        if ( v16 != -1073741568 )
        {
          LODWORD(v17) = v16;
          AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings", 639, (unsigned int)"AslEnvVarQuery failed [%x]", v17);
        }
        a2 = v18;
        ++v11;
        v9 = a1;
        --v7;
      }
      else
      {
        v9 = a1;
        a2 = v15 + 1;
        v11 += v20;
        v7 += -2LL - v13;
        if ( v6 <= v20 )
        {
          v10 = -1073741789;
        }
        else
        {
          v6 -= v20;
          a4 += v20;
        }
      }
    }
    else
    {
LABEL_3:
      if ( v10 != -1073741789 )
      {
        if ( v6 <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --v6;
          *a4++ = *a2;
        }
      }
      ++v11;
      --v7;
      ++a2;
    }
  }
  while ( v7 );
  if ( v10 != -1073741789 )
  {
LABEL_9:
    if ( v6 )
      *a4 = 0;
    else
      v10 = -1073741789;
  }
  if ( a6 )
    *a6 = v11 + 1;
  return v10;
}
