/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004A700
 * Callers:
 *     _lambda_e895dadb580e6fc31ae2a2922a07237f_::operator() @ 0x18009EF8C (_lambda_e895dadb580e6fc31ae2a2922a07237f_--operator().c)
 * Callees:
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180048A30 (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int i; // esi
  __int64 v7; // rcx
  int DrawListPrimitive; // eax
  int v9; // esi
  char *v11; // rdi
  CSurfaceDrawListBrush *v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  void *(__fastcall *v15)(CGeometryOnlyDrawListBrush *__hidden, unsigned int); // r8
  void *(__fastcall *v16)(CGeometryOnlyDrawListBrush *__hidden, unsigned int); // r8
  CSurfaceDrawListBrush *v17; // [rsp+50h] [rbp+8h] BYREF

  for ( i = *((_DWORD *)a2 + 128); i < *((_DWORD *)this + 26); ++i )
  {
    v7 = *((_QWORD *)this + i + 9);
    if ( v7 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) == 2 )
      break;
  }
  if ( i == *((_DWORD *)this + 26) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(this, a2, a3, a4);
    v9 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListPrimitive, 0x160u);
      return (unsigned int)v9;
    }
    return 0;
  }
  v11 = (char *)this + 8 * i;
  v12 = (CSurfaceDrawListBrush *)*((_QWORD *)v11 + 9);
  *((_QWORD *)v11 + 9) = 0LL;
  v13 = *((_DWORD *)a2 + 128);
  *((_DWORD *)a2 + 128) = i;
  v14 = *(_QWORD *)v12;
  v17 = v12;
  v9 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, int (*)(struct CDrawListBrush *, void *), struct CBrushDrawListGenerator::GenerateDrawListParameters *))(v14 + 24))(
         v12,
         lambda_e895dadb580e6fc31ae2a2922a07237f_::_lambda_invoker_cdecl_,
         a2);
  std::unique_ptr<CDrawListBrush>::operator=((CSurfaceDrawListBrush **)v11 + 9, &v17);
  *((_DWORD *)a2 + 128) = v13;
  if ( v9 >= 0 )
  {
    if ( v17 )
    {
      v15 = **(void *(__fastcall ***)(CGeometryOnlyDrawListBrush *__hidden, unsigned int))v17;
      if ( v15 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v17, 1u);
      }
      else if ( v15 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      {
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v17, 1u);
      }
      else
      {
        (**(void (__fastcall ***)(CSurfaceDrawListBrush *, __int64))v17)(v17, 1LL);
      }
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1A9u);
  if ( v17 )
  {
    v16 = **(void *(__fastcall ***)(CGeometryOnlyDrawListBrush *__hidden, unsigned int))v17;
    if ( v16 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v17, 1u);
    }
    else if ( v16 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v17, 1u);
    }
    else
    {
      (**(void (__fastcall ***)(CSurfaceDrawListBrush *, __int64))v17)(v17, 1LL);
    }
  }
  return (unsigned int)v9;
}
