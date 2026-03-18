/*
 * XREFs of CmpCommitSetValueKeyUoW @ 0x1404CC0FC
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpSetValueKeyNew @ 0x140491818 (CmpSetValueKeyNew.c)
 *     CmpInitializeValueNameString @ 0x1404CC440 (CmpInitializeValueNameString.c)
 *     CmpSetValueKeyExisting @ 0x1404D19D0 (CmpSetValueKeyExisting.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitSetValueKeyUoW(__int64 a1, __int64 *a2)
{
  void *Src; // r12
  __int64 v4; // r15
  __int64 v5; // rdx
  PVOID v6; // r13
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // r14d
  PVOID PoolWithTag; // rax
  int v14; // ebx
  __int16 v15; // cx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  char ValueData; // al
  unsigned int v21; // r13d
  size_t Size; // [rsp+28h] [rbp-41h]
  int v23[2]; // [rsp+30h] [rbp-39h]
  void *v24; // [rsp+40h] [rbp-29h] BYREF
  PVOID P; // [rsp+48h] [rbp-21h]
  _DWORD v26[2]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-9h] BYREF
  _WORD v29[44]; // [rsp+68h] [rbp-1h] BYREF
  char v30; // [rsp+D0h] [rbp+67h]
  char v32; // [rsp+E0h] [rbp+77h] BYREF
  int v33; // [rsp+E8h] [rbp+7Fh] BYREF
  int v34; // [rsp+ECh] [rbp+83h]

  v28[1] = 0;
  v26[1] = 0;
  v27[1] = 0;
  Src = 0LL;
  v28[0] = -1;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 92);
  v6 = 0LL;
  v26[0] = -1;
  v27[0] = -1;
  v30 = 0;
  v32 = 0;
  v7 = *(_QWORD *)(a1 + 48);
  v24 = 0LL;
  v8 = *(_QWORD *)(v7 + 24);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v8 + 8))(v8, v5, v28);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741670;
  v11 = *(_DWORD *)(v9 + 4);
  if ( v11 < 0x80000000 )
  {
    v12 = v11;
    v33 = v11;
  }
  else
  {
    v12 = v11 + 0x80000000;
    v33 = v11 + 0x80000000;
  }
  if ( v12 )
  {
    if ( v11 < 0x80000000 )
    {
      ValueData = CmpGetValueData(
                    v8,
                    *(_DWORD *)(a1 + 92),
                    v10,
                    (unsigned int)&v33,
                    (__int64)&v24,
                    (__int64)&v32,
                    (__int64)v26);
      Src = v24;
      if ( !ValueData )
        goto LABEL_37;
      v12 = v33;
      v30 = 1;
    }
    else
    {
      Src = (void *)(v10 + 8);
    }
  }
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(
         v8,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
         v27);
  if ( !v4 )
  {
LABEL_37:
    v14 = -1073741670;
    goto LABEL_20;
  }
  if ( (unsigned __int8)HvpMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL)) )
  {
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v10, v29, PoolWithTag);
      if ( CmpFindNameInList(v8, (int)v4 + 36, (int)v29, 0, (__int64)&v24, (__int64)&v33) )
      {
        if ( *(_DWORD *)(a1 + 68) != 5 || (v21 = v33, v33 == -1) )
        {
          v23[0] = v12;
          v14 = CmpSetValueKeyNew(
                  v8,
                  v4,
                  (__int64)v29,
                  (unsigned int)v24,
                  *(_DWORD *)(v10 + 12),
                  (__int64)Src,
                  *(size_t *)v23,
                  *(_DWORD *)(a1 + 72));
        }
        else
        {
          v33 = -1;
          v34 = 0;
          if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v8 + 8))(v8, v21, &v33) )
          {
            v14 = -1073741670;
LABEL_19:
            v6 = P;
            goto LABEL_20;
          }
          LODWORD(Size) = v12;
          v14 = CmpSetValueKeyExisting(v8, Src, Size, *(_DWORD *)(a1 + 72));
          (*(void (__fastcall **)(ULONG_PTR, int *))(v8 + 16))(v8, &v33);
        }
        if ( v14 >= 0 )
        {
          HvpMarkCellDirty(v8, *(unsigned int *)(a1 + 92));
          v15 = v29[0];
          if ( *(_DWORD *)(v4 + 60) < (unsigned int)v29[0] )
          {
            *(_DWORD *)(v4 + 60) = v29[0];
            *(_WORD *)(*(_QWORD *)(a1 + 48) + 170LL) = v15;
          }
          if ( *(_DWORD *)(v4 + 64) < v12 )
          {
            *(_DWORD *)(v4 + 64) = v12;
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 172LL) = v12;
          }
          v16 = *a2;
          *(_QWORD *)(v4 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v16;
          CmpCleanUpKcbValueCache(*(_QWORD *)(a1 + 48));
          v17 = *(_QWORD *)(a1 + 48);
          v18 = *(unsigned int *)(v4 + 40);
          *(_DWORD *)(v17 + 88) = *(_DWORD *)(v4 + 36);
          *(_QWORD *)(v17 + 96) = v18;
        }
        goto LABEL_19;
      }
    }
    goto LABEL_37;
  }
  v14 = -1073741443;
LABEL_20:
  if ( Src && v30 )
  {
    if ( v32 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v26);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v27);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v28);
  return (unsigned int)v14;
}
