/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801E3750
 * Callers:
 *     ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x1801F49C0 (-CleanupReferences@CHwBitmapBrush@@UEAAXXZ.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801F4AB0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  v11 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 8LL * a2 + 192);
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 176) + 504LL))(
           *(_QWORD *)(a1 + 176),
           (char *)&xmmword_1802D5324 + 24 * a2,
           &v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x76Eu);
      v3 = v11;
      goto LABEL_5;
    }
    v8 = v11;
    *(_QWORD *)(a1 + 8 * v4 + 192) = v11;
    v11 = 0LL;
  }
  *a3 = v8;
LABEL_5:
  ReleaseInterfaceNoNULL<IWICBitmap>(v3);
  return v7;
}
