/*
 * XREFs of RtlNumberOfSetBits @ 0x180089090
 * Callers:
 *     RtlNumberOfClearBits @ 0x180089070 (RtlNumberOfClearBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBits(unsigned int *a1)
{
  char *v1; // r9
  unsigned int v2; // edx
  int v3; // r14d
  int v4; // esi
  unsigned int v5; // edi
  int v6; // r8d
  unsigned int v7; // r11d
  unsigned int v8; // r10d
  int v9; // edx
  int v10; // ebx
  unsigned int v11; // edx
  int i; // r8d
  char v13; // cl
  unsigned int v14; // eax
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int v19; // r11d
  char v20; // cl

  v1 = (char *)*((_QWORD *)a1 + 1);
  v2 = *a1 >> 3;
  v3 = *a1;
  v4 = *a1 & 7;
  v5 = 0;
  v6 = (unsigned __int8)v1 & 7;
  v7 = v2 + (v4 != 0);
  if ( 8 - (unsigned __int64)(a1[2] & 7) > (unsigned __int64)*a1 >> 3 )
  {
    v10 = 0;
    v8 = v2 + ((*a1 & 7) != 0);
    v11 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v2 - (8 - (_BYTE)v6)) & 7;
    v10 = v9 + 1;
    if ( !v4 )
      v10 = v9;
    v11 = v7 - v10 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v13 = *v1++;
    if ( i == v7 - 1 && v4 )
      v13 &= byte_180120DD0[(v3 & 7) + 16];
    ++i;
    v5 += byte_180123560[(unsigned __int8)~v13];
  }
  if ( v11 )
  {
    v14 = ((v11 - 1) >> 3) + 1;
    v15 = v14;
    i += 8 * v14;
    do
    {
      v16 = *(_QWORD *)v1;
      v17 = *(_QWORD *)v1;
      v1 += 8;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v15;
    }
    while ( v15 );
  }
  if ( v10 )
  {
    v19 = v7 - 1;
    do
    {
      v20 = *v1++;
      if ( i == v19 && v4 )
        v20 &= byte_180120DD0[(v3 & 7) + 16];
      ++i;
      v5 += byte_180123560[(unsigned __int8)~v20];
      --v10;
    }
    while ( v10 );
  }
  return v5;
}
