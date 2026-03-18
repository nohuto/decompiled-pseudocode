/*
 * XREFs of ?CheckAndRecordGlitch@CScheduleStatistics@@SAJPEBVCFrameInfo@@00AEB_K1PEA_NPEAI@Z @ 0x180143F78
 * Callers:
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800C47C0 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 */

__int64 __fastcall CScheduleStatistics::CheckAndRecordGlitch(
        const struct CFrameInfo *a1,
        const struct CFrameInfo *a2,
        const struct CFrameInfo *a3,
        const unsigned __int64 *a4,
        unsigned __int64 *a5,
        bool *a6,
        unsigned int *a7)
{
  unsigned int v7; // r11d
  bool v8; // bl
  unsigned int v9; // r10d
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // r10d
  unsigned int v13; // edx
  _DWORD *v14; // r8

  if ( *((_BYTE *)a1 + 648) && *((_BYTE *)a2 + 648) )
  {
    v7 = *((_DWORD *)a1 + 108);
    v8 = 0;
    v9 = *((_DWORD *)a1 + 41);
    if ( v7 > v9 )
    {
      if ( a3 )
      {
        v10 = *((_DWORD *)a3 + 108);
        if ( v10 )
        {
          v11 = v10 + 1;
          if ( v9 <= v11 )
            v9 = v11;
          if ( v9 >= v7 )
            v9 = *((_DWORD *)a1 + 108);
        }
      }
      v8 = 1;
      *a7 = v7 - v9;
    }
    v12 = *((_DWORD *)a2 + 164);
    v13 = 1;
    if ( v12 > 1 )
    {
      v14 = (_DWORD *)((char *)a1 + 168);
      do
      {
        if ( v13 >= 0x10 )
          break;
        if ( v14[67] > *v14 )
          v8 = 1;
        ++v13;
        ++v14;
      }
      while ( v13 < v12 );
    }
    if ( v8 )
      CScheduleStatistics::TraceGlitch(v12, a1, a4, a5);
    *a6 = v8;
  }
  return 0LL;
}
