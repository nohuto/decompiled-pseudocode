/*
 * XREFs of IsFmtBlocked @ 0x1C01F4974
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     CountNumClipFormatForIL @ 0x1C00C67E0 (CountNumClipFormatForIL.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00CD2DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01E6F00 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F49A8 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( !LODWORD(WPP_MAIN_CB.Dpc.DpcData) )
    return 1LL;
  while ( a1 != *(_DWORD *)(gpClipFormatExceptionList + 4 * v1) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= LODWORD(WPP_MAIN_CB.Dpc.DpcData) )
      return 1LL;
  }
  return 0LL;
}
