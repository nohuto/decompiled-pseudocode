/*
 * XREFs of ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x180140860
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180085068 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ??2CEffectGroup@@KAPEAX_K@Z @ 0x1800C68B8 (--2CEffectGroup@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetOpacity(CVisual **this, float a2)
{
  unsigned int v2; // edi
  CBitmapOfDeviceBitmaps *v3; // rbx
  float v5; // xmm1_4
  CBitmapOfDeviceBitmaps *v6; // rax
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
  v6 = (CBitmapOfDeviceBitmaps *)CEffectGroup::operator new();
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x139u);
    return v2;
  }
  CBitmapOfDeviceBitmaps::AddRef(v3);
  v8 = CVisual::SetEffect((char **)this[3], v3);
  v2 = v8;
  if ( v8 >= 0 )
  {
LABEL_18:
    if ( CVisual::GetEffectInternal(this[3]) )
    {
      EffectInternal = CVisual::GetEffectInternal(this[3]);
      v10 = (*(__int64 (__fastcall **)(struct CEffect *, _QWORD, __int64, float *))(*(_QWORD *)EffectInternal + 80LL))(
              EffectInternal,
              0LL,
              18LL,
              &v12);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x143u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13Bu);
  }
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  return v2;
}
