/*
 * XREFs of ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x18012FEB4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall FRAME_TIME_INFO::AddTokenForRenderContent(
        FRAME_TIME_INFO *this,
        const struct ConfirmPresentHistoryToken *a2)
{
  _OWORD *v4; // rax
  signed int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  signed int v9; // eax
  void *lpMem; // [rsp+50h] [rbp+18h] BYREF

  lpMem = 0LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  v5 = 0;
  lpMem = v4;
  if ( !v4 )
    v5 = -2147024882;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x40u);
LABEL_15:
    if ( lpMem )
      WPF::ProcessHeapImpl::Free(lpMem);
    return (unsigned int)v5;
  }
  *v4 = *(_OWORD *)a2;
  v4[1] = *((_OWORD *)a2 + 1);
  v6 = *((unsigned int *)this + 14);
  v7 = (unsigned int)lpMem;
  v8 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v7 = v6 + 1;
  v5 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v8 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
  }
  else if ( v7 > *((_DWORD *)this + 13) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8u, 1, &lpMem);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v6) = lpMem;
    *((_DWORD *)this + 14) = v7;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x48u);
    goto LABEL_15;
  }
  return (unsigned int)v5;
}
