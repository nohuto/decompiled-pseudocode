/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14026992C
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 */

__int64 *__fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(__int64 a1, _DWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  unsigned __int64 *v6; // r8
  KIRQL v7; // r14
  __int64 *v8; // r9
  __int64 *v9; // rdi
  unsigned __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rax
  KPRIORITY v13; // edi
  _SINGLE_LIST_ENTRY *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // edx
  unsigned __int64 *v18; // rcx
  __int64 *v19; // rdx
  struct _KTHREAD *v21; // rsi
  _SINGLE_LIST_ENTRY *v22; // r8
  __int64 v23; // r9
  __int64 i; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax

  *a2 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 6040);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v6 = (unsigned __int64 *)(a1 + 6080);
  v7 = v5;
  v8 = *(__int64 **)(a1 + 6088);
  if ( v8 == (__int64 *)(a1 + 6080) )
  {
    v10 = (unsigned __int64 *)(a1 + 6048);
    v11 = *(__int64 **)(a1 + 6056);
    if ( v11 == (__int64 *)(a1 + 6048) )
    {
      if ( !*(_DWORD *)(a1 + 6104) )
      {
        v12 = *(unsigned __int8 *)(a1 + 6022);
        v13 = (_DWORD)v12 == 4
            ? *(_DWORD *)(a1 + 6712)
            : `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v12];
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) > v13 )
        {
          v16 = *(unsigned __int8 *)(a1 + 6022);
          if ( (_DWORD)v16 == 4 )
            v17 = *(_DWORD *)(a1 + 6712);
          else
            v17 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v16];
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), v17, v14, v15);
        }
      }
      v18 = (unsigned __int64 *)(a1 + 6064);
      v19 = *(__int64 **)(a1 + 6072);
      if ( v19 == (__int64 *)(a1 + 6064) )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = (__int64 *)*v18;
        *v18 = *(_QWORD *)*v18 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v9 == v19 )
        {
          *v18 = 0LL;
          *(_QWORD *)(a1 + 6072) = a1 + 6064;
        }
        else
        {
          *v19 = *v19 & 7 | (8 * ((unsigned __int64)*v19 >> 3) - 8);
        }
        if ( (*(_DWORD *)(a1 + 6100))-- == 1 && (*(_BYTE *)v9 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 6022) )
          {
            v21 = *(struct _KTHREAD **)(a1 + 6200);
            if ( KeQueryPriorityThread(v21) > 4 )
              KeSetActualBasePriorityThread((__int64)v21, 4, v22, v23);
          }
        }
      }
    }
    else
    {
      v9 = (__int64 *)*v10;
      *v10 = *(_QWORD *)*v10 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v9 == v11 )
      {
        *v10 = 0LL;
        *(_QWORD *)(a1 + 6056) = a1 + 6048;
      }
      else
      {
        *v11 = *v11 & 7 | (8 * ((unsigned __int64)*v11 >> 3) - 8);
      }
      --*(_DWORD *)(a1 + 6096);
    }
  }
  else
  {
    v9 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6088) = a1 + 6080;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * ((unsigned __int64)*v8 >> 3) - 8);
    }
    --*(_DWORD *)(a1 + 6100);
    *a2 = 1;
  }
  if ( !v9 )
    goto LABEL_38;
  *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v9 & 7) == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v9 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v25 = *(_QWORD *)(i + 8);
    v26 = *(_QWORD *)(a1 + 6120);
    if ( v26 > v25 )
    {
      *(_QWORD *)(a1 + 6120) = v26 - v25;
      goto LABEL_39;
    }
LABEL_38:
    *(_QWORD *)(a1 + 6120) = 0LL;
  }
LABEL_39:
  KxReleaseSpinLock(v2);
  __writecr8(v7);
  return v9;
}
