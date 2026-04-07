/*
 * XREFs of ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18000AD6C
 * Callers:
 *     ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18000BCF4 (-GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVC.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAccentBlurBehind::GetAccentBlurBehindBrush(
        CAccentBlurBehind *this,
        struct CCachedVisualImageBrushResource **a2,
        struct CResource **a3,
        struct MilPoint3F *a4)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4

  if ( *a2 )
    CBaseObject::Release(*a2);
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 42);
  *a2 = (struct CCachedVisualImageBrushResource *)v8;
  if ( v8 )
    _InterlockedIncrement(v8 + 2);
  if ( *a3 )
    CBaseObject::Release(*a3);
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 41);
  *a3 = (struct CResource *)v9;
  if ( v9 )
    _InterlockedIncrement(v9 + 2);
  v10 = *((float *)this + 80);
  *((_DWORD *)a4 + 2) = 1065353216;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
  if ( v11 < 0.0000011920929 )
  {
    *(_DWORD *)a4 = 1065353216;
    *((_DWORD *)a4 + 1) = 1065353216;
  }
  else
  {
    *(float *)a4 = 1.0 / v10;
    *((float *)a4 + 1) = 1.0 / v10;
  }
  return 0LL;
}
