/*
 * XREFs of MiCheckSecuredVad @ 0x1404D73E0
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x1400C2218 (MiUnmapLockedPagesInUserSpace.c)
 *     MiResetVirtualMemory @ 0x1400C9330 (MiResetVirtualMemory.c)
 *     MiFindPlaceholderVadToReplace @ 0x14026842C (MiFindPlaceholderVadToReplace.c)
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x14074D2C8 (MiCoalescePlaceholderAllocations.c)
 * Callees:
 *     MiComparePteProtections @ 0x1400B1DE0 (MiComparePteProtections.c)
 */

__int64 __fastcall MiCheckSecuredVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // r12
  unsigned int v10; // r14d
  __int64 *i; // rbx
  __int64 result; // rax
  int v13; // ecx
  char v14; // dl
  bool v15; // cc
  int v16; // r8d
  unsigned __int64 v17; // rcx

  v5 = 0;
  v6 = a2 + a3 - 1;
  if ( a4 >= 0x55 )
  {
    v10 = 0;
LABEL_3:
    for ( i = *(__int64 **)(a1 + 56); ; i = (__int64 *)*i )
    {
      if ( !i )
        return v5;
      if ( *((_DWORD *)i + 16) == 2 )
      {
        v13 = *((_DWORD *)i + 2);
        if ( ((v13 & 0x40) == 0 || a5 == 1) && a2 <= i[2] && v6 >= (i[1] & 0xFFFFFFFFFFFFF000uLL) )
        {
          if ( a4 >= 0x55 && (v13 & 8) != 0 )
            return 3221225541LL;
          if ( (v13 & 4) != 0 )
          {
            if ( a4 < 0x55 )
            {
              v17 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
              if ( (v17 == 2147352576 || v17 == qword_1403CB680 && qword_1403CB680)
                && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
              {
                return 3221225541LL;
              }
              result = MiComparePteProtections(a1, a2, v6, a4, 1);
              v5 = result;
              if ( (int)result < 0 )
                return result;
            }
          }
          else
          {
            if ( (v10 & 0xFFFFFFF8) == 0x10 )
              return 3221225541LL;
            v14 = MiReadWrite[v10 & 7];
            if ( (v13 & 1) != 0 )
            {
              v15 = v14 < 10;
            }
            else
            {
              if ( (v13 & 2) == 0 )
                continue;
              v15 = v14 < 11;
            }
            if ( v15 )
              return 3221225541LL;
          }
        }
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 48);
  if ( (v16 & 7) != 2 || (v16 & 0xF8) != 8 || (a4 & 2) == 0 )
  {
    v10 = a4;
    goto LABEL_3;
  }
  return 3221225541LL;
}
