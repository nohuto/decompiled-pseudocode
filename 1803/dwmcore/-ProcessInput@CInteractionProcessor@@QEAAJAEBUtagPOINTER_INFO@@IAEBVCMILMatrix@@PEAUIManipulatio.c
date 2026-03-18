/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801D5660
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180192430 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801DB4A0 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x18000F1C4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180025834 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800A6200 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801D26AC (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801D46A0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x1801D5598 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801D651C (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        struct IManipulationResource *a5,
        bool *a6)
{
  unsigned int started; // esi
  int v9; // r8d
  float *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  HMONITOR v13; // r11
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
  int v25; // eax

  started = 0;
  *a6 = 0;
  *((_DWORD *)this + 197) = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  *((_DWORD *)this + 198) = v9;
  *((_QWORD *)this + 100) = *((_QWORD *)a2 + 2);
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 210, v10) )
  {
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + 16);
    *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + 32);
    *(_OWORD *)(v11 + 48) = *(_OWORD *)(v12 + 48);
    *(_DWORD *)(v11 + 64) = *(_DWORD *)(v12 + 64);
    anonymous_namespace_::DecomposeMatrix(
      v11,
      v13,
      (*((_DWORD *)a2 + 3) & 0x180000) != 0,
      (__int64)this + 908,
      (CInteractionProcessor *)((char *)this + 976),
      (CInteractionProcessor *)((char *)this + 1044),
      (CInteractionProcessor *)((char *)this + 1112));
    v14 = *((_DWORD *)this + 243);
    v15 = *(_OWORD *)((char *)this + 924);
    *(_OWORD *)((char *)this + 1180) = *(_OWORD *)((char *)this + 908);
    v16 = *(_OWORD *)((char *)this + 940);
    *(_OWORD *)((char *)this + 1196) = v15;
    v17 = *(_OWORD *)((char *)this + 956);
    *(_OWORD *)((char *)this + 1212) = v16;
    *(_OWORD *)((char *)this + 1228) = v17;
    *((_DWORD *)this + 311) = v14;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 1180), v18, v19) )
    {
      v21 = *((_DWORD *)this + 243);
      v22 = *(_OWORD *)((char *)this + 924);
      *(_OWORD *)v20 = *(_OWORD *)((char *)this + 908);
      v23 = *(_OWORD *)((char *)this + 940);
      *(_OWORD *)(v20 + 16) = v22;
      v24 = *(_OWORD *)((char *)this + 956);
      *(_OWORD *)(v20 + 32) = v23;
      *(_OWORD *)(v20 + 48) = v24;
      *(_DWORD *)(v20 + 64) = v21;
    }
    *a6 = 1;
  }
  if ( !*((_DWORD *)this + 196) )
  {
    v25 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
    started = CInteractionProcessor::StartInteraction(this, 0LL, 0LL, a5, v25);
  }
  *((_BYTE *)this + 808) &= ~0x10u;
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             this,
                             (int *)this + 196,
                             (__int64)a2,
                             (__int64)this + 1272);
    case 3:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 20,
                             (int *)this + 196,
                             (__int64)a2,
                             (__int64)this + 1272);
    case 4:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
        return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                               (_QWORD *)this + 40,
                               (int *)this + 196,
                               (__int64)a2,
                               (__int64)this + 1272);
      break;
    case 6:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 60,
                             (int *)this + 196,
                             (__int64)a2,
                             (__int64)this + 1272);
  }
  return started;
}
