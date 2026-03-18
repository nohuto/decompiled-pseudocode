/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180190AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003B470 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18019925C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rax
  CManipulation *v7; // rsi
  int v8; // ecx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi

  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    v7 = *(CManipulation **)(v4 + 8);
  else
    v7 = 0LL;
  *a4 = 1;
  v8 = *((_DWORD *)this + 74);
  if ( v8 < *((_DWORD *)this + 75) )
  {
    v9 = v8;
    do
    {
      v10 = *((_QWORD *)this + 36);
      v11 = 132LL * v9;
      if ( *(_DWORD *)(v11 + v10) != *((_DWORD *)this + 76) )
        break;
      v12 = CManipulation::InjectManipulation(v7, (const struct InjectManipulationArgs *)(v10 + 4 + v11));
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x9Du);
        return v13;
      }
      v8 = *((_DWORD *)this + 74) + 1;
      *((_DWORD *)this + 74) = v8;
      v9 = v8;
    }
    while ( v8 < *((_DWORD *)this + 75) );
  }
  ++*((_DWORD *)this + 76);
  if ( v8 == *((_DWORD *)this + 75) )
  {
    *((_BYTE *)this + 208) &= ~1u;
    CBaseExpression::NotifyAnimationCompleted(this);
    *a4 = 0;
  }
  return 1;
}
