/*
 * XREFs of CcBuildUpHighPriorityMappings @ 0x14015E4F4
 * Callers:
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcInitializeVacbs @ 0x1408191EC (CcInitializeVacbs.c)
 * Callees:
 *     MmReserveViewInSystemCache @ 0x1405BD89C (MmReserveViewInSystemCache.c)
 */

__int64 __fastcall CcBuildUpHighPriorityMappings(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 *v5; // r14

  result = (unsigned int)CcMinimumFreeHighPriorityVacbs;
  if ( CcNumberOfFreeHighPriorityVacbs < (unsigned int)CcMinimumFreeHighPriorityVacbs )
  {
    v3 = CcMinimumFreeHighPriorityVacbs - CcNumberOfFreeHighPriorityVacbs;
    if ( CcMinimumFreeHighPriorityVacbs - CcNumberOfFreeHighPriorityVacbs <= (unsigned int)CcMinimumFreeHighPriorityVacbs )
    {
      v4 = 0;
      if ( v3 )
      {
        v5 = (__int64 *)(a1 + 16);
        do
        {
          if ( v4 >= 0xCCC )
            break;
          result = MmReserveViewInSystemCache();
          *v5 = result;
          if ( !result )
            break;
          ++*(_DWORD *)(a1 + 4);
          ++v4;
          v5 += 5;
        }
        while ( v4 < v3 );
      }
    }
  }
  return result;
}
