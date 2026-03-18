/*
 * XREFs of CmpCommitSetValueKeyUoW @ 0x1405A55BC
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpSetValueKeyExisting @ 0x1404737F8 (CmpSetValueKeyExisting.c)
 *     CmpSetValueKeyNew @ 0x140477B34 (CmpSetValueKeyNew.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpFindNameInList @ 0x140479444 (CmpFindNameInList.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpInitializeValueNameString @ 0x14059D1F8 (CmpInitializeValueNameString.c)
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
  bool ValueData; // al
  _WORD *PoolWithTag; // rax
  int v15; // ebx
  __int16 v16; // cx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v21; // r13d
  __int64 v22; // r8
  size_t Size; // [rsp+28h] [rbp-41h]
  int v24[2]; // [rsp+30h] [rbp-39h]
  void *v25; // [rsp+40h] [rbp-29h] BYREF
  PVOID P; // [rsp+48h] [rbp-21h]
  _DWORD v27[2]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v28[2]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-9h] BYREF
  _WORD v30[44]; // [rsp+68h] [rbp-1h] BYREF
  char v31; // [rsp+D0h] [rbp+67h]
  char v33; // [rsp+E0h] [rbp+77h] BYREF
  int v34; // [rsp+E8h] [rbp+7Fh] BYREF
  int v35; // [rsp+ECh] [rbp+83h]

  v29[1] = 0;
  v27[1] = 0;
  v28[1] = 0;
  Src = 0LL;
  v29[0] = -1;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 92);
  v6 = 0LL;
  v27[0] = -1;
  v28[0] = -1;
  v31 = 0;
  v33 = 0;
  v7 = *(_QWORD *)(a1 + 48);
  v25 = 0LL;
  v8 = *(_QWORD *)(v7 + 24);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v8 + 8))(v8, v5, v29);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741670;
  v11 = *(_DWORD *)(v9 + 4);
  if ( v11 >= 0x80000000 )
  {
    v12 = v11 + 0x80000000;
    v34 = v11 + 0x80000000;
  }
  else
  {
    v12 = v11;
    v34 = v11;
  }
  if ( v12 )
  {
    if ( v11 >= 0x80000000 )
    {
      Src = (void *)(v10 + 8);
    }
    else
    {
      ValueData = CmpGetValueData(
                    v8,
                    *(unsigned int *)(a1 + 92),
                    v10,
                    (unsigned int *)&v34,
                    (__int64)&v25,
                    (__int64)&v33,
                    (__int64)v27);
      Src = v25;
      if ( !ValueData )
      {
LABEL_37:
        v15 = -1073741670;
        goto LABEL_21;
      }
      v12 = v34;
      v31 = 1;
    }
  }
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(
         v8,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
         v28);
  if ( !v4 )
    goto LABEL_37;
  if ( HvpMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 0) )
  {
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v10, (__int64)v30, PoolWithTag);
      if ( CmpFindNameInList(v8, v4 + 36, (int)v30, 0, (__int64)&v25, (__int64)&v34) )
      {
        if ( *(_DWORD *)(a1 + 68) != 5 || (v21 = v34, v34 == -1) )
        {
          v24[0] = v12;
          v15 = CmpSetValueKeyNew(
                  v8,
                  v4,
                  (__int64)v30,
                  (unsigned int)v25,
                  *(_DWORD *)(v10 + 12),
                  (__int64)Src,
                  *(size_t *)v24,
                  *(_DWORD *)(a1 + 72));
        }
        else
        {
          v34 = -1;
          v35 = 0;
          v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v8 + 8))(v8, v21, &v34);
          if ( !v22 )
          {
            v15 = -1073741670;
LABEL_20:
            v6 = P;
            goto LABEL_21;
          }
          LODWORD(Size) = v12;
          v15 = CmpSetValueKeyExisting(v8, v21, v22, *(_DWORD *)(v10 + 12), Src, Size, *(_DWORD *)(a1 + 72));
          (*(void (__fastcall **)(ULONG_PTR, int *))(v8 + 16))(v8, &v34);
        }
        if ( v15 >= 0 )
        {
          HvpMarkCellDirty(v8, *(unsigned int *)(a1 + 92), 0);
          v16 = v30[0];
          if ( *(_DWORD *)(v4 + 60) < (unsigned int)v30[0] )
          {
            *(_DWORD *)(v4 + 60) = v30[0];
            *(_WORD *)(*(_QWORD *)(a1 + 48) + 170LL) = v16;
          }
          if ( *(_DWORD *)(v4 + 64) < v12 )
          {
            *(_DWORD *)(v4 + 64) = v12;
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 172LL) = v12;
          }
          ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 296LL);
          v17 = *a2;
          *(_QWORD *)(v4 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v17;
          CmpCleanUpKcbValueCache(*(_QWORD *)(a1 + 48));
          v18 = *(_QWORD *)(a1 + 48);
          v19 = *(unsigned int *)(v4 + 40);
          *(_DWORD *)(v18 + 88) = *(_DWORD *)(v4 + 36);
          *(_QWORD *)(v18 + 96) = v19;
        }
        goto LABEL_20;
      }
    }
    goto LABEL_37;
  }
  v15 = -1073741443;
LABEL_21:
  if ( Src && v31 )
  {
    if ( v33 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v27);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v28);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v29);
  return (unsigned int)v15;
}
