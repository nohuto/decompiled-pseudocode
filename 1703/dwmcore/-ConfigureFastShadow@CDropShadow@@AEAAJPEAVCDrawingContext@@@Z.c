/*
 * XREFs of ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180170A8C
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180170B40 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180171CE8 (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDropShadow::ConfigureFastShadow(CDropShadow *this, struct CDrawingContext *a2)
{
  unsigned int v3; // edi
  struct CDropShadow *v4; // rcx
  int v5; // eax

  v3 = 0;
  v4 = CDropShadow::s_pFastShadow;
  if ( !CDropShadow::s_pFastShadow )
  {
    v5 = CDropShadow::InitializeFastShadow(this, a2);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3B5u);
      return v3;
    }
    v4 = CDropShadow::s_pFastShadow;
  }
  if ( !*((_BYTE *)this + 176) )
  {
    (*(void (__fastcall **)(struct CDropShadow *, struct CDrawingContext *))(*(_QWORD *)v4 + 8LL))(v4, a2);
    v4 = CDropShadow::s_pFastShadow;
    *((_BYTE *)this + 176) = 1;
  }
  *((_DWORD *)v4 + 24) = *((_DWORD *)this + 24);
  *((_OWORD *)v4 + 5) = *((_OWORD *)this + 5);
  *((_DWORD *)v4 + 25) = *((_DWORD *)this + 25);
  *((_QWORD *)v4 + 13) = *((_QWORD *)this + 13);
  *((_DWORD *)v4 + 28) = *((_DWORD *)this + 28);
  *(_OWORD *)((char *)v4 + 116) = *(_OWORD *)((char *)this + 116);
  return v3;
}
