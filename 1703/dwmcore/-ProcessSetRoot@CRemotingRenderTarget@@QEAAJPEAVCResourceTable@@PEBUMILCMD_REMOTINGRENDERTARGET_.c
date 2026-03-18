/*
 * XREFs of ?ProcessSetRoot@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_SETROOT@@@Z @ 0x18012D3B0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRemotingRenderTarget::ProcessSetRoot(
        CRemotingRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_REMOTINGRENDERTARGET_SETROOT *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x1Fu);
    if ( Resource )
    {
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 8, Resource);
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x54u);
    }
  }
  return v4;
}
