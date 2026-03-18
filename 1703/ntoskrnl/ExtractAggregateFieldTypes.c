/*
 * XREFs of ExtractAggregateFieldTypes @ 0x140082140
 * Callers:
 *     _TlgWriteAgg @ 0x140081D20 (_TlgWriteAgg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // r9
  unsigned __int64 v5; // r10
  char *v6; // rax
  char v7; // cl
  char v10; // dl
  char *v11; // rax
  char v12; // cl
  char v13; // dl
  char v14; // cl
  char v15; // r8
  __int64 v16; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v5 = v2 + *(unsigned int *)(a2 + 24);
  v6 = (char *)(v2 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  while ( *v6++ )
    ;
  if ( (unsigned __int64)v6 < v5 )
  {
    while ( 1 )
    {
      while ( *v6++ )
        ;
      v10 = *v6;
      v11 = v6 + 1;
      if ( v10 >= 0 )
        break;
      v12 = *v11;
      v13 = v10 & 0x7F;
      v6 = v11 + 1;
      if ( v12 >= 0 )
        break;
      v14 = *v6;
      if ( *v6 < 0 )
      {
        while ( v14 == (char)0x80 )
        {
          v14 = *++v6;
          if ( v14 >= 0 )
            goto LABEL_11;
        }
        return v3;
      }
LABEL_11:
      v15 = *v6;
      if ( v13 == 9 && (unsigned __int8)(v15 - 113) <= 2u )
      {
        v16 = v3++;
        *(_BYTE *)(16 * v16 + a2 + 45) = v15;
        if ( (unsigned __int64)v6 < v5 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}
