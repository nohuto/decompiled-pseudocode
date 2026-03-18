/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z @ 0x180070E88
 * Callers:
 *     ?Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@Z @ 0x1800095A8 (-Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180070CA0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<IImageSource *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  int v7; // ebx
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v10 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = v10;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 <= *(_DWORD *)(a1 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) = *a2;
    *(_DWORD *)(a1 + 24) = v6;
  }
  else
  {
    v9 = a2;
    v7 = DynArrayImpl<0>::Grow(a1, 8, 1, 0, (__int64)&v9);
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    else
      *(_QWORD *)(*(_QWORD *)a1 + (unsigned int)(8 * (*(_DWORD *)(a1 + 24))++)) = *v9;
  }
  return (unsigned int)v7;
}
