/*
 * XREFs of sub_18007D27C @ 0x18007D27C
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x18007D260 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_180029E80 @ 0x180029E80 (sub_180029E80.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlApplicationVerifierStop @ 0x1800D63D0 (RtlApplicationVerifierStop.c)
 */

void __fastcall sub_18007D27C(HANDLE ThreadHandle, __int64 *a2)
{
  HANDLE UniqueThread; // r12
  _UNKNOWN **i; // r14
  _UNKNOWN **v5; // rsi
  __int64 v6; // r15
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // [rsp+30h] [rbp-118h]
  __int64 v11; // [rsp+40h] [rbp-108h]
  int *ThreadInformation; // [rsp+80h] [rbp-C8h] BYREF
  int v13; // [rsp+88h] [rbp-C0h]
  int v14; // [rsp+8Ch] [rbp-BCh]
  _BYTE v15[88]; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v16[24]; // [rsp+E8h] [rbp-60h] BYREF
  void *v17; // [rsp+100h] [rbp-48h]
  int v19; // [rsp+160h] [rbp+18h] BYREF
  HANDLE v20; // [rsp+168h] [rbp+20h]

  memset(v15, 0, sizeof(v15));
  v19 = 0;
  if ( byte_18015D42A && !byte_18015D740 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( !NtCurrentTeb()->CountOfOwnedCriticalSections )
        return;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    }
    else
    {
      ThreadInformation = &v19;
      v14 = 4;
      v13 = 108;
      if ( ZwQueryInformationThread(ThreadHandle, ThreadTebInformation, &ThreadInformation, 0x10u, 0LL) < 0
        || !v19
        || ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, v16, 0x30u, 0LL) < 0 )
      {
        return;
      }
      UniqueThread = v17;
    }
    v20 = UniqueThread;
    RtlAcquireSRWLockShared(&stru_18015D258);
    for ( i = (_UNKNOWN **)off_180156628; i != &off_180156628; i = (_UNKNOWN **)*i )
    {
      v5 = i - 2;
      v6 = (__int64)*(i - 1);
      v7 = a2;
      if ( a2 )
      {
        while ( 1 )
        {
          v8 = *v7;
          if ( !*v7 )
            break;
          if ( v6 == v8 )
          {
            if ( v8 )
              goto LABEL_23;
            break;
          }
          ++v7;
        }
      }
      *(_OWORD *)v15 = *(_OWORD *)v6;
      *(_OWORD *)&v15[16] = *(_OWORD *)(v6 + 16);
      *(_QWORD *)&v15[32] = *(_QWORD *)(v6 + 32);
      if ( *(_UNKNOWN ***)v15 == v5 )
      {
        if ( *(HANDLE *)&v15[16] == UniqueThread )
        {
          v11 = sub_180029E80(*((_WORD *)v5 + 1), *((_WORD *)v5 + 22));
          RtlApplicationVerifierStop(
            512,
            (unsigned int)"Thread is in a state in which it cannot own a critical section",
            (_DWORD)UniqueThread,
            (unsigned int)"Thread identifier",
            v6,
            (__int64)"Critical section address",
            (__int64)(i - 2),
            (__int64)"Critical section debug info address",
            v11,
            (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
        }
      }
      else
      {
        *(_OWORD *)&v15[40] = **(_OWORD **)v15;
        *(_OWORD *)&v15[56] = *(_OWORD *)(*(_QWORD *)v15 + 16LL);
        *(_OWORD *)&v15[72] = *(_OWORD *)(*(_QWORD *)v15 + 32LL);
        v9 = sub_180029E80(*(unsigned __int16 *)&v15[42], *(unsigned __int16 *)&v15[84]);
        v10 = sub_180029E80(*((_WORD *)i - 7), *((_WORD *)i + 14));
        RtlApplicationVerifierStop(
          515,
          (unsigned int)"double initialized or corrupted critical section",
          v6,
          (unsigned int)"Critical section address.",
          (__int64)(i - 2),
          (__int64)"Address of the debug info found in the active list.",
          v10,
          (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
          v9,
          (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
      }
LABEL_23:
      ;
    }
    RtlReleaseSRWLockShared(&stru_18015D258);
  }
}
