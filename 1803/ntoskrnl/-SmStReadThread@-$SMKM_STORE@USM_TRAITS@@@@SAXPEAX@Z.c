/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140099390
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140096484 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmFpAllocate @ 0x140096D84 (SmFpAllocate.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140099560 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140150D50 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x140150D7C (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  _SLIST_HEADER *v1; // r15
  __int64 v3; // rbp
  __int64 Context; // r14
  NTSTATUS v5; // eax
  _SLIST_HEADER *v6; // rdi
  KIRQL v7; // al
  __int64 *v8; // rdx
  KIRQL v9; // bl
  __int64 *Alignment; // rsi
  struct _MDL *v11; // rbx
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_SLIST_HEADER **)a1;
  v3 = *(_QWORD *)a1 + 6472LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = (char *)&v1[406].HeaderX64 + 8;
    Object[1] = &v1[405];
    do
    {
      while ( 1 )
      {
        v5 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v5 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v6 = v1 + 408;
        while ( 1 )
        {
          v7 = KeAcquireSpinLockRaiseToDpc(&v1[409].Alignment);
          v8 = *(__int64 **)(v3 + 64);
          v9 = v7;
          if ( v8 == (__int64 *)v6 )
          {
            Alignment = 0LL;
          }
          else
          {
            Alignment = (__int64 *)v6->Alignment;
            v6->Alignment = *(_QWORD *)v6->Alignment & 0xFFFFFFFFFFFFFFF8uLL;
            if ( Alignment == v8 )
            {
              v6->Alignment = 0LL;
              *(_QWORD *)(v3 + 64) = v3 + 56;
            }
            else
            {
              *v8 = *v8 & 7 | (8 * ((unsigned __int64)*v8 >> 3) - 8);
            }
          }
          KxReleaseSpinLock(&v1[409].Alignment);
          __writecr8(v9);
          if ( !Alignment )
            break;
          v11 = (struct _MDL *)SmFpAllocate(&dword_140466480, 3, (__int64)&v1[404].Region, 0LL, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v1, Alignment, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v1, Alignment, Issue);
          SmFpFree((__int64)&dword_140466480, 3, (__int64)&v1[404].Region, v11);
        }
      }
    }
    while ( v5 != 1 );
  }
  if ( Context )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
}
