/*
 * XREFs of ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180038408
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180037920 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007D4D8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180038358 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x1800384B0 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180070C30 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowIconic *a2,
        enum IconicRepresentationType *a3)
{
  __int64 v4; // rsi
  bool v6; // r14
  HWND v8; // r15
  char CanAcceptBitmap; // al
  char v10; // dl
  char v11; // cl
  char v12; // dl
  char v13; // r8

  v4 = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)a2 + 4) == 2;
  v8 = *(HWND *)(v4 + 40);
  if ( *((_BYTE *)a2 + 20) )
  {
    if ( *((_QWORD *)this + 12) && *((struct CWindowIconic **)this + 12) != a2 )
      CIconicBitmapRegistry::OnLivePreviewDismissed(this);
    if ( !*((_QWORD *)this + 12) )
    {
      *((_QWORD *)this + 12) = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    v12 = *((_BYTE *)this + 90);
    CanAcceptBitmap = *(_BYTE *)(v4 + 594) & 1;
    v13 = *((_BYTE *)this + 88);
    v4 = -1LL;
    v11 = *((_BYTE *)this + 89);
  }
  else
  {
    CanAcceptBitmap = CIconicBitmapRegistry::CanAcceptBitmap(this, *((struct CWindowData **)a2 + 9));
    v10 = *(_BYTE *)(v4 + 594);
    v11 = (v10 & 4) != 0;
    v12 = (v10 & 8) != 0;
    v13 = *(_QWORD *)(v4 + 392) != 0LL;
  }
  return CIconicBitmapRegistry::_RegisterIconicRepresentation(
           this,
           (struct CWindowData *)v4,
           v8,
           CanAcceptBitmap,
           v12,
           v13,
           v11,
           v6,
           a3);
}
