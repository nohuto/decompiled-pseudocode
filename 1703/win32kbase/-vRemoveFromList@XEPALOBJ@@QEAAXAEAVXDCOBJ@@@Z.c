/*
 * XREFs of ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0059C78
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0042464 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C005A668 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall XEPALOBJ::vRemoveFromList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  HDC v4; // rdx
  HDC v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *(PVOID *)this != WPP_MAIN_CB.Reserved )
  {
    v4 = *(HDC *)(*(_QWORD *)a2 + 1400LL);
    if ( v4 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v6, v4);
      *(_QWORD *)(v6[0] + 1408LL) = *(_QWORD *)(*(_QWORD *)a2 + 1408LL);
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v6);
    }
    v5 = *(HDC *)(*(_QWORD *)a2 + 1408LL);
    if ( v5 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v7, v5);
      *(_QWORD *)(v7[0] + 1400LL) = *(_QWORD *)(*(_QWORD *)a2 + 1400LL);
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
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
