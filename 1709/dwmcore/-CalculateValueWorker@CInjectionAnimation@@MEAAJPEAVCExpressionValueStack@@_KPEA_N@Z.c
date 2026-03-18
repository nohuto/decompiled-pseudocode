/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801681A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A1CD0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18017055C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rax
  CManipulation *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed int v10; // eax
  unsigned int v11; // edi

  v4 = *((_QWORD *)this + 21);
  if ( v4 )
    v7 = *(CManipulation **)(v4 + 8);
  else
    v7 = 0LL;
  for ( *a4 = 1; *((_DWORD *)this + 70) < *((_DWORD *)this + 71); ++*((_DWORD *)this + 70) )
  {
    v8 = *((_QWORD *)this + 34);
    v9 = 132LL * *((int *)this + 70);
    if ( *(_DWORD *)(v9 + v8) != *((_DWORD *)this + 72) )
      break;
    v10 = CManipulation::InjectManipulation(v7, (const struct InjectManipulationArgs *)(v9 + v8 + 4));
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x9Du);
      return v11;
    }
  }
  ++*((_DWORD *)this + 72);
  if ( *((_DWORD *)this + 70) == *((_DWORD *)this + 71) )
  {
    *((_BYTE *)this + 192) &= ~1u;
    CBaseExpression::NotifyAnimationCompleted(this);
    *a4 = 0;
  }
  return 1;
}
