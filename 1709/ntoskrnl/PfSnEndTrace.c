/*
 * XREFs of PfSnEndTrace @ 0x140454934
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x140454920 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     PfSnDeactivateTrace @ 0x140010884 (PfSnDeactivateTrace.c)
 *     PfFbBufferListFlushStandby @ 0x140011DE4 (PfFbBufferListFlushStandby.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x140454B38 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x140454C80 (PfSnBuildDumpFromTrace.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  int Ptr_high; // edx
  __int64 Count_low; // rax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rdi
  int v8; // esi
  _QWORD *v9; // rax
  unsigned int v10; // eax
  int v12; // r8d
  __int64 v13; // rax
  PVOID v14; // rcx
  __int64 v15; // rax
  __int16 v16; // [rsp+38h] [rbp-29h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+58h] [rbp-9h]
  int v20; // [rsp+60h] [rbp-1h]
  int v21; // [rsp+64h] [rbp+3h]
  char *v22; // [rsp+68h] [rbp+7h]
  __int64 v23; // [rsp+70h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v24; // [rsp+78h] [rbp+17h]
  __int64 v25; // [rsp+80h] [rbp+1Fh]
  struct _EX_RUNDOWN_REF *v26; // [rsp+88h] [rbp+27h]
  __int64 v27; // [rsp+90h] [rbp+2Fh]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace(P);
  if ( P && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_EndTrace_Info) )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_WORD *)&P[3].Count + v13) );
    v16 = v13;
    UserData.Ptr = (ULONGLONG)&v16;
    v20 = 2 * (unsigned __int16)v13;
    v19 = P + 3;
    v22 = (char *)&P[10].Ptr + 4;
    v24 = P + 11;
    v26 = P + 50;
    *(_QWORD *)&UserData.Size = 2LL;
    v21 = 0;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    EtwWrite(RegHandle, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
  }
  Ptr_high = HIDWORD(P[41].Ptr);
  if ( SHIDWORD(P[40].Ptr) > Ptr_high )
    HIDWORD(P[40].Ptr) = Ptr_high;
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low >= dword_14038D294 )
  {
    if ( (int)Count_low > 10 )
      LODWORD(P[41].Count) = 10;
    v12 = HIDWORD(P[40].Ptr);
    if ( v12 != Ptr_high )
      *((_DWORD *)&P[35].Count + LODWORD(P[41].Count)) += Ptr_high - v12;
  }
  else
  {
    *((_DWORD *)&P[35].Ptr + Count_low + 1) = Ptr_high - HIDWORD(P[40].Ptr);
    v5 = HIDWORD(P[41].Ptr);
    ++LODWORD(P[41].Count);
    HIDWORD(P[40].Ptr) = v5;
  }
  if ( LODWORD(P[11].Count) != 1 || LODWORD(P[50].Count) == 8 )
  {
    v6 = PfSnBuildDumpFromTrace(&Pa, P);
    v7 = Pa;
    v8 = v6;
  }
  else
  {
    v7 = 0LL;
    v8 = -2147483614;
  }
  LODWORD(P[57].Count) = v8;
  P[56].Count = (unsigned __int64)v7;
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v8 >= 0 )
  {
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140387960);
    ExAcquireFastMutex(&Mutex);
    if ( dword_140389D64 == 1 )
    {
      KeReleaseGuardedMutex(&Mutex);
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = qword_140389D20;
      if ( *(PVOID **)qword_140389D20 != &qword_140389D18 )
        __fastfail(3u);
      v7[1] = qword_140389D20;
      *v7 = &qword_140389D18;
      *v9 = v7;
      v10 = dword_140389D60 + 1;
      qword_140389D20 = v7;
      while ( 1 )
      {
        dword_140389D60 = v10;
        if ( v10 <= dword_14038D12C )
          break;
        v14 = qword_140389D18;
        if ( qword_140389D18 == &qword_140389D18 )
          break;
        if ( *((PVOID **)qword_140389D18 + 1) != &qword_140389D18
          || (v15 = *(_QWORD *)qword_140389D18, *(PVOID *)(*(_QWORD *)qword_140389D18 + 8LL) != qword_140389D18) )
        {
          __fastfail(3u);
        }
        qword_140389D18 = *(PVOID *)qword_140389D18;
        *(_QWORD *)(v15 + 8) = &qword_140389D18;
        ExFreePoolWithTag(v14, 0);
        v10 = dword_140389D60 - 1;
      }
      KeReleaseGuardedMutex(&Mutex);
      if ( qword_140389D68 )
        KeSetEvent(qword_140389D68, 0, 0);
      v8 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v8;
}
