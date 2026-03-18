/*
 * XREFs of CmpUndoDeleteKeyForTrans @ 0x14056B998
 * Callers:
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14007FCDC (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14011E248 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmListGetPrevElement @ 0x140451764 (CmListGetPrevElement.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTrans(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 *v3; // r15
  int v4; // ebx
  __int64 PrevElement; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 *PoolWithTag; // rax
  __int64 v18; // rax
  __int64 *v19; // r14
  _QWORD *UnitOfWork; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  PVOID *v26; // r14
  int *v27; // [rsp+20h] [rbp-18h]
  __int64 v28; // [rsp+80h] [rbp+48h] BYREF
  __int64 v29; // [rsp+88h] [rbp+50h]
  __int64 v30; // [rsp+90h] [rbp+58h] BYREF
  int v31; // [rsp+98h] [rbp+60h] BYREF
  int v32; // [rsp+9Ch] [rbp+64h]

  v29 = a2;
  v2 = *(_QWORD *)(a1 + 64);
  v31 = -1;
  v3 = 0LL;
  v32 = 0;
  v4 = 0;
  v28 = 0LL;
  do
  {
    PrevElement = CmListGetPrevElement(v2 + 200, &v28);
    v7 = PrevElement;
    if ( !PrevElement )
      return 3221225524LL;
  }
  while ( *(_DWORD *)(PrevElement + 68) != 3 || *(_QWORD *)(PrevElement + 88) != a1 );
  v28 = 0LL;
  v8 = CmListGetPrevElement(a1 + 200, &v28);
  v11 = v8;
  if ( !v8 || *(_DWORD *)(v8 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(a1 + 280) == v9 )
  {
    v15 = *(unsigned int *)(a1 + 272);
    LODWORD(v28) = *(_DWORD *)(a1 + 276);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(unsigned int *)(a1 + 32);
    v30 = v10;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v12 + 8))(v12, v13, &v30);
    if ( !v14 )
      return 3221225626LL;
    v15 = *(unsigned int *)(v14 + 36);
    v16 = *(_QWORD *)(a1 + 24);
    LODWORD(v28) = *(_DWORD *)(v14 + 40);
    (*(void (__fastcall **)(__int64, __int64 *))(v16 + 16))(v16, &v30);
  }
  if ( (_DWORD)v15 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v15, 0x37344D43u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v15);
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
              *(_QWORD *)(a1 + 24),
              (unsigned int)v28,
              &v31);
      v30 = v18;
      if ( v18 )
      {
        LODWORD(v28) = 0;
        v19 = v3;
        v27 = (int *)v18;
        while ( 1 )
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          *v19 = (__int64)UnitOfWork;
          if ( !UnitOfWork )
            break;
          CmpTransEnlistUowInKcb(UnitOfWork, a1);
          v4 = CmpTransEnlistUowInCmTrans((_QWORD *)*v19, v29);
          if ( v4 < 0 )
            goto LABEL_32;
          if ( !CmpLockIXLockIntent((unsigned int *)(a1 + 240), *v19)
            || !CmpLockIXLockExclusive(a1 + 256, (_QWORD *)*v19, 1) )
          {
            v4 = -1072103423;
            goto LABEL_32;
          }
          *(_DWORD *)(*v19 + 68) = 6;
          v21 = *v27;
          v22 = *v19++;
          ++v27;
          *(_DWORD *)(v22 + 88) = v21;
          LODWORD(v28) = v28 + 1;
          if ( (unsigned int)v28 >= (unsigned int)v15 )
          {
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v31);
            goto LABEL_20;
          }
        }
        v4 = -1073741670;
LABEL_32:
        v24 = v30;
      }
      else
      {
        v4 = -1073741670;
        v24 = 0LL;
      }
      goto LABEL_21;
    }
    return 3221225626LL;
  }
LABEL_20:
  *(_DWORD *)(v7 + 68) = 13;
  *(_DWORD *)(v11 + 68) = 13;
  v23 = v29;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = -1;
  *(_QWORD *)(a1 + 280) = v23;
  v24 = 0LL;
LABEL_21:
  if ( v3 )
  {
    if ( v4 < 0 && (_DWORD)v15 )
    {
      v26 = (PVOID *)v3;
      do
      {
        if ( *v26 )
        {
          CmpRundownUnitOfWork(*v26);
          ExFreePoolWithTag(*v26, 0x77554D43u);
        }
        ++v26;
        --v15;
      }
      while ( v15 );
    }
    ExFreePoolWithTag(v3, 0x37344D43u);
  }
  if ( v24 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v31);
  return (unsigned int)v4;
}
