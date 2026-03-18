/*
 * XREFs of MmAllocatePoolMemory @ 0x140025B30
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiAllocatePoolPages @ 0x1400D85D8 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     RtlpHpEnvAllocVA @ 0x1402975D8 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x1400499C0 (MiObtainDynamicVa.c)
 *     MiObtainSessionVa @ 0x1400CB090 (MiObtainSessionVa.c)
 */

__int64 __fastcall MmAllocatePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v6; // eax
  unsigned int v7; // r14d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v12; // ebp
  int v13; // esi
  ULONG_PTR v15; // r9
  __int64 v16; // rax

  v6 = a3 & 0x7F;
  v7 = v6;
  if ( (a3 & 0x7F) == 0 || v6 > (unsigned __int16)KeNumberNodes )
    return 3221225713LL;
  v10 = a3 & 0xFFFFFF80;
  v11 = v6 - 1;
  v12 = a3 & 0x2000;
  if ( (a3 & 0x2000) != 0 )
  {
    *a1 = 0LL;
    v15 = *a2 >> 21;
    if ( (a5 & 1) != 0 )
    {
      if ( (a5 & 0x20) != 0 )
        v16 = MiObtainSessionVa((unsigned int)v15);
      else
        v16 = MiObtainSystemVa((unsigned int)v15, 6LL);
    }
    else
    {
      v16 = MiObtainDynamicVa((char *)&qword_1403CB6A8[25 * v11 + 11].HeaderX64 + 8, (unsigned int)v15, 5LL);
    }
    if ( !v16 )
      return 3221225495LL;
    *a1 = v16;
  }
  v13 = 0;
  if ( (v10 & 0x1000) != 0 )
  {
    v13 = MiCommitPoolMemory(a1, (__int64)a2, v10 | v7, a4, a5);
    if ( v13 < 0 )
    {
      if ( v12 )
        MmFreePoolMemory(a1, a2);
      *a1 = 0LL;
    }
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  return (unsigned int)v13;
}
