/*
 * XREFs of MonotonicTick @ 0x1C01A0938
 * Callers:
 *     ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8 (-ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     UnqueueMouseEvent @ 0x1C01A0E54 (UnqueueMouseEvent.c)
 *     StartDeviceRead @ 0x1C01BA4BC (StartDeviceRead.c)
 * Callees:
 *     <none>
 */

__int64 MonotonicTick()
{
  unsigned __int64 v0; // rcx
  __int64 result; // rax

  v0 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  if ( (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64 <= (unsigned __int64)qword_1C03388A8 )
  {
    return ++qword_1C03388A8;
  }
  else
  {
    result = (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    qword_1C03388A8 = result;
  }
  return result;
}
