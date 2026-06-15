/*
 * XREFs of ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14000B4D0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000C080 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400110C0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x1400303E4 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::SetHandle(CConnectionInstance *this, __int64 a2)
{
  __int64 result; // rax

  if ( *((_QWORD *)this + 1) != -1LL && a2 != -1 )
    return 2147942406LL;
  result = 0LL;
  *((_QWORD *)this + 1) = a2;
  return result;
}
