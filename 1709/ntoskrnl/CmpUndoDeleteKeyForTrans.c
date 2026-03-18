/*
 * XREFs of CmpUndoDeleteKeyForTrans @ 0x14045005C
 * Callers:
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmListGetPrevElement @ 0x14056A340 (CmListGetPrevElement.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTrans(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 *v5; // r15
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 PrevElement; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 *PoolWithTag; // rax
  __int64 v21; // rax
  __int64 *v22; // r14
  _QWORD *UnitOfWork; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r12
  ULONG_PTR *v29; // r14
  int *v30; // [rsp+20h] [rbp-18h]
  __int64 v31; // [rsp+80h] [rbp+48h] BYREF
  __int64 v32; // [rsp+88h] [rbp+50h]
  __int64 v33; // [rsp+90h] [rbp+58h] BYREF
  int v34; // [rsp+98h] [rbp+60h] BYREF
  int v35; // [rsp+9Ch] [rbp+64h]

  v32 = a2;
  v31 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = 0;
  v34 = -1;
  v7 = v4 + 200;
  v35 = 0;
  v8 = a2;
  do
  {
    PrevElement = CmListGetPrevElement(v7, &v31, a3, v8);
    v10 = PrevElement;
    if ( !PrevElement )
      return 3221225524LL;
  }
  while ( *(_DWORD *)(PrevElement + 68) != 3 || *(_QWORD *)(PrevElement + 88) != a1 );
  v31 = 0LL;
  v11 = CmListGetPrevElement(a1 + 200, &v31, a3, v8);
  v14 = v11;
  if ( !v11 || *(_DWORD *)(v11 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(a1 + 280) == v12 )
  {
    v18 = *(unsigned int *)(a1 + 272);
    LODWORD(v31) = *(_DWORD *)(a1 + 276);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 24);
    v16 = *(unsigned int *)(a1 + 32);
    v33 = v13;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v15 + 8))(v15, v16, &v33);
    if ( !v17 )
      return 3221225626LL;
    v18 = *(unsigned int *)(v17 + 36);
    v19 = *(_QWORD *)(a1 + 24);
    LODWORD(v31) = *(_DWORD *)(v17 + 40);
    (*(void (__fastcall **)(__int64, __int64 *))(v19 + 16))(v19, &v33);
  }
  if ( (_DWORD)v18 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v18, 0x37344D43u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v18);
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
              *(_QWORD *)(a1 + 24),
              (unsigned int)v31,
              &v34);
      v33 = v21;
      if ( v21 )
      {
        LODWORD(v31) = 0;
        v22 = v5;
        v30 = (int *)v21;
        while ( 1 )
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          *v22 = (__int64)UnitOfWork;
          if ( !UnitOfWork )
            break;
          CmpTransEnlistUowInKcb(UnitOfWork, a1);
          v6 = CmpTransEnlistUowInCmTrans((_QWORD *)*v22, v32);
          if ( v6 < 0 )
            goto LABEL_32;
          if ( !(unsigned __int8)CmpLockIXLockIntent(a1 + 240, *v22)
            || !(unsigned __int8)CmpLockIXLockExclusive(a1 + 256, *v22, 1LL) )
          {
            v6 = -1072103423;
            goto LABEL_32;
          }
          *(_DWORD *)(*v22 + 68) = 6;
          v24 = *v30;
          v25 = *v22++;
          ++v30;
          *(_DWORD *)(v25 + 88) = v24;
          LODWORD(v31) = v31 + 1;
          if ( (unsigned int)v31 >= (unsigned int)v18 )
          {
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v34);
            goto LABEL_20;
          }
        }
        v6 = -1073741670;
LABEL_32:
        v27 = v33;
      }
      else
      {
        v6 = -1073741670;
        v27 = 0LL;
      }
      goto LABEL_21;
    }
    return 3221225626LL;
  }
LABEL_20:
  *(_DWORD *)(v10 + 68) = 13;
  *(_DWORD *)(v14 + 68) = 13;
  v26 = v32;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = -1;
  *(_QWORD *)(a1 + 280) = v26;
  v27 = 0LL;
LABEL_21:
  if ( v5 )
  {
    if ( v6 < 0 && (_DWORD)v18 )
    {
      v29 = (ULONG_PTR *)v5;
      do
      {
        if ( *v29 )
        {
          CmpRundownUnitOfWork(*v29);
          ExFreePoolWithTag((PVOID)*v29, 0x77554D43u);
        }
        ++v29;
        --v18;
      }
      while ( v18 );
    }
    ExFreePoolWithTag(v5, 0x37344D43u);
  }
  if ( v27 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v34);
  return (unsigned int)v6;
}
