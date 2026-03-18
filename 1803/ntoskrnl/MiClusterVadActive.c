/*
 * XREFs of MiClusterVadActive @ 0x140269260
 * Callers:
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClusterVadActive(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // r10
  int v5; // esi
  __int64 v6; // rbx
  unsigned __int64 v7; // r10
  unsigned int i; // edi
  unsigned __int16 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  *a3 = -1LL;
  v4 = ((__int64)(*(_QWORD *)(a2 + 8) << 25) >> 16) & 0xFFFFFFFFFFFF0000uLL;
  if ( v4 >> 12 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v5 = 0;
  v6 = -1LL;
  v7 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = 0; i < 0x10; ++i )
  {
    v14 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v14 & 1) != 0 )
    {
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14);
      v12 = (v11 >> 12) & 0xFFFFFFFFFLL;
      if ( (unsigned __int16)v11 >> 12 != (unsigned __int64)i )
        return 0LL;
      if ( v6 == -1 )
      {
        v6 = v12 - i;
      }
      else
      {
        if ( v12 != v6 + i )
          return 0LL;
        v5 = 1;
      }
    }
    v7 = v10 + 8;
  }
  if ( !v5 )
  {
    *a3 = v9 >> 12;
    return 0LL;
  }
  return 1LL;
}
