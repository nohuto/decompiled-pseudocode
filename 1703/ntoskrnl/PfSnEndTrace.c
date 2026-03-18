/*
 * XREFs of PfSnEndTrace @ 0x14056637C
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x140566370 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PfFbBufferListFlushStandby @ 0x14005F298 (PfFbBufferListFlushStandby.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PfSnDeactivateTrace @ 0x14012D0E8 (PfSnDeactivateTrace.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x1405665C4 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x140566710 (PfSnBuildDumpFromTrace.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  REGHANDLE v3; // rdi
  int Ptr_high; // edx
  __int64 Count_low; // rax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rdi
  int v9; // esi
  _QWORD *v10; // rax
  unsigned int v11; // eax
  int v13; // r8d
  PVOID v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int16 v17; // [rsp+38h] [rbp-39h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v20; // [rsp+58h] [rbp-19h]
  int v21; // [rsp+60h] [rbp-11h]
  int v22; // [rsp+64h] [rbp-Dh]
  char *v23; // [rsp+68h] [rbp-9h]
  __int64 v24; // [rsp+70h] [rbp-1h]
  struct _EX_RUNDOWN_REF *v25; // [rsp+78h] [rbp+7h]
  __int64 v26; // [rsp+80h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v27; // [rsp+88h] [rbp+17h]
  __int64 v28; // [rsp+90h] [rbp+1Fh]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace(P);
  if ( P )
  {
    v3 = RegHandle;
    if ( RegHandle )
    {
      if ( EtwEventEnabled(RegHandle, &PfSnEvt_EndTrace_Info) )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( *((_WORD *)&P[3].Count + v16) );
        v17 = v16;
        UserData.Ptr = (ULONGLONG)&v17;
        v21 = 2 * (unsigned __int16)v16;
        v20 = P + 3;
        v23 = (char *)&P[10].Ptr + 4;
        *(_QWORD *)&UserData.Size = 2LL;
        v25 = P + 11;
        v22 = 0;
        v27 = P + 50;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        EtwWrite(v3, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
      }
    }
  }
  Ptr_high = HIDWORD(P[41].Ptr);
  if ( SHIDWORD(P[40].Ptr) > Ptr_high )
    HIDWORD(P[40].Ptr) = Ptr_high;
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low >= dword_14036DE34 )
  {
    if ( (int)Count_low > 10 )
      LODWORD(P[41].Count) = 10;
    v13 = HIDWORD(P[40].Ptr);
    if ( v13 != Ptr_high )
      *((_DWORD *)&P[35].Count + LODWORD(P[41].Count)) += Ptr_high - v13;
  }
  else
  {
    *((_DWORD *)&P[35].Ptr + Count_low + 1) = Ptr_high - HIDWORD(P[40].Ptr);
    v6 = HIDWORD(P[41].Ptr);
    ++LODWORD(P[41].Count);
    HIDWORD(P[40].Ptr) = v6;
  }
  if ( LODWORD(P[11].Count) != 1 || LODWORD(P[50].Count) == 8 )
  {
    v7 = PfSnBuildDumpFromTrace(&Pa, P);
    v8 = Pa;
    v9 = v7;
  }
  else
  {
    v8 = 0LL;
    v9 = -2147483614;
  }
  LODWORD(P[57].Count) = v9;
  P[56].Count = (unsigned __int64)v8;
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v9 >= 0 )
  {
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_14036D9E0);
    ExAcquireFastMutex(&Mutex);
    if ( dword_14036E024 == 1 )
    {
      KeReleaseGuardedMutex(&Mutex);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v10 = qword_14036DFE0;
      if ( *(PVOID **)qword_14036DFE0 != &qword_14036DFD8 )
        __fastfail(3u);
      v8[1] = qword_14036DFE0;
      *v8 = &qword_14036DFD8;
      *v10 = v8;
      v11 = dword_14036E020 + 1;
      qword_14036DFE0 = v8;
      while ( 1 )
      {
        dword_14036E020 = v11;
        if ( v11 <= dword_14036DCCC )
          break;
        v14 = qword_14036DFD8;
        if ( qword_14036DFD8 == &qword_14036DFD8 )
          break;
        v15 = *(_QWORD *)qword_14036DFD8;
        if ( *((PVOID **)qword_14036DFD8 + 1) != &qword_14036DFD8 || *(PVOID *)(v15 + 8) != qword_14036DFD8 )
          __fastfail(3u);
        qword_14036DFD8 = *(PVOID *)qword_14036DFD8;
        *(_QWORD *)(v15 + 8) = &qword_14036DFD8;
        ExFreePoolWithTag(v14, 0);
        v11 = dword_14036E020 - 1;
      }
      KeReleaseGuardedMutex(&Mutex);
      if ( qword_14036E028 )
        KeSetEvent(qword_14036E028, 0, 0);
      v9 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v9;
}
