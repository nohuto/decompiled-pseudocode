/*
 * XREFs of ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0004B24
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0068CC4 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     VidSchInitializeAdapter @ 0x1C007B520 (VidSchInitializeAdapter.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C007C368 (VidSchiReadGlobalConfiguration.c)
 *     VidSchCreateSchedulingLogs @ 0x1C007F4E8 (VidSchCreateSchedulingLogs.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C009E970 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetDriverVersion(DXGADAPTER *this)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *((_DWORD *)this + 526);
  switch ( v1 )
  {
    case 9216:
      return 2400LL;
    case 8960:
      return 2300LL;
    case 8704:
      return 2200LL;
    case 8448:
      return 2100LL;
    case 8192:
      return 2000LL;
  }
  if ( v1 == 4864 || *((_QWORD *)this + 88) )
    return 1300LL;
  if ( v1 == 4608 )
    return 1200LL;
  if ( !*((_QWORD *)this + 84) )
    return 1000LL;
  if ( !*((_QWORD *)this + 83) )
    return 1000LL;
  result = 1105LL;
  if ( (*((_DWORD *)this + 455) & 4) == 0 )
    return 1000LL;
  return result;
}
