/*
 * XREFs of CitDisplayPowerChange @ 0x1C00A3738
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DCBF4 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C001C790 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084ACC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitDisplayPowerChange(__int64 a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  int v3; // ecx
  unsigned __int64 v4; // rdi
  struct _CIT_IMPACT_CONTEXT *v5; // rcx
  struct tagPROCESSINFO *v6; // r8

  v1 = qword_1C0193750;
  if ( qword_1C0193750 )
  {
    v3 = *(_DWORD *)(a1 + 64);
    if ( (*((_DWORD *)qword_1C0193750 + 46) == 0) == (v3 == 0) )
    {
      *((_DWORD *)qword_1C0193750 + 46) = v3;
    }
    else
    {
      v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !*(_DWORD *)(a1 + 64) )
      {
        CitpSetForegroundProcess(qword_1C0193750, v4, 0LL, 0LL, 0LL, 0LL);
        CitpContextFlush(v1, v4);
      }
      *((_DWORD *)v1 + 46) = *(_DWORD *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 64) && CitpAllowForegroundProcess(v1) )
      {
        v6 = (struct tagPROCESSINFO *)*((_QWORD *)v1 + 16);
        if ( v6 )
          CitpSetForegroundProcess(v5, v4, v6, 0LL, 0LL, 0LL);
      }
    }
  }
}
