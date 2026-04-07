/*
 * XREFs of ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x18007184C
 * Callers:
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800713A8 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 * Callees:
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x180071164 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180071204 (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800712B8 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *a2,
        HWND a3,
        int a4,
        int nDenominator,
        bool a6,
        enum IconicRepresentationType *a7,
        enum IconicRepresentationType *a8)
{
  int v11; // ebx
  int v13; // eax
  int ImmersiveIconContainerSize; // eax
  int IconicRepresentationTypeClosestToSize; // eax
  int v16; // eax
  unsigned __int16 v17; // ax
  HWND v18; // rcx
  enum IconicRepresentationType *v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d

  v11 = 2;
  v13 = MulDiv(a4, 100, nDenominator);
  if ( v13 >= 320 )
  {
    if ( v13 >= 800 )
      v11 = 4;
    else
      v11 = 3;
  }
  if ( a6 )
  {
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(nDenominator, v11);
    if ( !CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a2, ImmersiveIconContainerSize) )
    {
      IconicRepresentationTypeClosestToSize = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetIconicRepresentationTypeClosestToSize(
                                                a2,
                                                a4,
                                                nDenominator);
      if ( IconicRepresentationTypeClosestToSize != 5 )
        v11 = IconicRepresentationTypeClosestToSize;
    }
  }
  if ( a8 )
    *(_DWORD *)a8 = v11;
  if ( *((_BYTE *)a2 + 40)
    || (v16 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(nDenominator, v11),
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a2, v16)) )
  {
    v19 = a7;
    if ( *((_BYTE *)a2 + 40) )
      v11 = 1;
    *(_DWORD *)a7 = v11;
  }
  else
  {
    *((_BYTE *)a2 + 40) = 1;
    v17 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(nDenominator, v11);
    v18 = (HWND)*((_QWORD *)this + 10);
    if ( v18 )
      PostMessageW(v18, 0x323u, *(_QWORD *)a2, v17 | (unsigned __int64)(v17 << 16));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp((__int64)v18, &UdwmManageIconicThumbnail_Info, 3, *(_QWORD *)a2);
    v19 = a7;
    *(_DWORD *)a7 = 1;
  }
  ++*((_DWORD *)a2 + 11);
  v20 = (unsigned int)(*(_DWORD *)v19 - 2);
  if ( (_DWORD)v20 )
  {
    v20 = (unsigned int)(v20 - 1);
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == 1 )
        v21 = 8;
      else
        v21 = 9;
    }
    else
    {
      v21 = 7;
    }
  }
  else
  {
    v21 = 6;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v20, &UdwmSelectIconicRepresentation_Info, v21, a3);
  return 0LL;
}
