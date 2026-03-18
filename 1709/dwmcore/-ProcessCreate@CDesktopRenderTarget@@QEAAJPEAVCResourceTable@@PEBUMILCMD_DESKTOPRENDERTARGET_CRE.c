/*
 * XREFs of ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x18013405C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?AddDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x180130780 (-AddDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAVCDesktopRenderTarget@@@Z.c)
 *     ?AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z @ 0x18013BA34 (-AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCreate(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CREATE *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  signed int v7; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct CResourceTable *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( (*((_BYTE *)a3 + 32) & 0x10) != 0 )
  {
    CRenderTargetManager::AddDesktopRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), this);
    v6 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 86) = *((_DWORD *)a3 + 8);
    *(_OWORD *)((char *)this + 348) = *((_OWORD *)a3 + 1);
    *((_DWORD *)this + 90) = 1065353216;
    v7 = CUINTDesktopAssociation::AddDesktopRenderTarget(
           (CUINTDesktopAssociation *)(v6 + 32),
           (unsigned int *)this + 100,
           this);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x4F5u);
    }
    else
    {
      if ( CCommonRegistryData::m_fConfigureInput )
      {
        v10 = (struct CResourceTable *)*((unsigned int *)this + 100);
        if ( !(unsigned int)DWMBindCursorToOutputConfig(&v10) )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      *((_BYTE *)this + 315) = 1;
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x4E0u);
  }
  return v5;
}
