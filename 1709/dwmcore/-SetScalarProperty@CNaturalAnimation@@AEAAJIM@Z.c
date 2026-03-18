/*
 * XREFs of ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x180174248
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801741A0 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x180172D9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetScalarProperty(CNaturalAnimation *this, int a2, float a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rbx
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  void (__fastcall **v13)(__int64); // rax
  float v14; // xmm0_4

  v3 = 0;
  v5 = a2 - 34;
  if ( !v5 )
  {
    *((_BYTE *)this + 524) |= 0x20u;
    *((float *)this + 74) = a3;
    return v3;
  }
  v6 = v5 - 4;
  if ( !v6 )
  {
    *((_BYTE *)this + 524) |= 0x10u;
    *((float *)this + 68) = a3;
    return v3;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    *((float *)this + 77) = a3;
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this);
    v9 = *((_QWORD *)this + 48);
    if ( v9 )
      (**(void (__fastcall ***)(__int64))v9)(v9);
    v14 = *(float *)(v9 + 40);
    *(float *)(v9 + 36) = a3;
    v11 = v14 * v14;
    v12 = (float)(a3 + a3) * *(float *)(v9 + 40);
    goto LABEL_10;
  }
  if ( v8 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this);
    v9 = *((_QWORD *)this + 48);
    if ( v9 )
      (**(void (__fastcall ***)(__int64))v9)(v9);
    v10 = *(float *)(v9 + 36);
    *(float *)(v9 + 40) = 1.0 / a3;
    v11 = (float)(1.0 / a3) * (float)(1.0 / a3);
    v12 = (float)(v10 + v10) * (float)(1.0 / a3);
LABEL_10:
    v13 = *(void (__fastcall ***)(__int64))v9;
    *(float *)(v9 + 32) = v12;
    *(float *)(v9 + 28) = v11;
    v13[1](v9);
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x3DCu);
  return v3;
}
