/*
 * XREFs of ?TraceFrameVsyncDeadlines@CScheduleStatistics@@SAXIPEBVCFrameInfo@@@Z @ 0x180144058
 * Callers:
 *     ?CalculatePresentAndGlitchDeadlines@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C620 (-CalculatePresentAndGlitchDeadlines@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     Template_qNR0 @ 0x18013BC14 (Template_qNR0.c)
 */

void __fastcall CScheduleStatistics::TraceFrameVsyncDeadlines(unsigned int a1, const struct CFrameInfo *a2)
{
  char *v4; // rcx
  unsigned int v5; // r10d
  __int64 *v6; // r11
  int *v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  _BYTE v10[4]; // [rsp+30h] [rbp-118h] BYREF
  char v11; // [rsp+34h] [rbp-114h] BYREF

  memset_0(v10, 0, 0x100uLL);
  v5 = 0;
  if ( a1 )
  {
    v4 = &v11;
    v6 = (__int64 *)((char *)a2 + 520);
    v7 = (int *)((char *)a2 + 164);
    do
    {
      if ( v5 >= 0x10 )
        break;
      ++v5;
      *((_DWORD *)v4 - 1) = *(v7 - 16);
      v8 = *v7++;
      *(_DWORD *)v4 = v8;
      v9 = *v6++;
      *(_QWORD *)(v4 + 4) = v9;
      v4 += 16;
    }
    while ( v5 < a1 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0((__int64)v4, &EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, a1, 16, (__int64)v10);
}
