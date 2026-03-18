/*
 * XREFs of GreGetDIBColorTable @ 0x1C00FF920
 * Callers:
 *     <none>
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00125C8 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C009BB74 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v12; // ecx
  int v13; // ebx
  ULONG v14; // ecx
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  int v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+58h] [rbp-28h]
  int v21; // [rsp+5Ch] [rbp-24h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+B8h] [rbp+38h] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( !a4 )
  {
    v14 = 87;
    goto LABEL_17;
  }
  if ( !v15[0] )
  {
    v14 = 6;
LABEL_17:
    EngSetLastError(v14);
    goto LABEL_8;
  }
  v20 = 0;
  v21 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v16 = 0LL;
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v15);
  v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
  if ( ((unsigned int)SURFACE::bDIBSection(v8) || *(_QWORD *)(v10 + 128))
    && (unsigned int)(*(_DWORD *)(v9 + 96) - 1) <= 2 )
  {
    v25 = *(_QWORD *)(v9 + 128);
    v12 = *(_DWORD *)(v25 + 28);
    if ( a2 < v12 )
    {
      v13 = a2 + a3;
      if ( a2 + a3 > v12 )
        v13 = *(_DWORD *)(v25 + 28);
      v7 = v13 - a2;
      XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v25, a4, a2, v7);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
LABEL_8:
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return v7;
}
