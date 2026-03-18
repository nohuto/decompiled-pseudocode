/*
 * XREFs of ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180171CE8
 * Callers:
 *     ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180170A8C (-ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??2CDropShadow@@SAPEAX_K@Z @ 0x180153760 (--2CDropShadow@@SAPEAX_K@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x180170914 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180172120 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDropShadow::InitializeFastShadow(struct CComposition **this, struct CDrawingContext *a2)
{
  CDropShadow *v4; // rax
  unsigned int v5; // ebx
  int updated; // eax

  v4 = (CDropShadow *)CDropShadow::operator new();
  if ( v4 )
    v4 = CDropShadow::CDropShadow(v4, this[2]);
  CDropShadow::s_pFastShadow = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3E3u);
LABEL_8:
    if ( CDropShadow::s_pFastShadow )
    {
      (*(void (__fastcall **)(struct CDropShadow *))(*(_QWORD *)CDropShadow::s_pFastShadow + 16LL))(CDropShadow::s_pFastShadow);
      CDropShadow::s_pFastShadow = 0LL;
    }
    return v5;
  }
  updated = CDropShadow::UpdateShadowIntermediates(v4, a2, &stru_1801FCF70);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x3E5u);
  if ( v5 )
    goto LABEL_8;
  return v5;
}
