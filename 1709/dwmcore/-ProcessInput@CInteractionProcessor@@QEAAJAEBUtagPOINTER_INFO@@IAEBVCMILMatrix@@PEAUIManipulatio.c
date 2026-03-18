/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18019CA78
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180169B10 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801A2970 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     _anonymous_namespace_::ConvertToInputType @ 0x1800921C4 (_anonymous_namespace_--ConvertToInputType.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18019BBC4 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18019C9CC (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x18019D854 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z.c)
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
  __int64 v14; // r10
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1

  started = 0;
  *a6 = 0;
  *((_DWORD *)this + 149) = anonymous_namespace_::ConvertToInputType(*(_DWORD *)a2);
  *((_DWORD *)this + 150) = v9;
  *((_QWORD *)this + 76) = *(_QWORD *)(v10 + 16);
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 160, v11) )
  {
    *(_OWORD *)v12 = *(_OWORD *)v13;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(v12 + 32) = *(_OWORD *)(v13 + 32);
    *(_OWORD *)(v12 + 48) = *(_OWORD *)(v13 + 48);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(v13 + 64);
    anonymous_namespace_::DecomposeMatrix(
      (CMILMatrix *)v12,
      v14,
      (__int64)this + 708,
      (CInteractionProcessor *)((char *)this + 776),
      (CInteractionProcessor *)((char *)this + 844),
      (CInteractionProcessor *)((char *)this + 912));
    v15 = *((_DWORD *)this + 193);
    v16 = *(_OWORD *)((char *)this + 724);
    *(_OWORD *)((char *)this + 980) = *(_OWORD *)((char *)this + 708);
    v17 = *(_OWORD *)((char *)this + 740);
    *(_OWORD *)((char *)this + 996) = v16;
    v18 = *(_OWORD *)((char *)this + 756);
    *(_OWORD *)((char *)this + 1012) = v17;
    *(_OWORD *)((char *)this + 1028) = v18;
    *((_DWORD *)this + 261) = v15;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 980), v19, v20) )
    {
      v22 = *((_DWORD *)this + 193);
      v23 = *(_OWORD *)((char *)this + 724);
      *(_OWORD *)v21 = *(_OWORD *)((char *)this + 708);
      v24 = *(_OWORD *)((char *)this + 740);
      *(_OWORD *)(v21 + 16) = v23;
      v25 = *(_OWORD *)((char *)this + 756);
      *(_OWORD *)(v21 + 32) = v24;
      *(_OWORD *)(v21 + 48) = v25;
      *(_DWORD *)(v21 + 64) = v22;
    }
    *a6 = 1;
  }
  if ( !*((_DWORD *)this + 148) )
    started = CInteractionProcessor::StartInteraction(this, 0, 0, a5, *(_DWORD *)a2);
  *((_BYTE *)this + 616) &= ~0x10u;
  if ( *((_DWORD *)this + 149) == 1 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           this,
                           (int *)this + 148,
                           (__int64)a2,
                           (__int64)this + 1072);
  if ( *((_DWORD *)this + 149) == 2 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           (_QWORD *)this + 20,
                           (int *)this + 148,
                           (__int64)a2,
                           (__int64)this + 1072);
  if ( *((_DWORD *)this + 149) == 3 && CInteractionProcessor::AllowPenGestureDetection(this) )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           (_QWORD *)this + 40,
                           (int *)this + 148,
                           (__int64)a2,
                           (__int64)this + 1072);
  return started;
}
