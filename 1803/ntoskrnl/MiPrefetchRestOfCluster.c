/*
 * XREFs of MiPrefetchRestOfCluster @ 0x1400CFC78
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

void __fastcall MiPrefetchRestOfCluster(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r11
  unsigned __int64 v4; // r10
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  char EffectivePagePriorityThread; // al
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[3];
  v3 = a1;
  if ( v2 < a2[2] )
  {
    v4 = *(_QWORD *)(a1 + 216);
    if ( v4 >= 0xFFFF800000000000uLL )
      MiGetSystemRegionType(*(_QWORD *)(a1 + 216));
    v5 = (unsigned __int64 *)(a2[1] + 16 * v2);
    v6 = (*(unsigned int *)(v3 + 180) + v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v7 = *v5;
    if ( v6 >= *v5 )
    {
      v8 = v5[1];
      if ( v6 < v8 + v7 )
      {
        v11[0] = v6;
        v11[1] = v7 + v8 - v6;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
        MiPrefetchVirtualMemory(
          1uLL,
          (__int64)v11,
          v10,
          EffectivePagePriorityThread & 7 | (8 * (EffectivePagePriorityThread & 7 | 0x800)));
      }
    }
  }
}
