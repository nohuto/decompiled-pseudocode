/*
 * XREFs of ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801500EC
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180150374 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180025700 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::ComputeDesktopClip(
        float *a1,
        __int64 a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  unsigned int v3; // ebx
  float v6; // xmm0_4
  float v7; // r9d
  float v8; // xmm0_4
  int v9; // r9d
  int v10; // r10d
  float v11; // xmm0_4
  int v12; // eax
  int v13; // r11d
  const struct FastRegion::Internal::CRgnData *v14; // rdx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  float v20; // [rsp+30h] [rbp-88h]
  void *v21[10]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 0;
  v6 = a1[13] + 6291456.25;
  v7 = v6;
  v8 = a1[12] + 6291456.25;
  v9 = (int)(LODWORD(v7) << 10) >> 11;
  v10 = (int)(LODWORD(v8) << 10) >> 11;
  v11 = a1[11] + 6291456.25;
  v12 = (int)(LODWORD(v11) << 10) >> 11;
  v20 = a1[10] + 6291456.25;
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
      v3 = FastRegion::CRegion::Subtract(a3, (const struct FastRegion::Internal::CRgnData **)v21);
      FastRegion::CRegion::FreeMemory(v21);
      if ( (v3 & 0x80000000) != 0 )
        break;
      v17 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v16);
      if ( !*(_BYTE *)(v17 + 171) )
      {
        v18 = FastRegion::CRegion::Union(
                a3,
                (const struct FastRegion::Internal::CRgnData **)((*(_QWORD *)(v17 + 160) + 16LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v17 + 160) >> 64)));
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC92u);
          return v3;
        }
      }
      if ( --v16 < 0 )
        return v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC8Bu);
  }
  return v3;
}
