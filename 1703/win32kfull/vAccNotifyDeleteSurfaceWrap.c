/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C00E65A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00150D4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C027A70C (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // eax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  if ( gpBmpDev || gpRedirDev )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v6 = v2;
    if ( v2 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v5, (struct PDEVOBJ *)&v6);
      v3 = *(_DWORD *)(v2 + 32);
      if ( (v3 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2144) & 0x8000) == 0
        || (v3 & 0x20000) == 0
        && (*(_DWORD *)(v2 + 2144) & 0x8000) != 0
        && (*(_DWORD *)(a1 + 112) & 0x400000) != 0
        && *(_QWORD *)(a1 + 24) )
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
        return;
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
    }
    else
    {
      if ( (struct SURFACE *)a1 == SURFACE::pdibDefault )
        return;
      if ( (unsigned int)SURFACE::bStockSurface((SURFACE *)a1) )
        return;
      v4 = *(_DWORD *)(a1 + 112);
      if ( (v4 & 0x40000) != 0 || (v4 & 0x4000000) == 0 )
        return;
    }
    vAccNotify((struct _SURFOBJ *)(a1 + 24), 8u, 0LL);
  }
}
