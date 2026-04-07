/*
 * XREFs of ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180077FA4
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800778B8 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18006C8BC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     McTemplateU0qp @ 0x180074538 (McTemplateU0qp.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180077850 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x180077E7C (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180081464 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x18008CDF0 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::_AcceptBitmap(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        struct CBitmapSource *a3)
{
  unsigned int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  __int64 v10; // rcx
  __int64 i; // rbx
  __int64 j; // rsi
  CVisual *v13; // rbx
  HWND v14; // rax
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx

  v5 = *((_DWORD *)this + 10);
  if ( v5 > *((_DWORD *)this + 2) )
  {
    v7 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v7);
        if ( !*(_BYTE *)(v8 + 40) && !*(_DWORD *)(v8 + 44) )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v5 )
          goto LABEL_8;
      }
      DynArray<CTouchVisual *,0>::RemoveAt((char *)this + 16, v7);
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'((CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v8);
    }
  }
LABEL_8:
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, a2[5]);
  if ( IconicResourceNoRef )
  {
    *((_BYTE *)IconicResourceNoRef + 40) = 0;
    v10 = *((unsigned int *)this + 2);
    if ( *((_DWORD *)this + 10) <= (unsigned int)v10 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(IconicResourceNoRef, a3);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 134); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(*((_QWORD *)a2[64] + i) + 88LL);
      if ( v10 )
        CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)v10);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 18); j = (unsigned int)(j + 1) )
    {
      v13 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * j);
      v14 = (HWND)*((_QWORD *)v13 + 37);
      if ( v14 )
        v14 = (HWND)*((_QWORD *)v14 + 5);
      if ( a2[5] == v14 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v13 + 24LL))(
          *(_QWORD *)(*((_QWORD *)this + 6) + 8 * j),
          128LL);
        v15 = (CBaseObject *)*((_QWORD *)v13 + 38);
        if ( v15 )
        {
          CBaseObject::Release(v15);
          *((_QWORD *)v13 + 38) = 0LL;
        }
        v16 = (CBaseObject *)*((_QWORD *)v13 + 42);
        if ( v16 )
        {
          CBaseObject::Release(v16);
          *((_QWORD *)v13 + 42) = 0LL;
        }
        v17 = (CBaseObject *)*((_QWORD *)v13 + 36);
        if ( v17 )
        {
          CBaseObject::Release(v17);
          *((_QWORD *)v13 + 36) = 0LL;
        }
        CVisual::RenderRecursive(v13);
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v10, &UdwmManageIconicThumbnail_Info, 0, a2[5]);
}
