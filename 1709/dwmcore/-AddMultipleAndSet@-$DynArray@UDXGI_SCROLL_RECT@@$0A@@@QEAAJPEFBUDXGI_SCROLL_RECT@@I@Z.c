/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGI_SCROLL_RECT@@$0A@@@QEAAJPEFBUDXGI_SCROLL_RECT@@I@Z @ 0x1801AFBB0
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B2310 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<DXGI_SCROLL_RECT,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  signed int v9; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x18u, 1, a2);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v7 = *(_QWORD *)a1;
    v8 = 3 * v4;
    *(_OWORD *)(v7 + 8 * v8) = *(_OWORD *)a2;
    *(_QWORD *)(v7 + 8 * v8 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v6;
}
