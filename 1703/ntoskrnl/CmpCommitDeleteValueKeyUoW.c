/*
 * XREFs of CmpCommitDeleteValueKeyUoW @ 0x140573C38
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpInitializeValueNameString @ 0x1404CC440 (CmpInitializeValueNameString.c)
 *     CmpRemoveValueFromList @ 0x1404CF298 (CmpRemoveValueFromList.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x1404D1D08 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitDeleteValueKeyUoW(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int *v8; // r13
  __int64 (__fastcall *v9)(ULONG_PTR, __int64, int *); // rax
  __int64 v10; // r12
  PVOID PoolWithTag; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v21; // [rsp+98h] [rbp+48h]
  unsigned int v22; // [rsp+A0h] [rbp+50h] BYREF
  int v23; // [rsp+A8h] [rbp+58h] BYREF
  int v24; // [rsp+ACh] [rbp+5Ch]

  v21 = a2;
  v17[0] = -1;
  v23 = -1;
  v17[1] = 0;
  v24 = 0;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(v4, *(unsigned int *)(v3 + 32), v17);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v7 = *(unsigned int *)(a1 + 88);
  v8 = (unsigned int *)(v5 + 36);
  v9 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v4 + 8);
  LODWORD(BugCheckParameter3) = -1;
  v10 = v9(v4, v7, &v23);
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v10, (__int64)v19, (__int64)PoolWithTag);
      if ( CmpFindNameInList(v4, (int)v8, (int)v19, 0, (__int64)&v22, (__int64)&BugCheckParameter3)
        && (_DWORD)BugCheckParameter3 != -1
        && ((*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v23),
            (v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(
                     v4,
                     (unsigned int)BugCheckParameter3,
                     &v23)) != 0) )
      {
        if ( HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 0)
          && HvpMarkCellDirty(v4, *(unsigned int *)(v6 + 40), 0)
          && HvpMarkCellDirty(v4, (unsigned int)BugCheckParameter3, 0)
          && CmpMarkValueDataDirty(v4, v10) )
        {
          v12 = CmpRemoveValueFromList(v4, v22, v8);
          if ( v12 >= 0 )
          {
            CmpFreeValue(v4, (unsigned int)BugCheckParameter3);
            v13 = *v21;
            *(_QWORD *)(v6 + 4) = *v21;
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v13;
            if ( !*v8 )
            {
              *(_QWORD *)(v6 + 60) = 0LL;
              *(_WORD *)(*(_QWORD *)(a1 + 48) + 170LL) = 0;
              *(_DWORD *)(*(_QWORD *)(a1 + 48) + 172LL) = 0;
            }
            CmpCleanUpKcbValueCache(*(_QWORD *)(a1 + 48));
            v14 = *(_QWORD *)(a1 + 48);
            v15 = *(unsigned int *)(v6 + 40);
            *(_DWORD *)(v14 + 88) = *v8;
            *(_QWORD *)(v14 + 96) = v15;
          }
        }
        else
        {
          v12 = -1073741443;
        }
      }
      else
      {
        v12 = -1073741670;
      }
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v12 = -1073741670;
    }
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v23);
  }
  else
  {
    v12 = -1073741670;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v17);
  return (unsigned int)v12;
}
