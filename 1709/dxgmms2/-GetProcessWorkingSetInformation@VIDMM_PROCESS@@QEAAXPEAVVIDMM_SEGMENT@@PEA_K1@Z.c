/*
 * XREFs of ?GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z @ 0x1C00A1EA8
 * Callers:
 *     ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C0022818 (-QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS::GetProcessWorkingSetInformation(
        VIDMM_PROCESS *this,
        struct VIDMM_SEGMENT *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  if ( (*((_DWORD *)this + 12) & 1) != 0 )
  {
    *a3 = *((_QWORD *)a2 + 13);
    v5 = *((_QWORD *)a2 + 14);
LABEL_8:
    *a4 = v5;
    return;
  }
  v6 = *((unsigned int *)this + 13);
  if ( (_DWORD)v6 )
    *a3 = 100LL * *((_QWORD *)a2 + 6) / v6;
  else
    *a3 = 0LL;
  v7 = *((unsigned int *)this + 14);
  if ( (_DWORD)v7 )
  {
    v5 = 100LL * *((_QWORD *)a2 + 6) / v7;
    goto LABEL_8;
  }
  *a4 = 0LL;
}
