/*
 * XREFs of HMUnlockDestroyObject @ 0x1C00C5804
 * Callers:
 *     _ConvertMemHandle @ 0x1C00C4E5C (_ConvertMemHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00C5738 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F44C0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00CF2F0 (HMUnlockObject.c)
 */

__int64 __fastcall HMUnlockDestroyObject(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    HMMarkObjectDestroy(a1);
    return HMUnlockObject(v1);
  }
  return v1;
}
