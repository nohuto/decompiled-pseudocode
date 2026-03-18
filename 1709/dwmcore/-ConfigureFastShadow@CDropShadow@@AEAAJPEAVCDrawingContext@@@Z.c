/*
 * XREFs of ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18015F73C
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180160C7C (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDropShadow::ConfigureFastShadow(CDropShadow *this, struct CDrawingContext *a2)
{
  unsigned int v3; // edi
  struct CDropShadow *v4; // rcx
  signed int v5; // eax

  v3 = 0;
  v4 = CDropShadow::s_pFastShadow;
  if ( !CDropShadow::s_pFastShadow )
  {
    v5 = CDropShadow::InitializeFastShadow(this, a2);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x430u);
      return v3;
    }
    v4 = CDropShadow::s_pFastShadow;
  }
  if ( !*((_BYTE *)this + 240) )
  {
    (*(void (__fastcall **)(struct CDropShadow *, struct CDrawingContext *))(*(_QWORD *)v4 + 8LL))(v4, a2);
    v4 = CDropShadow::s_pFastShadow;
    *((_BYTE *)this + 240) = 1;
  }
  *((_DWORD *)v4 + 40) = *((_DWORD *)this + 40);
  *((_OWORD *)v4 + 9) = *((_OWORD *)this + 9);
  *((_DWORD *)v4 + 41) = *((_DWORD *)this + 41);
  *((_QWORD *)v4 + 21) = *((_QWORD *)this + 21);
  *((_DWORD *)v4 + 44) = *((_DWORD *)this + 44);
  *(_OWORD *)((char *)v4 + 180) = *(_OWORD *)((char *)this + 180);
  return v3;
}
