/*
 * XREFs of ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x18019332C
 * Callers:
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1801928F4 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180192BA0 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x180193A84 (-Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMinAcceleration@ForceThreshold@@QEBAMXZ @ 0x180193E6C (-GetMinAcceleration@ForceThreshold@@QEBAMXZ.c)
 *     ?GetMinVelocity@ForceThreshold@@QEBAMXZ @ 0x180193EE4 (-GetMinVelocity@ForceThreshold@@QEBAMXZ.c)
 */

void __fastcall CScalarForceEvaluator::Reset(
        CScalarForceEvaluator *this,
        float a2,
        float a3,
        struct IAccelerator *a4,
        const struct ForceThreshold *a5)
{
  float v7; // xmm0_4
  float MinAcceleration; // xmm0_4
  float v9; // xmm0_4
  int v10; // eax

  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 40LL))(a4) )
  {
    v7 = (float)((float)((*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 24LL))(a4) - a2) > 0.0);
    *((float *)this + 13) = v7;
    *((_BYTE *)this + 64) &= ~1u;
    *((_BYTE *)this + 64) |= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm) >= 0.0000011920929;
  }
  *((float *)this + 15) = ForceThreshold::GetMinVelocity(a5);
  MinAcceleration = ForceThreshold::GetMinAcceleration(a5);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 15);
  *((float *)this + 14) = MinAcceleration;
  *((float *)this + 4) = a2;
  *((float *)this + 5) = a3;
  *((float *)this + 7) = MinAcceleration;
  v9 = (*(float (__fastcall **)(struct IAccelerator *, char *))(*(_QWORD *)a4 + 16LL))(a4, (char *)this + 12);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 64) |= 2u;
  *((float *)this + 3) = v9;
  v10 = *((_DWORD *)this + 7);
  *((_OWORD *)this + 2) = *(_OWORD *)((char *)this + 12);
  *((_DWORD *)this + 12) = v10;
}
