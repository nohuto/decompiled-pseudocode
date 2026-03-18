/*
 * XREFs of MirrorRegion @ 0x1C0107644
 * Callers:
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     NtUserGetWindowRgnEx @ 0x1C00F7480 (NtUserGetWindowRgnEx.c)
 *     xxxGetUpdateRgn @ 0x1C0107368 (xxxGetUpdateRgn.c)
 *     xxxSetWindowRgn @ 0x1C0107570 (xxxSetWindowRgn.c)
 *     NtUserSetWindowRgnEx @ 0x1C01EC350 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?OrderRects@@YAXPEAUtagRECT@@H@Z @ 0x1C01C5828 (-OrderRects@@YAXPEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MirrorRegion(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int RegionData; // eax
  unsigned int v9; // r14d
  __int64 v10; // rax
  struct tagRECT *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 right; // r10
  struct tagRECT *v15; // r9
  int v16; // edx
  LONG left; // ecx
  __int64 v18; // r11
  LONG v19; // r8d
  __int64 Region; // rax
  __int64 v21; // rsi

  v3 = 0;
  if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 && a2 > 2 )
  {
    RegionData = GreGetRegionData(a2, 0LL, 0LL);
    v9 = RegionData;
    if ( RegionData )
    {
      v10 = Win32AllocPool((int)RegionData, 1768780629LL);
      v11 = (struct tagRECT *)v10;
      if ( v10 )
      {
        if ( (unsigned int)GreGetRegionData(a2, v9, v10) )
        {
          right = (unsigned int)v11->right;
          v15 = v11 + 2;
          if ( a3 )
            v16 = *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 144);
          else
            v16 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
          left = v11[1].left;
          v11[1].left = v16 - v11[1].right;
          v11[1].right = v16 - left;
          if ( (int)right > 0 )
          {
            v18 = right;
            do
            {
              v19 = v15->left;
              v15->left = v16 - v15->right;
              v15->right = v16 - v19;
              ++v15;
              --v18;
            }
            while ( v18 );
          }
          OrderRects(v11 + 2, right);
          Region = GreExtCreateRegion(0LL, v9, v11);
          v21 = Region;
          if ( Region )
          {
            GreCombineRgn(a2, Region, 0LL, 5LL);
            GreDeleteObject(v21);
            v3 = 1;
          }
        }
        Win32FreePool(v11, v12, v13);
      }
    }
  }
  return v3;
}
