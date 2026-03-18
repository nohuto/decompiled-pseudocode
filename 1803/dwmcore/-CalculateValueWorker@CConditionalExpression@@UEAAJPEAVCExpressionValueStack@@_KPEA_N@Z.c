/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187730
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180052D08 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180187448 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187688 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187CD0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // ebx
  int v9; // ecx
  _QWORD *v10; // rdi
  unsigned int v11; // r15d
  int v12; // eax
  char v13; // di
  __int64 v14; // rcx
  int v15; // eax
  CConditionalExpression *v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  _QWORD *v22; // rcx
  int IsAnyConditionSatisified; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  char v30; // [rsp+30h] [rbp-59h]
  bool v31; // [rsp+31h] [rbp-58h] BYREF
  _BYTE v32[64]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v33; // [rsp+80h] [rbp-9h]
  int v34; // [rsp+88h] [rbp-1h]
  char v35; // [rsp+8Ch] [rbp+3h]

  v4 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 84) - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      memset_0(v32, 0, sizeof(v32));
      v10 = 0LL;
      v34 = 18;
      v11 = 0;
      v33 = 0LL;
      v35 = 0;
      v30 = 1;
      if ( *((_DWORD *)this + 80) )
      {
        do
        {
          v12 = CConditionalExpression::CalculateConditionValue(this, v11, a2, a3, &v31);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x121u);
            goto LABEL_23;
          }
          if ( v31 )
          {
            v13 = 0;
            v30 = 0;
            v14 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * v11 + 8);
            v15 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v14 + 208LL))(
                    v14,
                    a2,
                    a3,
                    a4);
            v4 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x128u);
              goto LABEL_23;
            }
            v17 = CConditionalExpression::AddStackValueToSum(v16, (struct CExpressionValue *)v32, a2);
            v4 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x129u);
              goto LABEL_23;
            }
          }
          else
          {
            v13 = v30;
          }
          ++v11;
        }
        while ( v11 < *((_DWORD *)this + 80) );
        if ( v13 )
        {
          v10 = v33;
          goto LABEL_17;
        }
        v18 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v32);
        v4 = v18;
        if ( v18 >= 0 )
        {
          v10 = v33;
          goto LABEL_20;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x13Du);
LABEL_23:
        v22 = v33;
        if ( v33 )
        {
          v21 = *v33;
          goto LABEL_25;
        }
      }
      else
      {
LABEL_17:
        v19 = *((_QWORD *)this + 41);
        if ( v19 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v19 + 208LL))(
                  v19,
                  a2,
                  a3,
                  a4);
          v4 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x132u);
        }
        else
        {
          v4 = 1;
        }
LABEL_20:
        if ( v10 )
        {
          v21 = *v10;
          v22 = v10;
LABEL_25:
          (*(void (__fastcall **)(_QWORD *))(v21 + 16))(v22);
        }
      }
    }
  }
  else
  {
    IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(this, a2, a3, 0LL);
    v4 = IsAnyConditionSatisified;
    if ( IsAnyConditionSatisified < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IsAnyConditionSatisified, 0xF6u);
    }
    else
    {
      v24 = *((_DWORD *)this + 85);
      if ( v24 < 0 )
      {
        v27 = *((_QWORD *)this + 41);
        if ( v27 )
        {
          v28 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v27 + 208LL))(
                  v27,
                  a2,
                  a3,
                  a4);
          v4 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xFEu);
        }
        else
        {
          return 1;
        }
      }
      else
      {
        v25 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * (unsigned int)v24 + 8);
        v26 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v25 + 208LL))(
                v25,
                a2,
                a3,
                a4);
        v4 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xFAu);
      }
    }
  }
  return v4;
}
