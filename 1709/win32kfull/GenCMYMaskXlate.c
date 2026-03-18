/*
 * XREFs of GenCMYMaskXlate @ 0x1C023F5B8
 * Callers:
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

char __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // edi
  int v8; // ecx
  int v9; // r10d
  int v10; // eax
  int v11; // r15d
  int v12; // ebx
  int v13; // edx
  int v14; // r13d
  int v15; // eax
  int v16; // edi
  int v17; // r14d
  int i; // r8d
  int v19; // eax
  int v20; // r10d
  int v21; // ebp
  int v22; // r12d
  int v23; // eax
  char v24; // r9
  char result; // al
  int v26; // [rsp+0h] [rbp-48h]
  int v27; // [rsp+4h] [rbp-44h]
  int v28; // [rsp+60h] [rbp+18h]

  v28 = a3;
  v5 = a5 + 1;
  v6 = (a4 + 1) * (a5 + 1);
  v8 = 0;
  v9 = (a4 + 1) * (a5 + 1) * (a3 + 1);
  v27 = v6;
  if ( (unsigned int)(v9 - 1) <= 0xFF && a2 )
  {
    if ( (v9 & 1) != 0 )
    {
      v10 = v9 / 2;
      ++v9;
      v11 = v10;
    }
    else
    {
      v11 = 512;
    }
    v12 = -v6;
    v13 = 0;
    v14 = -v5;
    v26 = v9 + (256 - v9) / 2 - 1;
    do
    {
      v15 = v12 + v6;
      v16 = a4;
      v17 = v14;
      if ( v13 > a3 )
        v15 = v12;
      v12 = v15;
      for ( i = 0; i <= 7; ++i )
      {
        v19 = v17 + v5;
        v20 = 0;
        if ( i > v16 )
          v19 = v17;
        v21 = -1;
        v17 = v19;
        v22 = v12 + v19;
        do
        {
          v23 = v21 + 1;
          if ( v20 > a5 )
            v23 = v21;
          v21 = v23;
          v24 = v22 + v23;
          if ( v22 + v23 > v11 )
            ++v24;
          ++v20;
          result = v26 - v24;
          *a1++ = v26 - v24;
        }
        while ( v20 <= 3 );
        v16 = a4;
      }
      v6 = v27;
      ++v13;
      v14 = -v5;
      a3 = v28;
    }
    while ( v13 <= 7 );
  }
  else
  {
    result = 0;
    do
      *a1++ = v8++;
    while ( v8 < 256 );
  }
  return result;
}
