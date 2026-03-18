/*
 * XREFs of xxxSetInformationThread @ 0x1C00C74B0
 * Callers:
 *     NtUserSetInformationThread @ 0x1C00C73B0 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 * Callees:
 *     xxxSetCsrssThreadDesktop @ 0x1C0017ED0 (xxxSetCsrssThreadDesktop.c)
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C004DB0C (RtlInitLargeUnicodeString.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BA280 (xxxRefreshDisplayOrientation.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00C7A50 (xxxRestoreCsrssThreadDesktop.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0116FBC (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C011716C (-EndShutdown@@YAXJ@Z.c)
 *     QueueShutdownData @ 0x1C013B038 (QueueShutdownData.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetInformationThread(void *a1, int a2, _QWORD *a3, int a4)
{
  NTSTATUS v6; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 i; // rax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  PVOID v23; // rdi
  __int64 v24; // rax
  _DWORD *v25; // rcx
  struct _KTHREAD *v26; // rdi
  unsigned __int64 v27; // r8
  int v28; // edi
  const GUID *v29; // r8
  const GUID *v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct _KTHREAD *v36; // [rsp+40h] [rbp-69h]
  int v37; // [rsp+48h] [rbp-61h] BYREF
  PVOID v38[3]; // [rsp+50h] [rbp-59h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-41h] BYREF
  PVOID Object; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v41[2]; // [rsp+78h] [rbp-31h] BYREF
  union _LARGE_INTEGER *p_Interval; // [rsp+80h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-19h] BYREF
  int *v44; // [rsp+B0h] [rbp+7h]
  int v45; // [rsp+B8h] [rbp+Fh]
  int v46; // [rsp+BCh] [rbp+13h]
  PVOID *v47; // [rsp+C0h] [rbp+17h]
  int v48; // [rsp+C8h] [rbp+1Fh]
  int v49; // [rsp+CCh] [rbp+23h]

  v37 = a4;
  v6 = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v36 = (struct _KTHREAD *)Object;
  if ( v6 >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
    v10 = ThreadWin32Thread;
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v31 = ValidateHwnd(*a3);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 16);
            if ( v32 )
            {
              if ( *(_QWORD *)(v32 + 408) )
              {
                ghwndBlocking = *a3;
                PostWinlogonMessage(1031LL, 0LL);
                v33 = *(_QWORD *)(v32 + 408);
                if ( *(_QWORD *)(*(_QWORD *)(v33 + 8) + 160LL) || (v34 = 0LL, *(_QWORD *)(v33 + 288)) )
                  v34 = 1LL;
                QueueShutdownData(0xFFFFLL, v34);
                v6 = 0;
                goto LABEL_86;
              }
            }
          }
          goto LABEL_85;
        case 13:
          v6 = -1073741790;
          v28 = 0;
          while ( !gspwndBSDR )
          {
            if ( gdwInAtomicOperation )
            {
              v10 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, v8, v9);
            Interval.QuadPart = -1000000LL;
            KeDelayExecutionThread(0, 0, &Interval);
            EnterCrit(0LL, 1LL);
            v28 += 100;
            if ( v28 >= 10000 )
              goto LABEL_74;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1LL);
          v6 = 0;
LABEL_74:
          if ( v28 > 0 )
          {
            LODWORD(v38[0]) = v28;
            v37 = *(_DWORD *)*gpDispInfo;
            if ( dword_1C0324850 > 5u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
              {
                v46 = 0;
                v49 = 0;
                v44 = &v37;
                v47 = v38;
                v45 = 4;
                v48 = 4;
                TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB810, v29, v30, 4u, &pData);
              }
            }
          }
          goto LABEL_86;
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
              memset(v38, 0, sizeof(v38));
              v6 = xxxSetInformationThread(-2LL, 7LL, v38, 24LL);
              if ( v6 < 0 )
                goto LABEL_86;
              PostShellHookMessagesEx(0x37u, 0LL, 0LL);
              v21 = xxxSetInformationThread(-2LL, 9LL, v38, 24LL);
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
            RtlLoadStringOrError(629LL, &pData, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(gpsi + 2220LL) |= 0x10u;
            else
              *(_DWORD *)(gpsi + 2220LL) &= ~0x10u;
            RtlLoadStringOrError(630LL, &pData, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceDockState(*(unsigned int *)a3);
          }
          RtlInitLargeUnicodeString((__int64)v38, (__int64)&pData);
          v41[0] = 0;
          v27 = *(unsigned int *)a3;
          p_Interval = &Interval;
          v41[1] = 100;
          xxxBroadcastMessageEx(0LL, 0x1Au, v27, (struct _LARGE_STRING *)v38, 6u, (union tagBROADCASTMSG *)v41, 1, 0);
          break;
      }
    }
    else
    {
      if ( a2 == 10 )
      {
        v21 = SetCsrApiPortHandle(*a3);
        goto LABEL_25;
      }
      v11 = a2 - 1;
      if ( !v11 )
      {
        if ( ThreadWin32Thread )
        {
          if ( v37 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v26 = v36;
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20000u;
            else
              *(_DWORD *)(ThreadWin32Thread + 440) &= ~0x20000u;
            goto LABEL_87;
          }
          v6 = -1073741811;
          goto LABEL_86;
        }
        goto LABEL_33;
      }
      v12 = v11 - 4;
      if ( !v12 )
      {
        v26 = v36;
        v6 = InitiateShutdownW(v36, (unsigned int *)a3);
LABEL_87:
        ObfDereferenceObject(v26);
        return (unsigned int)v6;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            v22 = ObReferenceObjectByHandle((HANDLE)*a3, 0x40u, (POBJECT_TYPE)PsThreadType, 1, v38, 0LL);
            v23 = v38[0];
            v6 = v22;
            if ( v22 >= 0 )
            {
              v24 = W32GetThreadWin32Thread((__int64)v38[0]);
              if ( v24 && (v25 = *(_DWORD **)(v24 + 408)) != 0LL )
                v6 = xxxSetCsrssThreadDesktop(v25, (PVOID *)a3 + 1);
              else
                v6 = -1073741816;
              ObfDereferenceObject(v23);
            }
            goto LABEL_86;
          }
          if ( v15 == 1 )
          {
            if ( v37 == 32 )
              v16 = *((_DWORD *)a3 + 6);
            else
              v16 = 0;
            v17 = a3[1];
            if ( !v17 )
            {
LABEL_24:
              v21 = xxxRestoreCsrssThreadDesktop(a3 + 1, v16);
LABEL_25:
              v6 = v21;
LABEL_86:
              v26 = v36;
              goto LABEL_87;
            }
            v18 = 0LL;
            v19 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v18 )
              {
                for ( i = *(_QWORD *)(v19 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v17 )
                  {
                    v18 = i;
                    break;
                  }
                }
                v19 = *(_QWORD *)(v19 + 8);
                if ( !v19 )
                {
                  if ( !v18 )
                    goto LABEL_85;
                  goto LABEL_24;
                }
              }
              goto LABEL_24;
            }
LABEL_85:
            v6 = -1073741823;
            goto LABEL_86;
          }
LABEL_64:
          v6 = -1073741821;
          goto LABEL_86;
        }
        if ( grpdeskRitInput )
        {
          v21 = xxxSetCsrssThreadDesktop(grpdeskRitInput, (PVOID *)a3 + 1);
          goto LABEL_25;
        }
LABEL_33:
        v6 = -1073741816;
        goto LABEL_86;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v6 = 0;
    goto LABEL_86;
  }
  return (unsigned int)v6;
}
