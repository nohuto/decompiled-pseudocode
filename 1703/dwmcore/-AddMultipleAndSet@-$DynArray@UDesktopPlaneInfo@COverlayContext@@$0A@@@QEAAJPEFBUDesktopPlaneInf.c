/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInfo@COverlayContext@@I@Z @ 0x18014E7C8
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C83C0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::DesktopPlaneInfo,0>::AddMultipleAndSet(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  _OWORD *v8; // rcx
  int v9; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x70u, 1, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v8 = (_OWORD *)(*(_QWORD *)a1 + 112 * v3);
    *v8 = *a2;
    v8[1] = a2[1];
    v8[2] = a2[2];
    v8[3] = a2[3];
    v8[4] = a2[4];
    v8[5] = a2[5];
    v8[6] = a2[6];
    *(_DWORD *)(a1 + 24) = v6;
  }
  return v7;
}
