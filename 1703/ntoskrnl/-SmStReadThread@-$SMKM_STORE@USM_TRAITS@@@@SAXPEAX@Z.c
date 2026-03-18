/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011FB50
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011FA24 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011FD0C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14011FD64 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011FD90 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  KSPIN_LOCK *v4; // r15
  __int64 v6; // rbp
  PSLIST_ENTRY Context; // r14
  LONG result; // eax
  unsigned __int64 *v9; // rdi
  KIRQL v10; // al
  __int64 *v11; // rdx
  KIRQL v12; // bl
  __int64 *v13; // rsi
  struct _MDL *v14; // rbx
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(KSPIN_LOCK **)a1;
  v6 = *(_QWORD *)a1 + 6440LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12, a3, a4);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)v4);
  *(_DWORD *)(a1 + 32) = Context == 0LL ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v4 + 809;
    Object[1] = v4 + 806;
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v9 = v4 + 812;
        while ( 1 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc(v4 + 814);
          v11 = *(__int64 **)(v6 + 64);
          v12 = v10;
          if ( v11 == (__int64 *)v9 )
          {
            v13 = 0LL;
          }
          else
          {
            v13 = (__int64 *)*v9;
            *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v13 == v11 )
            {
              *v9 = 0LL;
              *(_QWORD *)(v6 + 64) = v6 + 56;
            }
            else
            {
              *v11 = *v11 & 7 | (8 * ((unsigned __int64)*v11 >> 3) - 8);
            }
          }
          KxReleaseSpinLock(v4 + 814);
          __writecr8(v12);
          if ( !v13 )
            break;
          v14 = (struct _MDL *)SmFpAllocate(&dword_1403FA4A0, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v4, v13, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v4, v13, Issue);
          SmFpFree((__int64)&dword_1403FA4A0, 3, (__int64)(v4 + 805), v14);
        }
      }
    }
    while ( result != 1 );
  }
  if ( Context )
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v4, Context);
  return result;
}
