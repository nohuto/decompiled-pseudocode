/*
 * XREFs of ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0041464
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C006EDB4 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00A970C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

void __fastcall XEPALOBJ::vRemoveFromList(XEPALOBJ *this, struct XDCOBJ *a2, int a3)
{
  HDC v5; // rdx
  HDC v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *(struct PALETTE **)this != ppalDefault )
  {
    v5 = *(HDC *)(*(_QWORD *)a2 + 1400LL);
    if ( v5 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v7, v5, a3);
      if ( v7[0] )
      {
        *(_QWORD *)(v7[0] + 1408LL) = *(_QWORD *)(*(_QWORD *)a2 + 1408LL);
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v7);
      }
    }
    v6 = *(HDC *)(*(_QWORD *)a2 + 1408LL);
    if ( v6 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v8, v6, a3);
      if ( v8[0] )
      {
        *(_QWORD *)(v8[0] + 1400LL) = *(_QWORD *)(*(_QWORD *)a2 + 1400LL);
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v8);
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)a2 + 1400LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)a2 + 1408LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 1400LL) = 0LL;
}
