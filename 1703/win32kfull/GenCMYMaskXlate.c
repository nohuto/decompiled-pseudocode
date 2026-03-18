/*
 * XREFs of GenCMYMaskXlate @ 0x1C023DC90
 * Callers:
 *     pDCIAdjClr @ 0x1C0034290 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GenCMYMaskXlate(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r14d
  int v6; // edi
  int v8; // ecx
  int v9; // r13d
  int v10; // r10d
  int v11; // eax
  int v12; // r15d
  int v13; // ebx
  int v14; // r8d
  __int64 result; // rax
  int v16; // r13d
  int v17; // esi
  int i; // edx
  int v19; // eax
  int v20; // r10d
  int v21; // ebp
  int v22; // r12d
  int v23; // eax
  char v24; // r9
  int v25; // [rsp+0h] [rbp-48h]
  int v26; // [rsp+4h] [rbp-44h]

  v5 = a5 + 1;
  v6 = (a4 + 1) * (a5 + 1);
  v8 = 0;
  v9 = a3;
  v10 = (a4 + 1) * (a5 + 1) * (a3 + 1);
  v26 = v6;
  if ( (unsigned int)(v10 - 1) <= 0xFF && a2 )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = v10 / 2;
      ++v10;
      v12 = v11;
    }
    else
    {
      v12 = 512;
    }
    v13 = -v6;
    v14 = 0;
    v25 = v10 + (256 - v10) / 2 - 1;
    LODWORD(result) = -v5;
    do
    {
      if ( v14 <= v9 )
        v13 += v6;
      v16 = a4;
      v17 = result;
      for ( i = 0; i <= 7; ++i )
      {
        v19 = v17 + v5;
        v20 = 0;
        if ( i > v16 )
          v19 = v17;
        v21 = -1;
        v17 = v19;
        v22 = v19 + v13;
        do
        {
          v23 = v21 + 1;
          if ( v20 > a5 )
            v23 = v21;
          v21 = v23;
          v24 = v22 + v23;
          if ( v22 + v23 > v12 )
            ++v24;
          ++v20;
          *a1++ = v25 - v24;
        }
        while ( v20 <= 3 );
        v16 = a4;
      }
      v6 = v26;
      ++v14;
      v9 = a3;
      result = (unsigned int)-v5;
    }
    while ( v14 <= 7 );
  }
  else
  {
    result = 256LL;
    do
      *a1++ = v8++;
    while ( v8 < 256 );
  }
  return result;
}
