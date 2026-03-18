/*
 * XREFs of ?GetReader@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@UEAAJPEAPEAV?$CMrowReader@USharedBufferDataFlipChain@@@@@Z @ 0x180163E70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLocalMrowWriter<SharedBufferDataFlipChain>::GetReader(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    v5 = HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
    v6 = v5;
    if ( !v5 )
    {
      ModuleFailFastForHRESULT(-2147024882, retaddr);
      __debugbreak();
    }
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x248u);
  }
  return v2;
}
