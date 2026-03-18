/*
 * XREFs of _ConvertMemHandle @ 0x1C00C4E5C
 * Callers:
 *     NtUserConvertMemHandle @ 0x1C00C4E00 (NtUserConvertMemHandle.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F44C0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMUnlockDestroyObject @ 0x1C00C5804 (HMUnlockDestroyObject.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall ConvertMemHandle(void *Src, size_t Size, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx

  v3 = Size;
  v5 = (unsigned int)(Size + 20);
  if ( (unsigned int)v5 < 0x18 )
    v5 = 24LL;
  if ( (unsigned int)v5 < (unsigned int)Size )
    return 0LL;
  LOBYTE(a3) = 6;
  v6 = HMAllocObject(0LL, 0LL, a3, v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_DWORD *)(v6 + 16) = v3;
  memmove((void *)(v6 + 20), Src, v3);
  return *(_QWORD *)v7;
}
