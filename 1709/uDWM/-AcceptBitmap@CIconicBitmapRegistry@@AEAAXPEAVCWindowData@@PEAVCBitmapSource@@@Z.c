/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007048C
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180070574 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002C114 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18002C184 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180037F4C (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180070E14 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007D4D8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
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
    McTemplateU0qp(v7, &UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)v9 + 5));
  v8 = (CWindowIconic *)*((_QWORD *)v9 + 54);
  if ( v8 )
  {
    CWindowIconic::SetBitmap(v8, *((struct CBitmapSource **)v9 + 49), (*((_BYTE *)v9 + 594) & 2) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v9 + 54));
  }
}
