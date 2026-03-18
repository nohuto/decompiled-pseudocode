/*
 * XREFs of ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01C6D14
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C01C6DB4 (-IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 */

unsigned __int8 __fastcall IsValidCloneConfiguration(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // edi

  if ( !a1 )
    return 0;
  LOWORD(v3) = *((_WORD *)a1 + 10);
  v4 = 0;
  if ( (_WORD)v3 )
  {
    do
    {
      v5 = v4++;
      *((_QWORD *)a1 + 34 * v5 + 6) &= ~0x2000000000uLL;
      v3 = *((unsigned __int16 *)a1 + 10);
    }
    while ( v4 < v3 );
  }
  v6 = 0;
  if ( (_WORD)v3 )
  {
    while ( (*((_QWORD *)a1 + 34 * v6 + 6) & 0x2000000000LL) != 0 || IsValidCloneGroup(a1, v6) )
    {
      if ( ++v6 >= *((unsigned __int16 *)a1 + 10) )
        return 1;
    }
    return 0;
  }
  return 1;
}
