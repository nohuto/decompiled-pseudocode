/*
 * XREFs of GreSetDIBColorTable @ 0x1C0295CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0084384 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0096624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 */

__int64 __fastcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-11h] BYREF
  __int128 v16; // [rsp+48h] [rbp+7h] BYREF
  __int64 v17; // [rsp+58h] [rbp+17h]
  int v18; // [rsp+60h] [rbp+1Fh]
  __int64 v19; // [rsp+68h] [rbp+27h]
  __int64 v20; // [rsp+70h] [rbp+2Fh]
  __int64 v21; // [rsp+78h] [rbp+37h]
  __int64 v22; // [rsp+80h] [rbp+3Fh]
  __int64 v23; // [rsp+88h] [rbp+47h]

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] )
  {
    v20 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v15);
    v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
    if ( (unsigned int)SURFACE::bDIBSection(v8) && (unsigned int)(v10 - 1) <= 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 8LL) |= 0xFu;
      v14 = *(_QWORD *)(v9 + 128);
      v11 = *(_DWORD *)(v14 + 28);
      if ( a2 < v11 )
      {
        v12 = a2 + a3;
        if ( a2 + a3 > v11 )
          v12 = *(_DWORD *)(v14 + 28);
        v7 = v12 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v14, a4, a2, v12 - a2);
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v15);
  return v7;
}
