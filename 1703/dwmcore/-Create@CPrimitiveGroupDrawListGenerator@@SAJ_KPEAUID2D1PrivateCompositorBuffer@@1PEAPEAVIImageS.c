/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180009990
 * Callers:
 *     ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180009ED0 (-CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwne.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000C104 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAVIImageSource@@_K12PEAPEAVCResource@@2M@Z @ 0x18000F1BC (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801661D0 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@Z @ 0x1800095A8 (-Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@.c)
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180009B68 (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180009C14 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x1801338B0 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        __int64 a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct IImageSource **a4,
        unsigned __int64 a5,
        struct IImageSource **a6,
        unsigned __int64 a7,
        struct CResource **a8,
        unsigned __int64 a9,
        struct CPrimitiveGroupDrawListGenerator **a10)
{
  CPrimitiveGroupDrawListGenerator *v11; // rbx
  CCommandBuffer *v15; // rax
  CCommandBuffer *v16; // r14
  CPrimitiveBuffer *v17; // rax
  CPrimitiveBuffer *v18; // rsi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  CPrimitiveGroupDrawListGenerator *v22; // rax
  int v23; // eax
  int v25; // r9d
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // [rsp+20h] [rbp-48h]

  v11 = 0LL;
  v15 = (CCommandBuffer *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = 0LL;
    *((_DWORD *)v15 + 2) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Bu);
    return v20;
  }
  v17 = (CPrimitiveBuffer *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v18 = v17;
  if ( v17 )
  {
    *(_QWORD *)v17 = 0LL;
    *((_DWORD *)v17 + 2) = 0;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v19 = CCommandBuffer::Initialize(v16, a2);
    v20 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x8Eu);
LABEL_26:
      if ( v11 )
        (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v11 + 8LL))(v11);
      goto LABEL_28;
    }
    v21 = CPrimitiveBuffer::Initialize(v18, a3);
    v20 = v21;
    if ( v21 < 0 )
    {
      v28 = 143;
      v25 = v21;
      goto LABEL_23;
    }
    v22 = (CPrimitiveGroupDrawListGenerator *)HeapAlloc(WPF::g_processHeap, 0, 0x88uLL);
    v11 = v22;
    if ( v22 )
    {
      *((_QWORD *)v22 + 2) = v16;
      *(_QWORD *)v22 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v22 = &CPrimitiveGroupDrawListGenerator::`vftable';
      *((_DWORD *)v22 + 2) = 0;
      *((_QWORD *)v22 + 3) = v18;
      *((_QWORD *)v22 + 4) = a1;
      *((_QWORD *)v22 + 5) = 0LL;
      *((_QWORD *)v22 + 6) = 0LL;
      *((_QWORD *)v22 + 7) = 0LL;
      *((_DWORD *)v22 + 16) = 0;
      *((_QWORD *)v22 + 9) = 0LL;
      *((_QWORD *)v22 + 10) = 0LL;
      *((_QWORD *)v22 + 11) = 0LL;
      *((_DWORD *)v22 + 24) = 0;
      *((_QWORD *)v22 + 13) = 0LL;
      *((_QWORD *)v22 + 14) = 0LL;
      *((_QWORD *)v22 + 15) = 0LL;
      *((_DWORD *)v22 + 32) = 0;
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 10, 1u);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      (**(void (__fastcall ***)(CPrimitiveGroupDrawListGenerator *))v11)(v11);
      v23 = CPrimitiveGroupDrawListGenerator::Initialize(v11, a4, a5, a6, a7, a8, a9);
      v20 = v23;
      if ( v23 >= 0 )
      {
        *a10 = v11;
        return v20;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xA0u);
      goto LABEL_26;
    }
    v28 = 149;
  }
  else
  {
    v28 = 140;
  }
  v25 = -2147024882;
  v20 = -2147024882;
LABEL_23:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v28);
LABEL_28:
  CPrimitiveBuffer::`scalar deleting destructor'(v16, v26);
  if ( v18 )
    CPrimitiveBuffer::`scalar deleting destructor'(v18, v27);
  return v20;
}
