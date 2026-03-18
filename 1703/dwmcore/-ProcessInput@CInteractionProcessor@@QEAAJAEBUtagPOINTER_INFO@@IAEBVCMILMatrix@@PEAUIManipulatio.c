/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1800B2B30
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180166EC0 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180193A50 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _anonymous_namespace_::ConvertToInputType @ 0x180020614 (_anonymous_namespace_--ConvertToInputType.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18009A190 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x180134F84 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x1801350B8 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018E454 (_anonymous_namespace_--DecomposeMatrix.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        struct IManipulationResource *a5,
        bool *a6)
{
  unsigned int started; // edi
  int v9; // r8d
  __int64 v10; // rdx
  float *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1

  started = 0;
  *a6 = 0;
  *((_DWORD *)this + 101) = anonymous_namespace_::ConvertToInputType(*(_DWORD *)a2);
  *((_DWORD *)this + 102) = v9;
  *((_QWORD *)this + 52) = *(_QWORD *)(v10 + 16);
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 112, v11) )
  {
    *(_OWORD *)v12 = *(_OWORD *)v13;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(v12 + 32) = *(_OWORD *)(v13 + 32);
    *(_OWORD *)(v12 + 48) = *(_OWORD *)(v13 + 48);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(v13 + 64);
    anonymous_namespace_::DecomposeMatrix(
      (CMILMatrix *)v12,
      (CInteractionProcessor *)((char *)this + 652),
      (CInteractionProcessor *)((char *)this + 720));
    v14 = *((_DWORD *)this + 145);
    v15 = *(_OWORD *)((char *)this + 532);
    *(_OWORD *)((char *)this + 788) = *(_OWORD *)((char *)this + 516);
    v16 = *(_OWORD *)((char *)this + 548);
    *(_OWORD *)((char *)this + 804) = v15;
    v17 = *(_OWORD *)((char *)this + 564);
    *(_OWORD *)((char *)this + 820) = v16;
    *(_OWORD *)((char *)this + 836) = v17;
    *((_DWORD *)this + 213) = v14;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 788), v18, v19) )
    {
      v21 = *((_DWORD *)this + 145);
      v22 = *(_OWORD *)((char *)this + 532);
      *(_OWORD *)v20 = *(_OWORD *)((char *)this + 516);
      v23 = *(_OWORD *)((char *)this + 548);
      *(_OWORD *)(v20 + 16) = v22;
      v24 = *(_OWORD *)((char *)this + 564);
      *(_OWORD *)(v20 + 32) = v23;
      *(_OWORD *)(v20 + 48) = v24;
      *(_DWORD *)(v20 + 64) = v21;
    }
    *a6 = 1;
  }
  if ( !*((_DWORD *)this + 100) )
    started = CInteractionProcessor::StartInteraction(this, 0, 0, a5, *(_DWORD *)a2);
  *((_BYTE *)this + 424) &= ~0x10u;
  if ( *((_DWORD *)this + 101) == 1 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           this,
                           (char *)this + 400,
                           a2,
                           (char *)this + 880);
  if ( *((_DWORD *)this + 101) == 2 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           (char *)this + 160,
                           (char *)this + 400,
                           a2,
                           (char *)this + 880);
  return started;
}
