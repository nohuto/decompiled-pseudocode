/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180063350
 * Callers:
 *     EtwpProcessNotification @ 0x180064060 (EtwpProcessNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFlushUmLogger @ 0x180060D00 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180062764 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x1800628CC (EtwpQueryUmLogger.c)
 *     EtwpValidateLoggerInfo @ 0x180063480 (EtwpValidateLoggerInfo.c)
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     EtwpUpdateUmLogger @ 0x180109CFC (EtwpUpdateUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  unsigned int *v3; // rdi
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int started; // eax
  int v15; // ebp
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (unsigned int *)(a1 + 72);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  v4 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v4 )
    goto LABEL_18;
  v5 = v3[1];
  v6 = *v3;
  v18 = 0;
  v17 = 0;
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  v10 = v5 - 1;
  if ( !v10 )
  {
    started = EtwpStartUmLogger(v8, &v18, &v17, v3);
    goto LABEL_10;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    started = EtwpStopUmLogger(v8, v7, v9, (__int64)v3);
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    started = EtwpQueryUmLogger(v6, &v18, &v17, (__int64)v3);
    goto LABEL_10;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    started = EtwpUpdateUmLogger(v6, &v18, &v17, v3);
    goto LABEL_10;
  }
  if ( v13 == 1 )
  {
    started = EtwpFlushUmLogger(v6, &v18, &v17, (__int64)v3);
LABEL_10:
    v4 = started;
    goto LABEL_11;
  }
  v4 = 87;
LABEL_11:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v4 )
  {
LABEL_18:
    v15 = 76;
    goto LABEL_13;
  }
  v15 = *v3 + 72;
LABEL_13:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v15;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v4 )
    *v3 = v4;
  return 0LL;
}
