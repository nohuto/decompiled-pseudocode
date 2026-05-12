/*
 * XREFs of StorPortNotification @ 0x1C0005A70
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C0067360 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0005ED0 (RaidLogMiniportCompletion.c)
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
 *     RaidQueueDeferredItem @ 0x1C000D0E0 (RaidQueueDeferredItem.c)
 *     RaidAdapterRequestTimer @ 0x1C000F62C (RaidAdapterRequestTimer.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002D100 (RaidAdapterRequestTimerDeferred.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 *     Template_pqq @ 0x1C002FCA4 (Template_pqq.c)
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 *     RaidpLinkDown @ 0x1C0032118 (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C0032184 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C0032368 (StorAsyncNotificationDeferred.c)
 *     StorPortPause @ 0x1C0032F20 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C0034534 (StorpGetExtendedTable.c)
 *     Template_pqqcccqpp @ 0x1C0035108 (Template_pqqcccqpp.c)
 *     RaidHandleTraceNotifyType @ 0x1C003889C (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003DEE0 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0040B30 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0040E58 (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(int a1, _QWORD **a2, ...)
{
  int v2; // esi
  _QWORD **v3; // r8
  __int64 v4; // rdi
  va_list v5; // r9
  __int64 *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  char *v11; // rbx
  __int64 v12; // rax
  struct _PROCESSOR_NUMBER v13; // eax
  _QWORD *v14; // rax
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  _DWORD *v16; // rbx
  int v17; // ecx
  PRKDPC v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  _DWORD *v23; // rbx
  PRKDPC v24; // rsi
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  char v28; // r14
  char v29; // r15
  PRKDPC v30; // rsi
  char v31; // r12
  PSLIST_ENTRY v32; // rax
  PSLIST_ENTRY v33; // rbx
  int v34; // ecx
  int v35; // ecx
  unsigned __int64 v36; // r15
  int *v37; // r14
  struct _PROCESSOR_NUMBER v38; // ebx
  __int64 Unit; // rax
  char v40; // al
  int v41; // ecx
  PRKDPC v42; // rdi
  __int64 v43; // rbx
  int DpcData; // eax
  __int64 v45; // rcx
  _WORD *v46; // r14
  struct _PROCESSOR_NUMBER v47; // edx
  _DWORD *v48; // r10
  __int64 v49; // r11
  int v50; // r15d
  _DWORD *v51; // rbx
  unsigned __int8 v52; // r12
  unsigned __int8 v53; // r13
  int v54; // ecx
  char v55; // [rsp+60h] [rbp-58h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+64h] [rbp-54h] BYREF
  va_list v57; // [rsp+68h] [rbp-50h]
  _DWORD *v58; // [rsp+70h] [rbp-48h]
  __int64 v59; // [rsp+78h] [rbp-40h]
  _QWORD **v60; // [rsp+C8h] [rbp+10h]
  PRKDPC v61; // [rsp+D0h] [rbp+18h] BYREF
  va_list va; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v63; // [rsp+D8h] [rbp+20h] BYREF
  va_list va1; // [rsp+D8h] [rbp+20h]
  _DWORD *v65; // [rsp+E0h] [rbp+28h]
  _DWORD *v66; // [rsp+E8h] [rbp+30h] BYREF
  va_list va2; // [rsp+E8h] [rbp+30h]
  __int64 v68; // [rsp+F0h] [rbp+38h]
  _DWORD *v69; // [rsp+F8h] [rbp+40h]
  va_list va3; // [rsp+100h] [rbp+48h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v61 = va_arg(va1, PRKDPC);
  va_copy(va2, va1);
  v63 = va_arg(va2, _QWORD);
  v65 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v66 = va_arg(va3, _DWORD *);
  v68 = va_arg(va3, _QWORD);
  v69 = va_arg(va3, _DWORD *);
  v60 = a2;
  v2 = 0;
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
        v6 = *(a2 - 2);
        v7 = (unsigned int)v61;
        v8 = v65;
        v9 = v63;
        v10 = *v6;
        *v65 = (_DWORD)v61;
        if ( (_DWORD)v7 == 2 )
        {
          if ( *(_DWORD *)(v10 + 688) )
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 680), (PKLOCK_QUEUE_HANDLE)(v8 + 2));
          else
            *((_BYTE *)v8 + 8) = RaidAdapterAcquireInterruptLock(v10, v7, v3, (PRKDPC *)va);
        }
        else
        {
          v19 = (unsigned int)(v7 - 1);
          if ( (_DWORD)v19 )
          {
            if ( (_DWORD)v19 == 2 )
              *((_BYTE *)v8 + 24) = RaidAdapterAcquireInterruptLock(v10, v19, v3, (PRKDPC *)va);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 64), (PKLOCK_QUEUE_HANDLE)(v8 + 2));
          }
        }
      }
      else if ( a1 == 4098 )
      {
        v16 = v66;
        *v16 = KeInsertQueueDpc(v61, (PVOID)v63, v65);
      }
      else if ( a1 <= 4096 )
      {
        if ( a1 == 4096 )
        {
          v22 = (__int64)*(a2 - 2);
          v23 = (_DWORD *)v63;
          if ( (*(_BYTE *)(*(_QWORD *)v22 + 104LL) & 0x10) != 0 )
          {
            *(_QWORD *)(*(_QWORD *)v22 + 4408LL) = v61;
            v2 = 1;
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) )
          {
            WPP_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              23LL,
              &WPP_b8c4fabb6c503934ded1881555415092_Traceguids,
              (PRKDPC *)va);
          }
          *v23 = v2;
        }
        else
        {
          v20 = (unsigned int)(a1 - 3);
          switch ( (int)v20 )
          {
            case 0:
              if ( v4 )
              {
                v26 = *(_DWORD *)(v4 + 520);
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                {
                  Template_pqq(
                    v20,
                    (unsigned int)&EventResetDetected,
                    0,
                    (_DWORD)a2,
                    *(_DWORD *)(v4 + 56),
                    *(_DWORD *)(v4 + 520));
                  v3 = v60;
                }
                if ( v26 )
                {
                  if ( v26 > 0x3D0900 )
                    v26 = 4000000;
                  v27 = v26 / 0xF4240 + 1;
                  if ( v26 == 1000000 * (v26 / 0xF4240) )
                    v27 = v26 / 0xF4240;
                  StorPortPause(v3, v27);
                }
              }
              break;
            case 3:
              v24 = v61;
              v25 = v63;
              if ( v4 )
              {
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                  Template_pqq(v20, (unsigned int)&EventRequestTimerCall, 0, (_DWORD)a2, *(_DWORD *)(v4 + 56), v63);
                if ( KeGetCurrentIrql() > 2u )
                  RaidAdapterRequestTimerDeferred(v4, v24, v25, v5);
                else
                  RaidAdapterRequestTimer(v4, v24, v25, v5);
              }
              break;
            case 4:
              if ( v4 )
              {
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
                  Template_pq(v20, &EventBusChangeDetected, 0LL, a2, *(_DWORD *)(v4 + 56));
                *(_WORD *)(v4 + 105) = 257;
                KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
              }
              break;
            case 5:
              v28 = v63;
              v29 = 0;
              v30 = v61;
              v31 = 0;
              if ( (_BYTE)v63 != 0xFF )
              {
                v29 = (char)v65;
                v31 = (char)v66;
              }
              if ( v61 )
              {
                if ( v61->TargetInfoAsUlong <= 0x80 )
                {
                  if ( v4 )
                  {
                    v32 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1552));
                    v33 = v32;
                    if ( v32 )
                    {
                      LODWORD(v32[1].Next) = 134684674;
                      LOBYTE(v32[2].Next) = v28;
                      if ( v28 != -1 )
                      {
                        BYTE1(v32[2].Next) = v29;
                        BYTE2(v32[2].Next) = v31;
                      }
                      memmove(&v32[2].Next + 1, v30, v30->TargetInfoAsUlong);
                      RaidQueueDeferredItem(v4 + 1472, v33);
                    }
                  }
                }
              }
              break;
            case 7:
              if ( v4 )
                RaidpLinkUp(v4);
              break;
            case 8:
              if ( v4 )
                RaidpLinkDown(v4);
              break;
            case 9:
              *(_QWORD *)&v61->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
              break;
            case 10:
              KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
            case 11:
              RaidHandleTraceNotifyType(v20, (unsigned int)v61, v63);
              break;
            case 12:
              StorpGetExtendedTable(a2, v61);
              break;
            default:
              return;
          }
        }
      }
      else
      {
        v17 = a1 - 4097;
        if ( v17 )
        {
          v34 = v17 - 4;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              if ( v35 == 1 )
              {
                v36 = v63;
                va_copy(v57, va2);
                v37 = v65;
                if ( v4 && v61 && LOWORD(v61->TargetInfoAsUlong) == 1 && (v63 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
                {
                  ProcNumber.Group = (unsigned __int16)v61->DpcListEntry.Next;
                  ProcNumber.Number = BYTE2(v61->DpcListEntry.Next);
                  v38 = ProcNumber;
                  Unit = RaidAdapterFindUnit(v4, *(unsigned int *)&ProcNumber, a2);
                  if ( Unit && (*(_DWORD *)(Unit + 1536) & 4) != 0 )
                  {
                    if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1592), 1, 0) == 1 )
                    {
                      *v37 = -1056964596;
                    }
                    else if ( KeGetCurrentIrql() > 2u )
                    {
                      v40 = StorAsyncNotificationDeferred(v4, Unit, *(unsigned int *)&ProcNumber, v36);
                      v41 = -1056964596;
                      if ( v40 )
                        v41 = 0;
                      *v37 = v41;
                    }
                    else
                    {
                      *(_QWORD *)(Unit + 1584) = v36;
                      *v37 = RaidUnitProcessAsyncNotification(v4, *(unsigned int *)&v38);
                    }
                  }
                  else
                  {
                    *v37 = -1056964601;
                  }
                }
                else
                {
                  *v65 = -1056964602;
                }
              }
            }
            else if ( StorEtwLoggingEnabled )
            {
              v42 = v61;
              if ( v63 )
              {
                v43 = *(_BYTE *)(v63 + 2) == 40 ? *(_QWORD *)(v63 + 96) : *(_QWORD *)(v63 + 48);
                if ( v43 )
                {
                  DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
                  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
                  {
                    *(_QWORD *)(v43 + 720) = v61;
                    DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
                  }
                  if ( (DpcData & 0x100) != 0 )
                  {
                    LOBYTE(a2) = 1;
                    StorEtwIORequestServiceTimeEventData(v43, a2, v42, (PRKDPC *)va);
                    DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
                  }
                  v45 = *(_QWORD *)(v43 + 224);
                  if ( v45 && *(_DWORD *)(v45 + 1524) && (DpcData & 0x2000000) != 0 )
                  {
                    LOBYTE(a2) = 1;
                    StorEtwLogoRequestServiceTimeEventData(v43, a2, v42, v5);
                  }
                }
              }
            }
          }
          else if ( v4 )
          {
            v46 = (_WORD *)v63;
            v47 = (struct _PROCESSOR_NUMBER)v65;
            v48 = v66;
            v49 = v68;
            v50 = (int)v61;
            ProcNumber = (struct _PROCESSOR_NUMBER)v65;
            v58 = v66;
            v51 = v69;
            v59 = v68;
            va_copy(v57, va3);
            if ( v63 && *(_WORD *)v63 == 1 )
            {
              v52 = *(_BYTE *)(v63 + 8);
              v53 = *(_BYTE *)(v63 + 9);
              v54 = *(unsigned __int8 *)(v63 + 10);
            }
            else
            {
              v52 = -1;
              v53 = -1;
              v54 = 255;
            }
            v55 = v54;
            if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
            {
              Template_pqqcccqpp(
                v54,
                (_DWORD)v65,
                0,
                (_DWORD)v3,
                *(_DWORD *)(v4 + 56),
                (char)v61,
                v52,
                v53,
                v54,
                (char)v65,
                (char)v66,
                v68);
              LOBYTE(v54) = v55;
              v47 = ProcNumber;
              v48 = v58;
              v49 = v59;
            }
            if ( v46
              && *v46 == 1
              && v52 <= *(_BYTE *)(v4 + 376)
              && ((v50 & 3) == 0 || v53 <= *(_BYTE *)(v4 + 401))
              && ((v50 & 1) == 0 || (unsigned __int8)v54 <= *(_BYTE *)(v4 + 450))
              && (v50 & 7) != 0 )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4920), 1, 0) == 1 )
              {
                if ( v51 )
                  *v51 = -1056964607;
              }
              else
              {
                *(_BYTE *)(v4 + 104) |= 0x40u;
                *(struct _PROCESSOR_NUMBER *)(v4 + 4928) = v47;
                *(_BYTE *)(v4 + 105) = 1;
                *(_DWORD *)(v4 + 4924) = v50;
                *(_QWORD *)(v4 + 4936) = v46;
                *(_QWORD *)(v4 + 4944) = v48;
                *(_QWORD *)(v4 + 4952) = v49;
                KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
                if ( v51 )
                  *v51 = 0;
              }
            }
            else if ( v51 )
            {
              *v51 = -1056964602;
            }
          }
        }
        else
        {
          v18 = v61;
          KeInitializeDpc(v61, (PKDEFERRED_ROUTINE)v63, a2);
          KeInitializeSpinLock((PKSPIN_LOCK)&v18[1].TargetInfoAsUlong);
        }
      }
      return;
    }
    v14 = *(a2 - 2);
    switch ( v61->TargetInfoAsUlong )
    {
      case 2u:
        p_DpcListEntry = &v61->DpcListEntry;
        if ( !*(_DWORD *)(*v14 + 688LL) )
        {
          RaidAdapterReleaseInterruptLock(*v14, LOBYTE(p_DpcListEntry->Next));
          return;
        }
LABEL_26:
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
        return;
      case 1u:
        p_DpcListEntry = &v61->DpcListEntry;
        goto LABEL_26;
      case 3u:
        RaidAdapterReleaseInterruptLock(*v14, LOBYTE(v61->DeferredRoutine));
        break;
    }
  }
  else
  {
    va_copy(v57, va1);
    if ( v4 && v61 )
    {
      v11 = (char *)(LOBYTE(v61->Number) == 40 ? v61[1].DeferredContext : v61->SystemArgument2);
      if ( v11 )
      {
        if ( (*(_BYTE *)(v4 + 544) & 2) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 5208));
        if ( (qword_1C00551F8 & 8) != 0 )
          RaidLogMiniportCompletion(v11, a2, a2);
        if ( (*(_BYTE *)(v4 + 524) & 0x10) == 0 || _InterlockedExchange((volatile __int32 *)v11 + 194, 4) != 1 )
        {
          v12 = *((_QWORD *)v11 + 20);
          if ( v12 )
            *(_BYTE *)(v12 + 141) = -85;
          v11[16] = v11[16] & 0xE3 | 0x10;
          v13 = *(struct _PROCESSOR_NUMBER *)(v11 + 18);
          ProcNumber = v13;
          if ( v13.Group == 0xFFFF )
            goto LABEL_22;
          if ( (*(_BYTE *)(v4 + 4451) & 2) != 0 )
          {
            KeGetCurrentProcessorNumberEx(&ProcNumber);
            v13.Group = ProcNumber.Group;
          }
          if ( (unsigned int)v13.Group >= HIDWORD(WPP_MAIN_CB.Reserved)
            || (unsigned int)ProcNumber.Number >= *((_DWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink
                                                  + v13.Group) )
          {
LABEL_22:
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 224), (PSLIST_ENTRY)v11 + 2);
            KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
          }
          else if ( !ExpInterlockedPushEntrySList(
                       (PSLIST_HEADER)(((ProcNumber.Number + ((unsigned __int64)v13.Group << 6)) << 7)
                                     + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
                                     + 64LL),
                       (PSLIST_ENTRY)v11 + 2) )
          {
            v21 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
                + ((ProcNumber.Number + ((unsigned __int64)ProcNumber.Group << 6)) << 7);
            if ( *(_DWORD *)(v21 + 80) != 2 )
              KeInsertQueueDpc((PRKDPC)v21, *(PVOID *)(v4 + 8), 0LL);
          }
        }
      }
    }
  }
}
