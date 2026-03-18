/*
 * XREFs of _lambda_7560e5feaa77ff4b83884f599d9b83ea_::operator() @ 0x18015C8A8
 * Callers:
 *     _lambda_7560e5feaa77ff4b83884f599d9b83ea_::_lambda_invoker_cdecl_ @ 0x18015C800 (_lambda_7560e5feaa77ff4b83884f599d9b83ea_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x1800410F8 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18005970C (-GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_7560e5feaa77ff4b83884f599d9b83ea_::operator()(
        __int64 a1,
        CSurfaceDrawListBrush *a2,
        __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  unsigned int DrawListWorker; // edi
  __int64 v9; // rdi
  CBrushDrawListGenerator *v10; // rbp
  CSurfaceDrawListBrush *v11; // rcx
  CSurfaceDrawListBrush *(__fastcall *v12)(CSurfaceDrawListBrush *, char); // rax

  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 520) + 32LL);
  if ( !v5 )
    goto LABEL_7;
  v6 = 0LL;
  if ( (*(unsigned int (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)a2 + 8LL))(a2) == 1 )
    v6 = *((_QWORD *)a2 + 18);
  if ( v6 == *(_QWORD *)(v5 + 8LL * *(unsigned int *)(a3 + 512) + 16)
    || (v7 = CDrawListPrimitiveBuilder::End(*(CMILRefCountBase ***)(a3 + 520)), DrawListWorker = v7, v7 >= 0) )
  {
LABEL_7:
    v9 = *(unsigned int *)(a3 + 512);
    v10 = *(CBrushDrawListGenerator **)a3;
    v11 = *(CSurfaceDrawListBrush **)(*(_QWORD *)a3 + 8 * v9 + 72);
    if ( a2 != v11 )
    {
      if ( v11 )
      {
        v12 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v11;
        if ( v12 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1);
        else
          v12(v11, 1);
      }
      *((_QWORD *)v10 + v9 + 9) = a2;
    }
    DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker(
                       *(CBrushDrawListGenerator **)a3,
                       (struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3);
    *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 512) + 72) = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x18Fu);
  }
  return DrawListWorker;
}
