/*
 * XREFs of UpdateGlobalInputSinkHint @ 0x1C00088E4
 * Callers:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0008808 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
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
