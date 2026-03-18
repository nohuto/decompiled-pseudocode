/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV?$span@PEAVIImageSource@@@gsl@@2AEBV?$span@PEAVCPrimitiveColor@@@4@PEAPEAV1@@Z @ 0x180046718
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180026FB4 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EDB8 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180174E28 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ??_GCCommandBuffer@@QEAAPEAXI@Z @ 0x18004691C (--_GCCommandBuffer@@QEAAPEAXI@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180046958 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x180046BF0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18011CB94 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        __int64 a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        CD2DSharedBuffer *a3,
        _OWORD *a4,
        _OWORD *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  CCommandBuffer *v11; // rax
  CCommandBuffer *v12; // rsi
  CPrimitiveBuffer *v13; // rax
  CPrimitiveBuffer *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // eax
  SIZE_T v18; // r8
  LPVOID v19; // rax
  void *(__fastcall *v20)(CD2DSharedBuffer *__hidden); // rax
  void *BufferPointer; // rax
  const void *v22; // rbp
  unsigned int v23; // eax
  char *v24; // rax
  void (__fastcall ***v25)(_QWORD); // rbx
  int v27; // r9d
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v11 = (CCommandBuffer *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = 0LL;
    *((_DWORD *)v11 + 2) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x88u);
    return v16;
  }
  v13 = (CPrimitiveBuffer *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v14 = v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 0;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
  {
    v30 = 137;
LABEL_24:
    v16 = -2147024882;
    v27 = -2147024882;
    goto LABEL_28;
  }
  v15 = CCommandBuffer::Initialize(v12, a2);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)a3 + 32LL))(a3);
    v18 = v17;
    *((_DWORD *)v14 + 2) = v17;
    if ( !v17 )
      v18 = 1LL;
    v19 = HeapAlloc(WPF::g_processHeap, 0, v18);
    if ( !v19 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)v14 = v19;
    v20 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)a3 + 24LL);
    if ( v20 == CD2DSharedBuffer::GetBufferPointer )
      BufferPointer = CD2DSharedBuffer::GetBufferPointer(a3);
    else
      BufferPointer = v20(a3);
    v22 = BufferPointer;
    v23 = (*(__int64 (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)a3 + 32LL))(a3);
    memcpy_0(*(void **)v14, v22, v23);
    v16 = 0;
    v24 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
    v25 = (void (__fastcall ***)(_QWORD))v24;
    if ( v24 )
    {
      *((_QWORD *)v24 + 3) = v12;
      *(_QWORD *)v24 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v24 = &CPrimitiveGroupDrawListGenerator::`vftable'{for `CMILRefCountBase'};
      *((_QWORD *)v24 + 2) = &CPrimitiveGroupDrawListGenerator::`vftable'{for `IDeviceResourceNotify'};
      *((_DWORD *)v24 + 2) = 0;
      *((_QWORD *)v24 + 4) = v14;
      *((_QWORD *)v24 + 5) = a1;
      *((_DWORD *)v24 + 14) = 0;
      *(_OWORD *)(v24 + 72) = *a4;
      *(_OWORD *)(v24 + 88) = *a5;
      *(_OWORD *)(v24 + 104) = *a6;
      *((_QWORD *)v24 + 15) = 0LL;
      *((_QWORD *)v24 + 16) = 0LL;
      *((_QWORD *)v24 + 17) = 0LL;
      ++dword_18026EDDC;
      *((_QWORD *)v24 + 6) = 0LL;
      *((_QWORD *)v24 + 7) = 0LL;
      *((_DWORD *)v24 + 16) = 0;
    }
    else
    {
      v25 = 0LL;
    }
    if ( v25 )
    {
      (**v25)(v25);
      *a7 = v25;
      return v16;
    }
    v30 = 149;
    goto LABEL_24;
  }
  v30 = 139;
  v27 = v15;
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, v30);
  CCommandBuffer::`scalar deleting destructor'(v12, v28);
  if ( v14 )
    CPrimitiveBuffer::`scalar deleting destructor'(v14, v29);
  return v16;
}
