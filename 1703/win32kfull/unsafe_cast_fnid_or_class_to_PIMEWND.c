/*
 * XREFs of unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00C9E28
 * Callers:
 *     ImeCanDestroyDefIMEforChild @ 0x1C00C9C98 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00C9D04 (zzzImeCanDestroyDefIME.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00C9E70 (xxxCreateDefaultImeWindow.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01BDA04 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PIMEWND(__int64 a1)
{
  if ( !a1
    || (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x2A9 && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 882LL) )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 252) )
    return *(_QWORD *)(a1 + 392);
  return *(_QWORD *)(a1 + 384);
}
