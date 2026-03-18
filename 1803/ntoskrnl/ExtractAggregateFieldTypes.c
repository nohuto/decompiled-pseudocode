/*
 * XREFs of ExtractAggregateFieldTypes @ 0x14006F550
 * Callers:
 *     _TlgWriteAgg @ 0x14006F11C (_TlgWriteAgg.c)
 *     PnpTraceInterruptUsage @ 0x140168E28 (PnpTraceInterruptUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // r11
  unsigned __int64 v5; // rbx
  char *v6; // rax
  char v7; // cl
  char v9; // cl
  char *v10; // rdx
  char v11; // r8
  char v12; // r9
  char v13; // r10
  char v14; // r8
  int v15; // edx

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
      do
      {
        v9 = *v6;
        v10 = v6++;
      }
      while ( v9 );
      v11 = *v6;
      v12 = 0;
      if ( *v6 < 0 )
        v12 = v6[1];
      v13 = v11 & 0x7F;
      if ( v11 >= 0 )
      {
        v6 = v10;
        v13 = v11;
      }
      v6 += 2;
      if ( v12 >= 0 )
        break;
      v14 = *v6;
      if ( *v6 < 0 )
      {
        while ( v14 == (char)0x80 )
        {
          v14 = *++v6;
          if ( v14 >= 0 )
            goto LABEL_14;
        }
        return v3;
      }
LABEL_14:
      if ( v13 == 9 && (unsigned __int8)(v14 - 113) <= 2u )
      {
        v15 = v3++;
        *(_BYTE *)(a2 + 16LL * (unsigned int)(v15 + 2) + 13) = v14;
        if ( (unsigned __int64)v6 < v5 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}
