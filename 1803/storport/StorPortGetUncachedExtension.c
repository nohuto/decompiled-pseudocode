/*
 * XREFs of StorPortGetUncachedExtension @ 0x1C00307C0
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1C006A340 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x1C002CA20 (RaidDmaAllocateUncachedExtension.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C0033AC0 (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     RaidInitializeDma @ 0x1C00654C0 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C0065614 (RaidIsDmaInitialized.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rax
  int v4; // edi
  __int64 v7; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  int UncachedExtension; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  bool v18; // zf
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 - 16);
  v4 = 0x80000000;
  v19 = 0x80000000;
  v7 = *v3;
  if ( !*v3 )
    return 0LL;
  if ( !*(_DWORD *)(v7 + 744) )
  {
    if ( !(unsigned __int8)RaidIsDmaInitialized(v7 + 696)
      && (int)RaidInitializeDma(v9, *(_QWORD *)(v7 + 32), v7 + 304) < 0 )
    {
      return 0LL;
    }
    if ( !a2 )
      goto LABEL_28;
    if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
    {
      v4 = *(_DWORD *)(v7 + 4736);
      v19 = v4;
    }
    if ( *(_BYTE *)(a2 + 144) == 2 )
    {
      if ( *(_QWORD *)(v7 + 4368) < 0x100000000uLL )
        *(_QWORD *)(v7 + 4368) = -1LL;
      *(_QWORD *)(v7 + 4384) = 0x100000000LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 144) != 3 )
      {
        if ( *(_BYTE *)(a2 + 144) == 4 )
        {
          v10 = *(_QWORD *)(v7 + 4368);
          v11 = v10;
          if ( v10 < 0x100000000LL )
          {
            *(_QWORD *)(v7 + 4368) = -1LL;
            v10 = -1LL;
            v11 = -1LL;
          }
          v12 = v11;
          if ( HighestPhysicalAddress != -1 )
          {
            if ( (_DWORD)HighestPhysicalAddress )
            {
              if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL )
              {
                v13 = HighestPhysicalAddress & 0xFFFFFFFF00000000uLL;
                if ( v10 >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
                {
                  v12 = v13 - 1;
                  *(_QWORD *)(v7 + 4368) = v13 - 1;
                  v14 = (v13 - 1) & 0xFFFFFFFF00000000uLL;
                  if ( *(_QWORD *)(v7 + 4376) > v14 )
                    *(_QWORD *)(v7 + 4376) = v14;
                }
              }
            }
          }
          *(_QWORD *)(v7 + 4384) = 0x100000000LL;
          *(_QWORD *)(v7 + 4400) = v12;
          StorpUpdateUncachedExtensionAllocationRegion(v7, &v19);
          v4 = v19;
        }
        goto LABEL_28;
      }
      if ( *(_QWORD *)(v7 + 4368) < 0x100000000uLL )
        *(_QWORD *)(v7 + 4368) = -1LL;
      *(_QWORD *)(v7 + 4384) = 0LL;
    }
    *(_QWORD *)(v7 + 4400) = -1LL;
LABEL_28:
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v7 + 696,
                          a3,
                          *(_QWORD *)(v7 + 4376),
                          *(_QWORD *)(v7 + 4368),
                          *(_QWORD *)(v7 + 4384),
                          *(_DWORD *)(v7 + 4360),
                          v4,
                          v7 + 728);
    if ( UncachedExtension < 0 )
    {
      if ( v4 != 0x80000000 )
        UncachedExtension = RaidDmaAllocateUncachedExtension(
                              v7 + 696,
                              a3,
                              *(_QWORD *)(v7 + 4376),
                              *(_QWORD *)(v7 + 4368),
                              *(_QWORD *)(v7 + 4384),
                              *(_DWORD *)(v7 + 4360),
                              0x80000000,
                              v7 + 728);
      if ( UncachedExtension < 0 )
        return 0LL;
    }
    if ( *(_BYTE *)(a2 + 144) == 4 )
    {
      v16 = *(_QWORD *)(v7 + 736);
      v17 = v16 | 0xFFFFFFFFLL;
      v18 = *(_QWORD *)(v7 + 4376) == 0LL;
      *(_QWORD *)(v7 + 4392) = v16 & 0xFFFFFFFF00000000uLL;
      if ( v18 )
        v16 &= 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(v7 + 4400) = v17;
      *(_QWORD *)(v7 + 4376) = v16;
      *(_QWORD *)(v7 + 4368) = v17;
    }
  }
  return *(_QWORD *)(v7 + 728);
}
