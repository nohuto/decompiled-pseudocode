/*
 * XREFs of ?Create@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPEAV1@@Z @ 0x180165128
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x180165874 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLocalMrowWriter<SharedBufferDataFlipChain>::Create(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v3[1] = 0LL;
  *v3 = &CLocalMrowWriter<SharedBufferDataFlipChain>::`vftable';
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0xE0uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
  v5[2] = 0;
  *(_QWORD *)v5 = &CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::`vftable';
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)(v5 + 8),
    96LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))SharedBufferDataFlipChain::SharedBufferDataFlipChain);
  v6[2] = 1;
  v4[1] = v6;
  *((_QWORD *)v6 + 2) = 208LL;
  *((_WORD *)v6 + 12) = 0;
  *((_WORD *)v6 + 13) = -1;
  v6[7] = 0;
  memset_0(v6 + 8, 0, 0xC0uLL);
  result = 0LL;
  *a2 = v4;
  return result;
}
