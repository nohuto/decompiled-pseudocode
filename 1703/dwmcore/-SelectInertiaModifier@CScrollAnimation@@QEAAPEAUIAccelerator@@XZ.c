/*
 * XREFs of ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180182214 (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18016B5CC (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B6E0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x18016B8A0 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 *     ?GetInitialValue@CScrollAnimation@@AEBAMXZ @ 0x180181930 (-GetInitialValue@CScrollAnimation@@AEBAMXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180181AA8 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x180181CD0 (-IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180188BA0 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 */

struct IAccelerator *__fastcall CScrollAnimation::SelectInertiaModifier(CScrollAnimation *this)
{
  __int64 v1; // rdi
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdx
  int *v7; // rbp
  __int64 v8; // rcx
  int IsAnyConditionSatisified; // eax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  LPVOID v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  float *v16; // rax
  float *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // xmm1_4
  __int64 v21; // rcx
  int v22; // xmm0_4
  __int64 v23; // rcx
  int v24; // eax
  int v25; // ebx
  float Velocity; // xmm6_4
  float InitialValue; // xmm0_4
  unsigned int v29; // [rsp+20h] [rbp-48h]
  bool v30; // [rsp+70h] [rbp+8h] BYREF
  float v31; // [rsp+78h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8);
  else
    v5 = 0LL;
  v6 = *((int *)this + 57);
  v7 = *(int **)(v5 + 8 * v6 + 424);
  if ( v4 )
    v8 = *(_QWORD *)(v4 + 8);
  else
    v8 = 0LL;
  if ( !CInteractionTracker::IsInertiaEnabledForAxis(v8, v6) || !v7 )
    goto LABEL_37;
  v30 = 0;
  CConditionalExpression::Reset((CConditionalExpression *)v7);
  IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(
                               (CConditionalExpression *)v7,
                               *((struct CExpressionValueStack **)this + 33),
                               *((_QWORD *)this + 32),
                               &v30);
  v10 = IsAnyConditionSatisified;
  if ( IsAnyConditionSatisified < 0 )
  {
    v29 = 1048;
    goto LABEL_43;
  }
  if ( !v30 )
  {
LABEL_37:
    v10 = 0;
    goto LABEL_38;
  }
  v11 = *((_QWORD *)this + 29);
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 8);
  else
    v12 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(v12 + 8LL * *((int *)this + 57) + 448) + 4LL * v7[69]) != 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 8LL * *((int *)this + 57) + 448) + 4LL * v7[69]) != 2 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x451u);
      goto LABEL_38;
    }
    v13 = operator new(0x78uLL);
    if ( v13 )
    {
      CScrollAnimation::GetVelocity(this);
      CScrollAnimation::GetInitialValue(this);
      v3 = CExpressionForce::CExpressionForce(v13, v14, v15, v7, *((_DWORD *)this + 57));
    }
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this) + 192) = 1101004800;
    if ( !v3 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x44Bu);
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  IsAnyConditionSatisified = CConditionalExpression::GetValue(
                               (CConditionalExpression *)v7,
                               *((struct CExpressionValueStack **)this + 33),
                               *((_QWORD *)this + 32),
                               &v31);
  v10 = IsAnyConditionSatisified;
  if ( IsAnyConditionSatisified >= 0 )
  {
    v16 = (float *)operator new(0x68uLL);
    v17 = v16;
    if ( v16 )
    {
      *((_QWORD *)v16 + 1) = &CMILRefCountBase::`vftable';
      v16[4] = 0.0;
      *(_QWORD *)v16 = &CSpringForce::`vftable'{for `IAccelerator'};
      *((_QWORD *)v16 + 1) = &CSpringForce::`vftable'{for `CMILRefCountBase'};
      *((_BYTE *)v16 + 68) = 0;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v17 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42Du);
      goto LABEL_38;
    }
    v18 = *((_QWORD *)this + 29);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    v20 = *(_DWORD *)(v19 + 612);
    if ( v18 )
      v21 = *(_QWORD *)(v18 + 8);
    else
      v21 = 0LL;
    v22 = *(_DWORD *)(v21 + 608);
    if ( v18 )
      v23 = *(_QWORD *)(v18 + 8);
    else
      v23 = 0LL;
    v24 = *(_DWORD *)(v23 + 596);
    *((_DWORD *)v17 + 20) = v22;
    *((_DWORD *)v17 + 21) = v20;
    *((_DWORD *)v17 + 19) = v24;
    v25 = *((_DWORD *)this + 57);
    Velocity = CScrollAnimation::GetVelocity(this);
    InitialValue = CScrollAnimation::GetInitialValue(this);
    v17[25] = v31;
    v17[22] = InitialValue;
    v17[23] = Velocity;
    v17[24] = 0.0;
    *((_DWORD *)v17 + 18) = v25;
    *((_BYTE *)v17 + 68) = 0;
    v3 = (__int64)v17;
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this) + 192) = 1114636288;
    goto LABEL_37;
  }
  v29 = 1063;
LABEL_43:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, IsAnyConditionSatisified, v29);
LABEL_38:
  if ( v10 >= 0 )
    return (struct IAccelerator *)v3;
  return (struct IAccelerator *)v1;
}
