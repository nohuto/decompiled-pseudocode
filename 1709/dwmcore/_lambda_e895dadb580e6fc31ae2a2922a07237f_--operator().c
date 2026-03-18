/*
 * XREFs of _lambda_e895dadb580e6fc31ae2a2922a07237f_::operator() @ 0x18009EF8C
 * Callers:
 *     _lambda_e895dadb580e6fc31ae2a2922a07237f_::_lambda_invoker_cdecl_ @ 0x18009F7D0 (_lambda_e895dadb580e6fc31ae2a2922a07237f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004A700 (-GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180062EB0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e895dadb580e6fc31ae2a2922a07237f_::operator()(
        __int64 a1,
        CSurfaceDrawListBrush *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rbx
  CBrushDrawListGenerator *v14; // rdi
  CSurfaceDrawListBrush *v15; // rcx
  unsigned int DrawListWorker; // ebp
  signed int v18; // eax
  CGeometryOnlyDrawListBrush *(__fastcall *v19)(CGeometryOnlyDrawListBrush *, char); // rax
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  char v21; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(*(_QWORD *)(a3 + 520) + 32LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)a2;
    v8 = 0;
    v20 = 0LL;
    v21 = 0;
    if ( (*(unsigned int (__fastcall **)(CSurfaceDrawListBrush *))(v7 + 8))(a2) == 1 )
    {
      v9 = *((_QWORD *)a2 + 18);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + 18));
        *(_QWORD *)&v20 = v9;
      }
      else
      {
        v9 = v20;
      }
      v10 = *((_QWORD *)a2 + 19);
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + 19));
        *((_QWORD *)&v20 + 1) = v10;
      }
      else
      {
        v10 = *((_QWORD *)&v20 + 1);
      }
      v8 = *((_BYTE *)a2 + 160);
      v21 = v8;
    }
    else
    {
      v10 = *((_QWORD *)&v20 + 1);
      v9 = v20;
    }
    v11 = *(unsigned int *)(a3 + 512);
    if ( v9 != *(_QWORD *)(v6 + 24 * v11 + 16) || v8 != *(_BYTE *)(v6 + 24 * v11 + 32) )
    {
      v18 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 520));
      DrawListWorker = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x194u);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20 + 1);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20);
        return DrawListWorker;
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v13 = *(unsigned int *)(a3 + 512);
  v14 = *(CBrushDrawListGenerator **)a3;
  v15 = *(CSurfaceDrawListBrush **)(*(_QWORD *)a3 + 8 * v13 + 72);
  if ( a2 != v15 )
  {
    if ( v15 )
    {
      v19 = **(CGeometryOnlyDrawListBrush *(__fastcall ***)(CGeometryOnlyDrawListBrush *, char))v15;
      if ( v19 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1);
      }
      else if ( v19 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      {
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1);
      }
      else
      {
        v19(v15, 1);
      }
    }
    *((_QWORD *)v14 + v13 + 9) = a2;
  }
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker(
                     *(CBrushDrawListGenerator **)a3,
                     (struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3,
                     a3,
                     a4);
  *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 512) + 72) = 0LL;
  return DrawListWorker;
}
