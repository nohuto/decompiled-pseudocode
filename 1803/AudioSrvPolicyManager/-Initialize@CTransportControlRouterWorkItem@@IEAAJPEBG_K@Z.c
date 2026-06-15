/*
 * XREFs of ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG_K@Z @ 0x180029228
 * Callers:
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z @ 0x180029110 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CTransportControlRouterWorkItem::Initialize(
        unsigned __int16 **this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-18h]

  v5 = 0;
  if ( a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v5 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a2, v6, v8, this + 2);
  }
  this[3] = a3;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v5);
    }
    AudPolicyLogError("CTransportControlRouterWorkItem::Initialize", 806, v5);
  }
  return (unsigned int)v5;
}
