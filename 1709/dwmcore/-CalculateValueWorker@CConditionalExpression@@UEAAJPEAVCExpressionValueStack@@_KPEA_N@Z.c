/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18015E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A96CC (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18015E314 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18015E550 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18015EB30 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // ebx
  int v9; // ecx
  unsigned int v10; // ebp
  char v11; // r12
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  CConditionalExpression *v15; // rcx
  signed int v16; // eax
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  signed int IsAnyConditionSatisified; // eax
  int v21; // eax
  __int64 v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  signed int v25; // eax
  bool v27; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v28[64]; // [rsp+40h] [rbp-98h] BYREF
  int v29; // [rsp+80h] [rbp-58h]
  char v30; // [rsp+84h] [rbp-54h]

  v4 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 80) - 1;
  if ( !v9 )
  {
    IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(this, a2, a3, 0LL);
    v4 = IsAnyConditionSatisified;
    if ( IsAnyConditionSatisified < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, IsAnyConditionSatisified, 0xF6u);
      return v4;
    }
    v21 = *((_DWORD *)this + 81);
    if ( v21 >= 0 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)this + 35) + 16LL * (unsigned int)v21 + 8);
      v23 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v22 + 208LL))(
              v22,
              a2,
              a3,
              a4);
      v4 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xFAu);
      return v4;
    }
    v24 = *((_QWORD *)this + 39);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v24 + 208LL))(
              v24,
              a2,
              a3,
              a4);
      v4 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0xFEu);
      return v4;
    }
    return 1;
  }
  if ( v9 != 1 )
    return v4;
  memset_0(v28, 0, sizeof(v28));
  v10 = 0;
  v29 = 18;
  v11 = 1;
  v30 = 0;
  if ( !*((_DWORD *)this + 76) )
  {
LABEL_15:
    v18 = *((_QWORD *)this + 39);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v18 + 208LL))(
              v18,
              a2,
              a3,
              a4);
      v4 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x132u);
      return v4;
    }
    return 1;
  }
  do
  {
    v12 = CConditionalExpression::CalculateConditionValue(this, v10, a2, a3, &v27);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x121u);
      return v4;
    }
    if ( v27 )
    {
      v11 = 0;
      v13 = *(_QWORD *)(*((_QWORD *)this + 35) + 16LL * v10 + 8);
      v14 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v13 + 208LL))(
              v13,
              a2,
              a3,
              a4);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x128u);
        return v4;
      }
      v16 = CConditionalExpression::AddStackValueToSum(v15, (struct CExpressionValue *)v28, a2);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x129u);
        return v4;
      }
    }
    ++v10;
  }
  while ( v10 < *((_DWORD *)this + 76) );
  if ( v11 )
    goto LABEL_15;
  v17 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v28);
  v4 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x13Du);
  return v4;
}
