/*
 * XREFs of ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C001137C
 * Callers:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0011188 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011310 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C0012A84 (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetSurfaceUpdate(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE *a3)
{
  int v6; // esi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v8; // rbx
  __int128 v9; // xmm0
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = -1073741823;
  if ( *((_QWORD *)this + 7) != a2 || !a2 )
  {
    RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
    v8 = RenderingBuffer;
    if ( RenderingBuffer )
    {
      if ( *((int *)this + 9) > 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64 *))(*(_QWORD *)RenderingBuffer + 200LL))(
               RenderingBuffer,
               &v11);
        if ( v6 >= 0 )
        {
          *((_QWORD *)this + 7) = a2;
          *(_DWORD *)a3 = 200;
          *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this - 1);
          *((_QWORD *)a3 + 2) = *((_QWORD *)v8 + 2);
          *((_DWORD *)a3 + 6) = *(_DWORD *)(v11 + 28);
          *((_DWORD *)a3 + 7) = *((_DWORD *)v8 + 61);
          CRegion::GetRegionHandleAndReset(*((CRegion **)v8 + 31), (HRGN *)a3 + 4);
          *(_OWORD *)((char *)a3 + 40) = *((_OWORD *)v8 + 16);
          *((_QWORD *)a3 + 7) = *((_QWORD *)v8 + 34);
          *((_DWORD *)a3 + 16) = *((_DWORD *)v8 + 70);
          v9 = *((_OWORD *)v8 + 3);
          *((_DWORD *)v8 + 64) = 0;
          *((_BYTE *)v8 + 42) = 0;
          *(_OWORD *)((char *)a3 + 72) = v9;
          *(_OWORD *)((char *)a3 + 88) = *((_OWORD *)v8 + 4);
          *(_OWORD *)((char *)a3 + 104) = *((_OWORD *)v8 + 5);
          *(_OWORD *)((char *)a3 + 120) = *((_OWORD *)v8 + 6);
          *(_OWORD *)((char *)a3 + 136) = *((_OWORD *)v8 + 7);
          *(_OWORD *)((char *)a3 + 152) = *((_OWORD *)v8 + 8);
          *(_OWORD *)((char *)a3 + 168) = *((_OWORD *)v8 + 9);
          *((_QWORD *)a3 + 23) = *((_QWORD *)v8 + 20);
          *((_DWORD *)a3 + 48) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 160LL))(v8);
        }
      }
    }
  }
  return (unsigned int)v6;
}
