/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180079CA0
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180079D88 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180015288 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800154B8 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180015530 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003D510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     Template_qp @ 0x180077E2C (Template_qp.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18007ADDC (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800860D4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(
        CWindowIconic ****this,
        struct CWindowData *a2,
        struct CBitmapSource *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r8d
  __int64 v7; // rcx
  CWindowIconic *v8; // rcx
  CWindowData *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = *((_QWORD *)a2 + 49);
  *((_BYTE *)a2 + 594) &= ~8u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)this, v9, 0);
  if ( (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 20) + *((_DWORD *)this + 21)) > *((_DWORD *)this + 2) )
    CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)this, *this[2]);
  if ( !v3 )
    DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)(this + 2), &v9, v6);
  CWindowData::SetIconicBitmap(v9, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v7, (__int64)&UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)v9 + 5));
  v8 = (CWindowIconic *)*((_QWORD *)v9 + 54);
  if ( v8 )
  {
    CWindowIconic::SetBitmap(v8, *((struct CBitmapSource **)v9 + 49), (*((_BYTE *)v9 + 594) & 2) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v9 + 54));
  }
}
