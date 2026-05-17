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
  unsigned __int64 v4; // rdx
  int v5; // ebx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int started; // eax
  int v18; // ebp
  int v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (unsigned int *)(a1 + 72);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  v5 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v5 )
    goto LABEL_18;
  v8 = v3[1];
  v9 = *v3;
  v21 = 0;
  v20 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpPrivSessionLock, v4, v6, v7);
  v13 = v8 - 1;
  if ( !v13 )
  {
    started = EtwpStartUmLogger(v11, &v21, &v20, v3);
    goto LABEL_10;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    started = EtwpStopUmLogger(v11, v10, v12, (__int64)v3);
    goto LABEL_10;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    started = EtwpQueryUmLogger(v9, &v21, &v20, (__int64)v3);
    goto LABEL_10;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    started = EtwpUpdateUmLogger(v9, &v21, &v20, v3);
    goto LABEL_10;
  }
  if ( v16 == 1 )
  {
    started = EtwpFlushUmLogger(v9, &v21, &v20, (__int64)v3);
LABEL_10:
    v5 = started;
    goto LABEL_11;
  }
  v5 = 87;
LABEL_11:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v5 )
  {
LABEL_18:
    v18 = 76;
    goto LABEL_13;
  }
  v18 = *v3 + 72;
LABEL_13:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v18;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v5 )
    *v3 = v5;
  return 0LL;
}
