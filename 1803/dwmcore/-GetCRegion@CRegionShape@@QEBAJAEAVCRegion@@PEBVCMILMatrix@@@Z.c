/*
 * XREFs of ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x18000B8A8
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18000B78C (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5D80 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z @ 0x1801C744C (-Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z.c)
 */

__int64 __fastcall CRegionShape::GetCRegion(CRegionShape *this, struct CRegion *a2, const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  struct tagRECT *v7; // rdi
  unsigned int RectCount; // eax
  unsigned int v9; // ebp
  __int64 v10; // r15
  struct tagRECT *v11; // rax
  struct tagRECT *v13; // rsi

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
      (*(void (__fastcall **)(_QWORD, struct tagRECT *, _QWORD))(**((_QWORD **)this + 2) + 144LL))(
        *((_QWORD *)this + 2),
        v11,
        v9);
      if ( a3 && !(unsigned __int8)CMILMatrix::IsIdentity<1>(a3) && v9 )
      {
        v13 = v7;
        do
        {
          CMILMatrix::Transform2DBounds(a3, v13, v13);
          ++v13;
          --v10;
        }
        while ( v10 );
      }
      CRegion::AppendRects<tagRECT>(a2);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB5u);
    }
  }
  operator delete(v7);
  return v3;
}
