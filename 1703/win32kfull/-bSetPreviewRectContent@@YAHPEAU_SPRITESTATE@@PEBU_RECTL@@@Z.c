/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C025A244
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C0266704 (bMoveDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0025B2C (GreUpdateSprite.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C0256F74 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(void **a1, const struct _RECTL *a2)
{
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  HDEV HDEV; // rax
  int v12; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v13; // [rsp+88h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-70h] BYREF
  char v15; // [rsp+98h] [rbp-68h]
  int v16; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v17; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-58h]
  _QWORD v19[4]; // [rsp+B0h] [rbp-50h] BYREF
  DC *v20[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagPOINT v21; // [rsp+E0h] [rbp-20h] BYREF
  struct tagPOINT v22; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-10h] BYREF
  char v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+FCh] [rbp-4h]
  struct _RECTL v26; // [rsp+100h] [rbp+0h] BYREF
  struct PALETTE *v27; // [rsp+110h] [rbp+10h] BYREF
  int v28; // [rsp+118h] [rbp+18h]
  _QWORD v29[2]; // [rsp+120h] [rbp+20h] BYREF
  struct _RECTL si128; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v31[2]; // [rsp+140h] [rbp+40h] BYREF
  int v32; // [rsp+150h] [rbp+50h]
  unsigned __int64 v33; // [rsp+154h] [rbp+54h]
  unsigned __int64 v34; // [rsp+15Ch] [rbp+5Ch]

  updated = 0;
  memset(v19, 0, sizeof(v19));
  v13.cx = a2->right - a2->left;
  v13.cy = a2->bottom - a2->top;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  v6 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 1LL);
    v20[1] = 0LL;
    XDCOBJ::vLock(v20, v6);
    if ( v20[0] )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v20);
      _InterlockedDecrement((volatile signed __int32 *)v20[0] + 3);
      v28 = 0;
      v27 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v27, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v18 = 0;
        v17 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v17, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)v19 + 4) = v13;
          v18 = 1;
          LODWORD(v19[0]) = 6;
          v19[2] = *(_QWORD *)v17;
          LODWORD(v19[3]) = 1;
          v14 = 0LL;
          v15 = 0;
          v16 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v19, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v14 )
          {
            LOBYTE(v7) = 5;
            HmgSetOwner(*(_QWORD *)(v14 + 32), 0LL, v7);
            v31[0] = 0x8C0038708C003870uLL;
            v31[1] = 0x8C0038708C003870uLL;
            v33 = 0x8C0038708C003870uLL;
            v34 = 0x8C0038708C003870uLL;
            v19[1] = 0x2400000003LL;
            v32 = 1174412344;
            v19[0] = 0x300000006LL;
            v19[2] = *(_QWORD *)v17;
            LODWORD(v19[3]) = 1;
            v23 = 0LL;
            v24 = 0;
            v25 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)v19, v31, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              if ( v23 )
              {
                *(struct tagSIZE *)&v26.right = v13;
                v29[0] = 0x100000001LL;
                v29[1] = 0x100000001LL;
                *(_QWORD *)&v26.left = 0LL;
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v20,
                            v17,
                            v27,
                            (struct _SURFOBJ *)(v14 + 24),
                            (struct _SURFOBJ *)(v23 + 24),
                            &v26,
                            &si128,
                            (struct _MARGINS *)v29);
                if ( updated )
                {
                  v8 = *(_QWORD *)(v14 + 32);
                  *(_DWORD *)(v14 + 112) |= 0x4000000u;
                  v9 = GreSelectBitmap(v6, v8);
                  *(_DWORD *)(v14 + 112) &= ~0x4000000u;
                  v22 = *(struct tagPOINT *)&a2->left;
                  v12 = 33488896;
                  v21 = 0LL;
                  HDEV = (HDEV)UserGetHDEV((unsigned int)v22.y);
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[146],
                              0LL,
                              &v22,
                              &v13,
                              v6,
                              &v21,
                              0,
                              (struct _BLENDFUNCTION *)&v12,
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
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v17);
          SURFMEM::~SURFMEM((SURFMEM *)&v14);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v17);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v27);
    }
    GreSetDCOwnerEx(v6, 2147483650LL, 0LL, 1LL);
    GreDeleteDC(v6);
  }
  return updated;
}
