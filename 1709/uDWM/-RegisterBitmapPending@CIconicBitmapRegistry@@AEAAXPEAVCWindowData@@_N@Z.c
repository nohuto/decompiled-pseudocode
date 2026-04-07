/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180038324
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002C114 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800382FC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180070C70 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  if ( !*((_QWORD *)a2 + 49) )
  {
    if ( a3 )
    {
      if ( (*((_BYTE *)a2 + 594) & 4) == 0 )
        ++*((_DWORD *)this + 21);
    }
    else if ( (*((_BYTE *)a2 + 594) & 4) != 0 )
    {
      --*((_DWORD *)this + 21);
    }
  }
  *((_BYTE *)a2 + 594) &= ~4u;
  *((_BYTE *)a2 + 594) |= 4 * a3;
}
