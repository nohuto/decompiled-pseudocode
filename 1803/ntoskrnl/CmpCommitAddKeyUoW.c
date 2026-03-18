/*
 * XREFs of CmpCommitAddKeyUoW @ 0x1405DF9A8
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 */

__int64 __fastcall CmpCommitAddKeyUoW(__int64 a1, __int64 *a2)
{
  ULONG_PTR v2; // r15
  __int64 v3; // r12
  unsigned int v5; // esi
  __int64 v6; // rbx
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // rbp
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rsi
  ULONG_PTR v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // dx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+88h] [rbp+10h]
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v19 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v5 = -1;
  v6 = *(_QWORD *)(v2 + 64);
  v7 = *(_QWORD *)(v2 + 24);
  v8 = *(_QWORD *)(v6 + 24);
  v20 = 0xFFFFFFFFLL;
  v18 = 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v8 + 8))(
         v8,
         *(unsigned int *)(*(_QWORD *)(v2 + 64) + 32LL),
         &v20);
  if ( HvpMarkCellDirty(v7, *(unsigned int *)(v2 + 32), 1)
    && HvpMarkCellDirty(v8, *(unsigned int *)(v6 + 32), 1)
    && HvpMarkCellDirty(v8, *(unsigned int *)(v9 + 4 * v3 + 28), 1) )
  {
    v10 = CmpCopyKeyPartial(v7, *(unsigned int *)(v2 + 32), v8, *(unsigned int *)(v6 + 32), 38);
    v5 = v10;
    if ( v10 == -1 || !CmpAddSubKeyEx(v8, *(unsigned int *)(v6 + 32), v10, 0) )
    {
      v16 = -1073741670;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(v2 + 32);
      *(_DWORD *)(v2 + 32) = v5;
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v7 + 8))(v7, v5, &v18);
      v12 = *(unsigned int *)(v11 + 44);
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v6 + 32);
      CmpAssignSecurityToKcb(v2, v12, 0LL, 0, 0);
      ++*(_QWORD *)(v2 + 296);
      ++*(_QWORD *)(v6 + 296);
      v13 = *v19;
      *(_QWORD *)(v9 + 4) = *v19;
      *(_QWORD *)(v6 + 160) = v13;
      v14 = *(_WORD *)(v11 + 72);
      if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
        v14 *= 2;
      if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v14 )
      {
        *(_WORD *)(v9 + 52) = v14;
        *(_WORD *)(v6 + 168) = v14;
      }
      v15 = *(unsigned __int16 *)(v11 + 74);
      if ( *(_DWORD *)(v9 + 56) < v15 )
        *(_DWORD *)(v9 + 56) = v15;
      v5 = -1;
      v16 = 0;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v7 + 16))(v7, &v18);
    }
  }
  else
  {
    v16 = -1073741443;
  }
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v20);
  if ( v5 != -1 )
    CmpFreeKeyByCell(v7, v5, 0);
  return v16;
}
