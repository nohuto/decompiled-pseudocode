/*
 * XREFs of GreExtSelectClipRgn @ 0x1C008074C
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0080120 (_ExcludeUpdateRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E61EC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     DrawTextExWorker @ 0x1C023BB1C (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027FF8 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00286B8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreExtSelectClipRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v3; // ebx
  DC *v7[2]; // [rsp+28h] [rbp-29h] BYREF
  struct REGION *v8[4]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v9[24]; // [rsp+58h] [rbp+7h] BYREF
  char v10; // [rsp+70h] [rbp+1Fh]
  __int64 v11; // [rsp+78h] [rbp+27h]
  int v12; // [rsp+80h] [rbp+2Fh]
  int v13; // [rsp+84h] [rbp+33h]
  struct REGION *v14; // [rsp+D0h] [rbp+7Fh] BYREF

  v3 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 1);
        if ( v8[0] )
        {
          v3 = DC::iSelect(v7[0], v8[0], a3);
          if ( v3 )
          {
            v11 = 0LL;
            v12 = 0;
            v13 = 0;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v7, 1);
            v3 = 0;
            if ( (v10 & 1) != 0 )
            {
              v14 = XDCOBJ::prgnEffRao(v7);
              v3 = RGNOBJ::iComplexity((RGNOBJ *)&v14);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
      }
      else if ( a3 == 5 )
      {
        v3 = DC::iSelect(v7[0], 0LL, 5);
        if ( v3 )
        {
          v11 = 0LL;
          v12 = 0;
          v13 = 0;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v7, 1);
          v3 = 0;
          if ( (v10 & 1) != 0 )
          {
            v14 = DC::prgnVisSnap(v7[0]);
            v3 = RGNOBJ::iComplexity((RGNOBJ *)&v14);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
        }
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}
