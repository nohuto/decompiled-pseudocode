/*
 * XREFs of ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800B6794
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18011BFD0 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x18002CAB0 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18002CD70 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationInterpolator::TransformTime(
        CAnimation **this,
        const struct DwmAnimationPrimitive *a2,
        __int64 a3)
{
  CAnimation *v5; // rcx
  signed __int64 v6; // rbx
  __int64 (*v8)(void); // rax
  int PrimitivesCount; // eax
  CAnimation *v10; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v11)(CAnimation *, unsigned int); // rax
  const struct DwmAnimationPrimitive *Primitive; // rax
  const struct DwmAnimationPrimitive *v13; // r8
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax

  v5 = *this;
  v6 = 0LL;
  v8 = **(__int64 (***)(void))v5;
  if ( (char *)v8 == (char *)CAnimation::GetPrimitivesCount )
    PrimitivesCount = CAnimation::GetPrimitivesCount(v5);
  else
    PrimitivesCount = v8();
  if ( PrimitivesCount )
  {
    v10 = *this;
    v11 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CAnimation *, unsigned int))(*(_QWORD *)*this + 8LL);
    if ( v11 == CAnimation::GetPrimitive )
      Primitive = CAnimation::GetPrimitive(v10, 0);
    else
      Primitive = v11(v10, 0);
    v13 = Primitive;
  }
  else
  {
    v13 = 0LL;
  }
  switch ( *(_DWORD *)a2 )
  {
    case 3:
      if ( *((_QWORD *)a2 + 2) )
        v6 = (unsigned __int64)(a3 - *((_QWORD *)a2 + 1)) % *((_QWORD *)a2 + 2);
      v6 += *((_QWORD *)a2 + 1) - *((_QWORD *)a2 + 2);
      if ( v6 < *((_QWORD *)v13 + 1) )
        return *((_QWORD *)a2 + 1);
      break;
    case 5:
      v15 = *((_QWORD *)a2 + 1);
      v16 = a3 - v15;
      v17 = v15 - *((_QWORD *)v13 + 1);
      if ( v16 <= v17 )
        v17 = v16;
      return v15 - v17;
    case 6:
      return *((_QWORD *)a2 + 1);
  }
  return v6;
}
