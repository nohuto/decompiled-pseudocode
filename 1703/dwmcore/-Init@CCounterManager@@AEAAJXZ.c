/*
 * XREFs of ?Init@CCounterManager@@AEAAJXZ @ 0x1800C8D04
 * Callers:
 *     ?EnsurePerFrameInstance@CCounterManager@@SAJXZ @ 0x1800C8BFC (-EnsurePerFrameInstance@CCounterManager@@SAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddEventFirer@CCounterManager@@AEAAJPEAVCEventFirer@@@Z @ 0x1800C8C88 (-AddEventFirer@CCounterManager@@AEAAJPEAVCEventFirer@@@Z.c)
 */

__int64 __fastcall CCounterManager::Init(CCounterManager *this)
{
  _BYTE *v1; // rax
  struct CEventFirer *v3; // r14
  struct CEventFirer *v4; // r15
  struct CEventFirer *v5; // rbp
  struct CEventFirer *v6; // r12
  struct CEventFirer *v7; // rsi
  __int64 v8; // rcx
  struct CEventFirer *v9; // r13
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-38h]

  v1 = (char *)this + 96;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 21LL;
  do
  {
    *((_QWORD *)v1 - 1) = 0LL;
    *v1 = 0;
    v1 += 16;
    --v8;
  }
  while ( v8 );
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 11) = "NoAAFixupVerticesProcessed";
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 13) = "AAFixup2DVerticesProcessed";
  *((_QWORD *)this + 15) = "AAFixup3DVertices";
  *((_QWORD *)this + 17) = "HwCallbackRendersProcessed";
  *((_QWORD *)this + 19) = "HwCallbackDrawCallsProcessed";
  *((_QWORD *)this + 23) = "HwMegaRectsAdded";
  *((_QWORD *)this + 21) = "HwDrawListEntriesAdded";
  *((_QWORD *)this + 25) = "WarpCallbackRendersProcessed";
  *((_QWORD *)this + 27) = "WarpCallbackDrawCallsProcessed";
  *((_QWORD *)this + 29) = "WarpDrawListEntriesAdded";
  *((_QWORD *)this + 31) = "PrimitiveGroupToDrawListGeneratorCreated";
  *((_QWORD *)this + 33) = "PrimitiveGroupToDrawListGeneratorCacheUpdated";
  *((_QWORD *)this + 35) = "TessellatedRect_Unclipped";
  *((_QWORD *)this + 37) = "TessellatedRect_AxisAlignedRectClip";
  *((_QWORD *)this + 39) = "TessellatedRect_GeneralClip";
  *((_QWORD *)this + 41) = "HwDrawListCache_Invalidated";
  *((_QWORD *)this + 43) = "HwDrawListCache_Updated";
  *((_QWORD *)this + 45) = "WarpDrawListCache_Invalidated";
  *((_QWORD *)this + 47) = "WarpDrawListCache_Updated";
  *((_QWORD *)this + 49) = "BspPolygonCreated";
  *((_QWORD *)this + 51) = "SuperSets_SetStatesAvoided";
  *((_BYTE *)this + 128) = 0;
  *((_BYTE *)this + 144) = 0;
  *((_BYTE *)this + 160) = 0;
  *((_BYTE *)this + 192) = 0;
  *((_BYTE *)this + 176) = 0;
  *((_BYTE *)this + 208) = 0;
  *((_BYTE *)this + 224) = 0;
  *((_BYTE *)this + 240) = 0;
  *((_BYTE *)this + 256) = 0;
  *((_BYTE *)this + 272) = 0;
  *((_BYTE *)this + 288) = 0;
  *((_BYTE *)this + 304) = 0;
  *((_BYTE *)this + 320) = 0;
  *((_BYTE *)this + 336) = 0;
  *((_BYTE *)this + 352) = 0;
  *((_BYTE *)this + 368) = 0;
  *((_BYTE *)this + 384) = 0;
  *((_BYTE *)this + 400) = 0;
  *((_BYTE *)this + 416) = 0;
  v9 = (struct CEventFirer *)operator new(8uLL);
  if ( v9 )
    *(_QWORD *)v9 = &CHwCallbackRendererEvents::`vftable';
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xEAu);
    goto LABEL_28;
  }
  v3 = (struct CEventFirer *)operator new(8uLL);
  if ( v3 )
    *(_QWORD *)v3 = &CWarpCallbackRendererEvents::`vftable';
  else
    v3 = 0LL;
  if ( !v3 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xEBu);
    goto LABEL_28;
  }
  v4 = (struct CEventFirer *)operator new(8uLL);
  if ( v4 )
    *(_QWORD *)v4 = &CPrimitiveGroupEvents::`vftable';
  else
    v4 = 0LL;
  if ( !v4 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xECu);
    goto LABEL_28;
  }
  v5 = (struct CEventFirer *)operator new(8uLL);
  if ( v5 )
    *(_QWORD *)v5 = &CTessellatedPrimitivesEvents::`vftable';
  else
    v5 = 0LL;
  if ( !v5 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xEDu);
    goto LABEL_28;
  }
  v6 = (struct CEventFirer *)operator new(8uLL);
  if ( v6 )
    *(_QWORD *)v6 = &CHwDrawListCacheEvents::`vftable';
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xEEu);
    goto LABEL_28;
  }
  v7 = (struct CEventFirer *)operator new(8uLL);
  if ( v7 )
    *(_QWORD *)v7 = &CWarpDrawListCacheEvents::`vftable';
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xEFu);
    goto LABEL_28;
  }
  v10 = CCounterManager::AddEventFirer(this, v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 243;
    goto LABEL_47;
  }
  v9 = 0LL;
  v10 = CCounterManager::AddEventFirer(this, v3);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 248;
    goto LABEL_47;
  }
  v3 = 0LL;
  v10 = CCounterManager::AddEventFirer(this, v4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 253;
    goto LABEL_47;
  }
  v4 = 0LL;
  v10 = CCounterManager::AddEventFirer(this, v5);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 258;
    goto LABEL_47;
  }
  v5 = 0LL;
  v10 = CCounterManager::AddEventFirer(this, v6);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 263;
    goto LABEL_47;
  }
  v6 = 0LL;
  v10 = CCounterManager::AddEventFirer(this, v7);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 268;
LABEL_47:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v13);
    goto LABEL_28;
  }
  v7 = 0LL;
LABEL_28:
  WPF::ProcessHeapImpl::Free(v9);
  WPF::ProcessHeapImpl::Free(v3);
  WPF::ProcessHeapImpl::Free(v4);
  WPF::ProcessHeapImpl::Free(v5);
  WPF::ProcessHeapImpl::Free(v6);
  WPF::ProcessHeapImpl::Free(v7);
  return v11;
}
