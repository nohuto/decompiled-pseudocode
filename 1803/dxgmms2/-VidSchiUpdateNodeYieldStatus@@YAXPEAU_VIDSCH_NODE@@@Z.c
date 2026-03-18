/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00035B0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C002CAFC (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C0003680 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0003748 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013280 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     McTemplateK0pqxxxx @ 0x1C002A08C (McTemplateK0pqxxxx.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // r14
  int v3; // ebp
  int v4; // edx
  LARGE_INTEGER v5; // rsi
  int v6; // r8d
  __int64 v7; // rax
  unsigned int refreshed; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  union _LARGE_INTEGER v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = ~((1 << (*(_DWORD *)(v1 + 176) + 1)) - 1);
  v5 = KeQueryPerformanceCounter(&v11);
  v7 = *((_QWORD *)a1 + 246);
  if ( (v3 & *((_DWORD *)a1 + 435)) != 0 )
  {
    if ( v7 )
    {
      v9 = v5.QuadPart - v7;
      v10 = *((_QWORD *)a1 + 247);
      if ( v9 >= v10 )
      {
        VidSchiStopNodeYield(a1);
      }
      else
      {
        *((_QWORD *)a1 + 246) = 0LL;
        *((_QWORD *)a1 + 247) = v10 - v9;
      }
    }
    if ( *((_BYTE *)a1 + 1992) && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxxxx(
        *((_DWORD *)a1 + 435) & v3,
        v4,
        v6,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        *((_BYTE *)a1 + 1740) & v3,
        0,
        0);
  }
  else if ( !v7 )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode(a1);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v5.QuadPart,
      (union _LARGE_INTEGER)v11.QuadPart,
      refreshed);
  }
}
