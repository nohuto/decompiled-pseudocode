/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C013EDB0
 * Callers:
 *     NtGdiExtSelectClipRgn @ 0x1C007DF20 (NtGdiExtSelectClipRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009EAEC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     _ExcludeUpdateRgn @ 0x1C00F82DC (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1C023A250 (DrawTextExWorker.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00743F8 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C007B9B0 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  DC *v8; // rcx
  DC *v10[2]; // [rsp+28h] [rbp-29h] BYREF
  struct REGION *v11; // [rsp+38h] [rbp-19h] BYREF
  struct REGION *v12[3]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+7h] BYREF
  char v14; // [rsp+70h] [rbp+1Fh]

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v4;
  }
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v8 = v10[0];
  if ( v10[0] )
  {
    if ( a4 )
      goto LABEL_6;
    if ( (*(_DWORD *)(HmgPentryFromPobj(v10[0]) + 8) & 0xFFFFFFFE) != 0 )
    {
      v8 = v10[0];
LABEL_6:
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v12, a2, 1);
        if ( v12[0] )
        {
          v4 = DC::iSelect(v10[0], v12[0], a3);
          if ( v4 )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v10, 1);
            v4 = 0;
            if ( (v14 & 1) != 0 )
            {
              v11 = XDCOBJ::prgnEffRao(v10);
              v4 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v12);
      }
      else if ( a3 == 5 )
      {
        v4 = DC::iSelect(v8, 0LL, 5);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct XDCOBJ *)v10, 1);
          v4 = 0;
          if ( (v14 & 1) != 0 )
          {
            v11 = DC::prgnVisSnap(v10[0]);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
        }
      }
      goto LABEL_19;
    }
  }
  EngSetLastError(6u);
LABEL_19:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v4;
}
