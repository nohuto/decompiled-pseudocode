/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x18002F068 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180167D74 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v6; // rcx
  CManipulation *i; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi

  v6 = *((_QWORD *)this + 21);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 8);
  *a4 = 1;
  for ( i = (CManipulation *)((v6 - 8) & -(__int64)(v6 != 0));
        *((_DWORD *)this + 58) < *((_DWORD *)this + 59);
        ++*((_DWORD *)this + 58) )
  {
    v8 = *((_QWORD *)this + 28);
    v9 = 132LL * *((int *)this + 58);
    if ( *(_DWORD *)(v9 + v8) != *((_DWORD *)this + 60) )
      break;
    v10 = CManipulation::InjectManipulation(i, (const struct InjectManipulationArgs *)(v9 + v8 + 4));
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9Du);
      return v11;
    }
  }
  ++*((_DWORD *)this + 60);
  if ( *((_DWORD *)this + 58) == *((_DWORD *)this + 59) )
  {
    *((_BYTE *)this + 208) &= ~1u;
    CBaseExpression::NotifyAnimationCompleted(this);
    *a4 = 0;
  }
  return 1;
}
