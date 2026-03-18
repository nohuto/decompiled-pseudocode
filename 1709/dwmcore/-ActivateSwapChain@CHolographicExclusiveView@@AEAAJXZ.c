/*
 * XREFs of ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1801BD650
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801BD6EC (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1801BD988 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicExclusiveView::ActivateSwapChain(CHolographicExclusiveView *this)
{
  DWORD v1; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  signed int v6; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 74) && !*((_BYTE *)this + 73) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v3 )
      v3 = (_QWORD *)v3[11];
    if ( v3 )
    {
      v4 = v3[4];
      *((_QWORD *)this + 17) = v4;
      *((_QWORD *)this + 15) = v3[22];
      v5 = NtSetCompositionSurfaceAnalogExclusive(v4, 1LL);
      if ( v5 >= 0 )
      {
        v6 = CHolographicExclusiveView::OpenSurfaceHandles(this);
        v1 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x149u);
        else
          *((_BYTE *)this + 72) = 1;
      }
      else
      {
        v1 = v5 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x148u);
      }
    }
  }
  return v1;
}
