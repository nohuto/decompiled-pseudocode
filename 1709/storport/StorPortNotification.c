/*
 * XREFs of StorPortNotification @ 0x1C0006310
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C006B3F0 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001F0C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     RaidLogMiniportCompletion @ 0x1C0006790 (RaidLogMiniportCompletion.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterRequestTimer @ 0x1C001B47C (RaidAdapterRequestTimer.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     McTemplateK0pqq @ 0x1C002B950 (McTemplateK0pqq.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002E088 (RaidAdapterRequestTimerDeferred.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     McTemplateK0pqqcccqpp @ 0x1C0032D14 (McTemplateK0pqqcccqpp.c)
 *     RaidpLinkDown @ 0x1C00331F0 (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C003325C (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C0033440 (StorAsyncNotificationDeferred.c)
 *     StorPortPause @ 0x1C0034070 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C0035684 (StorpGetExtendedTable.c)
 *     RaidHandleTraceNotifyType @ 0x1C003A348 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003EDA4 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0041978 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0041CA4 (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(int a1, _QWORD **a2, ...)
{
  int v2; // esi
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
  unsigned int v20; // ebx
  __int64 v21; // rdx
  int v22; // ecx
  PRKDPC v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  _DWORD *v26; // rbx
  int v27; // ecx
  unsigned int v28; // ebx
  __int64 v29; // rdx
  char v30; // bp
  char v31; // r14
  PRKDPC v32; // rsi
  char v33; // r15
  PSLIST_ENTRY v34; // rax
  struct _SLIST_ENTRY *v35; // rbx
  int v36; // ecx
  int v37; // ecx
  unsigned __int64 v38; // rbp
  int *v39; // r14
  struct _PROCESSOR_NUMBER v40; // ebx
  __int64 Unit; // rax
  char v42; // al
  int v43; // ecx
  PRKDPC v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  _WORD *v47; // rbp
  struct _PROCESSOR_NUMBER v48; // edx
  _DWORD *v49; // r10
  __int64 v50; // r11
  int v51; // r14d
  _DWORD *v52; // rbx
  unsigned __int8 v53; // r15
  unsigned __int8 v54; // r12
  unsigned __int8 v55; // r13
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+64h] [rbp-74h] BYREF
  va_list v57; // [rsp+68h] [rbp-70h]
  _DWORD *v58; // [rsp+70h] [rbp-68h]
  __int64 v59; // [rsp+78h] [rbp-60h]
  __int64 v60; // [rsp+80h] [rbp-58h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  _QWORD **v62; // [rsp+E8h] [rbp+10h]
  PRKDPC v63; // [rsp+F0h] [rbp+18h] BYREF
  va_list va; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v65; // [rsp+F8h] [rbp+20h] BYREF
  va_list va1; // [rsp+F8h] [rbp+20h]
  _DWORD *v67; // [rsp+100h] [rbp+28h]
  _DWORD *v68; // [rsp+108h] [rbp+30h] BYREF
  va_list va2; // [rsp+108h] [rbp+30h]
  __int64 v70; // [rsp+110h] [rbp+38h]
  _DWORD *v71; // [rsp+118h] [rbp+40h]
  va_list va3; // [rsp+120h] [rbp+48h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v63 = va_arg(va1, PRKDPC);
  va_copy(va2, va1);
  v65 = va_arg(va2, _QWORD);
  v67 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v68 = va_arg(va3, _DWORD *);
  v70 = va_arg(va3, _QWORD);
  v71 = va_arg(va3, _DWORD *);
  v62 = a2;
  v2 = 0;
  v60 = 0LL;
  v3 = a2;
  v4 = 0LL;
  if ( a2 )
    v4 = **(a2 - 2);
  va_copy(v5, va);
  if ( a1 )
  {
    if ( a1 != 4100 )
    {
      if ( a1 == 4099 )
      {
        v10 = *(a2 - 2);
        v11 = (unsigned int)v63;
        v12 = v67;
        v13 = v65;
        v14 = *v10;
        *v67 = (_DWORD)v63;
        if ( (_DWORD)v11 == 2 )
        {
          if ( *(_DWORD *)(v14 + 688) )
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 680), (PKLOCK_QUEUE_HANDLE)(v12 + 2));
          else
            *((_BYTE *)v12 + 8) = RaidAdapterAcquireInterruptLock(v14, v11, v3, (PRKDPC *)va);
        }
        else
        {
          v21 = (unsigned int)(v11 - 1);
          if ( (_DWORD)v21 )
          {
            if ( (_DWORD)v21 == 2 )
              *((_BYTE *)v12 + 24) = RaidAdapterAcquireInterruptLock(v14, v21, v3, (PRKDPC *)va);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 64), (PKLOCK_QUEUE_HANDLE)(v12 + 2));
          }
        }
      }
      else if ( a1 == 4098 )
      {
        v6 = v68;
        *v6 = KeInsertQueueDpc(v63, (PVOID)v65, v67);
      }
      else if ( a1 > 4096 )
      {
        v22 = a1 - 4097;
        if ( v22 )
        {
          v36 = v22 - 4;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
              {
                v38 = v65;
                va_copy(v57, va2);
                v39 = v67;
                if ( v4 && v63 && LOWORD(v63->TargetInfoAsUlong) == 1 && (v65 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
                {
                  ProcNumber.Group = (unsigned __int16)v63->DpcListEntry.Next;
                  ProcNumber.Number = BYTE2(v63->DpcListEntry.Next);
                  v40 = ProcNumber;
                  Unit = RaidAdapterFindUnit(v4, *(_DWORD *)&ProcNumber);
                  if ( Unit && (*(_DWORD *)(Unit + 1568) & 4) != 0 )
                  {
                    if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1624), 1, 0) == 1 )
                    {
                      *v39 = -1056964596;
                    }
                    else if ( KeGetCurrentIrql() > 2u )
                    {
                      v42 = StorAsyncNotificationDeferred(v4, Unit, *(unsigned int *)&ProcNumber, v38);
                      v43 = -1056964596;
                      if ( v42 )
                        v43 = 0;
                      *v39 = v43;
                    }
                    else
                    {
                      *(_QWORD *)(Unit + 1616) = v38;
                      *v39 = RaidUnitProcessAsyncNotification(v4, *(unsigned int *)&v40, Unit + 1608);
                    }
                  }
                  else
                  {
                    *v39 = -1056964601;
                  }
                }
                else
                {
                  *v67 = -1056964602;
                }
              }
            }
            else if ( StorEtwLoggingEnabled )
            {
              v44 = v63;
              if ( v65 )
              {
                v45 = *(_BYTE *)(v65 + 2) == 40 ? *(_QWORD *)(v65 + 96) : *(_QWORD *)(v65 + 48);
                if ( v45 )
                {
                  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
                    *(_QWORD *)(v45 + 720) = v63;
                  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
                  {
                    LOBYTE(a2) = 1;
                    StorEtwIORequestServiceTimeEventData(v45, a2, v44, (PRKDPC *)va);
                  }
                  v46 = *(_QWORD *)(v45 + 224);
                  if ( v46 && *(_DWORD *)(v46 + 1556) && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
                  {
                    LOBYTE(a2) = 1;
                    StorEtwLogoRequestServiceTimeEventData(v45, a2, v44, v5);
                  }
                }
              }
            }
          }
          else if ( v4 )
          {
            v47 = (_WORD *)v65;
            v48 = (struct _PROCESSOR_NUMBER)v67;
            v49 = v68;
            v50 = v70;
            v51 = (int)v63;
            ProcNumber = (struct _PROCESSOR_NUMBER)v67;
            v52 = v71;
            v58 = v68;
            v59 = v70;
            va_copy(v57, va3);
            if ( v65 && *(_WORD *)v65 == 1 )
            {
              v53 = *(_BYTE *)(v65 + 8);
              v54 = *(_BYTE *)(v65 + 9);
              v55 = *(_BYTE *)(v65 + 10);
            }
            else
            {
              v53 = -1;
              v54 = -1;
              v55 = -1;
            }
            if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
            {
              McTemplateK0pqqcccqpp(
                0,
                (_DWORD)v67,
                0,
                (_DWORD)v3,
                *(_DWORD *)(v4 + 56),
                (char)v63,
                v53,
                v54,
                v55,
                (char)v67,
                (char)v68,
                v70);
              v48 = ProcNumber;
              v49 = v58;
              v50 = v59;
            }
            if ( v47
              && *v47 == 1
              && v53 <= *(_BYTE *)(v4 + 376)
              && ((v51 & 3) == 0 || v54 <= *(_BYTE *)(v4 + 401))
              && ((v51 & 1) == 0 || v55 <= *(_BYTE *)(v4 + 450))
              && (v51 & 7) != 0 )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4920), 1, 0) == 1 )
              {
                if ( v52 )
                  *v52 = -1056964607;
              }
              else
              {
                *(_BYTE *)(v4 + 104) |= 0x40u;
                *(struct _PROCESSOR_NUMBER *)(v4 + 4928) = v48;
                *(_BYTE *)(v4 + 105) = 1;
                *(_DWORD *)(v4 + 4924) = v51;
                *(_QWORD *)(v4 + 4936) = v47;
                *(_QWORD *)(v4 + 4944) = v49;
                *(_QWORD *)(v4 + 4952) = v50;
                KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
                if ( v52 )
                  *v52 = 0;
              }
            }
            else if ( v52 )
            {
              *v52 = -1056964602;
            }
          }
        }
        else
        {
          v23 = v63;
          KeInitializeDpc(v63, (PKDEFERRED_ROUTINE)v65, a2);
          KeInitializeSpinLock((PKSPIN_LOCK)&v23[1].TargetInfoAsUlong);
        }
      }
      else if ( a1 == 4096 )
      {
        v25 = (__int64)*(a2 - 2);
        v26 = (_DWORD *)v65;
        if ( (*(_BYTE *)(*(_QWORD *)v25 + 104LL) & 0x10) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)v25 + 4408LL) = v63;
          v2 = 1;
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
        }
        *v26 = v2;
      }
      else
      {
        v18 = a1 - 3;
        switch ( (int)v18 )
        {
          case 0:
            if ( v4 )
            {
              DbgLogRequest(v4, 39, v4, *(unsigned int *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 520), 0LL);
              v28 = *(_DWORD *)(v4 + 520);
              if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                McTemplateK0pqq(
                  v27,
                  (unsigned int)&EventResetDetected,
                  0,
                  (_DWORD)v62,
                  *(_DWORD *)(v4 + 56),
                  *(_DWORD *)(v4 + 520));
              if ( v28 )
              {
                if ( v28 > 0x3D0900 )
                  v28 = 4000000;
                v29 = v28 / 0xF4240 + 1;
                if ( v28 == 1000000 * (v28 / 0xF4240) )
                  v29 = v28 / 0xF4240;
                StorPortPause(v62, v29);
              }
            }
            break;
          case 3:
            v19 = v63;
            v20 = v65;
            if ( v4 )
            {
              if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                McTemplateK0pqq(v18, (unsigned int)&EventRequestTimerCall, 0, (_DWORD)a2, *(_DWORD *)(v4 + 56), v65);
              if ( KeGetCurrentIrql() > 2u )
                RaidAdapterRequestTimerDeferred(v4, v19, v20, v5);
              else
                RaidAdapterRequestTimer(v4, v19, v20);
            }
            break;
          case 4:
            if ( v4 )
            {
              DbgLogRequest(v4, 38, v4, *(unsigned int *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 520), 0LL);
              if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                McTemplateK0pq(v24, &EventBusChangeDetected, 0LL, v62, *(_DWORD *)(v4 + 56));
              *(_WORD *)(v4 + 105) = 257;
              KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
            }
            break;
          case 5:
            v30 = v65;
            v31 = 0;
            v32 = v63;
            v33 = 0;
            if ( (_BYTE)v65 != 0xFF )
            {
              v31 = (char)v67;
              v33 = (char)v68;
            }
            if ( v63 )
            {
              if ( v63->TargetInfoAsUlong <= 0x80 )
              {
                if ( v4 )
                {
                  v34 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1552));
                  v35 = v34;
                  if ( v34 )
                  {
                    LODWORD(v34[1].Next) = 134684674;
                    LOBYTE(v34[2].Next) = v30;
                    if ( v30 != -1 )
                    {
                      BYTE1(v34[2].Next) = v31;
                      BYTE2(v34[2].Next) = v33;
                    }
                    memmove(&v34[2].Next + 1, v32, v32->TargetInfoAsUlong);
                    RaidQueueDeferredItem((char *)(v4 + 1472), v35);
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
            *(_QWORD *)&v63->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
            break;
          case 10:
            KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
          case 11:
            RaidHandleTraceNotifyType(v18, (unsigned int)v63, v65);
            break;
          case 12:
            StorpGetExtendedTable(a2, v63);
            break;
          default:
            return;
        }
      }
      return;
    }
    v15 = *(a2 - 2);
    switch ( v63->TargetInfoAsUlong )
    {
      case 2u:
        p_DpcListEntry = &v63->DpcListEntry;
        if ( !*(_DWORD *)(*v15 + 688LL) )
        {
          RaidAdapterReleaseInterruptLock(*v15, LOBYTE(p_DpcListEntry->Next));
          return;
        }
LABEL_28:
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
        return;
      case 1u:
        p_DpcListEntry = &v63->DpcListEntry;
        goto LABEL_28;
      case 3u:
        RaidAdapterReleaseInterruptLock(*v15, LOBYTE(v63->DeferredRoutine));
        break;
    }
  }
  else
  {
    va_copy(v57, va1);
    if ( v4 && v63 )
    {
      v7 = (char *)(LOBYTE(v63->Number) == 40 ? v63[1].DeferredContext : v63->SystemArgument2);
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
          ProcNumber = v9;
          if ( v9.Group == 0xFFFF )
            goto LABEL_21;
          if ( (*(_BYTE *)(v4 + 4451) & 2) != 0 )
          {
            KeGetCurrentProcessorNumberEx(&ProcNumber);
            v9.Group = ProcNumber.Group;
          }
          if ( (unsigned int)v9.Group >= HIDWORD(WPP_MAIN_CB.Reserved)
            || (unsigned int)ProcNumber.Number >= *((_DWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink
                                                  + v9.Group) )
          {
LABEL_21:
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 224), (PSLIST_ENTRY)v7 + 2);
            KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
          }
          else if ( !ExpInterlockedPushEntrySList(
                       (PSLIST_HEADER)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
                                     + 64LL
                                     + ((unsigned __int64)(ProcNumber.Number + (v9.Group << 6)) << 7)),
                       (PSLIST_ENTRY)v7 + 2) )
          {
            v17 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
                + ((unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7);
            if ( *(_DWORD *)(v17 + 80) != 2 )
              KeInsertQueueDpc((PRKDPC)v17, *(PVOID *)(v4 + 8), 0LL);
          }
        }
      }
    }
  }
}
