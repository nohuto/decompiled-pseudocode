/*
 * XREFs of InvalidateWEFCOMPOSITEDDCEs @ 0x1C01C20F0
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00174B0 (xxxSystemTimerProc.c)
 * Callees:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01C1FF0 (FlushWEFCOMPOSITEDDCEBounds.c)
 */

__int64 InvalidateWEFCOMPOSITEDDCEs()
{
  __int64 v0; // rcx
  __int64 v1; // rbx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v0 = gpDispInfo;
  v1 = *(_QWORD *)(gpDispInfo + 16LL);
  if ( v1 )
  {
    do
    {
      if ( (*(_DWORD *)(v1 + 64) & 0x4400800) == 0
        && *(_QWORD *)(v1 + 16)
        && !(unsigned int)GreIsRendering(*(_QWORD *)(v1 + 8))
        && (*(_DWORD *)(v1 + 64) & 0x5000) == 0x5000
        && (*(_BYTE *)(*(_QWORD *)(v1 + 32) + 67LL) & 2) != 0 )
      {
        FlushWEFCOMPOSITEDDCEBounds(v1);
      }
      v1 = *(_QWORD *)v1;
    }
    while ( v1 );
    v0 = gpDispInfo;
  }
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v0 + 32LL));
}
