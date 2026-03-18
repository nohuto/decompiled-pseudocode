/*
 * XREFs of ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x180082EC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180082AEC (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertyBag(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETPROPERTYBAG *a3)
{
  unsigned int v3; // ebx
  __int64 Resource; // rax
  __int64 v6; // rsi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    v3 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980402, 0xB9u);
  }
  else
  {
    Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 100LL);
    v6 = Resource;
    if ( Resource )
    {
      if ( *((_QWORD *)this + 12) != Resource )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
        v8 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v6;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
      }
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*((_QWORD *)this + 12) + 136LL) = (char *)this + 80;
    }
    else
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xBFu);
    }
  }
  return v3;
}
