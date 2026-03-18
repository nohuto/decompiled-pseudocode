/*
 * XREFs of ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D8EC
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18019BE10 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18019C424 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18019C79C (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D19C (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x18019D688 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetupAnimationIfNecessary(CNaturalAnimation *this)
{
  int v1; // edi
  int v3; // eax
  int v4; // ecx

  v1 = 0;
  if ( (*((_BYTE *)this + 540) & 1) == 0 )
  {
    v3 = CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(this);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x28Eu);
    }
    else
    {
      v4 = *((_DWORD *)this + 74);
      *(_QWORD *)((char *)this + 300) = *((_QWORD *)this + 36);
      *((_DWORD *)this + 77) = v4;
      CNaturalAnimation::InitializeForces(this);
      CNaturalAnimation::SetStartTimeIfNecessary(this, *(_QWORD *)(*((_QWORD *)this + 2) + 496LL));
      *((_BYTE *)this + 540) = *((_BYTE *)this + 540) & 0xF6 | 1;
    }
    if ( v1 < 0 )
      *((_BYTE *)this + 540) &= ~1u;
  }
  return (unsigned int)v1;
}
