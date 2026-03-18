/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180135568 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18016B08C (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B2C4 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B6E0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
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
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  CConditionalExpression *v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int IsAnyConditionSatisified; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  bool v27; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v28[64]; // [rsp+40h] [rbp-98h] BYREF
  int v29; // [rsp+80h] [rbp-58h]
  char v30; // [rsp+84h] [rbp-54h]

  v4 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 68) - 1;
  if ( !v9 )
  {
    IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(this, a2, a3, 0LL);
    v4 = IsAnyConditionSatisified;
    if ( IsAnyConditionSatisified < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsAnyConditionSatisified, 0xF4u);
      return v4;
    }
    v21 = *((_DWORD *)this + 69);
    if ( v21 >= 0 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)this + 29) + 16LL * (unsigned int)v21 + 8);
      v23 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v22 + 168LL))(
              v22,
              a2,
              a3,
              a4);
      v4 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xF8u);
      return v4;
    }
    v24 = *((_QWORD *)this + 33);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v24 + 168LL))(
              v24,
              a2,
              a3,
              a4);
      v4 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xFCu);
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
  if ( !*((_DWORD *)this + 64) )
  {
LABEL_15:
    v18 = *((_QWORD *)this + 33);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v18 + 168LL))(
              v18,
              a2,
              a3,
              a4);
      v4 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x130u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x11Fu);
      return v4;
    }
    if ( v27 )
    {
      v11 = 0;
      v13 = *(_QWORD *)(*((_QWORD *)this + 29) + 16LL * v10 + 8);
      v14 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v13 + 168LL))(
              v13,
              a2,
              a3,
              a4);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x126u);
        return v4;
      }
      v16 = CConditionalExpression::AddStackValueToSum(v15, (struct CExpressionValue *)v28, a2);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x127u);
        return v4;
      }
    }
    ++v10;
  }
  while ( v10 < *((_DWORD *)this + 64) );
  if ( v11 )
    goto LABEL_15;
  v17 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v28);
  v4 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x13Bu);
  return v4;
}
