/*
 * XREFs of MiUpdateOldPte @ 0x140215910
 * Callers:
 *     <none>
 * Callees:
 *     MiLockSetPfnPriority @ 0x140075EE0 (MiLockSetPfnPriority.c)
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiGetVaAge @ 0x140100990 (MiGetVaAge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUpdateOldPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int PfnPriority; // eax
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // edx
  char v14; // r8
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2 << 25 >> 16;
  if ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (unsigned __int8)((MiGetWsleContents(0xFFFFF68000000000uLL, a2 << 25 >> 16) & 0xF) - 8) <= 1u )
    return 0LL;
  if ( MiGetVaAge(v4, v5) != 6 )
    return 0LL;
  v16 = MI_READ_PTE_LOCK_FREE(v6);
  if ( (v16 & 0x20) != 0 )
    return 0LL;
  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v16) - 0x58000000000LL;
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 136);
  if ( (*(_DWORD *)v8 & 1) != 0 && (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  PfnPriority = MiGetPfnPriority(v7);
  v13 = *(_DWORD *)(v8 + 4);
  if ( (v14 & 2) != 0 )
  {
    if ( v13 == 8 || PfnPriority == v13 )
      MiEmptyWorkingSetHelper(v12, v11, v8 + 24);
  }
  else if ( PfnPriority > v13 )
  {
    MiLockSetPfnPriority(v10, v13);
  }
  return ++*(_QWORD *)(v8 + 16) >= *(_QWORD *)(v8 + 8) ? 3 : 0;
}
