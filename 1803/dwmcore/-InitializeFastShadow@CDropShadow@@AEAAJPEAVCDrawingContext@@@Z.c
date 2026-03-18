/*
 * XREFs of ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18018A5BC
 * Callers:
 *     ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUShadowIntermediates@1@@Z @ 0x180188F24 (-ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUShadowIntermediates@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CViewBox@@SAPEAX_K@Z @ 0x18016DC40 (--2CViewBox@@SAPEAX_K@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x180188C94 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18018AC70 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInte.c)
 */

__int64 __fastcall CDropShadow::InitializeFastShadow(struct CComposition **this, struct CDrawingContext *a2)
{
  CDropShadow *v4; // rax
  unsigned int v5; // ebx
  int updated; // eax

  v4 = (CDropShadow *)CViewBox::operator new();
  if ( v4 )
    v4 = CDropShadow::CDropShadow(v4, this[2]);
  CDropShadow::s_pFastShadow = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3FDu);
LABEL_8:
    if ( CDropShadow::s_pFastShadow )
    {
      (*(void (__fastcall **)(struct CDropShadow *))(*(_QWORD *)CDropShadow::s_pFastShadow + 16LL))(CDropShadow::s_pFastShadow);
      CDropShadow::s_pFastShadow = 0LL;
    }
    return v5;
  }
  updated = CDropShadow::UpdateShadowIntermediates(v4, a2, &stru_1802AD810, (CDropShadow *)((char *)v4 + 192));
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x3FFu);
  if ( v5 )
    goto LABEL_8;
  return v5;
}
