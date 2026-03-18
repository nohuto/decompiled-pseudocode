/*
 * XREFs of ?InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801A0634
 * Callers:
 *     ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801B44B0 (-CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CColorBrush@@SAPEAX_K@Z @ 0x1800C6244 (--2CColorBrush@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCColorBrush@@@?$ComPtr@VCSpriteVisualContent@@@WRL@Microsoft@@QEAAAEAV012@PEAVCColorBrush@@@Z @ 0x18019F7AC (--$-4VCColorBrush@@@-$ComPtr@VCSpriteVisualContent@@@WRL@Microsoft@@QEAAAEAV012@PEAVCColorBrush@.c)
 *     ?EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ @ 0x18019FC04 (-EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ.c)
 *     ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0EF4 (-UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::InitializeFastShadow(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2)
{
  CProjectedShadowCaster *v3; // rdi
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int updated; // eax
  unsigned int v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v3 = CProjectedShadow::s_pFastShadowCaster;
  v11 = _xmm;
  v4 = CColorBrush::operator new();
  if ( v4 )
  {
    v5 = *((_QWORD *)v3 + 2);
    v4[2] = 0;
    *((_QWORD *)v4 + 2) = v5;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    v4[8] = 0;
    *((_QWORD *)v4 + 8) = 0LL;
    *(_QWORD *)v4 = &CColorBrush::`vftable'{for `CContent'};
    *((_QWORD *)v4 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  }
  Microsoft::WRL::ComPtr<CSpriteVisualContent>::operator=<CColorBrush>((__int64 *)v3 + 13, (__int64)v4);
  v6 = *((_QWORD *)v3 + 13);
  if ( v6 )
  {
    updated = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v6 + 88LL))(
                v6,
                0LL,
                70LL,
                &v11);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 836;
    }
    else
    {
      *((_DWORD *)v3 + 23) = 1098907648;
      *((_BYTE *)v3 + 96) = 1;
      updated = CProjectedShadowCaster::EnsureBlackColorBrush(v3);
      v7 = updated;
      if ( updated < 0 )
      {
        v10 = 842;
      }
      else
      {
        updated = CProjectedShadowCaster::UpdateShadowIntermediates(v3, a2, &stru_1802AD8F0);
        v7 = updated;
        if ( updated >= 0 )
          return v7;
        v10 = 844;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v10);
    return v7;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x33Fu);
  return v7;
}
