/*
 * XREFs of CmpLightWeightPrepareAddKeyUoW @ 0x140674910
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpAddSubKeyToList @ 0x1404D2404 (CmpAddSubKeyToList.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140674640 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareAddKeyUoW(__int64 a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  unsigned int v4; // ebx
  _WORD *v5; // r13
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  _DWORD *v8; // rdi
  int ModificationData; // eax
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 (__fastcall *v12)(ULONG_PTR, _QWORD, _DWORD *); // rax
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  int Cell; // edx
  _WORD *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+28h] [rbp-30h]
  _DWORD v21[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h]
  unsigned int v23; // [rsp+A0h] [rbp+48h]
  int v24; // [rsp+A8h] [rbp+50h] BYREF
  int v25; // [rsp+ACh] [rbp+54h]
  PVOID P; // [rsp+B0h] [rbp+58h] BYREF
  _WORD *v27; // [rsp+B8h] [rbp+60h] BYREF

  v21[1] = 0;
  v25 = 0;
  v2 = -1;
  v21[0] = -1;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 72);
  v24 = -1;
  v23 = v4;
  v5 = 0LL;
  v6 = *(_QWORD *)(v3 + 24);
  v7 = *(_QWORD *)(a1 + 80);
  v27 = 0LL;
  v8 = *(_DWORD **)(v7 + 104);
  P = v8;
  if ( v8 )
  {
    ++*v8;
  }
  else
  {
    ModificationData = CmpLightWeightCreateModificationData(a1, (unsigned int **)&P);
    v8 = P;
    v10 = ModificationData;
    if ( ModificationData < 0 )
      goto LABEL_23;
    v4 = v23;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL);
  v12 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8);
  v22 = v11;
  P = (PVOID)v12(v6, *(unsigned int *)(v11 + 32), v21);
  if ( !P )
  {
    v10 = -1073741670;
    goto LABEL_23;
  }
  if ( !HvpMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
    || !HvpMarkCellDirty(v6, *(unsigned int *)(v11 + 32), 1)
    || !HvpMarkCellDirty(v6, *((unsigned int *)P + (int)v4 + 7), 1) )
  {
    v10 = -1073741443;
    goto LABEL_19;
  }
  v13 = &v8[v4];
  if ( v13[3] != -1 )
  {
LABEL_14:
    v17 = CmpCopyKeyPartial(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), v6, *(_DWORD *)(v22 + 32), 38, v20, v23);
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
  Cell = HvAllocateCell(v6, 12, v23, (__int64)&v27, (__int64)&v24);
  if ( Cell != -1 )
  {
    v16 = v27;
    *v27 = v14 < 5 ? 26220 : 26732;
    v16[1] = 0;
    v13[3] = Cell;
    v8[v4 + 1] = 0;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v24);
    v5 = 0LL;
    goto LABEL_14;
  }
  v5 = v27;
  v10 = -1073741670;
LABEL_19:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v21);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v24);
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
