/*
 * XREFs of SetClearAssociatedNativeObjectNoLock @ 0x1C0045788
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0045240 (CreateNativeNameSpaceObject.c)
 *     MarkNativeObjectsDefunct @ 0x1C00455C8 (MarkNativeObjectsDefunct.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall SetClearAssociatedNativeObjectNoLock(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int16 result; // ax

  v2 = *(_WORD *)(a1 + 64);
  *(_QWORD *)(a1 + 136) = a2;
  if ( a2 )
    result = v2 | 0x400;
  else
    result = v2 & 0xFBFF;
  *(_WORD *)(a1 + 64) = result;
  return result;
}
