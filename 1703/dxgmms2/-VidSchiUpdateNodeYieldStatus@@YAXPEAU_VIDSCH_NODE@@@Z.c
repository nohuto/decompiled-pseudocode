/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0011AF4
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0008F20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C002787C (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C0011BC0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0011C88 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0011E64 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     Template_pqxxxx @ 0x1C0025380 (Template_pqxxxx.c)
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
  if ( (v3 & *((_DWORD *)a1 + 423)) != 0 )
  {
    v7 = *((_QWORD *)a1 + 240);
    if ( v7 )
    {
      v9 = v5.QuadPart - v7;
      v10 = *((_QWORD *)a1 + 241);
      if ( v9 < v10 )
      {
        *((_QWORD *)a1 + 240) = 0LL;
        *((_QWORD *)a1 + 241) = v10 - v9;
      }
      else
      {
        VidSchiStopNodeYield(a1);
      }
    }
    if ( *((_BYTE *)a1 + 1944) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqxxxx(
        v3 & *((_DWORD *)a1 + 423),
        v4,
        v6,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        v3 & *((_BYTE *)a1 + 1692),
        0,
        0);
  }
  else if ( !*((_QWORD *)a1 + 240) )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode(a1);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v5.QuadPart,
      (union _LARGE_INTEGER)v11.QuadPart,
      refreshed);
  }
}
