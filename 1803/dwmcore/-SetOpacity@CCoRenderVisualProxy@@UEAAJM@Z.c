/*
 * XREFs of ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x18014B970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004FCD0 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CEffectGroup@@KAPEAX_K@Z @ 0x1800C6228 (--2CEffectGroup@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetOpacity(CVisual **this, float a2)
{
  unsigned int v2; // edi
  CMILCOMBase *v3; // rbx
  float v5; // xmm1_4
  CMILCOMBase *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  struct CEffect *EffectInternal; // rax
  int v10; // eax
  float v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = 0;
  v3 = 0LL;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - 1.0)) & _xmm);
  if ( v5 < 0.0000011920929 || CVisual::GetEffectInternal(this[3]) )
    goto LABEL_18;
  v6 = (CMILCOMBase *)CEffectGroup::operator new();
  v3 = v6;
  if ( v6 )
  {
    v7 = *((_QWORD *)this[3] + 2);
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = v7;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *(_QWORD *)v6 = &CEffectGroup::`vftable';
    *((_QWORD *)v6 + 9) = 0x3FF0000000000000LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x139u);
    return v2;
  }
  CMILCOMBase::InternalAddRef(v3);
  v8 = CVisual::SetEffect(this[3], v3);
  v2 = v8;
  if ( v8 >= 0 )
  {
LABEL_18:
    if ( CVisual::GetEffectInternal(this[3]) )
    {
      EffectInternal = CVisual::GetEffectInternal(this[3]);
      v10 = (*(__int64 (__fastcall **)(struct CEffect *, _QWORD, __int64, float *))(*(_QWORD *)EffectInternal + 88LL))(
              EffectInternal,
              0LL,
              18LL,
              &v12);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x143u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x13Bu);
  }
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  return v2;
}
