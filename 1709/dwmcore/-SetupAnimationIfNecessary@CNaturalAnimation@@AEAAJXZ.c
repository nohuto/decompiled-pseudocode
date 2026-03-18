/*
 * XREFs of ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801745E4
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180172BF0 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801731BC (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801734D4 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180173F8C (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x180174384 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetupAnimationIfNecessary(CNaturalAnimation *this)
{
  int v1; // edi
  signed int v3; // eax
  int v4; // ecx

  v1 = 0;
  if ( (*((_BYTE *)this + 524) & 1) == 0 )
  {
    v3 = CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(this);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x296u);
    }
    else
    {
      v4 = *((_DWORD *)this + 70);
      *(_QWORD *)((char *)this + 284) = *((_QWORD *)this + 34);
      *((_DWORD *)this + 73) = v4;
      CNaturalAnimation::InitializeForces(this);
      CNaturalAnimation::SetStartTimeIfNecessary(this, *(_QWORD *)(*((_QWORD *)this + 2) + 472LL));
      *((_BYTE *)this + 524) = *((_BYTE *)this + 524) & 0xF6 | 1;
    }
    if ( v1 < 0 )
      *((_BYTE *)this + 524) &= ~1u;
  }
  return (unsigned int)v1;
}
