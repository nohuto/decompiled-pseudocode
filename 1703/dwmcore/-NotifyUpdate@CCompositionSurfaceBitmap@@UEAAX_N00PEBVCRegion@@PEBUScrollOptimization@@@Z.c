/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180037840
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180037200 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800C2D04 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5,
        const struct ScrollOptimization *a6)
{
  unsigned int i; // edx
  CMILRefCountBase *v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rcx

  if ( !a2 || a3 || a4 )
  {
    CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCompositionSurfaceBitmap *)((char *)this + 16));
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)this + 88); *(_BYTE *)(*((_QWORD *)this + 41) + 16 * v13 + 8) = 1 )
      v13 = i++;
  }
  v11 = (CMILRefCountBase *)*((_QWORD *)this + 40);
  if ( v11 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 8LL);
    if ( (char *)v12 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v11);
    else
      v12();
    *((_QWORD *)this + 40) = 0LL;
  }
  if ( a2 )
    CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 72), 1);
  if ( a3 || a4 )
  {
    CResource::NotifyOnChanged((_DWORD *)this - 18, a3 != 0 ? 6 : 0, 0LL);
  }
  else
  {
    *((_QWORD *)this + 51) = a5;
    if ( a6 )
    {
      *((_OWORD *)this + 26) = *(_OWORD *)a6;
      *((_QWORD *)this + 54) = *((_QWORD *)a6 + 2);
      *((_DWORD *)this + 110) = *((_DWORD *)a6 + 6);
    }
    CResource::NotifyOnChanged((_DWORD *)this - 18, 1LL, (__int64)this - 72);
  }
}
