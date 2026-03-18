/*
 * XREFs of CmpLightWeightPrepareAddKeyUoW @ 0x14069F4B0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpAddSubKeyToList @ 0x140473EEC (CmpAddSubKeyToList.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14069EC58 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14069F310 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareAddKeyUoW(__int64 a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  unsigned int v4; // ebx
  _WORD *v5; // r13
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  unsigned int *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 (__fastcall *v12)(ULONG_PTR, _QWORD, _DWORD *); // rax
  unsigned int *v13; // r12
  unsigned int v14; // r13d
  unsigned int Cell; // edx
  _WORD *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  char v20; // [rsp+28h] [rbp-30h]
  ULONG_PTR v21; // [rsp+30h] [rbp-28h]
  _DWORD v22[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v23; // [rsp+48h] [rbp-10h]
  unsigned int v24; // [rsp+A0h] [rbp+48h]
  int v25; // [rsp+A8h] [rbp+50h] BYREF
  int v26; // [rsp+ACh] [rbp+54h]
  unsigned int *v27; // [rsp+B0h] [rbp+58h] BYREF
  _WORD *v28; // [rsp+B8h] [rbp+60h] BYREF

  v22[1] = 0;
  v26 = 0;
  v2 = -1;
  v22[0] = -1;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 72);
  v25 = -1;
  v24 = v4;
  v5 = 0LL;
  v6 = *(_QWORD *)(v3 + 24);
  v7 = *(_QWORD *)(a1 + 80);
  v28 = 0LL;
  v8 = *(unsigned int **)(v7 + 104);
  v27 = v8;
  if ( v8 )
  {
    ++*v8;
  }
  else
  {
    v9 = CmpLightWeightCreateModificationData(a1, &v27);
    v8 = v27;
    v10 = v9;
    if ( v9 < 0 )
      goto LABEL_23;
    v4 = v24;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL);
  v12 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8);
  v23 = v11;
  v27 = (unsigned int *)v12(v6, *(unsigned int *)(v11 + 32), v22);
  if ( !v27 )
  {
    v10 = -1073741670;
    goto LABEL_23;
  }
  if ( !HvpMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
    || !HvpMarkCellDirty(v6, *(unsigned int *)(v11 + 32), 1)
    || !HvpMarkCellDirty(v6, v27[v4 + 7], 1) )
  {
    v10 = -1073741443;
    goto LABEL_19;
  }
  v13 = &v8[v4];
  if ( v13[3] != -1 )
  {
LABEL_14:
    LODWORD(v21) = v24;
    v17 = CmpCopyKeyPartial(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), v6, *(_DWORD *)(v23 + 32), 38, v20, v21);
    v2 = v17;
    if ( v17 == -1 || !CmpAddSubKeyToList(v6, v13 + 3, v17) )
    {
      v10 = -1073741670;
    }
    else
    {
      ++v8[v4 + 1];
      v10 = 0;
      v18 = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(v18 + 32);
      *(_DWORD *)(v18 + 32) = v2;
      v2 = -1;
      *(_QWORD *)(a1 + 104) = v8;
      v8 = 0LL;
    }
    goto LABEL_19;
  }
  v14 = *(_DWORD *)(v6 + 196);
  Cell = HvAllocateCell(v6, 12, v24, (__int64)&v28, (__int64)&v25);
  if ( Cell != -1 )
  {
    v16 = v28;
    *v28 = v14 < 5 ? 26220 : 26732;
    v16[1] = 0;
    v13[3] = Cell;
    v8[v4 + 1] = 0;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v25);
    v5 = 0LL;
    goto LABEL_14;
  }
  v5 = v28;
  v10 = -1073741670;
LABEL_19:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v22);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v25);
  if ( v2 != -1 )
    CmpFreeKeyByCell(v6, v2, 0);
LABEL_23:
  if ( v8 )
  {
    CmpLightWeightCleanupModifyKeyDataUoW(v6, v8);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return v10;
}
