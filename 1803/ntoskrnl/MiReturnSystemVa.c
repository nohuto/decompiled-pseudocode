/*
 * XREFs of MiReturnSystemVa @ 0x140048F2C
 * Callers:
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     MiReturnSystemPtes @ 0x14004A1E8 (MiReturnSystemPtes.c)
 *     MiExpandPtes @ 0x14004A560 (MiExpandPtes.c)
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     MiMapWithLargePages @ 0x140177EDC (MiMapWithLargePages.c)
 *     MiDeleteBootRange @ 0x140178A94 (MiDeleteBootRange.c)
 *     MiExpandSpecialPool @ 0x14025C0AC (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x14025C410 (MiRemoveSpecialPoolRange.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiUnmapLargePages @ 0x140268FF4 (MiUnmapLargePages.c)
 *     MiReleaseDriverPtes @ 0x1405F6694 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1405F6850 (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x14089D6E4 (MiMapBBTMemory.c)
 *     MiFreeBootDriverPage @ 0x1408ADE54 (MiFreeBootDriverPage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiMakeSystemRangeAvailable @ 0x140049550 (MiMakeSystemRangeAvailable.c)
 *     MiDeleteSystemPageTables @ 0x14004975C (MiDeleteSystemPageTables.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rsi
  int AnyMultiplexedVm; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // rcx

  v4 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v6 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 < v6 )
  {
    v7 = (__int64)(v4 << 25) >> 16;
    v8 = ((__int64)(v6 << 25) >> 16) - v7;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
    if ( a3 == (_DWORD)v12 )
    {
      AnyMultiplexedVm = MiGetSessionVm(v11, v10, v12);
      goto LABEL_5;
    }
    v15 = 3LL;
    if ( a3 != 3 )
    {
      if ( a3 <= 5 )
      {
LABEL_5:
        MiDeleteSystemPageTables(AnyMultiplexedVm, a3, v7, v10 - 1, v12, v14);
        return MiMakeSystemRangeAvailable(v7, v8);
      }
      if ( a3 <= 7 )
      {
        v15 = v13;
        goto LABEL_9;
      }
      if ( a3 == 9 )
      {
LABEL_9:
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(v15);
        goto LABEL_5;
      }
      if ( a3 != 12 )
      {
        if ( a3 == 8 )
        {
          v15 = 0LL;
        }
        else if ( a3 != 14 )
        {
          if ( a3 != 15 )
            goto LABEL_5;
          v15 = 4LL;
        }
        goto LABEL_9;
      }
    }
    v15 = (unsigned int)v12;
    goto LABEL_9;
  }
  return result;
}
