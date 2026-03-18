/*
 * XREFs of MiModifiedPageWriter @ 0x14015BF80
 * Callers:
 *     <none>
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140008688 (MiUseLowIoPriorityForModifiedPages.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14015C0AC (MiStoreCheckCompleteWriteBatch.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiCheckFreeModifiedReservations @ 0x140224E24 (MiCheckFreeModifiedReservations.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // eax
  __int64 v7; // rdx
  struct _KEVENT *v8; // rsi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  char v14; // al
  unsigned int v15; // r9d
  __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 **v18; // rax
  int v19; // eax
  _SINGLE_LIST_ENTRY *v20; // r8
  __int64 v21; // r9
  int v22; // ebp
  int v23; // ecx
  _DWORD *v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // eax
  _SINGLE_LIST_ENTRY *v27; // r8
  __int64 v28; // r9
  _SINGLE_LIST_ENTRY *v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  _QWORD *v32; // rsi
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // r15
  _QWORD *v36; // rbp
  signed __int32 v38[8]; // [rsp+0h] [rbp-218h] BYREF
  int v39; // [rsp+40h] [rbp-1D8h]
  PVOID Object[3]; // [rsp+48h] [rbp-1D0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-1B8h] BYREF
  PVOID v42[6]; // [rsp+C0h] [rbp-158h] BYREF
  struct _KWAIT_BLOCK v43; // [rsp+F0h] [rbp-128h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 928) = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18, a3, a4);
  v7 = a1 + 104;
  v39 = v6;
  Object[0] = (PVOID)(a1 + 104);
  v42[2] = (PVOID)(a1 + 904);
  v8 = (struct _KEVENT *)(a1 + 864);
  Object[1] = (PVOID)(a1 + 720);
  v42[0] = (PVOID)(a1 + 104);
  v42[1] = (PVOID)(a1 + 864);
  v42[3] = (PVOID)(a1 + 680);
  v42[4] = (PVOID)(a1 + 992);
  *(_BYTE *)(a1 + 658) = 1;
LABEL_2:
  *(_QWORD *)(a1 + 824) = 0LL;
  *(_DWORD *)(a1 + 832) = 0;
  *(_BYTE *)(a1 + 658) = 0;
  MiStoreCheckCompleteWriteBatch(a1, v7);
  v9 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(a1 + 658) = 1;
  if ( v9 )
  {
    while ( !*(_DWORD *)(a1 + 108) )
    {
      if ( !*(_QWORD *)(a1 + 6448) )
        goto LABEL_2;
      --CurrentThread->SpecialApcDisable;
      MiStoreCheckCompleteWriteBatch(a1, v7);
      v11 = a1 + 888;
      if ( *(_QWORD *)v11 == v11 )
      {
        *(_BYTE *)(a1 + 657) = 1;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( !KeWaitForMultipleObjects(5u, v42, WaitAny, WrPageOut, 0, 0, 0LL, &v43) )
          break;
        --CurrentThread->SpecialApcDisable;
        *(_BYTE *)(a1 + 657) = 0;
      }
      if ( *(_DWORD *)(a1 + 684) )
      {
        KeResetEvent((PRKEVENT)(a1 + 680));
        if ( *(_DWORD *)(a1 + 676) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
      }
      if ( *(_DWORD *)(a1 + 868) )
      {
        KeResetEvent(v8);
        _InterlockedOr(v38, 0);
        v12 = *(_DWORD *)(a1 + 5784);
        v13 = 0;
        if ( v12 )
        {
          v10 = a1 + 5792;
          do
          {
            v14 = *(_BYTE *)(*(_QWORD *)v10 + 206LL);
            if ( (v14 & 1) != 0 )
            {
              v15 = 0;
              *(_BYTE *)(*(_QWORD *)v10 + 206LL) = v14 & 0xFE;
              v16 = 64LL;
              do
              {
                v17 = *(__int64 **)(v16 + *(_QWORD *)v10);
                if ( v17 && *v17 == 2575857425LL )
                {
                  v18 = *(__int64 ***)(a1 + 896);
                  if ( *v18 != (__int64 *)v11 )
                    __fastfail(3u);
                  *v17 = v11;
                  v17[1] = (__int64)v18;
                  *v18 = v17;
                  *(_QWORD *)(a1 + 896) = v17;
                }
                ++v15;
                v16 += 8LL;
              }
              while ( v15 < 2 );
            }
            ++v13;
            v10 += 8LL;
          }
          while ( v13 < v12 );
        }
      }
      if ( *(_DWORD *)(a1 + 996) )
      {
        KeResetEvent((PRKEVENT)(a1 + 992));
        MiStoreUpdateMemoryConditions(a1);
      }
      MiCheckFreeModifiedReservations(a1, v10);
      if ( *(_QWORD *)v11 == v11 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else
      {
        v19 = *(_DWORD *)(a1 + 1136);
        if ( (v19 & 1) != 0
          && (v19 & 0xFFFFFFFE) == 0
          && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1136), 0, 1) == 1 )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeResetEvent((PRKEVENT)(a1 + 720));
          goto LABEL_2;
        }
        if ( MiUseLowIoPriorityForModifiedPages(a1) )
        {
          if ( *(_QWORD *)(a1 + 6448) < *(_QWORD *)(a1 + 712) )
          {
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            goto LABEL_2;
          }
          *(_DWORD *)(a1 + 704) = 4;
          v22 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4, v20, v21);
          v23 = 0;
        }
        else
        {
          if ( *(_DWORD *)(a1 + 676) )
            IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
          v22 = -1;
          v23 = 8;
        }
        v24 = *(_DWORD **)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11
          || (v25 = *(_QWORD *)v24, *(_DWORD **)(*(_QWORD *)v24 + 8LL) != v24) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v11 = v25;
        *(_QWORD *)(v25 + 8) = v11;
        v26 = v24[10] & 0xFFFFFFE3;
        *(_QWORD *)v24 = 97LL;
        v24[10] = v23 | v26;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        MiGatherPagefilePages(v24);
        v8 = (struct _KEVENT *)(a1 + 864);
        if ( v22 != -1 )
        {
          if ( KeQueryPriorityThread(CurrentThread) != 18 )
            KeSetActualBasePriorityThread((__int64)CurrentThread, v22, v27, v28);
          *(_DWORD *)(a1 + 704) = 18;
          v8 = (struct _KEVENT *)(a1 + 864);
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 676) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 936));
  v31 = *(_DWORD *)(a1 + 5784);
  if ( v31 )
  {
    v32 = (_QWORD *)(a1 + 5792);
    v33 = v31;
    do
    {
      if ( *v32 )
      {
        --CurrentThread->SpecialApcDisable;
        v34 = 64LL;
        v35 = 2LL;
        do
        {
          v36 = *(_QWORD **)(v34 + *v32);
          if ( v36 )
          {
            while ( *v36 == 97LL )
            {
              *(_BYTE *)(a1 + 657) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 904), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
          }
          v34 += 8LL;
          --v35;
        }
        while ( v35 );
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      ++v32;
      --v33;
    }
    while ( v33 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, v39, v29, v30);
  return KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
}
