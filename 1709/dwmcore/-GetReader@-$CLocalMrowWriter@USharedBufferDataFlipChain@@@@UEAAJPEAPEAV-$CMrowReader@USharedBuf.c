/*
 * XREFs of ?GetReader@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@UEAAJPEAPEAV?$CMrowReader@USharedBufferDataFlipChain@@@@@Z @ 0x180165630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLocalMrowWriter<SharedBufferDataFlipChain>::GetReader(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    v5 = HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
    v6 = v5;
    if ( !v5 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v5[1] = 0LL;
    *v5 = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
    if ( a1 )
    {
      v7 = *(void (__fastcall ****)(_QWORD))(a1 + 8);
      if ( v7 )
      {
        (**v7)(v7);
        v6[1] = *(_QWORD *)(a1 + 8);
      }
    }
    *a2 = v6;
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x248u);
  }
  return v2;
}
