/*
 * XREFs of ExInitializeSystemLookasideList @ 0x14040F89C
 * Callers:
 *     ExInitializeProcessor @ 0x14015412C (ExInitializeProcessor.c)
 *     ExInitPoolLookasidePointers @ 0x14040F760 (ExInitPoolLookasidePointers.c)
 *     CcInitializeProcessor @ 0x14059E748 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14059E7F4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14059E91C (IoInitializeProcessor.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 */

__int64 __fastcall ExInitializeSystemLookasideList(__int64 a1, int a2, int a3, int a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rcx

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_DWORD *)(a1 + 36) = a2;
  *(_QWORD *)(a1 + 48) = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 56) = ExFreePool;
  *(_WORD *)(a1 + 16) = 2;
  *(_WORD *)(a1 + 18) = a5;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  result = a6;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 44) = a3;
  v11 = (_QWORD *)(a1 + 64);
  v12 = *(_QWORD **)(a6 + 8);
  if ( *v12 != a6 )
    __fastfail(3u);
  *v11 = a6;
  v11[1] = v12;
  *v12 = v11;
  *(_QWORD *)(a6 + 8) = v11;
  return result;
}
