/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C025B358
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C026598C (bMoveDevPreviewRect.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C0258A8C (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(SFMLOGICALSURFACE **a1, const struct _RECTL *a2)
{
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  HDEV HDEV; // rax
  struct _BLENDFUNCTION v12; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v13; // [rsp+88h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-70h] BYREF
  char v15; // [rsp+98h] [rbp-68h]
  int v16; // [rsp+9Ch] [rbp-64h]
  struct tagPOINT v17; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  struct PALETTE *v19; // [rsp+B0h] [rbp-50h] BYREF
  int v20; // [rsp+B8h] [rbp-48h]
  struct _RECTL v21; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v22[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-10h] BYREF
  char v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+FCh] [rbp-4h]
  struct PALETTE *v26; // [rsp+100h] [rbp+0h] BYREF
  int v27; // [rsp+108h] [rbp+8h]
  _QWORD v28[2]; // [rsp+110h] [rbp+10h] BYREF
  struct _RECTL si128; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v30[2]; // [rsp+130h] [rbp+30h] BYREF
  int v31; // [rsp+140h] [rbp+40h]
  unsigned __int64 v32; // [rsp+144h] [rbp+44h]
  unsigned __int64 v33; // [rsp+14Ch] [rbp+4Ch]

  updated = 0;
  memset(v22, 0, sizeof(v22));
  v13.cx = a2->right - a2->left;
  v13.cy = a2->bottom - a2->top;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  v6 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 1LL);
    v18 = 0LL;
    XDCOBJ::vLock((DC **)&v17, v6);
    if ( v17 )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)&v17);
      v27 = 0;
      v26 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v26, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v20 = 0;
        v19 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v19, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)v22 + 4) = v13;
          v20 = 1;
          LODWORD(v22[0]) = 6;
          v22[2] = *(_QWORD *)v19;
          LODWORD(v22[3]) = 1;
          v14 = 0LL;
          v15 = 0;
          v16 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v14 )
          {
            LOBYTE(v7) = 5;
            HmgSetOwner(*(_QWORD *)(v14 + 32), 0LL, v7);
            v30[0] = 0x8C0038708C003870uLL;
            v30[1] = 0x8C0038708C003870uLL;
            v32 = 0x8C0038708C003870uLL;
            v33 = 0x8C0038708C003870uLL;
            v22[1] = 0x2400000003LL;
            v31 = 1174412344;
            v22[0] = 0x300000006LL;
            v22[2] = *(_QWORD *)v19;
            LODWORD(v22[3]) = 1;
            v23 = 0LL;
            v24 = 0;
            v25 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)v22, v30, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              if ( v23 )
              {
                *(struct tagSIZE *)&v21.right = v13;
                v28[0] = 0x100000001LL;
                v28[1] = 0x100000001LL;
                *(_QWORD *)&v21.left = 0LL;
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)&v17,
                            v19,
                            v26,
                            (struct _SURFOBJ *)(v14 + 24),
                            (struct _SURFOBJ *)(v23 + 24),
                            &v21,
                            &si128,
                            (struct _MARGINS *)v28);
                if ( updated )
                {
                  v8 = *(_QWORD *)(v14 + 32);
                  *(_DWORD *)(v14 + 112) |= 0x4000000u;
                  v9 = GreSelectBitmap(v6, v8);
                  *(_DWORD *)(v14 + 112) &= ~0x4000000u;
                  v17 = *(struct tagPOINT *)&a2->left;
                  v12 = (struct _BLENDFUNCTION)33488896;
                  *(_QWORD *)&v21.left = 0LL;
                  HDEV = (HDEV)UserGetHDEV((unsigned int)v17.y);
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[146],
                              0LL,
                              &v17,
                              &v13,
                              v6,
                              (struct _POINTL *)&v21,
                              0,
                              &v12,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v14 + 112) |= 0x4000000u;
                  GreSelectBitmap(v6, v9);
                  *(_DWORD *)(v14 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v23);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v19);
          SURFMEM::~SURFMEM((SURFMEM *)&v14);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v19);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v26);
    }
    GreSetDCOwnerEx(v6, 2147483650LL, 0LL, 1LL);
    GreDeleteDC(v6);
  }
  return updated;
}
