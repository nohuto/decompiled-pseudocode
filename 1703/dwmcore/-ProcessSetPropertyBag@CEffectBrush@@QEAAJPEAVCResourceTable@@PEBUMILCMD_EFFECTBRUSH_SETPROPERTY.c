/*
 * XREFs of ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x180011178
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180010C38 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303422, 0xB9u);
  }
  else
  {
    Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 119LL);
    v6 = Resource;
    if ( Resource )
    {
      if ( *((_QWORD *)this + 12) != Resource )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
        v8 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v6;
        Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v8);
      }
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*((_QWORD *)this + 12) + 136LL) = (char *)this + 80;
    }
    else
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xBFu);
    }
  }
  return v3;
}
