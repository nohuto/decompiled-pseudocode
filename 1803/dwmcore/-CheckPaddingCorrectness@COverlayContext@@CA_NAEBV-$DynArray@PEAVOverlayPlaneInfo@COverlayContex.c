/*
 * XREFs of ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEBVOverlayPlaneInfo@1@@Z @ 0x1801651E8
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C8CB8 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180167404 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x1801674FC (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 */

char __fastcall COverlayContext::CheckPaddingCorrectness(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rsi
  bool i; // bp
  __int64 v7; // r8
  const struct COverlayContext::OverlayPlaneInfo *v8; // rdx
  const struct COverlayContext::OverlayPlaneInfo *v9; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v10; // r8

  v4 = 1;
  v5 = 0LL;
  for ( i = COverlayContext::RectContainsRect((const struct tagRECT *)(a2 + 60), (const struct tagRECT *)(a2 + 76));
        (unsigned int)v5 < *(_DWORD *)(a1 + 24);
        v5 = (unsigned int)(v5 + 1) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
    if ( *(_QWORD *)a2 == *(_QWORD *)v7 )
    {
      if ( *(_DWORD *)(a2 + 224) >= *(_DWORD *)(v7 + 224) )
      {
        if ( COverlayContext::RectContainsRect((const struct tagRECT *)(v7 + 60), (const struct tagRECT *)(v7 + 76)) )
          continue;
        v8 = (const struct COverlayContext::OverlayPlaneInfo *)a2;
        v9 = v10;
      }
      else
      {
        if ( i )
          continue;
        v8 = *(const struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)a1 + 8 * v5);
        v9 = (const struct COverlayContext::OverlayPlaneInfo *)a2;
      }
      if ( COverlayContext::PaddingsIntersectWithDestRect(v9, v8) )
        return 0;
    }
  }
  return v4;
}
