/*
 * XREFs of _DelegateCapturePointers @ 0x1C01BF628
 * Callers:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01BEDD4 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     EditionDelegateCapturePointers @ 0x1C01BF100 (EditionDelegateCapturePointers.c)
 *     ?DelegateCapturePointersMitOff@@YAHIPEAI0@Z @ 0x1C01E2468 (-DelegateCapturePointersMitOff@@YAHIPEAI0@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01E2614 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BEE4C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01CAD94 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     ?SetPointerDataCaptureChanged@@YAHKG@Z @ 0x1C01CC12C (-SetPointerDataCaptureChanged@@YAHKG@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r14
  int v8; // r15d

  v2 = 0;
  if ( a1 )
  {
    v5 = a2 + 4;
    do
    {
      if ( *(_DWORD *)(v5 + 196) )
      {
        v6 = *(_QWORD *)(v5 + 84);
        v7 = *(_QWORD *)(v6 + 16);
        v8 = DeferNotifyDelegateCapture(
               (struct tagTHREADINPUTPOINTERLIST *)(v7 + 1056),
               *(_WORD *)(v5 - 4),
               *(_DWORD *)v5,
               (struct tagWND *)v6);
        if ( v8 )
          SetWakeBit(v7, 4096LL);
        else
          SetPointerDataCaptureChanged(*(_DWORD *)v5, *(_WORD *)(v5 - 4));
        DelegateDiscardMessages(*(struct tagQ **)(v7 + 408), v8, (struct tagDELEGATEPOINTERMAP *)(a2 + 208LL * v2));
      }
      ++v2;
      v5 += 208LL;
    }
    while ( v2 < a1 );
  }
  return 1LL;
}
