/*
 * XREFs of StorPortGetUncachedExtension @ 0x1C0018E80
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1C006B340 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x1C0018FB8 (RaidDmaAllocateUncachedExtension.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C003638C (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     RaidIsDmaInitialized @ 0x1C0063234 (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C00632C8 (RaidInitializeDma.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rax
  unsigned int v4; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  int UncachedExtension; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 - 16);
  v4 = 0x80000000;
  v18 = 0x80000000;
  v7 = *v3;
  if ( *v3 )
  {
    if ( *(_DWORD *)(v7 + 744) )
      return *(_QWORD *)(v7 + 728);
    if ( (unsigned __int8)RaidIsDmaInitialized(v7 + 696)
      || (int)RaidInitializeDma(v8, *(_QWORD *)(v7 + 32), v7 + 304) >= 0 )
    {
      if ( !a2 )
        goto LABEL_11;
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v7 + 4736);
        v18 = v4;
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
            if ( *(_QWORD *)(v7 + 4368) < 0x100000000uLL )
              *(_QWORD *)(v7 + 4368) = -1LL;
            if ( HighestPhysicalAddress != -1 )
            {
              if ( (_DWORD)HighestPhysicalAddress )
              {
                if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL
                  && *(_QWORD *)(v7 + 4368) >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
                {
                  v11 = (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) - 1;
                  *(_QWORD *)(v7 + 4368) = v11;
                  v12 = v11 & 0xFFFFFFFF00000000uLL;
                  if ( *(_QWORD *)(v7 + 4376) > v12 )
                    *(_QWORD *)(v7 + 4376) = v12;
                }
              }
            }
            v13 = *(_QWORD *)(v7 + 4368);
            *(_QWORD *)(v7 + 4384) = 0x100000000LL;
            *(_QWORD *)(v7 + 4400) = v13;
            StorpUpdateUncachedExtensionAllocationRegion(v7, &v18);
            v4 = v18;
          }
LABEL_11:
          UncachedExtension = RaidDmaAllocateUncachedExtension(
                                (int)v7 + 696,
                                a3,
                                *(_QWORD *)(v7 + 4376),
                                *(_QWORD *)(v7 + 4368),
                                *(_QWORD *)(v7 + 4384),
                                *(_DWORD *)(v7 + 4360),
                                v4,
                                v7 + 728);
          if ( UncachedExtension >= 0 )
            goto LABEL_12;
          if ( v4 != 0x80000000 )
            UncachedExtension = RaidDmaAllocateUncachedExtension(
                                  (int)v7 + 696,
                                  a3,
                                  *(_QWORD *)(v7 + 4376),
                                  *(_QWORD *)(v7 + 4368),
                                  *(_QWORD *)(v7 + 4384),
                                  *(_DWORD *)(v7 + 4360),
                                  0x80000000,
                                  v7 + 728);
          if ( UncachedExtension >= 0 )
          {
LABEL_12:
            if ( *(_BYTE *)(a2 + 144) == 4 )
            {
              v14 = *(_QWORD *)(v7 + 736);
              v15 = v14 & 0xFFFFFFFF00000000uLL;
              v16 = v14 | 0xFFFFFFFF;
              v17 = *(_QWORD *)(v7 + 4376) == 0LL;
              *(_QWORD *)(v7 + 4392) = v14 & 0xFFFFFFFF00000000uLL;
              if ( !v17 )
                v15 = v14;
              *(_QWORD *)(v7 + 4400) = v16;
              *(_QWORD *)(v7 + 4376) = v15;
              *(_QWORD *)(v7 + 4368) = v16;
            }
            return *(_QWORD *)(v7 + 728);
          }
          return 0LL;
        }
        if ( *(_QWORD *)(v7 + 4368) < 0x100000000uLL )
          *(_QWORD *)(v7 + 4368) = -1LL;
        *(_QWORD *)(v7 + 4384) = 0LL;
      }
      *(_QWORD *)(v7 + 4400) = -1LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
