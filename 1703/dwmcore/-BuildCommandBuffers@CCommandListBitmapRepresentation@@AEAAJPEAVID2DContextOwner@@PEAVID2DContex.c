/*
 * XREFs of ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000A0F4
 * Callers:
 *     ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180009ED0 (-CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwne.c)
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000A274 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 * Callees:
 *     ?EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID2D1Bitmap@@@Z @ 0x180009D90 (-EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AEB10 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AECB0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::BuildCommandBuffers(
        CCommandListBitmapRepresentation *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct ID2D1Bitmap *a4,
        struct ID2D1PrivateCompositorBuffer **a5,
        struct ID2D1PrivateCompositorBuffer **a6)
{
  CD2DSharedBuffer *v6; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  CD2DSharedBuffer *v11; // rdi
  void *(__fastcall *v12)(CD2DSharedBuffer *__hidden); // rax
  _OWORD *BufferPointer; // rax
  CD2DSharedBuffer *v14; // rsi
  void *(__fastcall *v15)(CD2DSharedBuffer *__hidden); // rax
  _OWORD *v16; // rax
  CD2DSharedBuffer *v18; // [rsp+68h] [rbp+10h] BYREF
  CD2DSharedBuffer *v19; // [rsp+70h] [rbp+18h] BYREF

  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  CCommandListBitmapRepresentation::EnsureCommandListBufferData(this, a2, a4);
  v8 = CD2DSharedBuffer::CreateFromHeap(0x90uLL, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4Cu);
  }
  else
  {
    v10 = CD2DSharedBuffer::CreateFromHeap(0x94uLL, &v19);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = v18;
      v12 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v18 + 24LL);
      if ( v12 == CD2DSharedBuffer::GetBufferPointer )
        BufferPointer = CD2DSharedBuffer::GetBufferPointer(v18);
      else
        BufferPointer = (_OWORD *)v12(v18);
      v14 = v19;
      *BufferPointer = *(_OWORD *)((char *)this + 8);
      BufferPointer[1] = *(_OWORD *)((char *)this + 24);
      BufferPointer[2] = *(_OWORD *)((char *)this + 40);
      BufferPointer[3] = *(_OWORD *)((char *)this + 56);
      BufferPointer[4] = *(_OWORD *)((char *)this + 72);
      BufferPointer[5] = *(_OWORD *)((char *)this + 88);
      BufferPointer[6] = *(_OWORD *)((char *)this + 104);
      BufferPointer[7] = *(_OWORD *)((char *)this + 120);
      BufferPointer[8] = *(_OWORD *)((char *)this + 136);
      v15 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)v14 + 24LL);
      if ( v15 == CD2DSharedBuffer::GetBufferPointer )
        v16 = CD2DSharedBuffer::GetBufferPointer(v14);
      else
        v16 = (_OWORD *)v15(v14);
      *v16 = *(_OWORD *)((char *)this + 152);
      v16[1] = *(_OWORD *)((char *)this + 168);
      v16[2] = *(_OWORD *)((char *)this + 184);
      v16[3] = *(_OWORD *)((char *)this + 200);
      v16[4] = *(_OWORD *)((char *)this + 216);
      v16[5] = *(_OWORD *)((char *)this + 232);
      v16[6] = *(_OWORD *)((char *)this + 248);
      v16[7] = *(_OWORD *)((char *)this + 264);
      v16[8] = *(_OWORD *)((char *)this + 280);
      *((_DWORD *)v16 + 36) = *((_DWORD *)this + 74);
      *a5 = v11;
      *a6 = v14;
      return v9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x52u);
    v6 = v19;
  }
  if ( v18 )
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v6 )
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
