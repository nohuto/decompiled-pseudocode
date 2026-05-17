/*
 * XREFs of sub_18008275C @ 0x18008275C
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x180082740 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     sub_180008E00 @ 0x180008E00 (sub_180008E00.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlApplicationVerifierStop @ 0x1800DCBC0 (RtlApplicationVerifierStop.c)
 */

struct _PEB *__fastcall sub_18008275C(__int64 a1, _QWORD *a2)
{
  struct _PEB *result; // rax
  HANDLE UniqueThread; // r12
  _UNKNOWN **i; // r14
  _UNKNOWN **v7; // rsi
  __int64 v8; // r15
  _QWORD *j; // rax
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-108h]
  __int64 v12; // [rsp+40h] [rbp-F8h]
  int *v13; // [rsp+78h] [rbp-C0h] BYREF
  int v14; // [rsp+80h] [rbp-B8h]
  int v15; // [rsp+84h] [rbp-B4h]
  _BYTE v16[40]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v17[48]; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v18[24]; // [rsp+E0h] [rbp-58h] BYREF
  void *v19; // [rsp+F8h] [rbp-40h]
  int v20; // [rsp+150h] [rbp+18h] BYREF
  HANDLE v21; // [rsp+158h] [rbp+20h]

  memset(&v17[2], 0, 0x2EuLL);
  *(_QWORD *)v16 = 0LL;
  result = (struct _PEB *)memset(&v16[8], 0, 0x20uLL);
  v20 = 0;
  if ( byte_18015C3E0 )
  {
    if ( !byte_18015C728 )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
      {
        if ( a1 == -2 )
        {
          result = (struct _PEB *)NtCurrentTeb();
          if ( !HIDWORD(result->ApiSetMap) )
            return result;
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        }
        else
        {
          v13 = &v20;
          v15 = 4;
          v14 = 108;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 26LL, &v13, 16LL, 0LL);
          if ( (int)result < 0 )
            return result;
          if ( !v20 )
            return result;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 0LL, v18, 48LL, 0LL);
          if ( (int)result < 0 )
            return result;
          UniqueThread = v19;
        }
        v21 = UniqueThread;
        RtlAcquireSRWLockShared(&qword_18015C1F8);
        for ( i = (_UNKNOWN **)off_180155620; i != &off_180155620; i = (_UNKNOWN **)*i )
        {
          v7 = i - 2;
          v8 = (__int64)*(i - 1);
          if ( a2 )
          {
            for ( j = a2; *j; ++j )
            {
              if ( v8 == *j )
              {
                if ( *j )
                  goto LABEL_24;
                break;
              }
            }
          }
          *(_OWORD *)v16 = *(_OWORD *)v8;
          *(_OWORD *)&v16[16] = *(_OWORD *)(v8 + 16);
          *(_QWORD *)&v16[32] = *(_QWORD *)(v8 + 32);
          if ( *(_UNKNOWN ***)v16 == v7 )
          {
            if ( *(HANDLE *)&v16[16] == UniqueThread )
            {
              v12 = sub_180008E00(*((_WORD *)v7 + 1), *((_WORD *)v7 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v8,
                (__int64)"Critical section address",
                (__int64)(i - 2),
                (__int64)"Critical section debug info address",
                v12,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            *(_OWORD *)v17 = **(_OWORD **)v16;
            *(_OWORD *)&v17[16] = *(_OWORD *)(*(_QWORD *)v16 + 16LL);
            *(_OWORD *)&v17[32] = *(_OWORD *)(*(_QWORD *)v16 + 32LL);
            v10 = sub_180008E00(*(unsigned __int16 *)&v17[2], *(unsigned __int16 *)&v17[44]);
            v11 = sub_180008E00(*((_WORD *)v7 + 1), *((_WORD *)v7 + 22));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v8,
              (unsigned int)"Critical section address.",
              (__int64)(i - 2),
              (__int64)"Address of the debug info found in the active list.",
              v11,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v10,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_24:
          ;
        }
        return (struct _PEB *)RtlReleaseSRWLockShared(&qword_18015C1F8);
      }
    }
  }
  return result;
}
