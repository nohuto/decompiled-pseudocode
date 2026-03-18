/*
 * XREFs of ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B2C4
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B370 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B6E0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::CalculateConditionValue(
        CConditionalExpression *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // cl
  bool *v12; // rax
  char v14; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 29) + 16LL * a2);
  v7 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64, char *))(*(_QWORD *)v6 + 168LL))(
         v6,
         a3,
         a4,
         &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x15Cu);
  }
  else
  {
    v9 = *((_QWORD *)a3 + 3);
    v10 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
    if ( *(_DWORD *)(v9 + 72 * v10 + 64) == 17 )
    {
      v11 = *(_BYTE *)(v9 + 72 * v10);
      v8 = 0;
      v12 = a5;
      *((_DWORD *)a3 + 4) = v10;
      *v12 = v11;
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x162u);
    }
  }
  return v8;
}
