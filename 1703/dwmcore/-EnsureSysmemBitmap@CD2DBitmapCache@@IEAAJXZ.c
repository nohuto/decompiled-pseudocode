/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180024F1C
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180024FC4 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 * Callees:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1800247F8 (-Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v1; // ebx
  struct CSecondarySysmemBitmap **v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  enum DXGI_COLOR_SPACE_TYPE v6; // edi
  enum DXGI_FORMAT v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (struct CSecondarySysmemBitmap **)((char *)this + 64);
  if ( !*((_QWORD *)this + 8) )
  {
    (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 6) + 24LL))(
      *((_QWORD *)this + 6),
      &v11,
      &v10);
    v5 = *((_QWORD *)this + 6);
    v4 = v5;
    v6 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    LODWORD(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    v7 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    v8 = CSecondarySysmemBitmap::Create(v11, v10, v7, (enum D2D1_ALPHA_MODE)v4, v6, v2);
    v1 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x186u);
  }
  return v1;
}
