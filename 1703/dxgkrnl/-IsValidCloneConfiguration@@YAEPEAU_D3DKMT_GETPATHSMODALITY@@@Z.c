/*
 * XREFs of ?IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01AAC94
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?IsValidCloneGroup@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C01AAD30 (-IsValidCloneGroup@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 */

unsigned __int8 __fastcall IsValidCloneConfiguration(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int i; // edx
  __int64 v4; // rax
  unsigned int v5; // edi

  if ( !a1 )
    return 0;
  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *((_QWORD *)a1 + 33 * v4 + 6) &= ~0x2000000000uLL )
    v4 = i++;
  v5 = 0;
  if ( *((_WORD *)a1 + 10) )
  {
    while ( (*((_QWORD *)a1 + 33 * v5 + 6) & 0x2000000000LL) != 0 || IsValidCloneGroup(a1, v5) )
    {
      if ( ++v5 >= *((unsigned __int16 *)a1 + 10) )
        return 1;
    }
    return 0;
  }
  return 1;
}
