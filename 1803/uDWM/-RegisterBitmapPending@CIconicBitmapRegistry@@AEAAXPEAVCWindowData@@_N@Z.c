/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18003AE20
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002DCEC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18003ADF8 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18007760C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  char v3; // al

  if ( !*((_QWORD *)a2 + 48) )
  {
    v3 = *((_BYTE *)a2 + 594);
    if ( a3 )
    {
      if ( (v3 & 4) == 0 )
        ++*((_DWORD *)this + 21);
    }
    else if ( (v3 & 4) != 0 )
    {
      --*((_DWORD *)this + 21);
    }
  }
  *((_BYTE *)a2 + 594) &= ~4u;
  *((_BYTE *)a2 + 594) |= 4 * a3;
}
