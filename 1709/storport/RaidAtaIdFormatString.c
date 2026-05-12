/*
 * XREFs of RaidAtaIdFormatString @ 0x1C000E5DC
 * Callers:
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C000E530 (RaidBusEnumeratorProcessAtaInformation.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C00060AC (RaidRemoveTrailingBlanks.c)
 */

void __fastcall RaidAtaIdFormatString(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  char v6; // bl
  unsigned int v7; // r8d
  char *v8; // rax
  __int64 v9; // rdx
  __int64 i; // rdi
  char v11; // cl
  char v12; // dl
  __int64 v13; // rcx

  v3 = 0LL;
  *a1 = 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    v8 = a1;
    v9 = a2 - (_QWORD)a1;
    v7 = a3;
    for ( i = a3; i; --i )
    {
      if ( !v6 )
      {
        v11 = v8[v9];
        if ( v11 )
        {
          if ( v11 > 32 && v11 != 44 )
          {
            *v8 = v11;
            goto LABEL_7;
          }
        }
        else
        {
          v6 = 1;
        }
      }
      *v8 = 32;
LABEL_7:
      ++v8;
    }
  }
  a1[v7] = 0;
  if ( a3 && (a3 & 1) == 0 && a3 != 1 )
  {
    do
    {
      v12 = a1[v3];
      v13 = (unsigned int)(v3 + 1);
      a1[v3] = a1[v13];
      v3 = (unsigned int)(v3 + 2);
      a1[v13] = v12;
    }
    while ( (unsigned int)v3 < a3 - 1 );
  }
  RaidRemoveTrailingBlanks((__int64)a1, a3 + 1);
}
