/*
 * XREFs of ExGetSessionBigPoolInformation @ 0x140753E0C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x14028451C (ExGetBigPoolInfo.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionBigPoolInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  int v5; // edi
  _QWORD *v6; // r12
  _DWORD *v7; // r14
  __int64 result; // rax
  struct _MDL *v9; // r13
  __int64 v10; // rbp
  _KPROCESS *NextSession; // rbx
  __int64 v12; // r14
  int SessionId; // eax
  int v14; // r15d
  unsigned int v15; // edx
  _DWORD *v16; // rcx
  int BigPoolInfo; // eax
  int v18; // [rsp+30h] [rbp-A8h]
  unsigned int v19; // [rsp+34h] [rbp-A4h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-A0h]
  unsigned int v21; // [rsp+40h] [rbp-98h]
  PVOID P; // [rsp+48h] [rbp-90h] BYREF
  _DWORD *v23; // [rsp+50h] [rbp-88h]
  __int64 v24; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v25[48]; // [rsp+60h] [rbp-78h] BYREF

  *a3 = 0;
  v4 = 0LL;
  v23 = a4;
  v5 = 0;
  v6 = 0LL;
  v20 = a3;
  v21 = a2;
  v7 = a3;
  v18 = 1;
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v24, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v9 = (struct _MDL *)P;
    v10 = v24;
  }
  else
  {
    v10 = 0LL;
    v9 = 0LL;
  }
  NextSession = (_KPROCESS *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_30;
  while ( 1 )
  {
    v12 = v4 + v10;
    SessionId = MmGetSessionId((__int64)NextSession);
    LODWORD(P) = SessionId;
    if ( *v23 == -1 || SessionId == *v23 )
      break;
LABEL_21:
    NextSession = (_KPROCESS *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_25;
  }
  if ( (int)MmAttachSession(NextSession, (__int64)v25) < 0 )
  {
LABEL_20:
    if ( *v23 != -1 )
      goto LABEL_24;
    goto LABEL_21;
  }
  if ( (unsigned int)v4 >= 0xFFFFFFD8 )
  {
    v5 = -1073741675;
    MmDetachSession((__int64)NextSession, (__int64)v25);
    ObfDereferenceObject(NextSession);
    goto LABEL_29;
  }
  if ( v4 + 40 <= (unsigned __int64)v21 && (v14 = v18) != 0 )
  {
    v15 = v21 - v4;
    v16 = (_DWORD *)(v4 + v10);
  }
  else
  {
    v14 = 0;
    v15 = 0;
    v18 = 0;
    v16 = 0LL;
    v5 = -1073741820;
  }
  BigPoolInfo = ExGetBigPoolInfo(v16, v15, 0, &v19);
  if ( BigPoolInfo >= 0 || (v5 = BigPoolInfo, BigPoolInfo == -1073741820) )
  {
    if ( v14 == 1 && BigPoolInfo >= 0 )
    {
      v6 = (_QWORD *)(v4 + v10);
      *(_DWORD *)(v12 + 8) = (_DWORD)P;
      *(_QWORD *)v12 = (unsigned int)(24 * *(_DWORD *)(v12 + 12) + 16);
    }
    v4 = v19 + (unsigned int)v4;
    MmDetachSession((__int64)NextSession, (__int64)v25);
    goto LABEL_20;
  }
  MmDetachSession((__int64)NextSession, (__int64)v25);
LABEL_24:
  ObfDereferenceObject(NextSession);
LABEL_25:
  if ( v5 < 0 )
  {
LABEL_29:
    v7 = v20;
    goto LABEL_30;
  }
  v7 = v20;
  if ( v6 )
    *v6 = 0LL;
LABEL_30:
  if ( v10 )
    ExUnlockUserBuffer(v9);
  *v7 = v4;
  return (unsigned int)v5;
}
