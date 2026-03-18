/*
 * XREFs of ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x18013A250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180079310 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CRenderTarget::ProcessSetRoot(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_SETROOT *a3)
{
  struct CVisual *Resource; // rax
  unsigned int v5; // edx
  unsigned int v7; // ebx
  signed int v8; // eax

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0x86u)) != 0LL )
  {
    v8 = CRenderTarget::SetRoot(this, Resource);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x8Du);
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x89u);
  }
  return v7;
}
