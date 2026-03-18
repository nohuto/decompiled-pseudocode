/*
 * XREFs of MiPrefetchRestOfCluster @ 0x1400374F4
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 */

void __fastcall MiPrefetchRestOfCluster(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  unsigned __int64 *v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  char EffectivePagePriorityThread; // al
  __int64 v11; // r8
  unsigned __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v3 = a2[3];
  v4 = a1;
  if ( v3 < a2[2] )
  {
    v5 = *(_QWORD *)(a1 + 216);
    if ( v5 >= 0xFFFF800000000000uLL && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 216)) != 1 )
      a3 = 1LL;
    v6 = (unsigned __int64 *)(a2[1] + 16 * v3);
    v7 = (*(unsigned int *)(v4 + 180) + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v8 = *v6;
    if ( v7 >= *v6 )
    {
      v9 = v6[1];
      if ( v7 < v9 + v8 )
      {
        v12 = v7;
        v13 = v8 + v9 - v7;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v13, a3, v6);
        MiPrefetchVirtualMemory(
          1LL,
          &v12,
          v11,
          EffectivePagePriorityThread & 7 | (8 * (EffectivePagePriorityThread & 7 | 0x800u)));
      }
    }
  }
}
