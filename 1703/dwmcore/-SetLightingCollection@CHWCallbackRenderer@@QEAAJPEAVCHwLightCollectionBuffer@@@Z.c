/*
 * XREFs of ?SetLightingCollection@CHWCallbackRenderer@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1801306C4
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801307D4 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@2@Z @ 0x180199AAC (-CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConst.c)
 */

__int64 __fastcall CHWCallbackRenderer::SetLightingCollection(
        CHWCallbackRenderer *this,
        struct CHwLightCollectionBuffer *a2)
{
  unsigned int v2; // esi
  int ConstantBuffer; // eax

  v2 = 0;
  if ( !a2
    || *((_QWORD *)this + 5) && *((_QWORD *)this + 6)
    || (ConstantBuffer = CHwLightCollectionBuffer::CreateConstantBuffer(
                           a2,
                           *((struct CD3DDeviceLevel1 **)this + 3),
                           (unsigned __int64 *)this + 7,
                           (struct CD3DConstantBuffer **)this + 5,
                           (struct CD3DConstantBuffer **)this + 6),
        v2 = ConstantBuffer,
        ConstantBuffer >= 0) )
  {
    *((_QWORD *)this + 4) = a2;
    if ( a2 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))a2)(a2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ConstantBuffer, 0xBDu);
  }
  return v2;
}
