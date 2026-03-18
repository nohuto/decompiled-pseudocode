/*
 * XREFs of ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180165374
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801655F0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::ComputeDesktopClip(
        float *a1,
        __int64 a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  unsigned int v4; // ebx
  float v6; // xmm0_4
  float v7; // r8d
  float v8; // xmm0_4
  int v9; // r8d
  int v10; // r10d
  float v11; // xmm0_4
  int v12; // eax
  int v13; // r9d
  const struct FastRegion::Internal::CRgnData *v14; // rdx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  float v20; // [rsp+30h] [rbp-88h]
  void *v21[10]; // [rsp+40h] [rbp-78h] BYREF

  v4 = 0;
  v6 = a1[17] + 6291456.25;
  v7 = v6;
  v8 = a1[16] + 6291456.25;
  v9 = (int)(LODWORD(v7) << 10) >> 11;
  v10 = (int)(LODWORD(v8) << 10) >> 11;
  v11 = a1[15] + 6291456.25;
  v12 = (int)(LODWORD(v11) << 10) >> 11;
  v20 = a1[14] + 6291456.25;
  v13 = (int)(LODWORD(v20) << 10) >> 11;
  if ( v13 >= v10 || v12 >= v9 )
  {
    *(_DWORD *)*a3 = 0;
  }
  else
  {
    v14 = *a3;
    *(_DWORD *)v14 = 2;
    *((_DWORD *)v14 + 1) = v13;
    *((_DWORD *)v14 + 2) = v10;
    *((_DWORD *)v14 + 3) = v12;
    *((_DWORD *)v14 + 4) = 16;
    *((_DWORD *)v14 + 7) = v13;
    *((_DWORD *)v14 + 8) = v10;
    *((_DWORD *)v14 + 5) = v9;
    *((_DWORD *)v14 + 6) = 16;
  }
  v15 = *(_DWORD *)(a2 + 24) - 1;
  v16 = v15;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v21,
        (const struct tagRECT *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v16) + 76LL));
      v4 = FastRegion::CRegion::Subtract(a3, (const struct FastRegion::Internal::CRgnData **)v21);
      FastRegion::CRegion::FreeMemory(v21);
      if ( (v4 & 0x80000000) != 0 )
        break;
      v17 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v16);
      if ( !*(_BYTE *)(v17 + 179) )
      {
        v18 = FastRegion::CRegion::Union(
                (int **)a3,
                (int **)((*(_QWORD *)(v17 + 168) + 16LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v17 + 168) >> 64)));
        v4 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xE30u);
          return v4;
        }
      }
      if ( --v16 < 0 )
        return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xE29u);
  }
  return v4;
}
