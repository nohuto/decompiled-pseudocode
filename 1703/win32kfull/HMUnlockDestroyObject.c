/*
 * XREFs of HMUnlockDestroyObject @ 0x1C00AE950
 * Callers:
 *     _ConvertMemHandle @ 0x1C00AE1AC (_ConvertMemHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00AE880 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AF478 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0137CF8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E84A0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMUnlockDestroyObject(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    HMMarkObjectDestroy(a1);
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      return HMUnlockObjectInternal(v1);
  }
  return v1;
}
