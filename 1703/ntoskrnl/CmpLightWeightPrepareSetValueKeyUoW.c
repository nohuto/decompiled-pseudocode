/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x14013648C (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 *     CmpAddValueKeyNew @ 0x1404918D4 (CmpAddValueKeyNew.c)
 *     CmpInitializeValueNameString @ 0x1404CC440 (CmpInitializeValueNameString.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x1404D1D08 (CmpMarkValueDataDirty.c)
 *     CmpAddValueToListEx @ 0x1404D3280 (CmpAddValueToListEx.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpLightWeightCreateSetValueData @ 0x14067470C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140675918 (CmpLightWeightUpdateSharedSetValueData.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rbx
  void *v2; // r13
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  int v6; // ebx
  _QWORD *TransientPoolWithTag; // rax
  _WORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r12d
  PVOID PoolWithTag; // rax
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  _DWORD v21[2]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v24[2]; // [rsp+58h] [rbp-21h] BYREF
  unsigned int *v25; // [rsp+60h] [rbp-19h]
  __int64 v26; // [rsp+68h] [rbp-11h]
  PVOID P; // [rsp+70h] [rbp-9h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  unsigned __int16 v29[40]; // [rsp+80h] [rbp+7h] BYREF
  char v30; // [rsp+E0h] [rbp+67h]
  char v31; // [rsp+E8h] [rbp+6Fh] BYREF
  _DWORD *v32; // [rsp+F0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(_DWORD **)(a1 + 104);
  v2 = 0LL;
  v24[1] = 0;
  v26 = 0LL;
  v22[1] = 0;
  v23[1] = 0;
  v21[1] = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v24[0] = -1;
  v22[0] = -1;
  v23[0] = -1;
  v21[0] = -1;
  v5 = *(_QWORD *)(v4 + 24);
  BugCheckParameter3 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = v1;
  if ( !v1 )
  {
    v6 = CmpLightWeightCreateSetValueData(a1, &v32);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v1 = v32;
    CmpLightWeightUpdateSharedSetValueData(v32, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, 0x10uLL, 0x77554D43u);
  v8 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *TransientPoolWithTag = 0LL;
  TransientPoolWithTag[1] = 0LL;
  *(_DWORD *)TransientPoolWithTag = -1;
  *((_DWORD *)TransientPoolWithTag + 1) = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *(unsigned int *)(a1 + 92), v24);
  v10 = v9;
  if ( !v9 )
  {
    v6 = -1073741670;
    goto LABEL_48;
  }
  v11 = *(_DWORD *)(v9 + 4);
  if ( v11 < 0x80000000 )
  {
    v12 = v11;
    LODWORD(v32) = v11;
  }
  else
  {
    v12 = v11 + 0x80000000;
    LODWORD(v32) = v11 + 0x80000000;
  }
  if ( !v12 )
  {
LABEL_17:
    if ( !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 0) )
    {
      v6 = -1073741443;
LABEL_42:
      if ( v30 && v2 )
      {
        if ( v31 )
          ExFreePoolWithTag(v2, 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v23);
      }
      goto LABEL_47;
    }
    v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(
            v5,
            *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
            v22);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_40;
    }
    CmpInitializeValueNameString(v10, (__int64)v29, (__int64)PoolWithTag);
    v25 = v1 + 1;
    if ( !CmpFindNameInList(v5, (int)v1 + 4, (int)v29, 0, (__int64)&v32, (__int64)&BugCheckParameter3)
      || (LODWORD(Size) = v12,
          v14 = CmpAddValueKeyNew(v5, v29, *(_DWORD *)(v10 + 12), v2, Size, *(_DWORD *)(a1 + 72)),
          v14 == -1) )
    {
      v6 = -1073741670;
LABEL_39:
      ExFreePoolWithTag(P, 0);
LABEL_40:
      if ( v28 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v22);
      goto LABEL_42;
    }
    v15 = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      v17 = CmpAddValueToListEx(v5, v14, (unsigned int)v32, *(_DWORD *)(a1 + 72), v25, 1);
    }
    else
    {
      if ( !HvpMarkCellDirty(v5, (unsigned int)BugCheckParameter3, 0) )
      {
        v6 = -1073741443;
        goto LABEL_37;
      }
      v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v15, v21);
      v26 = v16;
      if ( !v16 )
      {
        v6 = -1073741670;
LABEL_37:
        if ( v14 != -1 )
          CmpFreeValue(v5, v14);
        goto LABEL_39;
      }
      if ( !CmpMarkValueDataDirty(v5, v16) )
      {
        v6 = -1073741443;
LABEL_35:
        if ( v26 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v21);
        goto LABEL_37;
      }
      v17 = CmpSwapValueInList(v5, v14, (unsigned int)v32, (__int64)v25);
    }
    v6 = v17;
    if ( v17 >= 0 )
    {
      v6 = 0;
      v8[4] = v29[0];
      v18 = BugCheckParameter3;
      *(_DWORD *)v8 = v14;
      *((_DWORD *)v8 + 1) = v18;
      *((_DWORD *)v8 + 3) = v12;
      *(_QWORD *)(a1 + 112) = v8;
      v8 = 0LL;
      v14 = -1;
    }
    goto LABEL_35;
  }
  if ( v11 >= 0x80000000 )
  {
    v2 = (void *)(v10 + 8);
    goto LABEL_17;
  }
  if ( CmpGetValueData(
         v5,
         *(unsigned int *)(a1 + 92),
         v10,
         (unsigned int *)&v32,
         (__int64)&BugCheckParameter3,
         (__int64)&v31,
         (__int64)v23) )
  {
    v2 = (void *)BugCheckParameter3;
    v12 = (unsigned int)v32;
    v30 = 1;
    goto LABEL_17;
  }
  v6 = -1073741670;
LABEL_47:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v24);
LABEL_48:
  if ( v8 )
    CmpFreeTransientPoolWithTag(v8, 0x77554D43u);
  return (unsigned int)v6;
}
