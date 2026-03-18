/*
 * XREFs of ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x180095AF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800955F8 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  unsigned int v3; // ebx
  __int64 Resource; // rax
  __int64 v6; // rsi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 11) )
  {
    v3 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303422, 0x73u);
  }
  else
  {
    Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x71u);
    v6 = Resource;
    if ( Resource )
    {
      if ( *((_QWORD *)this + 11) != Resource )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
        v8 = *((_QWORD *)this + 11);
        *((_QWORD *)this + 11) = v6;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
      }
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*((_QWORD *)this + 11) + 72LL) = (char *)this + 72;
    }
    else
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x79u);
    }
  }
  return v3;
}
