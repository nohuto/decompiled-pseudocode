/*
 * XREFs of _lambda_59bf99de1785f265d3dfac0583631066_::operator() @ 0x180005CFC
 * Callers:
 *     _lambda_59bf99de1785f265d3dfac0583631066_::_lambda_invoker_cdecl_ @ 0x180005CF0 (_lambda_59bf99de1785f265d3dfac0583631066_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180005E54 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800062D0 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x180074150 (-GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800AF094 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_59bf99de1785f265d3dfac0583631066_::operator()(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 (__fastcall *v5)(__int64 *, __int64); // rax
  char v6; // al
  CCommonRenderingEffect *v7; // rsi
  unsigned int DrawListWorker; // esi
  __int64 v10; // rax
  char v11; // bp
  __int64 (__fastcall *v12)(__int64 *, __int64); // rax
  char v13; // al
  __int64 v14; // rdx
  const struct CDrawListBitmap *(__fastcall *v15)(CCommonRenderingEffect *__hidden, unsigned int); // rax
  const struct CDrawListBitmap *Bitmap; // rax
  int v18; // eax
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  char v20; // [rsp+40h] [rbp-18h]

  v5 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 8);
  if ( (char *)v5 == (char *)CSurfaceDrawListBrush::IsOfType )
    v6 = CSurfaceDrawListBrush::IsOfType(a2, 3LL);
  else
    v6 = v5(a2, 3LL);
  if ( !v6 )
  {
    v7 = *(CCommonRenderingEffect **)(*(_QWORD *)(a3 + 104) + 32LL);
    if ( v7 )
    {
      v10 = *a2;
      v11 = 0;
      v20 = 0;
      v19 = 0LL;
      v12 = *(__int64 (__fastcall **)(__int64 *, __int64))(v10 + 8);
      if ( (char *)v12 == (char *)CSurfaceDrawListBrush::IsOfType )
        v13 = CSurfaceDrawListBrush::IsOfType(a2, 2LL);
      else
        v13 = v12(a2, 2LL);
      if ( v13 )
      {
        CDrawListBitmap::operator=(&v19, a2 + 7);
        v11 = v20;
      }
      v14 = *(unsigned int *)(a3 + 48);
      v15 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *__hidden, unsigned int))(*(_QWORD *)v7 + 24LL);
      if ( v15 == CCommonRenderingEffect::GetBitmap )
        Bitmap = CCommonRenderingEffect::GetBitmap(v7, v14);
      else
        Bitmap = v15(v7, v14);
      if ( (_QWORD)v19 != *(_QWORD *)Bitmap || v11 != *((_BYTE *)Bitmap + 16) )
      {
        v18 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 104));
        DrawListWorker = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x154u);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v19 + 8);
          Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v19);
          return DrawListWorker;
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v19 + 8);
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v19);
    }
  }
  *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = a2;
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3);
  *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = 0LL;
  return DrawListWorker;
}
