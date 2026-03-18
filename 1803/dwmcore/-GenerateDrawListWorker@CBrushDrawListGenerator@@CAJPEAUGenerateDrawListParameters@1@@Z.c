/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180005E54
 * Callers:
 *     _lambda_59bf99de1785f265d3dfac0583631066_::operator() @ 0x180005CFC (_lambda_59bf99de1785f265d3dfac0583631066_--operator().c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008BA40 (-IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // eax
  bool v4; // zf
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  char v9; // al
  char v10; // cl
  int DrawListPrimitive; // eax
  unsigned int v12; // ebp
  int v14; // edi
  __int64 v15; // rbx
  int v16; // eax

  v1 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 24);
  v4 = v1 == v3;
  if ( v1 < v3 )
  {
    v5 = *((_DWORD *)a1 + 24);
    while ( 1 )
    {
      v6 = v3;
      v7 = *((_QWORD *)a1 + v1 + 7);
      if ( v7 )
        break;
LABEL_8:
      ++v1;
      v3 = v6;
      v5 = v6;
      if ( v1 >= v6 )
      {
LABEL_9:
        v4 = v1 == v3;
        goto LABEL_10;
      }
    }
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL);
    if ( v8 == CGeometryOnlyDrawListBrush::IsOfType )
    {
      v9 = CGeometryOnlyDrawListBrush::IsOfType(v7, 3LL);
    }
    else
    {
      if ( v8 != CSurfaceDrawListBrush::IsOfType )
      {
        v10 = v8(v7, 3LL);
        v3 = *((_DWORD *)a1 + 24);
        v6 = v3;
LABEL_7:
        if ( v10 )
          goto LABEL_9;
        goto LABEL_8;
      }
      v9 = CSurfaceDrawListBrush::IsOfType(v7, 3LL);
    }
    v10 = v9;
    v3 = v5;
    goto LABEL_7;
  }
LABEL_10:
  if ( v4 )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(*(CBrushDrawListGenerator **)a1, a1);
    v12 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListPrimitive, 0x131u);
      return v12;
    }
  }
  else
  {
    v14 = *((_DWORD *)a1 + 12);
    v15 = *((_QWORD *)a1 + v1 + 7);
    *((_DWORD *)a1 + 12) = v1;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(const struct CDrawListBrush *, void *), struct CBrushDrawListGenerator::GenerateDrawListParameters *))(*(_QWORD *)v15 + 32LL))(
            v15,
            lambda_59bf99de1785f265d3dfac0583631066_::_lambda_invoker_cdecl_,
            a1);
    *((_QWORD *)a1 + v1 + 7) = v15;
    v12 = v16;
    *((_DWORD *)a1 + 12) = v14;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x169u);
      return v12;
    }
  }
  return 0;
}
