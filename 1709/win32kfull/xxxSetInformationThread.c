/*
 * XREFs of xxxSetInformationThread @ 0x1C0047F90
 * Callers:
 *     NtUserSetInformationThread @ 0x1C0047E90 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 * Callees:
 *     xxxRefreshDisplayOrientation @ 0x1C0042640 (xxxRefreshDisplayOrientation.c)
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0048FF0 (xxxSetCsrssThreadDesktop.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C0093D64 (RtlInitLargeUnicodeString.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0120CE0 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0120F4C (-EndShutdown@@YAXJ@Z.c)
 *     QueueShutdownData @ 0x1C0141F74 (QueueShutdownData.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C014225C (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  NTSTATUS v6; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rcx
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 i; // rax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  PVOID v21; // rdi
  __int64 v22; // rax
  void *v23; // rcx
  struct _KTHREAD *v24; // rdi
  __int64 v25; // r8
  int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _KTHREAD *v32; // [rsp+40h] [rbp-69h]
  PVOID v33; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v34[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v35; // [rsp+58h] [rbp-51h]
  __int64 v36; // [rsp+60h] [rbp-49h]
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v38[2]; // [rsp+70h] [rbp-39h] BYREF
  PVOID *v39; // [rsp+78h] [rbp-31h]
  _BYTE v40[80]; // [rsp+90h] [rbp-19h] BYREF

  LODWORD(v33) = a4;
  v6 = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v32 = (struct _KTHREAD *)Object;
  if ( v6 >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(Object);
    v8 = ThreadWin32Thread;
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v27 = ValidateHwnd(*a3);
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 16);
            if ( v28 )
            {
              if ( *(_QWORD *)(v28 + 432) )
              {
                ghwndBlocking = *a3;
                PostWinlogonMessage(1031LL, 0LL);
                v29 = *(_QWORD *)(v28 + 432);
                if ( *(_QWORD *)(*(_QWORD *)(v29 + 8) + 160LL) || (v30 = 0LL, *(_QWORD *)(v29 + 288)) )
                  v30 = 1LL;
                QueueShutdownData(0xFFFFLL, v30);
                v6 = 0;
                goto LABEL_84;
              }
            }
          }
          goto LABEL_83;
        case 13:
          v6 = -1073741790;
          v26 = 0;
          while ( !gspwndBSDR )
          {
            if ( gdwInAtomicOperation )
            {
              v8 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation);
            v33 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v33);
            EnterCrit(0LL, 1LL);
            v26 += 100;
            if ( v26 >= 10000 )
              goto LABEL_74;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1LL);
          v6 = 0;
LABEL_74:
          if ( v26 > 0 )
            TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v26);
          goto LABEL_84;
        case 14:
          QueueShutdownData(*a3, 0LL);
          gptiShutdownWaiter = 0LL;
          ghwndBlocking = 0LL;
          break;
        default:
          if ( a2 <= 14 )
            goto LABEL_64;
          if ( a2 > 16 )
          {
            if ( a2 == 17 )
            {
              *(_QWORD *)v34 = 0LL;
              v35 = 0LL;
              v36 = 0LL;
              v6 = xxxSetInformationThread(-2LL, 7LL, v34, 24LL);
              if ( v6 < 0 )
                goto LABEL_84;
              PostShellHookMessagesEx(0x37uLL, 0LL, 0LL);
              v19 = xxxSetInformationThread(-2LL, 9LL, v34, 24LL);
              goto LABEL_25;
            }
            goto LABEL_64;
          }
          if ( a2 == 15 )
          {
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(gpsi + 2220LL) |= 8u;
            else
              *(_DWORD *)(gpsi + 2220LL) &= ~8u;
            RtlLoadStringOrError(629LL, v40, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(gpsi + 2220LL) |= 0x10u;
            else
              *(_DWORD *)(gpsi + 2220LL) &= ~0x10u;
            RtlLoadStringOrError(630LL, v40, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceDockState(*(unsigned int *)a3);
          }
          RtlInitLargeUnicodeString(v34, v40);
          v38[0] = 0;
          v25 = *(unsigned int *)a3;
          v39 = &v33;
          v38[1] = 100;
          xxxBroadcastMessageEx(0LL, 26LL, v25, v34, 6, v38, 1, 0);
          break;
      }
    }
    else
    {
      if ( a2 == 10 )
      {
        v19 = SetCsrApiPortHandle(*a3);
        goto LABEL_25;
      }
      v9 = a2 - 1;
      if ( !v9 )
      {
        if ( ThreadWin32Thread )
        {
          if ( (_DWORD)v33 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v24 = v32;
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(ThreadWin32Thread + 464) |= 0x20000u;
            else
              *(_DWORD *)(ThreadWin32Thread + 464) &= ~0x20000u;
            goto LABEL_85;
          }
          v6 = -1073741811;
          goto LABEL_84;
        }
        goto LABEL_33;
      }
      v10 = v9 - 4;
      if ( !v10 )
      {
        v24 = v32;
        v6 = InitiateShutdownW(v32, (unsigned int *)a3);
LABEL_85:
        ObfDereferenceObject(v24);
        return (unsigned int)v6;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            v20 = ObReferenceObjectByHandle((HANDLE)*a3, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v33, 0LL);
            v21 = v33;
            v6 = v20;
            if ( v20 >= 0 )
            {
              v22 = W32GetThreadWin32Thread(v33);
              if ( v22 && (v23 = *(void **)(v22 + 432)) != 0LL )
                v6 = xxxSetCsrssThreadDesktop(v23);
              else
                v6 = -1073741816;
              ObfDereferenceObject(v21);
            }
            goto LABEL_84;
          }
          if ( v13 == 1 )
          {
            if ( (_DWORD)v33 == 32 )
              v14 = *((_DWORD *)a3 + 6);
            else
              v14 = 0;
            v15 = a3[1];
            if ( !v15 )
            {
LABEL_24:
              v19 = xxxRestoreCsrssThreadDesktop(a3 + 1, v14);
LABEL_25:
              v6 = v19;
LABEL_84:
              v24 = v32;
              goto LABEL_85;
            }
            v16 = 0LL;
            v17 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v16 )
              {
                for ( i = *(_QWORD *)(v17 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v15 )
                  {
                    v16 = i;
                    break;
                  }
                }
                v17 = *(_QWORD *)(v17 + 8);
                if ( !v17 )
                {
                  if ( !v16 )
                    goto LABEL_83;
                  goto LABEL_24;
                }
              }
              goto LABEL_24;
            }
LABEL_83:
            v6 = -1073741823;
            goto LABEL_84;
          }
LABEL_64:
          v6 = -1073741821;
          goto LABEL_84;
        }
        if ( grpdeskRitInput )
        {
          v19 = xxxSetCsrssThreadDesktop(grpdeskRitInput);
          goto LABEL_25;
        }
LABEL_33:
        v6 = -1073741816;
        goto LABEL_84;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v6 = 0;
    goto LABEL_84;
  }
  return (unsigned int)v6;
}
