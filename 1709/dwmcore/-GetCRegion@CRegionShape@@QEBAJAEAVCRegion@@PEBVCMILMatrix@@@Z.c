/*
 * XREFs of ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x1800C5B24
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18003524C (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A710 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180088DEC (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z @ 0x1800C5858 (-Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::GetCRegion(CRegionShape *this, struct CRegion *a2, const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  struct tagRECT *v7; // rdi
  unsigned int RectCount; // eax
  unsigned int v9; // ebp
  __int64 v10; // r15
  struct tagRECT *v11; // rax
  struct tagRECT *v12; // rsi

  v3 = 0;
  v7 = 0LL;
  **(_DWORD **)a2 = 0;
  RectCount = CRegionShape::GetRectCount(this);
  v9 = RectCount;
  if ( RectCount )
  {
    v10 = RectCount;
    v11 = (struct tagRECT *)operator new(saturated_mul(RectCount, 0x10uLL));
    v7 = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD, struct tagRECT *, _QWORD))(**((_QWORD **)this + 1) + 144LL))(
        *((_QWORD *)this + 1),
        v11,
        v9);
      if ( a3 && !CMILMatrix::IsIdentity<1>((__int64)a3) && v9 )
      {
        v12 = v7;
        do
        {
          CMILMatrix::Transform2DBounds(a3, v12, v12);
          ++v12;
          --v10;
        }
        while ( v10 );
      }
      CRegion::AppendRects<tagRECT>(a2, (__int64)v7, v9);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xB5u);
    }
  }
  WPF::ProcessHeapImpl::Free(v7);
  return v3;
}
