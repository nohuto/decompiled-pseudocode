/*
 * XREFs of ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9224
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ @ 0x1C00E90F8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9360 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 * Callees:
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C00A6D3C (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPlaneConfig(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct DXGALLOCATION *a3,
        __int64 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11)
{
  char v11; // si
  __int64 v13; // rdi
  int NextConfigIndex; // eax
  _DWORD *v16; // rdx
  int v17; // ecx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int128 v21; // xmm0
  enum _D3DDDI_ROTATION v22; // eax
  __int64 v23; // rax

  v11 = a4;
  v13 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 7937LL;
    WdLogEvent5_WdAssertion(v23);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 42 * v13 + 270));
  v17 = v16[1];
  v18 = NextConfigIndex;
  *v16 = NextConfigIndex;
  if ( v17 == -1 || NextConfigIndex == v17 )
  {
    v19 = GetNextConfigIndex(v17);
    v16[1] = v19;
  }
  v20 = 10 * v18;
  v16[2 * v20 + 4] = a5;
  *(_QWORD *)&v16[2 * v20 + 2] = a3;
  LOBYTE(v16[2 * v20 + 5]) = v11;
  *(struct tagRECT *)&v16[2 * v20 + 6] = *a6;
  *(struct tagRECT *)&v16[2 * v20 + 10] = *a7;
  v21 = (__int128)*a8;
  v16[2 * v20 + 19] = a10;
  v16[2 * v20 + 20] = a11;
  v22 = a9;
  *(_OWORD *)&v16[2 * v20 + 14] = v21;
  if ( !a9 )
    v22 = D3DDDI_ROTATION_IDENTITY;
  v16[20 * v18 + 18] = v22;
}
