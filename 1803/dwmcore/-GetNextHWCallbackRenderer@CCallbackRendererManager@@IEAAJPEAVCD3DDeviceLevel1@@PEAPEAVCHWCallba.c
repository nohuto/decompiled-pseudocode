/*
 * XREFs of ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800BF658
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18013E050 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x180059BEC (--0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CCallbackRendererManager::GetNextHWCallbackRenderer(
        CCallbackRendererManager *this,
        struct CD3DDeviceLevel1 *a2,
        struct CHWCallbackRenderer **a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  __int64 v8; // rdx
  bool v9; // cf
  __int64 v10; // rcx
  int v11; // edx
  struct CHWCallbackRenderer::CSharedDirect3DResources *v13; // rbx
  CHWCallbackRenderer *v14; // rax
  CHWCallbackRenderer *v15; // rbp
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  CHWCallbackRenderer *v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 14);
  if ( !v5 )
  {
    v13 = (struct CHWCallbackRenderer::CSharedDirect3DResources *)*((_QWORD *)this + 12);
    v14 = (CHWCallbackRenderer *)HeapAlloc(WPF::g_processHeap, 0, 0xA8uLL);
    if ( v14 )
      v15 = CHWCallbackRenderer::CHWCallbackRenderer(v14, a2, v13);
    else
      v15 = 0LL;
    if ( !v15 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5Eu);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD4u);
      return v4;
    }
    _InterlockedIncrement((volatile signed __int32 *)v15 + 4);
    v16 = *((_DWORD *)this + 14);
    v19 = v15;
    v17 = v16 + 1;
    v4 = v16 + 1 < v16 ? 0x80070216 : 0;
    if ( v16 + 1 < v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v17 > *((_DWORD *)this + 13) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8u, 1, &v19);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v16) = v19;
      *((_DWORD *)this + 14) = v17;
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xD5u);
      CMILRefCountBase::Release((CHWCallbackRenderer *)((char *)v15 + 8));
      return v4;
    }
    v5 = *((_DWORD *)this + 14);
  }
  v8 = (unsigned int)(v5 - 1);
  *a3 = *(struct CHWCallbackRenderer **)(*((_QWORD *)this + 4) + 8 * v8);
  v9 = (unsigned int)v8 < *((_DWORD *)this + 29);
  *((_DWORD *)this + 14) = v8;
  if ( !v9 )
    LODWORD(v8) = *((_DWORD *)this + 29);
  ++*((_DWORD *)this + 26);
  *((_DWORD *)this + 29) = v8;
  v10 = (__int64)*a3;
  v11 = *((_DWORD *)this + 6);
  *(_DWORD *)(v10 + 88) = v11;
  *(_DWORD *)(v10 + 92) = v11;
  return v4;
}
