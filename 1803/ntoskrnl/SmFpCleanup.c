/*
 * XREFs of SmFpCleanup @ 0x14009AD84
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140182C9C (SmFpPreAllocate.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A2A64 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     SmKmFreeMdlForLock @ 0x14009728C (SmKmFreeMdlForLock.c)
 *     SmAcquireReleaseCharges @ 0x140097750 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MmFreeMappingAddress @ 0x1405E1FA0 (MmFreeMappingAddress.c)
 */

void __fastcall SmFpCleanup(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 *v2; // rbp
  void **v3; // rsi
  void *v4; // rdi

  v1 = 0;
  v2 = (unsigned __int16 *)(a1 + 88);
  v3 = (void **)(a1 + 32);
  do
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( !*v3 )
        break;
      *v3 = *(void **)v4;
      if ( v1 < 5 )
      {
        if ( v1 == 2 )
        {
          SmKmFreeMdlForLock(*((unsigned int **)v4 + 1));
        }
        else if ( v1 == 3 )
        {
          SmAcquireReleaseCharges((unsigned __int64)*v2 << 12, 1, 1);
        }
        else
        {
          ExFreePoolWithTag(*((PVOID *)v4 + 1), 0);
        }
      }
      else
      {
        MmFreeMappingAddress(*((PVOID *)v4 + 1), 0x6D526D73u);
      }
      ExFreePoolWithTag(v4, 0);
    }
    ++v1;
    ++v3;
    ++v2;
  }
  while ( v1 < 6 );
}
