/*
 * XREFs of ?BltLnkReadPat1@@YAXPEAEK0KKKK@Z @ 0x1C02B1210
 * Callers:
 *     ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02B16E0 (-BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BltLnkReadPat1(
        unsigned __int8 *a1,
        char a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  unsigned int v8; // r9d
  __int64 v9; // r11
  unsigned __int8 v10; // di
  unsigned int v11; // ebx
  char i; // bp
  char v15; // cl
  unsigned int v16; // eax
  unsigned int v17; // r8d
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // ecx

  v6 = a5;
  v8 = a6;
  v9 = a5 & 7;
  v10 = 0;
  v11 = a2 & 7;
  for ( i = a2; v8; v6 = v21 )
  {
    v15 = StartMask[v9] & a3[(unsigned __int64)v6 >> 3];
    if ( v11 <= (unsigned int)v9 )
    {
      v19 = 8 - v9;
      if ( 8 - (int)v9 > v8 )
        v19 = v8;
      v17 = a4 - v6;
      if ( v19 <= a4 - v6 )
        v17 = v19;
      v18 = (unsigned __int8)(v15 & EndMask[v17 + (unsigned int)v9]) << (v9 - v11);
    }
    else
    {
      v16 = 8 - v11;
      if ( 8 - v11 > v8 )
        v16 = v8;
      v17 = a4 - v6;
      if ( v16 <= a4 - v6 )
        v17 = v16;
      v18 = (unsigned __int8)(v15 & EndMask[v17 + (unsigned int)v9]) >> (v11 - v9);
    }
    v20 = v17 + v6;
    i += v17;
    v21 = 0;
    v10 |= v18;
    v8 -= v17;
    if ( v20 != a4 )
      v21 = v20;
    v9 = 0LL;
    if ( v20 != a4 )
      v9 = v20 & 7;
    v11 = i & 7;
    if ( (i & 7) == 0 || !v8 )
    {
      *a1++ = v10;
      v10 = 0;
    }
  }
}
