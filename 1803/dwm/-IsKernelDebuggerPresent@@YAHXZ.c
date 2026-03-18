/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x140008328
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1400015E0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x1400023F0 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140007760 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140007A70 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000838C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl

  v0 = word_14000E194;
  if ( !(_BYTE)word_14000E194 )
    return 0LL;
  v1 = HIBYTE(word_14000E194);
  if ( HIBYTE(word_14000E194) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_14000E194, 2u, 0LL) < 0 )
    {
      word_14000E194 = 257;
      return 0LL;
    }
    v1 = HIBYTE(word_14000E194);
    v0 = word_14000E194;
  }
  return v0 && !v1;
}
