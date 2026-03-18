/*
 * XREFs of ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180173320
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x180172D9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x180172DFC (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 */

__int64 __fastcall CNaturalAnimation::GetProperty(CNaturalAnimation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  float *v11; // rbx
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+38h] [rbp-8h]

  v3 = 0;
  v6 = a2 - 16;
  if ( !v6 )
  {
    v14 = (float)*((int *)this + 88);
    *((_DWORD *)a3 + 16) = 42;
    *((_BYTE *)a3 + 68) = 1;
    *(float *)a3 = v14;
    return v3;
  }
  v7 = v6 - 18;
  if ( !v7 || (v8 = v7 - 4) == 0 || (v9 = v8 - 4) == 0 )
  {
    v13 = *((_DWORD *)this + 79);
    v16 = *(_QWORD *)((char *)this + 308);
    v17 = v13;
    CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, &v16, (__int64)a3);
    return v3;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this);
    v11 = (float *)*((_QWORD *)this + 48);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v12 = v11[9];
    goto LABEL_14;
  }
  if ( v10 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this);
    v11 = (float *)*((_QWORD *)this + 48);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v12 = 1.0 / v11[10];
LABEL_14:
    *(float *)a3 = v12;
    *((_DWORD *)a3 + 16) = 18;
    *((_BYTE *)a3 + 68) = 1;
    (*(void (__fastcall **)(float *))(*(_QWORD *)v11 + 8LL))(v11);
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x288u);
  return v3;
}
