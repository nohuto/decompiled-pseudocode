/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18006FEF4
 * Callers:
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800979B0 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18019EF60 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x180070280 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18013F82C (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        CD2DSharedBuffer *this,
        CD2DSharedBuffer *a2,
        _OWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        _QWORD *a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // rsi
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // eax
  SIZE_T v15; // rax
  unsigned __int64 v16; // kr00_8
  LPVOID v17; // rax
  __int64 v18; // rbp
  void *(__fastcall *v19)(CD2DSharedBuffer *__hidden); // rax
  void *BufferPointer; // rax
  const void *v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // eax
  SIZE_T v24; // r8
  LPVOID v25; // rax
  __int64 v26; // rbp
  void *(__fastcall *v27)(CD2DSharedBuffer *__hidden); // rax
  void *v28; // rax
  const void *v29; // r14
  unsigned int v30; // eax
  unsigned int v31; // ebp
  void (__fastcall ***v32)(_QWORD); // rax
  void (__fastcall ***v33)(_QWORD); // rbx
  unsigned int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // edx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v10 = HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    v10[2] = 0;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v31 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x87u);
    return v31;
  }
  v12 = HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    v12[2] = 0;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)this + 32LL))(this);
    v11[2] = v14 / 0x90;
    v16 = v14 / 0x90;
    v15 = 144 * v16;
    if ( !is_mul_ok(v16, 0x90uLL) )
      v15 = -1LL;
    if ( !v15 )
      v15 = 1LL;
    v17 = HeapAlloc(WPF::g_processHeap, 0, v15);
    if ( !v17 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)v11 = v17;
    v18 = *(_QWORD *)this;
    v19 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)this + 24LL);
    if ( v19 == CD2DSharedBuffer::GetBufferPointer )
    {
      BufferPointer = CD2DSharedBuffer::GetBufferPointer(this);
    }
    else
    {
      BufferPointer = v19(this);
      v18 = *(_QWORD *)this;
    }
    v21 = BufferPointer;
    v22 = (*(__int64 (__fastcall **)(CD2DSharedBuffer *))(v18 + 32))(this);
    memcpy_0(*(void **)v11, v21, v22);
    v23 = (*(__int64 (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    v24 = v23;
    v13[2] = v23;
    if ( !v23 )
      v24 = 1LL;
    v25 = HeapAlloc(WPF::g_processHeap, 0, v24);
    if ( !v25 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)v13 = v25;
    v26 = *(_QWORD *)a2;
    v27 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)a2 + 24LL);
    if ( v27 == CD2DSharedBuffer::GetBufferPointer )
    {
      v28 = CD2DSharedBuffer::GetBufferPointer(a2);
    }
    else
    {
      v28 = v27(a2);
      v26 = *(_QWORD *)a2;
    }
    v29 = v28;
    v30 = (*(__int64 (__fastcall **)(CD2DSharedBuffer *))(v26 + 32))(a2);
    memcpy_0(*(void **)v13, v29, v30);
    v31 = 0;
    v32 = (void (__fastcall ***)(_QWORD))HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
    v33 = v32;
    if ( v32 )
    {
      v32[3] = (void (__fastcall **)(_QWORD))v11;
      *v32 = (void (__fastcall **)(_QWORD))&CMILRefCountBase::`vftable';
      *v32 = (void (__fastcall **)(_QWORD))&CPrimitiveGroupDrawListGenerator::`vftable'{for `CMILRefCountBase'};
      v32[2] = (void (__fastcall **)(_QWORD))&CPrimitiveGroupDrawListGenerator::`vftable'{for `IDeviceResourceNotify'};
      *((_DWORD *)v32 + 2) = 0;
      v32[4] = (void (__fastcall **)(_QWORD))v13;
      *((_DWORD *)v32 + 12) = 0;
      *((_OWORD *)v32 + 4) = *a3;
      *((_OWORD *)v32 + 5) = *a4;
      *((_OWORD *)v32 + 6) = *a5;
      v32[14] = 0LL;
      v32[15] = 0LL;
      v32[16] = 0LL;
      v32[17] = 0LL;
      ++dword_1802D631C;
      v32[5] = 0LL;
      v32[6] = 0LL;
      *((_DWORD *)v32 + 14) = 0;
    }
    else
    {
      v33 = 0LL;
    }
    if ( v33 )
    {
      (**v33)(v33);
      *a6 = v33;
      return v31;
    }
    v35 = 147;
  }
  else
  {
    v35 = 136;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v35);
  CPrimitiveBuffer::`scalar deleting destructor'((CPrimitiveBuffer *)v11, v36);
  v31 = -2147024882;
  if ( v13 )
    CPrimitiveBuffer::`scalar deleting destructor'((CPrimitiveBuffer *)v13, v37);
  return v31;
}
