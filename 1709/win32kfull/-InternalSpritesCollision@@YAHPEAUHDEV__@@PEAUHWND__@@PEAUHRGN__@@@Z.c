/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0251270
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0252430 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0060550 (GreDeleteSpriteOverlapPresent.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED4A4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C0259028 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0259C84 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall InternalSpritesCollision(HDEV a1, HWND a2, HRGN a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  LONG v6; // ecx
  LONG v7; // edx
  int v8; // eax
  LONG v9; // r8d
  int v10; // r9d
  HRGN RectRgn; // rsi
  HRGN v12; // r14
  HRGN v13; // rax
  HRGN v14; // r13
  HRGN v15; // r12
  int v16; // edi
  HRGN v17; // rax
  HRGN hrgn; // [rsp+30h] [rbp-49h]
  unsigned int v20; // [rsp+38h] [rbp-41h]
  unsigned int v21; // [rsp+3Ch] [rbp-3Dh]
  _QWORD v23[3]; // [rsp+48h] [rbp-31h] BYREF
  HANDLE hrgnSrc2; // [rsp+60h] [rbp-19h]
  _QWORD v25[3]; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT prcl; // [rsp+80h] [rbp+7h] BYREF

  hrgnSrc2 = a3;
  v4 = 0;
  v21 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, a3, 0);
  if ( !v23[0] )
    goto LABEL_4;
  v5 = *((_DWORD *)a1 + 650);
  v6 = v5 + *((_DWORD *)a1 + 30);
  v7 = v5 + *((_DWORD *)a1 + 32);
  v8 = *((_DWORD *)a1 + 651);
  v9 = v8 + *((_DWORD *)a1 + 31);
  v10 = *((_DWORD *)a1 + 33);
  prcl.left = v6;
  prcl.right = v7;
  prcl.top = v9;
  prcl.bottom = v8 + v10;
  if ( RGNOBJ::bInside((RGNOBJ *)v23, (struct _RECTL *)&prcl) == 2 )
  {
LABEL_4:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
    if ( *((_DWORD *)a1 + 34) )
    {
      RectRgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      if ( RectRgn )
      {
        hrgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v12 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v13 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v14 = hrgn;
        v15 = v13;
        if ( hrgn )
        {
          if ( v12 )
          {
            if ( v13 )
            {
              v20 = 0;
              if ( EngSetRectRgn(
                     hrgn,
                     *((_DWORD *)a1 + 30),
                     *((_DWORD *)a1 + 31),
                     *((_DWORD *)a1 + 32),
                     *((_DWORD *)a1 + 33)) )
              {
                SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
                if ( *((_QWORD *)a1 + 140) )
                  vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 18), 0);
                SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 50));
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, RectRgn, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, hrgn, 1);
                *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 97);
                if ( v25[0] && v23[0] )
                  v20 = RGNOBJAPI::iCombine((RGNOBJAPI *)v25, (struct RGNOBJ *)v23, (struct RGNOBJ *)&prcl, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v25);
                if ( v20 > 1 )
                {
                  v16 = 0;
                  EngSetRectRgn(v12, 0, 0, 0, 0);
                  if ( !g_pDwmState )
                    GdiGetSpriteClipRgns(a1, v12);
                  EngGetRgnBox(v12, &prcl);
                  if ( !ERECTL::bEmpty((ERECTL *)&prcl) && (unsigned int)EngCombineRgn(v15, RectRgn, v12, 1) > 1 )
                  {
                    v17 = RectRgn;
                    v16 = 1;
                    RectRgn = v15;
                    v15 = v17;
                  }
                  if ( (unsigned int)EngOffsetRgn(RectRgn, *((_DWORD *)a1 + 650), *((_DWORD *)a1 + 651)) > 1 )
                  {
                    if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, hrgnSrc2, 1) <= 1 )
                    {
                      if ( v16 )
                        GreAddSpriteOverlapPresent(a1, a2);
                    }
                    else
                    {
                      v21 = 1;
                      GreDeleteSpriteOverlapPresent(a1, a2);
                    }
                  }
                }
                v14 = hrgn;
              }
            }
          }
          EngDeleteRgn(v14);
        }
        if ( v12 )
          EngDeleteRgn(v12);
        if ( v15 )
          EngDeleteRgn(v15);
        EngDeleteRgn(RectRgn);
      }
    }
    return v21;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
  }
  return v4;
}
