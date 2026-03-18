/*
 * XREFs of ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x18015184C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall FRAME_TIME_INFO::AddTokenForRenderContent(
        FRAME_TIME_INFO *this,
        const struct ConfirmPresentHistoryToken *a2)
{
  _OWORD *v4; // rax
  int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  void *lpMem; // [rsp+50h] [rbp+18h] BYREF

  lpMem = 0LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  v5 = 0;
  lpMem = v4;
  if ( !v4 )
    v5 = -2147024882;
  if ( v5 < 0 )
  {
    v9 = 64;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v9);
    if ( lpMem )
      operator delete(lpMem);
    return (unsigned int)v5;
  }
  *v4 = *(_OWORD *)a2;
  v4[1] = *((_OWORD *)a2 + 1);
  v6 = *((_DWORD *)this + 12);
  v7 = v6 + 1;
  v5 = v6 + 1 < v6 ? 0x80070216 : 0;
  if ( v6 + 1 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v7 > *((_DWORD *)this + 11) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 8u, 1, &lpMem);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v6) = lpMem;
    *((_DWORD *)this + 12) = v7;
  }
  if ( v5 < 0 )
  {
    v9 = 72;
    goto LABEL_13;
  }
  return (unsigned int)v5;
}
