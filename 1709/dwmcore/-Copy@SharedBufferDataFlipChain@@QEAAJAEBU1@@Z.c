/*
 * XREFs of ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1801CA78C
 * Callers:
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x18016603C (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall SharedBufferDataFlipChain::Copy(
        SharedBufferDataFlipChain *this,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  size_t v4; // rbp
  void *v7; // r8
  SIZE_T v8; // r8
  LPVOID v9; // rax
  void *v10; // rcx
  LPVOID v12; // rax

  v2 = *((unsigned int *)a2 + 20);
  v3 = 0;
  v4 = 88 * v2;
  if ( (unsigned int)v2 > *((_DWORD *)this + 20) )
  {
    v7 = (void *)*((_QWORD *)this + 11);
    if ( !v7 )
    {
      v8 = 88 * v2;
      if ( !v4 )
        v8 = 1LL;
      v9 = HeapAlloc(WPF::g_processHeap, 0, v8);
      *((_QWORD *)this + 11) = v9;
      if ( v9 )
        goto LABEL_6;
LABEL_10:
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x7Bu);
      return v3;
    }
    v12 = HeapReAlloc(WPF::g_processHeap, 0, v7, 88 * v2);
    if ( !v12 )
      goto LABEL_10;
    *((_QWORD *)this + 11) = v12;
  }
LABEL_6:
  v10 = (void *)*((_QWORD *)this + 11);
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_QWORD *)this + 10) = *((_QWORD *)a2 + 10);
  memcpy_0(v10, *((const void **)a2 + 11), v4);
  return v3;
}
