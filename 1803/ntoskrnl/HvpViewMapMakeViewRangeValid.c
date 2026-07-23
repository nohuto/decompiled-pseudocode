/*
 * XREFs of HvpViewMapMakeViewRangeValid @ 0x140497274
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140496F3C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x140566FA8 (HvpViewMapExtendStorage.c)
 * Callees:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140006C4C (CmSiPrefetchVirtualMemoryRange.c)
 *     CmSiProtectViewOfSection @ 0x1400719A8 (CmSiProtectViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140512FBC (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeValid(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  SIZE_T v5; // r15
  void *v6; // r14
  SIZE_T NewAccessProtection; // rcx
  NTSTATUS v11; // ebp
  __int64 i; // r8
  unsigned __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rax
  int v17; // eax
  SIZE_T v18; // rcx
  void **v19; // rdx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = a4 - a3;
  v6 = (void *)(a3 + a2[7] - a2[3]);
  NewAccessProtection = (*(_DWORD *)(a1 + 32) & 2) != 0 ? 8 : 2;
  v11 = CmSiProtectViewOfSection(
          NewAccessProtection,
          *(void ***)(a1 + 24),
          v6,
          a4 - a3,
          NewAccessProtection,
          (ULONG *)&v20);
  if ( v11 >= 0 )
  {
    CmSiPrefetchVirtualMemoryRange(*(void ***)(a1 + 24), v6, v5);
    if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
    {
      v17 = HvpViewMapTouchPages(v6, v5);
      v19 = *(void ***)(a1 + 24);
      v11 = v17;
      if ( v17 < 0 )
      {
        CmSiProtectViewOfSection(v18, v19, v6, v5, 0x80000001, (ULONG *)&v20);
        return (unsigned int)v11;
      }
      CmSiProtectViewOfSection(v18, v19, v6, v5, 2u, (ULONG *)&v20);
    }
    for ( i = a3; i < a4; i += 4096LL )
    {
      v13 = (unsigned __int64)(i - a2[3]) >> 12;
      v14 = *((_BYTE *)a2 + v13 + 64) | 1;
      *((_BYTE *)a2 + v13 + 64) = v14;
      if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
        *((_BYTE *)a2 + v13 + 64) = v14 | 4;
    }
    v15 = a2[5];
    if ( v15 || a2[6] )
    {
      if ( v15 == a4 )
      {
        a2[5] = a3;
        return 0;
      }
      if ( a2[6] != a3 )
        return 0;
    }
    else
    {
      a2[5] = a3;
    }
    a2[6] = a4;
    return 0;
  }
  return (unsigned int)v11;
}
