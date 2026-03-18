/*
 * XREFs of UpdateGlobalInputSinkHint @ 0x1C0003EF0
 * Callers:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0003E18 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateGlobalInputSinkHint(int a1)
{
  if ( a1 )
  {
    _InterlockedIncrement(&gulAnyInputSinkInSubtree);
  }
  else if ( gulAnyInputSinkInSubtree )
  {
    _InterlockedDecrement(&gulAnyInputSinkInSubtree);
  }
}
