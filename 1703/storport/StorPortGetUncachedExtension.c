/*
 * XREFs of StorPortGetUncachedExtension @ 0x1C00199A0
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1C00672E0 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     RaidIsDmaInitialized @ 0x1C00605BC (RaidIsDmaInitialized.c)
 *     StorAllocateContiguousMemory @ 0x1C00605D0 (StorAllocateContiguousMemory.c)
 *     RaidInitializeDma @ 0x1C006064C (RaidInitializeDma.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  int ContiguousMemory; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf

  v5 = 0x80000000;
  v6 = **(_QWORD **)(a1 - 16);
  if ( !v6 )
    return 0LL;
  if ( *(_DWORD *)(v6 + 744) )
    return *(_QWORD *)(v6 + 728);
  if ( !(unsigned __int8)RaidIsDmaInitialized(v6 + 696)
    && (int)RaidInitializeDma(v7, *(_QWORD *)(v6 + 32), v6 + 304) < 0 )
  {
    return 0LL;
  }
  if ( a2 )
  {
    switch ( *(_BYTE *)(a2 + 144) )
    {
      case 2:
        if ( *(_QWORD *)(v6 + 4368) < 0x100000000uLL )
          *(_QWORD *)(v6 + 4368) = -1LL;
        *(_QWORD *)(v6 + 4400) = -1LL;
        break;
      case 3:
        if ( *(_QWORD *)(v6 + 4368) < 0x100000000uLL )
          *(_QWORD *)(v6 + 4368) = -1LL;
        *(_QWORD *)(v6 + 4384) = 0LL;
        *(_QWORD *)(v6 + 4400) = -1LL;
        goto LABEL_9;
      case 4:
        if ( *(_QWORD *)(v6 + 4368) < 0x100000000uLL )
          *(_QWORD *)(v6 + 4368) = -1LL;
        if ( HighestPhysicalAddress != -1 )
        {
          if ( (_DWORD)HighestPhysicalAddress )
          {
            if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL
              && *(_QWORD *)(v6 + 4368) >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
            {
              v11 = (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) - 1;
              *(_QWORD *)(v6 + 4368) = v11;
              v12 = v11 & 0xFFFFFFFF00000000uLL;
              if ( *(_QWORD *)(v6 + 4376) > v12 )
                *(_QWORD *)(v6 + 4376) = v12;
            }
          }
        }
        *(_QWORD *)(v6 + 4400) = *(_QWORD *)(v6 + 4368);
        break;
      default:
LABEL_9:
        if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
          v5 = *(_DWORD *)(v6 + 4736);
        goto LABEL_11;
    }
    *(_QWORD *)(v6 + 4384) = 0x100000000LL;
    goto LABEL_9;
  }
LABEL_11:
  v8 = *(_QWORD *)(v6 + 4368);
  if ( v6 == -696 )
  {
    ContiguousMemory = -1073741811;
  }
  else
  {
    if ( !v8 )
    {
      LODWORD(v8) = -1;
      if ( *(_DWORD *)(v6 + 720) == 3 )
        LODWORD(v8) = -1;
    }
    ContiguousMemory = StorAllocateContiguousMemory(
                         *(_DWORD *)(v6 + 4360),
                         a3,
                         *(_QWORD *)(v6 + 4376),
                         v8,
                         *(_QWORD *)(v6 + 4384),
                         *(_DWORD *)(v6 + 4360),
                         v5,
                         v6 + 728);
    if ( ContiguousMemory >= 0 )
      goto LABEL_14;
  }
  if ( v5 != 0x80000000 )
  {
    v13 = *(_QWORD *)(v6 + 4368);
    if ( v6 == -696 )
      return 0LL;
    if ( !v13 )
    {
      LODWORD(v13) = -1;
      if ( *(_DWORD *)(v6 + 720) == 3 )
        LODWORD(v13) = -1;
    }
    ContiguousMemory = StorAllocateContiguousMemory(
                         *(_DWORD *)(v6 + 4360),
                         a3,
                         *(_QWORD *)(v6 + 4376),
                         v13,
                         *(_QWORD *)(v6 + 4384),
                         *(_DWORD *)(v6 + 4360),
                         0x80000000,
                         v6 + 728);
  }
  if ( ContiguousMemory >= 0 )
  {
LABEL_14:
    if ( *(_BYTE *)(a2 + 144) == 4 )
    {
      v14 = *(_QWORD *)(v6 + 736);
      v15 = v14 & 0xFFFFFFFF00000000uLL;
      v16 = v14 | 0xFFFFFFFF;
      v17 = *(_QWORD *)(v6 + 4376) == 0LL;
      *(_QWORD *)(v6 + 4392) = v14 & 0xFFFFFFFF00000000uLL;
      if ( !v17 )
        v15 = v14;
      *(_QWORD *)(v6 + 4400) = v16;
      *(_QWORD *)(v6 + 4376) = v15;
      *(_QWORD *)(v6 + 4368) = v16;
    }
    return *(_QWORD *)(v6 + 728);
  }
  return 0LL;
}
