/*
 * XREFs of ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800ABE38
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801307D4 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CD3DDynamicAppendBuffer@@SAJPEAVCD3DDeviceLevel1@@W4D3D11_BIND_FLAG@@IIPEAPEAV1@@Z @ 0x1800C5564 (-Create@CD3DDynamicAppendBuffer@@SAJPEAVCD3DDeviceLevel1@@W4D3D11_BIND_FLAG@@IIPEAPEAV1@@Z.c)
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1PEAPEAV1@@Z @ 0x1800C8850 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCallbackRendererManager::GetNextHWCallbackRenderer(
        struct CD3DDynamicAppendBuffer **this,
        struct CD3DDeviceLevel1 *a2,
        struct CHWCallbackRenderer **a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  struct CD3DDynamicAppendBuffer **v5; // r14
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  struct CD3DDynamicAppendBuffer *v13; // r8
  struct CD3DDynamicAppendBuffer *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  struct CHWCallbackRenderer *v17; // rbx
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CMILRefCountBase *v23; // rcx
  struct CHWCallbackRenderer *v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = this + 13;
  if ( !this[13] )
  {
    v20 = CD3DDynamicAppendBuffer::Create(a2, D3D11_BIND_INDEX_BUFFER, 0x3E80u, a4, this + 13);
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xCBu);
      return v4;
    }
  }
  if ( !this[12] )
  {
    v21 = CD3DDynamicAppendBuffer::Create(a2, D3D11_BIND_VERTEX_BUFFER, 0x27100u, a4, this + 12);
    v4 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xD5u);
      return v4;
    }
  }
  if ( *((_DWORD *)this + 14) )
    goto LABEL_4;
  v13 = *v5;
  v14 = this[12];
  v24 = 0LL;
  v15 = CHWCallbackRenderer::Create(a2, v14, v13, &v24);
  v4 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xE0u);
    if ( !v24 )
      return v4;
    v23 = (struct CHWCallbackRenderer *)((char *)v24 + 8);
LABEL_25:
    CMILRefCountBase::Release(v23);
    return v4;
  }
  v16 = *((unsigned int *)this + 14);
  v17 = v24;
  v18 = (unsigned int)v24;
  v19 = v16 + 1;
  if ( (int)v16 + 1 >= (unsigned int)v16 )
    v18 = v16 + 1;
  v4 = v19 < (unsigned int)v16 ? 0x80070216 : 0;
  if ( v19 < (unsigned int)v16 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v18 > *((_DWORD *)this + 13) )
  {
    v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 4), 8u, 1, &v24);
    v4 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[4] + v16) = v24;
    *((_DWORD *)this + 14) = v18;
  }
  if ( (v4 & 0x80000000) == 0 )
  {
LABEL_4:
    v9 = *((_DWORD *)this + 14) - 1;
    *a3 = (struct CHWCallbackRenderer *)*((_QWORD *)this[4] + v9);
    v10 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 14) = v9;
    v11 = (__int64)*a3;
    *(_DWORD *)(v11 + 72) = v10;
    *(_DWORD *)(v11 + 76) = v10;
    return v4;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xE2u);
  if ( v17 )
  {
    v23 = (struct CHWCallbackRenderer *)((char *)v17 + 8);
    goto LABEL_25;
  }
  return v4;
}
