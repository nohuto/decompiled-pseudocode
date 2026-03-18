/*
 * XREFs of FreeDdeXact @ 0x1C01E58A0
 * Callers:
 *     FindQMsg @ 0x1C0052B70 (FindQMsg.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E4660 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     GreDeleteServerMetaFile @ 0x1C0139B48 (GreDeleteServerMetaFile.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C01E46FC (-RemovePublicObject@@YAHIPEAX@Z.c)
 */

__int64 __fastcall FreeDdeXact(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 16) & 0x24) != 0 )
        GreDeleteServerMetaFile(*(_QWORD *)(v4 + 48), v3);
      if ( (*(_DWORD *)(a1 + 64) & 0x2000) != 0 )
      {
        RemovePublicObject(*(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 74LL), *(void **)(*(_QWORD *)(a1 + 56) + 48LL));
        *(_DWORD *)(a1 + 64) &= ~0x2000u;
      }
      Win32FreePool(*(_QWORD *)(a1 + 56));
    }
    return HMFreeObject(a1);
  }
  return result;
}
