/*
 * XREFs of StorPortNotification @ 0x1C00022F0
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C006A3F0 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0002690 (RaidLogMiniportCompletion.c)
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0003D6C (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     McTemplateK0pq @ 0x1C0023FBC (McTemplateK0pq.c)
 *     McTemplateK0pqq @ 0x1C0024104 (McTemplateK0pqq.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002775C (RaidAdapterRequestTimerDeferred.c)
 *     McTemplateK0pqqcccqpp @ 0x1C002EFF4 (McTemplateK0pqqcccqpp.c)
 *     RaidpLinkDown @ 0x1C002F638 (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C002F6A4 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C002F904 (StorAsyncNotificationDeferred.c)
 *     StorEnablePassiveInitialization @ 0x1C002F9CC (StorEnablePassiveInitialization.c)
 *     StorPortPause @ 0x1C0030B10 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C00329A4 (StorpGetExtendedTable.c)
 *     RaidHandleTraceNotifyType @ 0x1C00384D0 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003D38C (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0040D80 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004106C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(int a1, _QWORD **a2, ...)
{
  char v2; // r14
  _QWORD **v3; // r8
  __int64 v4; // rdi
  va_list v5; // r9
  _DWORD *v6; // rbx
  char *v7; // rbx
  __int64 v8; // rax
  struct _PROCESSOR_NUMBER v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rbx
  unsigned __int64 v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  PRKDPC v19; // rsi
  __int64 v20; // rbx
  struct _KTIMER *v21; // rcx
  int v22; // ecx
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // bp
  char v27; // r15
  PRKDPC v28; // rsi
  PSLIST_ENTRY v29; // rax
  _DWORD *v30; // rbx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int *v34; // rsi
  unsigned __int64 v35; // rbp
  struct _PROCESSOR_NUMBER v36; // ebx
  __int64 Unit; // rax
  int v38; // ecx
  char v39; // al
  PRKDPC v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  _WORD *v43; // rsi
  _DWORD *v44; // rdx
  __int64 v45; // r10
  int v46; // ebp
  _DWORD *v47; // rbx
  int v48; // r13d
  unsigned __int8 v49; // r14
  unsigned __int8 v50; // r15
  unsigned __int8 v51; // r12
  PRKDPC v52; // rbx
  __int64 v53; // rdx
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+68h] [rbp-70h] BYREF
  va_list v55; // [rsp+70h] [rbp-68h]
  __int64 v56; // [rsp+78h] [rbp-60h]
  __int64 v57; // [rsp+80h] [rbp-58h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  _QWORD **v59; // [rsp+E8h] [rbp+10h]
  PRKDPC v60; // [rsp+F0h] [rbp+18h] BYREF
  va_list va; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v62; // [rsp+F8h] [rbp+20h] BYREF
  va_list va1; // [rsp+F8h] [rbp+20h]
  _DWORD *v64; // [rsp+100h] [rbp+28h]
  _DWORD *v65; // [rsp+108h] [rbp+30h] BYREF
  va_list va2; // [rsp+108h] [rbp+30h]
  __int64 v67; // [rsp+110h] [rbp+38h]
  _DWORD *v68; // [rsp+118h] [rbp+40h]
  va_list va3; // [rsp+120h] [rbp+48h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v60 = va_arg(va1, PRKDPC);
  va_copy(va2, va1);
  v62 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v65 = va_arg(va3, _DWORD *);
  v67 = va_arg(va3, _QWORD);
  v68 = va_arg(va3, _DWORD *);
  v59 = a2;
  v2 = 0;
  v57 = 0LL;
  v3 = a2;
  v4 = 0LL;
  if ( a2 )
    v4 = **(a2 - 2);
  va_copy(v5, va);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 4100:
        v15 = *(a2 - 2);
        if ( v60->TargetInfoAsUlong == 2 )
        {
          p_DpcListEntry = &v60->DpcListEntry;
          if ( !*(_DWORD *)(*v15 + 688LL) )
          {
            RaidAdapterReleaseInterruptLock(*v15, LOBYTE(p_DpcListEntry->Next));
            return;
          }
        }
        else
        {
          if ( v60->TargetInfoAsUlong != 1 )
          {
            if ( v60->TargetInfoAsUlong == 3 )
              RaidAdapterReleaseInterruptLock(*v15, LOBYTE(v60->DeferredRoutine));
            return;
          }
          p_DpcListEntry = &v60->DpcListEntry;
        }
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
        return;
      case 4099:
        v10 = *(a2 - 2);
        v11 = (unsigned int)v60;
        v12 = v64;
        v13 = v62;
        v14 = *v10;
        *v64 = (_DWORD)v60;
        if ( (_DWORD)v11 == 2 )
        {
          if ( *(_DWORD *)(v14 + 688) )
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 680), (PKLOCK_QUEUE_HANDLE)(v12 + 2));
          else
            *((_BYTE *)v12 + 8) = RaidAdapterAcquireInterruptLock(v14, v11, v3, (PRKDPC *)va);
        }
        else
        {
          v53 = (unsigned int)(v11 - 1);
          if ( (_DWORD)v53 )
          {
            if ( (_DWORD)v53 == 2 )
              *((_BYTE *)v12 + 24) = RaidAdapterAcquireInterruptLock(v14, v53, v3, (PRKDPC *)va);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 64), (PKLOCK_QUEUE_HANDLE)(v12 + 2));
          }
        }
        break;
      case 4098:
        v6 = v65;
        *v6 = KeInsertQueueDpc(v60, (PVOID)v62, v64);
        return;
      default:
        if ( a1 > 4096 )
        {
          v31 = a1 - 4097;
          if ( v31 )
          {
            v32 = v31 - 4;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 == 1 )
                {
                  v34 = v64;
                  v35 = v62;
                  va_copy(v55, va2);
                  if ( v4 && v60 && LOWORD(v60->TargetInfoAsUlong) == 1 && (v62 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
                  {
                    ProcNumber[0].Group = (unsigned __int16)v60->DpcListEntry.Next;
                    ProcNumber[0].Number = BYTE2(v60->DpcListEntry.Next);
                    v36 = ProcNumber[0];
                    Unit = RaidAdapterFindUnit(v4, *(_DWORD *)ProcNumber, a2, (PRKDPC *)va);
                    if ( !Unit || (*(_DWORD *)(Unit + 1568) & 4) == 0 )
                    {
                      *v34 = -1056964601;
                      return;
                    }
                    if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1624), 1, 0) == 1 )
                    {
                      *v34 = -1056964596;
                      return;
                    }
                    if ( KeGetCurrentIrql() > 2u )
                    {
                      v39 = StorAsyncNotificationDeferred(v4, Unit, *(_DWORD *)ProcNumber, v35);
                      v38 = -1056964596;
                      if ( v39 )
                        v38 = 0;
                    }
                    else
                    {
                      *(_QWORD *)(Unit + 1616) = v35;
                      v38 = RaidUnitProcessAsyncNotification(v4, *(unsigned int *)&v36);
                    }
                  }
                  else
                  {
                    v38 = -1056964602;
                  }
                  *v34 = v38;
                }
              }
              else if ( StorEtwLoggingEnabled )
              {
                v40 = v60;
                if ( v62 )
                {
                  v41 = *(_BYTE *)(v62 + 2) == 40 ? *(_QWORD *)(v62 + 96) : *(_QWORD *)(v62 + 48);
                  if ( v41 )
                  {
                    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
                      *(_QWORD *)(v41 + 720) = v60;
                    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
                    {
                      LOBYTE(a2) = 1;
                      StorEtwIORequestServiceTimeEventData(v41, a2, v40, (PRKDPC *)va);
                    }
                    v42 = *(_QWORD *)(v41 + 224);
                    if ( v42 && *(_DWORD *)(v42 + 1556) && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
                    {
                      LOBYTE(a2) = 1;
                      StorEtwLogoRequestServiceTimeEventData(v41, a2, v40, v5);
                    }
                  }
                }
              }
            }
            else if ( v4 )
            {
              v43 = (_WORD *)v62;
              v44 = v65;
              v45 = v67;
              v46 = (int)v60;
              v47 = v68;
              v48 = (int)v64;
              *(_QWORD *)&ProcNumber[0].Group = v65;
              v56 = v67;
              va_copy(v55, va3);
              if ( v62 && *(_WORD *)v62 == 1 )
              {
                v49 = *(_BYTE *)(v62 + 8);
                v50 = *(_BYTE *)(v62 + 9);
                v51 = *(_BYTE *)(v62 + 10);
              }
              else
              {
                v49 = -1;
                v50 = -1;
                v51 = -1;
              }
              if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
              {
                McTemplateK0pqqcccqpp(
                  0,
                  (_DWORD)v65,
                  0,
                  (_DWORD)v3,
                  *(_DWORD *)(v4 + 56),
                  (char)v60,
                  v49,
                  v50,
                  v51,
                  (char)v64,
                  (char)v65,
                  v67);
                v44 = *(_DWORD **)&ProcNumber[0].Group;
                v45 = v56;
              }
              if ( v43
                && *v43 == 1
                && v49 <= *(_BYTE *)(v4 + 376)
                && ((v46 & 3) == 0 || v50 <= *(_BYTE *)(v4 + 401))
                && ((v46 & 1) == 0 || v51 <= *(_BYTE *)(v4 + 450))
                && (v46 & 7) != 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4920), 1, 0) == 1 )
                {
                  if ( v47 )
                    *v47 = -1056964607;
                }
                else
                {
                  *(_BYTE *)(v4 + 104) |= 0x40u;
                  *(_QWORD *)(v4 + 4944) = v44;
                  *(_BYTE *)(v4 + 105) = 1;
                  *(_DWORD *)(v4 + 4924) = v46;
                  *(_QWORD *)(v4 + 4936) = v43;
                  *(_DWORD *)(v4 + 4928) = v48;
                  *(_QWORD *)(v4 + 4952) = v45;
                  KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
                  if ( v47 )
                    *v47 = 0;
                }
              }
              else if ( v47 )
              {
                *v47 = -1056964602;
              }
            }
          }
          else
          {
            v52 = v60;
            KeInitializeDpc(v60, (PKDEFERRED_ROUTINE)v62, a2);
            KeInitializeSpinLock((PKSPIN_LOCK)&v52[1].TargetInfoAsUlong);
          }
        }
        else if ( a1 == 4096 )
        {
          v30 = (_DWORD *)v62;
          *v30 = (unsigned __int8)StorEnablePassiveInitialization(a2, v60);
        }
        else
        {
          v18 = a1 - 3;
          switch ( (int)v18 )
          {
            case 0:
              if ( v4 )
              {
                DbgLogRequest(v4, 39, v4, *(_DWORD *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 520), 0LL);
                v23 = *(_DWORD *)(v4 + 520);
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                  McTemplateK0pqq(
                    v22,
                    (unsigned int)&EventResetDetected,
                    0,
                    (_DWORD)v59,
                    *(_DWORD *)(v4 + 56),
                    *(_DWORD *)(v4 + 520));
                if ( v23 )
                {
                  if ( v23 > 0x3D0900 )
                    v23 = 4000000;
                  v24 = v23 / 0xF4240 + 1;
                  if ( v23 == 1000000 * (v23 / 0xF4240) )
                    v24 = v23 / 0xF4240;
                  StorPortPause(v59, v24);
                }
              }
              break;
            case 3:
              v19 = v60;
              v20 = (unsigned int)v62;
              if ( v4 )
              {
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                  McTemplateK0pqq(v18, (unsigned int)&EventRequestTimerCall, 0, (_DWORD)a2, *(_DWORD *)(v4 + 56), v62);
                if ( KeGetCurrentIrql() > 2u )
                {
                  RaidAdapterRequestTimerDeferred(v4, v19, (unsigned int)v20, v5);
                }
                else
                {
                  v21 = (struct _KTIMER *)(v4 + 1664);
                  if ( (_DWORD)v20 )
                  {
                    *(_QWORD *)(v4 + 1920) = v19;
                    KeSetCoalescableTimer(v21, (LARGE_INTEGER)(-10 * v20), 0, 0, (PKDPC)(v4 + 1600));
                  }
                  else
                  {
                    KeCancelTimer(v21);
                  }
                }
              }
              break;
            case 4:
              if ( v4 )
              {
                DbgLogRequest(v4, 38, v4, *(_DWORD *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 520), 0LL);
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                  McTemplateK0pq(v25, &EventBusChangeDetected, 0LL, v59, *(_DWORD *)(v4 + 56));
                *(_WORD *)(v4 + 105) = 257;
                KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
              }
              break;
            case 5:
              v26 = v62;
              v27 = 0;
              v28 = v60;
              if ( (_BYTE)v62 != 0xFF )
              {
                v2 = (char)v64;
                v27 = (char)v65;
              }
              if ( v60 )
              {
                if ( v60->TargetInfoAsUlong <= 0x80 )
                {
                  if ( v4 )
                  {
                    v29 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1552));
                    if ( v29 )
                    {
                      LODWORD(v29[1].Next) = 134684674;
                      LOBYTE(v29[2].Next) = v26;
                      if ( v26 != -1 )
                      {
                        BYTE1(v29[2].Next) = v2;
                        BYTE2(v29[2].Next) = v27;
                      }
                      memmove(&v29[2].Next + 1, v28, v28->TargetInfoAsUlong);
                      RaidQueueDeferredItem((PVOID)(v4 + 1472));
                    }
                  }
                }
              }
              break;
            case 7:
              if ( v4 )
                RaidpLinkUp(v4, a2, a2, (PRKDPC *)va);
              break;
            case 8:
              if ( v4 )
                RaidpLinkDown(v4, a2, a2, (PRKDPC *)va);
              break;
            case 9:
              *(_QWORD *)&v60->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
              break;
            case 10:
              KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
            case 11:
              RaidHandleTraceNotifyType(v18, (unsigned int)v60, v62);
              break;
            case 12:
              StorpGetExtendedTable(a2, v60);
              break;
            default:
              return;
          }
        }
        break;
    }
  }
  else
  {
    va_copy(v55, va1);
    if ( v4 && v60 )
    {
      v7 = (char *)(LOBYTE(v60->Number) == 40 ? v60[1].DeferredContext : v60->SystemArgument2);
      if ( v7 )
      {
        if ( (*(_BYTE *)(v4 + 544) & 2) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 5208));
        if ( (qword_1C0056210 & 8) != 0 )
          RaidLogMiniportCompletion(v7, a2, a2);
        if ( (*(_BYTE *)(v4 + 524) & 0x10) == 0 || _InterlockedExchange((volatile __int32 *)v7 + 194, 4) != 1 )
        {
          v8 = *((_QWORD *)v7 + 20);
          if ( v8 )
            *(_BYTE *)(v8 + 141) = -85;
          v7[16] = v7[16] & 0xE3 | 0x10;
          v9 = *(struct _PROCESSOR_NUMBER *)(v7 + 18);
          ProcNumber[0] = v9;
          if ( v9.Group == 0xFFFF )
            goto LABEL_28;
          if ( (*(_BYTE *)(v4 + 4451) & 2) != 0 )
          {
            KeGetCurrentProcessorNumberEx(ProcNumber);
            v9.Group = ProcNumber[0].Group;
          }
          if ( (unsigned int)v9.Group >= LODWORD(WPP_MAIN_CB.SecurityDescriptor)
            || (unsigned int)ProcNumber[0].Number >= *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount
                                                               + 4LL * v9.Group) )
          {
LABEL_28:
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 224), (PSLIST_ENTRY)v7 + 2);
            KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
          }
          else if ( !ExpInterlockedPushEntrySList(
                       (PSLIST_HEADER)(*(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock
                                     + 64LL
                                     + ((unsigned __int64)(ProcNumber[0].Number + (v9.Group << 6)) << 7)),
                       (PSLIST_ENTRY)v7 + 2) )
          {
            v17 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock
                + ((unsigned __int64)(ProcNumber[0].Number + (ProcNumber[0].Group << 6)) << 7);
            if ( *(_DWORD *)(v17 + 80) != 2 )
              KeInsertQueueDpc((PRKDPC)v17, *(PVOID *)(v4 + 8), 0LL);
          }
        }
      }
    }
  }
}
