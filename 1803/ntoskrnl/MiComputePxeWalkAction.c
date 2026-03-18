/*
 * XREFs of MiComputePxeWalkAction @ 0x140010E80
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     MiMakeSystemLeavesNonZero @ 0x1401A63B4 (MiMakeSystemLeavesNonZero.c)
 */

__int64 __fastcall MiComputePxeWalkAction(int *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // rdi
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ebp
  int v12; // r13d
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r12d
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // [rsp+68h] [rbp+10h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = (int)a3;
  v7 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8 * ((a2 >> 3) & 0x1FF));
      v10 = v3 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v3;
      v3 = v10;
      if ( (v9 & 0x42) != 0 )
        v3 = v10 | 0x42;
    }
  }
  v29 = v3;
  if ( (v3 & 1) == 0 )
    return *(_BYTE *)a1 & 1;
  v11 = *a1;
  v12 = *a1 & 0x4000;
  if ( !v12 )
    goto LABEL_20;
  v13 = MI_READ_PTE_LOCK_FREE(&v29);
  if ( ((v13 >> 12) & 0xFFFFFFFFFLL) == *(_QWORD *)(v14 + v15 + 4968) )
    return *(_BYTE *)a1 & 1;
  v16 = MI_READ_PTE_LOCK_FREE(&v29);
  if ( ((v16 >> 12) & 0xFFFFFFFFFLL) == *(_QWORD *)(v17 + v18 + 4936) || (v3 & 0x800) == 0 && (v3 & 0x42) == 0 )
    return *(_BYTE *)a1 & 1;
  v7 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_20:
  if ( !(_DWORD)v5 )
    return 1LL;
  v20 = *((_QWORD *)a1 + 8);
  v21 = 0LL;
  v22 = 1;
  if ( v20 && v20 == *(_QWORD *)&a1[4 * v5 + 20] )
  {
    v22 = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v23 = *((_QWORD *)a1 + 7);
  if ( v23 && v23 == *(_QWORD *)&a1[4 * v5 + 20] )
  {
    v22 = 0;
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( (v3 & 0x80u) != 0LL )
    return v11 & 1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v11 & 0x200) != 0 && qword_1403CC468 != (PVOID)qword_1403CC470 )
  {
    v24 = MI_READ_PTE_LOCK_FREE(&v29);
    if ( ((v24 >> 12) & 0xFFFFFFFFFLL) == *(_QWORD *)(v25 + 8 * v5 + 4968) )
      return 0LL;
  }
  if ( (v11 & 1) == 0 )
  {
    if ( (unsigned __int64)&v29 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v29 <= v7
      && (unsigned int)MiPteHasShadow(&v29, v21, a3, v3)
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v21 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v21 )
      {
        v26 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v29 >> 3) & 0x1FF));
        v21 = v3 | 0x20;
        if ( (v26 & 0x20) == 0 )
          v21 = v3;
        v3 = v21;
        if ( (v26 & 0x42) != 0 )
          v3 = v21 | 0x42;
      }
    }
    if ( (*(_QWORD *)(48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      return 1LL;
    if ( (_DWORD)v5 == 1 )
    {
      v27 = *((_QWORD *)a1 + 3);
      if ( (*(_BYTE *)(v27 + 184) & 7) == 2
        && (unsigned __int16)*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(a2 << 25) >> 16 << 25 >> 16, v21) + 32) >> 6 != (unsigned __int64)*(unsigned __int16 *)(v27 + 174) )
      {
        return 1LL;
      }
    }
  }
  if ( !v22 )
    return 1LL;
  if ( (_DWORD)v5 == 1 && (v11 & 0x10) != 0 && (v11 & 1) == 0 )
  {
    v30 = MI_READ_PTE_LOCK_FREE(a2);
    v28 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v30) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( (v28 & 0x3FF0) == 0 || ((v28 >> 14) & 7) < *((unsigned __int8 *)a1 + 7) )
      return 1LL;
  }
  if ( v12 && (int)v5 > 1 && (_DWORD)v5 == *((unsigned __int8 *)a1 + 10) )
    MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
  return 2LL;
}
