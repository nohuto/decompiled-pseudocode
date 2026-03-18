/*
 * XREFs of ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1PEAPEAV1@@Z @ 0x1800C8850
 * Callers:
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800ABE38 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x180077E70 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1@Z @ 0x18008F148 (--0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CHWCallbackRenderer::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CD3DDynamicAppendBuffer *a2,
        struct CD3DDynamicAppendBuffer *a3,
        struct CHWCallbackRenderer **a4)
{
  CHWCallbackRenderer *v8; // rax
  CHWCallbackRenderer *v9; // rbx
  int v10; // edi
  CD3DDeviceLevel1 *v11; // rcx
  int v12; // eax
  D3D11_SUBRESOURCE_DATA v14; // [rsp+30h] [rbp-58h] BYREF
  struct D3D11_BUFFER_DESC v15; // [rsp+40h] [rbp-48h] BYREF

  v8 = (CHWCallbackRenderer *)HeapAlloc(WPF::g_processHeap, 0, 0x130uLL);
  if ( v8 )
    v9 = CHWCallbackRenderer::CHWCallbackRenderer(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
    v10 = 0;
    if ( !*((_QWORD *)v9 + 30) )
    {
      v15.Usage = D3D11_USAGE_DEFAULT;
      v15.CPUAccessFlags = 0;
      v15.MiscFlags = 0;
      v15.StructureByteStride = 0;
      *(_QWORD *)&v14.SysMemPitch = 0LL;
      v11 = (CD3DDeviceLevel1 *)*((_QWORD *)v9 + 3);
      v15.ByteWidth = 112;
      v15.BindFlags = 4;
      v14.pSysMem = (char *)v9 + 128;
      v12 = CD3DDeviceLevel1::CreateBuffer(v11, &v15, &v14, (struct ID3D11Buffer **)v9 + 30);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1Eu);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2Eu);
      CMILRefCountBase::Release((CHWCallbackRenderer *)((char *)v9 + 8));
    }
    else
    {
      *a4 = v9;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Bu);
  }
  return (unsigned int)v10;
}
