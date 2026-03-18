/*
 * XREFs of ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187688
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187730 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187CD0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // cl
  bool *v12; // rax
  char v14; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * a2);
  v7 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64, char *))(*(_QWORD *)v6 + 208LL))(
         v6,
         a3,
         a4,
         &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x15Eu);
  }
  else
  {
    v9 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
    v10 = *((_QWORD *)a3 + 3) + 80 * v9;
    if ( *(_DWORD *)(v10 + 72) == 17 )
    {
      v11 = *(_BYTE *)v10;
      v8 = 0;
      v12 = a5;
      *((_DWORD *)a3 + 4) = v9;
      *v12 = v11;
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x164u);
    }
  }
  return v8;
}
