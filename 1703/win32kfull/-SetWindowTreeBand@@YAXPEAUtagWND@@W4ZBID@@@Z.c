/*
 * XREFs of ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0100B34
 * Callers:
 *     SetWindowGroupBand @ 0x1C001ED20 (SetWindowGroupBand.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0100B34 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 * Callees:
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0100B34 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     DwmAsyncChildZBandChange @ 0x1C0100B94 (DwmAsyncChildZBandChange.c)
 */

__int64 __fastcall SetWindowTreeBand(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rax
  __int64 i; // rbx

  *(_DWORD *)(a1 + 320) = a2;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    v9 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
    result = DwmAsyncChildZBandChange(v9);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
    result = SetWindowTreeBand(i, a2);
  return result;
}
