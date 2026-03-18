/*
 * XREFs of ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1800B185C
 * Callers:
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800B1440 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall SharedBufferDataFlipChain::Copy(
        SharedBufferDataFlipChain *this,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  size_t v4; // rbp
  void *v7; // r8
  LPVOID v8; // rax
  void *v9; // rcx
  SIZE_T v11; // r8
  LPVOID v12; // rax

  v2 = *((unsigned int *)a2 + 20);
  v3 = 0;
  v4 = 88 * v2;
  if ( (unsigned int)v2 <= *((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = (void *)*((_QWORD *)this + 11);
  if ( !v7 )
  {
    v11 = 88 * v2;
    if ( !v4 )
      v11 = 1LL;
    v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
    *((_QWORD *)this + 11) = v12;
    if ( v12 )
      goto LABEL_5;
LABEL_10:
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Bu);
    return v3;
  }
  v8 = HeapReAlloc(WPF::g_processHeap, 0, v7, 88 * v2);
  if ( !v8 )
    goto LABEL_10;
  *((_QWORD *)this + 11) = v8;
LABEL_5:
  v9 = (void *)*((_QWORD *)this + 11);
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_QWORD *)this + 10) = *((_QWORD *)a2 + 10);
  memcpy_0(v9, *((const void **)a2 + 11), v4);
  return v3;
}
