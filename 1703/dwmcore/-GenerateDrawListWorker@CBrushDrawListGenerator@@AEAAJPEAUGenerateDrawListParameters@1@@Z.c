/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18005970C
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     _lambda_7560e5feaa77ff4b83884f599d9b83ea_::operator() @ 0x18015C8A8 (_lambda_7560e5feaa77ff4b83884f599d9b83ea_--operator().c)
 * Callees:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180059DB0 (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  unsigned int i; // esi
  __int64 v5; // rcx
  int DrawListPrimitive; // eax
  int v7; // esi
  char *v9; // rdi
  CSurfaceDrawListBrush *v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  CSurfaceDrawListBrush *v13; // [rsp+40h] [rbp+8h] BYREF

  for ( i = *((_DWORD *)a2 + 128); i < *((_DWORD *)this + 26); ++i )
  {
    v5 = *((_QWORD *)this + i + 9);
    if ( v5 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5) == 2 )
      break;
  }
  if ( i == *((_DWORD *)this + 26) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(this, a2);
    v7 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawListPrimitive, 0x15Bu);
      return (unsigned int)v7;
    }
    return 0;
  }
  v9 = (char *)this + 8 * i;
  v10 = (CSurfaceDrawListBrush *)*((_QWORD *)v9 + 9);
  *((_QWORD *)v9 + 9) = 0LL;
  v11 = *((_DWORD *)a2 + 128);
  *((_DWORD *)a2 + 128) = i;
  v12 = *(_QWORD *)v10;
  v13 = v10;
  v7 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, __int64 (__fastcall *)(), struct CBrushDrawListGenerator::GenerateDrawListParameters *))(v12 + 24))(
         v10,
         lambda_7560e5feaa77ff4b83884f599d9b83ea_::_lambda_invoker_cdecl_,
         a2);
  std::unique_ptr<CDrawListBrush>::operator=(v9 + 72, &v13);
  *((_DWORD *)a2 + 128) = v11;
  if ( v7 >= 0 )
  {
    if ( v13 )
    {
      if ( **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v13 == CSurfaceDrawListBrush::`vector deleting destructor' )
        CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1u);
      else
        (**(void (__fastcall ***)(CSurfaceDrawListBrush *, __int64))v13)(v13, 1LL);
    }
    return 0;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1A4u);
  if ( v13 )
  {
    if ( **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v13 == CSurfaceDrawListBrush::`vector deleting destructor' )
      CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1u);
    else
      (**(void (__fastcall ***)(CSurfaceDrawListBrush *, __int64))v13)(v13, 1LL);
  }
  return (unsigned int)v7;
}
