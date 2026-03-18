/*
 * XREFs of HT_Get8BPPMaskPalette @ 0x1C0134B50
 * Callers:
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C010EE7C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C0134A40 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     HT_Get8BPPFormatPalette @ 0x1C023CBD0 (HT_Get8BPPFormatPalette.c)
 */

LONG __stdcall HT_Get8BPPMaskPalette(
        LPPALETTEENTRY pPaletteEntry,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LPPALETTEENTRY v6; // rbx
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r15d
  int v12; // r12d
  unsigned int v13; // r13d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // rdx
  unsigned int v18; // eax
  bool v19; // cf
  unsigned int v20; // r15d
  bool v21; // cf
  int v22; // r12d
  BYTE v23; // cl
  unsigned int v24; // ebp
  int v25; // eax
  bool v26; // cf
  int v27; // eax
  int v28; // edx
  unsigned int i; // r15d
  int v30; // r12d
  BYTE v31; // cl
  unsigned int v32; // ebp
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // [rsp+20h] [rbp-38h]
  unsigned int v37; // [rsp+24h] [rbp-34h]
  __int64 v38; // [rsp+28h] [rbp-30h]
  __int64 v39; // [rsp+28h] [rbp-30h]
  int v40; // [rsp+68h] [rbp+10h]
  int v41; // [rsp+68h] [rbp+10h]

  v6 = pPaletteEntry;
  if ( !Use8BPPMaskPal )
    return HT_Get8BPPFormatPalette(pPaletteEntry, RedGamma, GreenGamma, BlueGamma);
  if ( CMYMask == 1 )
  {
    v9 = 4;
    v7 = 125;
    goto LABEL_20;
  }
  if ( CMYMask == 2 )
  {
    v9 = 5;
    v7 = 216;
LABEL_20:
    v8 = v9;
    v10 = v9;
    goto LABEL_5;
  }
  v7 = 0;
  v8 = (CMYMask >> 2) & 7;
  v9 = CMYMask >> 5;
  v10 = CMYMask & 3;
  if ( CMYMask && (!v9 || !v8 || (CMYMask & 3) == 0) )
    return 0;
LABEL_5:
  if ( pPaletteEntry )
  {
    v11 = 0;
    v36 = 512;
    v12 = 1;
    if ( *pPaletteEntry == 809650002 )
    {
      v6 = pPaletteEntry + 255;
      v12 = -1;
      if ( CMYMask )
      {
        v7 = (v9 + 1) * (v8 + 1) * (v10 + 1);
        v11 = (256 - v7) >> 1;
        if ( ((((_BYTE)v9 + 1) * ((_BYTE)v8 + 1) * ((_BYTE)v10 + 1)) & 1) != 0 )
          v36 = v11 + (v7 >> 1);
      }
    }
    memset(pPaletteEntry, 0, 0x400uLL);
    v13 = 0;
    if ( v7 )
    {
      if ( v11 )
      {
        v13 = v11;
        v17 = v11;
        do
        {
          *(_WORD *)&v6->peGreen = -1;
          v6->peRed = -1;
          v6 += v12;
          --v17;
        }
        while ( v17 );
      }
      v18 = 0;
      v38 = 4LL * v12;
      v19 = v9 != 0;
      v37 = 0;
      do
      {
        if ( v19 )
          v40 = (int)(255500000 - 255 * DivFD6(v18, v9)) / 1000000;
        else
          LOBYTE(v40) = 0;
        v20 = 0;
        v21 = v8 != 0;
        do
        {
          if ( v21 )
            v22 = (int)(255500000 - 255 * DivFD6(v20, v8)) / 1000000;
          else
            LOBYTE(v22) = 0;
          v23 = v40;
          v24 = 0;
          v25 = v36;
          v26 = v10 != 0;
          do
          {
            if ( v26 )
            {
              v27 = DivFD6(v24, v10);
              v23 = v40;
              v28 = (255500000 - 255 * v27) / 1000000;
              v25 = v36;
            }
            else
            {
              LOBYTE(v28) = 0;
            }
            v6->peRed = v23;
            v6->peGreen = v22;
            v6->peBlue = v28;
            if ( v13 == v25 )
            {
              ++v13;
              v6 = (LPPALETTEENTRY)((char *)v6 + v38);
              v6->peRed = v23;
              v6->peGreen = v22;
              v6->peBlue = v28;
            }
            v6 = (LPPALETTEENTRY)((char *)v6 + v38);
            ++v24;
            ++v13;
            v26 = v24 < v10;
          }
          while ( v24 <= v10 );
          v21 = ++v20 < v8;
        }
        while ( v20 <= v8 );
        v18 = v37 + 1;
        v37 = v18;
        v19 = v18 < v9;
      }
      while ( v18 <= v9 );
    }
    else if ( v9 && v8 && v10 )
    {
      v39 = 4LL * v12;
      do
      {
        if ( v13 >= v9 )
          LOBYTE(v41) = 0;
        else
          v41 = (int)(255500000 - 255 * DivFD6(v13, v9)) / 1000000;
        for ( i = 0; i <= 7; ++i )
        {
          if ( i >= v8 )
            LOBYTE(v30) = 0;
          else
            v30 = (int)(255500000 - 255 * DivFD6(i, v8)) / 1000000;
          v31 = v41;
          v32 = 0;
          v33 = v39;
          do
          {
            if ( v32 >= v10 )
            {
              LOBYTE(v35) = 0;
            }
            else
            {
              v34 = DivFD6(v32, v10);
              v31 = v41;
              v35 = (255500000 - 255 * v34) / 1000000;
              v33 = v39;
            }
            v6->peRed = v31;
            ++v32;
            v6->peGreen = v30;
            v6->peBlue = v35;
            v6 = (LPPALETTEENTRY)((char *)v6 + v33);
          }
          while ( v32 <= 3 );
        }
        ++v13;
      }
      while ( v13 <= 7 );
    }
    else
    {
      v14 = 255;
      v15 = 256LL;
      do
      {
        v6->peBlue = v14;
        v6->peGreen = v14;
        v6->peRed = v14--;
        v6 += v12;
        --v15;
      }
      while ( v15 );
    }
  }
  return 256;
}
