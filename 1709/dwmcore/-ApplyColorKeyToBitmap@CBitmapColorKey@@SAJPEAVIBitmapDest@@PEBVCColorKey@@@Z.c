/*
 * XREFs of ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801BAB50
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801D1850 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CVisualGroup@@CAPEAX_K@Z @ 0x1801467C0 (--2CVisualGroup@@CAPEAX_K@Z.c)
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801BAC30 (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBitmap(struct IBitmapDest *a1, const struct CColorKey *a2)
{
  char *v4; // rax
  CMILCOMBase *v5; // rbx
  unsigned int v6; // edi
  signed int v7; // eax

  v4 = (char *)CVisualGroup::operator new();
  v5 = (CMILCOMBase *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v4 + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
    *((_QWORD *)v4 + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 10) = 0;
    *(_QWORD *)(v4 + 44) = 1LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v7 = CBitmapColorKey::ApplyColorKeyToBitmapWorker(v5, a1, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xD9u);
    CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xD5u);
  }
  return v6;
}
