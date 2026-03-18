/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x140008930
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1400014F0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x1400023B0 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140007D90 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x1400080A0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140008994 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl

  v0 = word_14000F254;
  if ( !(_BYTE)word_14000F254 )
    return 0LL;
  v1 = HIBYTE(word_14000F254);
  if ( HIBYTE(word_14000F254) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_14000F254, 2u, 0LL) < 0 )
    {
      word_14000F254 = 257;
      return 0LL;
    }
    v1 = HIBYTE(word_14000F254);
    v0 = word_14000F254;
  }
  return v0 && !v1;
}
