/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800A8A34
 * Callers:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180046B30 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083B70 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800A8A9C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1800C9180;
  if ( !(_BYTE)word_1800C9180 )
    return 0;
  v1 = HIBYTE(word_1800C9180);
  v2 = 1;
  if ( HIBYTE(word_1800C9180) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1800C9180, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1800C9180);
      v0 = word_1800C9180;
    }
    else
    {
      v0 = 1;
      word_1800C9180 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
