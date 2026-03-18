/*
 * XREFs of ?AllocateBuffers@CSPIntermediateBuffers@@QEAAJ_JI@Z @ 0x18020296C
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x180202A2C (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSPIntermediateBuffers::AllocateBuffers(CSPIntermediateBuffers *this, __int64 a2, unsigned int a3)
{
  CSPIntermediateBuffers *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdi
  SIZE_T v6; // r8
  LPVOID v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  v3 = this;
  v4 = 0;
  v5 = a3;
  if ( !this || !a3 || 0xFFFFFFFFFFFFFFFFuLL / a3 <= 0x30 )
  {
    v4 = -2147024809;
    goto LABEL_12;
  }
  v6 = 48LL * a3;
  if ( !(48 * v5) )
    v6 = 1LL;
  v7 = HeapAlloc(WPF::g_processHeap, 0, v6);
  *(_QWORD *)v3 = v7;
  if ( !v7 )
  {
    v4 = -2147024882;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x35u);
    return v4;
  }
  v8 = 16 * v5;
  v9 = (_QWORD *)((char *)v3 + 8);
  v10 = 2LL;
  do
  {
    v11 = *(_QWORD *)v3;
    v3 = (CSPIntermediateBuffers *)((char *)v3 + 8);
    *v9++ = v8 + v11;
    --v10;
  }
  while ( v10 );
  return v4;
}
