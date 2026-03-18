/*
 * XREFs of ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x1800452A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z @ 0x1800C9ED8 (-AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCreate(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CREATE *a3)
{
  __int64 v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  struct CResourceTable *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  if ( (*((_BYTE *)a3 + 32) & 0x10) != 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
    v14 = (CDesktopRenderTarget *)((char *)this + 168);
    v6 = *(_DWORD *)(v5 + 80);
    v7 = v6 + 1;
    v8 = v6 + 1 < v6 ? 0x80070216 : 0;
    if ( v6 + 1 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v7 > *(_DWORD *)(v5 + 76) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 56, 8LL, 1LL, &v14);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL * v6) = v14;
      *(_DWORD *)(v5 + 80) = v7;
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x288u);
    v9 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 73) = *((_DWORD *)a3 + 8);
    *(_OWORD *)((char *)this + 296) = *((_OWORD *)a3 + 1);
    *((_DWORD *)this + 77) = 1065353216;
    v10 = CUINTDesktopAssociation::AddDesktopRenderTarget(
            (CUINTDesktopAssociation *)(v9 + 32),
            (unsigned int *)this + 88,
            this);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4A3u);
    else
      *((_BYTE *)this + 275) = 1;
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x48Eu);
  }
  return v11;
}
