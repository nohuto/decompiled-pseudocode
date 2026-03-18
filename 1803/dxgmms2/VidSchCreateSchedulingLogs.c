/*
 * XREFs of VidSchCreateSchedulingLogs @ 0x1C007F4E8
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007E714 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0004B24 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 */

__int64 __fastcall VidSchCreateSchedulingLogs(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(a1 + 16)) < 2400 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_DWORD *)(a1 + 64) )
    return 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 8 * v2 + 440);
    if ( (*(_DWORD *)(v3 + 12) & 2) != 0 )
    {
      result = VidSchiCreateNodeSchedulingLog(v3, 2048LL);
      if ( (int)result < 0 )
        break;
    }
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 64) )
      return 0LL;
  }
  return result;
}
