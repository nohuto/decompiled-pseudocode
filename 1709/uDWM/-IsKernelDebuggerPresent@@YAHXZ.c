/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18009FAE8
 * Callers:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180043F80 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007A7F0 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009FB50 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1800BE140;
  if ( !(_BYTE)word_1800BE140 )
    return 0;
  v1 = HIBYTE(word_1800BE140);
  v2 = 1;
  if ( HIBYTE(word_1800BE140) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1800BE140, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1800BE140);
      v0 = word_1800BE140;
    }
    else
    {
      v0 = 1;
      word_1800BE140 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
