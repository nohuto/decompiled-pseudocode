/*
 * XREFs of KdpSysReadControlSpace @ 0x1408064E8
 * Callers:
 *     KdSystemDebugControl @ 0x140740980 (KdSystemDebugControl.c)
 *     KdpReadControlSpace @ 0x1408042F0 (KdpReadControlSpace.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x140806778 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysReadControlSpace(ULONG a1, unsigned __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rdi
  int v8; // ebx

  v5 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  if ( !KiProcessorBlock[v5] )
    return 3221225473LL;
  if ( a2 > 3 )
    return 3221225473LL;
  if ( (_DWORD)a2 && (v8 = a2 - 1) != 0 && (unsigned int)(v8 - 1) > 1 )
    return 3221225473LL;
  else
    return KdpCopyMemoryChunks(a3, 5, (__int64)a5);
}
