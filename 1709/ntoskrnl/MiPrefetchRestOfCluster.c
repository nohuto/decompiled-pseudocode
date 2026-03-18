/*
 * XREFs of MiPrefetchRestOfCluster @ 0x140109954
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 */

void __fastcall MiPrefetchRestOfCluster(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  char EffectivePagePriorityThread; // al
  __int64 v11; // r10
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = a2;
  v4 = a1;
  if ( v2 < *(_QWORD *)(a2 + 16) )
  {
    v5 = *(_QWORD *)(a1 + 216);
    if ( v5 >= 0xFFFF800000000000uLL )
      MiGetSystemRegionType(*(_QWORD *)(a1 + 216));
    v6 = (unsigned __int64 *)(*(_QWORD *)(v3 + 8) + 16 * v2);
    v7 = (*(unsigned int *)(v4 + 180) + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v8 = *v6;
    if ( v7 >= *v6 )
    {
      v9 = v6[1];
      if ( v7 < v9 + v8 )
      {
        v12[0] = v7;
        v12[1] = v8 + v9 - v7;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
        MiPrefetchVirtualMemory(
          1LL,
          v12,
          v11,
          EffectivePagePriorityThread & 7 | (8 * (EffectivePagePriorityThread & 7 | 0x800u)));
      }
    }
  }
}
