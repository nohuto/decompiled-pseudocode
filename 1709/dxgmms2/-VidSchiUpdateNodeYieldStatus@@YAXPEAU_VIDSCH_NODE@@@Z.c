/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001343C
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C0029BF0 (VidSchiSelectContext.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00131E0 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C00134EC (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C00135B4 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     McTemplateK0pqxxxx @ 0x1C00273DC (McTemplateK0pqxxxx.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // r14
  int v3; // ebp
  LARGE_INTEGER v4; // rdx
  LARGE_INTEGER v5; // rsi
  LARGE_INTEGER v6; // r8
  unsigned int refreshed; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  union _LARGE_INTEGER v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = ~((1 << (*(_DWORD *)(v1 + 176) + 1)) - 1);
  v5 = KeQueryPerformanceCounter(&v11);
  if ( (v3 & *((_DWORD *)a1 + 427)) != 0 )
  {
    v8 = *((_QWORD *)a1 + 242);
    if ( v8 )
    {
      v9 = v5.QuadPart - v8;
      v10 = *((_QWORD *)a1 + 243);
      if ( v9 < v10 )
      {
        *((_QWORD *)a1 + 242) = 0LL;
        *((_QWORD *)a1 + 243) = v10 - v9;
      }
      else
      {
        VidSchiStopNodeYield((unsigned __int64)a1, v4.QuadPart, v6.QuadPart);
      }
    }
    if ( *((_BYTE *)a1 + 1960) && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxxxx(
        v3 & *((_DWORD *)a1 + 427),
        v4.LowPart,
        v6.LowPart,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        v3 & *((_BYTE *)a1 + 1708),
        0,
        0);
  }
  else if ( !*((_QWORD *)a1 + 242) )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode(a1);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v5.QuadPart,
      (union _LARGE_INTEGER)v11.QuadPart,
      refreshed);
  }
}
