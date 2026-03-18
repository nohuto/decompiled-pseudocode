/*
 * XREFs of ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0013E28
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C006FA64 (VidSchiReadGlobalConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetDriverVersion(DXGADAPTER *this)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *((_DWORD *)this + 486);
  switch ( v1 )
  {
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
  if ( (*((_DWORD *)this + 415) & 4) == 0 )
    return 1000LL;
  return result;
}
