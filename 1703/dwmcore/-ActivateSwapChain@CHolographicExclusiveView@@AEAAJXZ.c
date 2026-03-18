/*
 * XREFs of ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1801A48CC
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801A4968 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1801A4B38 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicExclusiveView::ActivateSwapChain(CHolographicExclusiveView *this)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 74) && !*((_BYTE *)this + 73) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v3 )
      v3 = (_QWORD *)v3[58];
    if ( v3 )
    {
      v4 = v3[4];
      *((_QWORD *)this + 15) = v4;
      *(_QWORD *)((char *)this + 100) = v3[22];
      v5 = NtSetCompositionSurfaceAnalogExclusive(v4, 1LL);
      if ( v5 >= 0 )
      {
        v6 = CHolographicExclusiveView::OpenSurfaceHandles(this);
        v1 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x109u);
        else
          *((_BYTE *)this + 72) = 1;
      }
      else
      {
        v1 = v5 | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x108u);
      }
    }
  }
  return v1;
}
