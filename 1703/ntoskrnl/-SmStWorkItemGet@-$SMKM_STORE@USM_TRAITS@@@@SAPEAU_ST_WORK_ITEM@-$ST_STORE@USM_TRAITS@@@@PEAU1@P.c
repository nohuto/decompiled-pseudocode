/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140054744
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 */

__int64 *__fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(__int64 a1, _DWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  unsigned __int64 *v6; // r8
  KIRQL v7; // r14
  __int64 *v8; // r9
  unsigned __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  KPRIORITY v12; // edi
  unsigned __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  struct _KTHREAD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 i; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax

  *a2 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 6008);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6008));
  v6 = (unsigned __int64 *)(a1 + 6048);
  v7 = v5;
  v8 = *(__int64 **)(a1 + 6056);
  if ( v8 == (__int64 *)(a1 + 6048) )
  {
    v9 = (unsigned __int64 *)(a1 + 6016);
    v10 = *(__int64 **)(a1 + 6024);
    if ( v10 == (__int64 *)(a1 + 6016) )
    {
      if ( !*(_DWORD *)(a1 + 6072) )
      {
        v11 = *(unsigned __int8 *)(a1 + 5990);
        v12 = (_DWORD)v11 == 4
            ? *(_DWORD *)(a1 + 6680)
            : `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v11];
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6168)) > v12 )
        {
          v19 = *(unsigned __int8 *)(a1 + 5990);
          if ( (_DWORD)v19 == 4 )
            v20 = *(unsigned int *)(a1 + 6680);
          else
            v20 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v19];
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6168), v20);
        }
      }
      v13 = (unsigned __int64 *)(a1 + 6032);
      v14 = *(__int64 **)(a1 + 6040);
      if ( v14 == (__int64 *)(a1 + 6032) )
      {
        v15 = 0LL;
      }
      else
      {
        v15 = (__int64 *)*v13;
        *v13 = *(_QWORD *)*v13 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v15 == v14 )
        {
          *v13 = 0LL;
          *(_QWORD *)(a1 + 6040) = a1 + 6032;
        }
        else
        {
          *v14 = *v14 & 7 | (8 * ((unsigned __int64)*v14 >> 3) - 8);
        }
        if ( (*(_DWORD *)(a1 + 6068))-- == 1 && (*(_BYTE *)v15 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 5990) )
          {
            v18 = *(struct _KTHREAD **)(a1 + 6168);
            if ( KeQueryPriorityThread(v18) > 4 )
              KeSetActualBasePriorityThread(v18, 4LL);
          }
        }
      }
    }
    else
    {
      v15 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 == v10 )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 6024) = a1 + 6016;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * ((unsigned __int64)*v10 >> 3) - 8);
      }
      --*(_DWORD *)(a1 + 6064);
    }
  }
  else
  {
    v15 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v15 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6056) = a1 + 6048;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * ((unsigned __int64)*v8 >> 3) - 8);
    }
    --*(_DWORD *)(a1 + 6068);
    *a2 = 1;
  }
  if ( !v15 )
  {
LABEL_20:
    *(_QWORD *)(a1 + 6088) = 0LL;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 6080) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v15 & 7) == 2 && *(_BYTE *)(a1 + 5988) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3920) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v15 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v22 = *(_QWORD *)(i + 8);
    v23 = *(_QWORD *)(a1 + 6088);
    if ( v23 > v22 )
    {
      *(_QWORD *)(a1 + 6088) = v23 - v22;
      goto LABEL_13;
    }
    goto LABEL_20;
  }
LABEL_13:
  KxReleaseSpinLock(v2);
  __writecr8(v7);
  return v15;
}
