/*
 * XREFs of ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x18018A8FC
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x180188D40 (--1CDropShadow@@UEAA@XZ.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropShadow::ReleaseFastShadowIfInUse(CDropShadow *this)
{
  int v2; // eax

  if ( *((_BYTE *)this + 240) )
  {
    v2 = (*(__int64 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)CDropShadow::s_pFastShadow + 16LL))(CDropShadow::s_pFastShadow);
    *((_BYTE *)this + 240) = 0;
    CDropShadow::s_pFastShadow = (struct CDropShadow *)(-(__int64)(v2 != 0) & (unsigned __int64)CDropShadow::s_pFastShadow);
  }
}
