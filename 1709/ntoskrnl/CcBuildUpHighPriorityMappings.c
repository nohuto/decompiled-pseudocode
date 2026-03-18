/*
 * XREFs of CcBuildUpHighPriorityMappings @ 0x1401E14D0
 * Callers:
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 * Callees:
 *     MmReserveViewInSystemCache @ 0x1405CB5E4 (MmReserveViewInSystemCache.c)
 */

__int64 __fastcall CcBuildUpHighPriorityMappings(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 *v8; // r14

  v2 = *(_DWORD *)(a1 + 856);
  result = (unsigned int)CcMinimumFreeHighPriorityVacbs;
  if ( v2 < CcMinimumFreeHighPriorityVacbs )
  {
    v6 = CcMinimumFreeHighPriorityVacbs - v2;
    if ( CcMinimumFreeHighPriorityVacbs - v2 <= CcMinimumFreeHighPriorityVacbs )
    {
      v7 = 0;
      if ( v6 )
      {
        v8 = (__int64 *)(a2 + 16);
        do
        {
          if ( v7 >= 0xCCC )
            break;
          result = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
          *v8 = result;
          if ( !result )
            break;
          ++*(_DWORD *)(a2 + 4);
          ++v7;
          v8 += 5;
        }
        while ( v7 < v6 );
      }
    }
  }
  return result;
}
