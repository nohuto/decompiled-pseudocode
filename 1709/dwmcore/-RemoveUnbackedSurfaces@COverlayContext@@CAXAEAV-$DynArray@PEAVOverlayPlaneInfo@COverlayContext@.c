/*
 * XREFs of ?RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180144674
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall COverlayContext::RemoveUnbackedSurfaces(__int64 a1)
{
  unsigned int v1; // edx
  __int64 i; // rbx
  __int64 v4; // r8
  unsigned int v5; // ecx
  _QWORD *v6; // rax

  v1 = *(_DWORD *)(a1 + 24);
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    if ( *(_BYTE *)(v4 + 177) && *(_BYTE *)(v4 + 181) )
    {
      v5 = 1;
      if ( v1 <= 1 )
        goto LABEL_10;
      while ( 1 )
      {
        v6 = *(_QWORD **)(*(_QWORD *)a1 + 8LL * v5);
        if ( *(_QWORD *)v4 == *v6 && *(_QWORD *)(v4 + 184) == v6[1] )
          break;
        if ( ++v5 >= v1 )
          goto LABEL_10;
      }
      if ( v5 == -1 )
      {
LABEL_10:
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((__int64 *)a1, i);
        LODWORD(i) = i - 1;
      }
    }
    v1 = *(_DWORD *)(a1 + 24);
  }
}
