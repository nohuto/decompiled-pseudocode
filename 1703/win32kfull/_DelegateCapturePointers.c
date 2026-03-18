/*
 * XREFs of _DelegateCapturePointers @ 0x1C01BB90C
 * Callers:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01BAAF4 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     EditionDelegateCapturePointers @ 0x1C01BAE20 (EditionDelegateCapturePointers.c)
 *     ?DelegateCapturePointersMitOff@@YAHIPEAI0@Z @ 0x1C01D5C68 (-DelegateCapturePointersMitOff@@YAHIPEAI0@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01D5E3C (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BAB6C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01C5440 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     ?SetPointerDataCaptureChanged@@YAHKG@Z @ 0x1C01C74C8 (-SetPointerDataCaptureChanged@@YAHKG@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // r15d

  v2 = 0;
  if ( a1 )
  {
    v5 = a2 + 88;
    do
    {
      if ( *(_DWORD *)(v5 + 112) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
        v7 = DeferNotifyDelegateCapture(
               (struct tagTHREADINPUTPOINTERLIST *)(v6 + 968),
               *(_WORD *)(v5 - 88),
               *(_DWORD *)(v5 - 84),
               *(struct tagWND **)v5);
        if ( v7 )
          SetWakeBit(v6, 0x1000u);
        else
          SetPointerDataCaptureChanged(*(_DWORD *)(v5 - 84), *(_WORD *)(v5 - 88));
        DelegateDiscardMessages(*(struct tagQ **)(v6 + 384), v7, (struct tagDELEGATEPOINTERMAP *)(a2 + 208LL * v2));
      }
      ++v2;
      v5 += 208LL;
    }
    while ( v2 < a1 );
  }
  return 1LL;
}
