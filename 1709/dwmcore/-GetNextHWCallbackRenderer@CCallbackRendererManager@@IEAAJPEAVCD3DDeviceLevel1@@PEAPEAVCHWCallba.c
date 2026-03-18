/*
 * XREFs of ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x180046348
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004413C (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x18001D0E0 (--0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCallbackRendererManager::GetNextHWCallbackRenderer(
        CCallbackRendererManager *this,
        struct CD3DDeviceLevel1 *a2,
        struct CHWCallbackRenderer **a3)
{
  int v3; // ebx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  int v9; // edx
  __int64 v10; // rcx
  struct CHWCallbackRenderer::CSharedDirect3DResources *v12; // rbx
  CHWCallbackRenderer *v13; // rax
  CHWCallbackRenderer *v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  CHWCallbackRenderer *v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_DWORD *)this + 14) )
    goto LABEL_2;
  v12 = (struct CHWCallbackRenderer::CSharedDirect3DResources *)*((_QWORD *)this + 12);
  v13 = (CHWCallbackRenderer *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  if ( v13 )
    v14 = CHWCallbackRenderer::CHWCallbackRenderer(v13, a2, v12);
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5Cu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCDu);
    return (unsigned int)v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
  v15 = *((unsigned int *)this + 14);
  v19 = v14;
  v16 = (unsigned int)v14;
  v17 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v16 = v15 + 1;
  v3 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
  if ( v17 < (unsigned int)v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v16 > *((_DWORD *)this + 13) )
  {
    v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 32, 8LL, 1LL, &v19);
    v3 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v15) = v19;
    *((_DWORD *)this + 14) = v16;
  }
  if ( v3 >= 0 )
  {
LABEL_2:
    v7 = (unsigned int)(*((_DWORD *)this + 14) - 1);
    *a3 = *(struct CHWCallbackRenderer **)(*((_QWORD *)this + 4) + 8 * v7);
    v8 = *((_DWORD *)this + 29);
    *((_DWORD *)this + 14) = v7;
    if ( (unsigned int)v7 < v8 )
      v8 = v7;
    ++*((_DWORD *)this + 26);
    v9 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 29) = v8;
    v10 = (__int64)*a3;
    *(_DWORD *)(v10 + 48) = v9;
    *(_DWORD *)(v10 + 52) = v9;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xCEu);
    CMILRefCountBase::Release((CHWCallbackRenderer *)((char *)v14 + 8));
  }
  return (unsigned int)v3;
}
