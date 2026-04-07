/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800A1364
 * Callers:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800134B0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082D00 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800A13CC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1800C0170;
  if ( !(_BYTE)word_1800C0170 )
    return 0;
  v1 = HIBYTE(word_1800C0170);
  v2 = 1;
  if ( HIBYTE(word_1800C0170) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1800C0170, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1800C0170);
      v0 = word_1800C0170;
    }
    else
    {
      v0 = 1;
      word_1800C0170 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
