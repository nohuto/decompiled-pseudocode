/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x14075B108
 * Callers:
 *     ObSetRefTraceInformation @ 0x14075A420 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x14075AAC4 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  unsigned int inited; // r14d
  int v3; // edi
  char PreviousMode; // r9
  int v5; // r10d
  unsigned __int64 v6; // r11
  unsigned int i; // r9d
  unsigned int j; // r10d
  unsigned __int16 v10; // bx
  PVOID PoolWithTag; // r15
  unsigned __int64 v12; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  wchar_t *Buffer; // rsi
  wchar_t *v18; // rcx
  char v19; // [rsp+20h] [rbp-C8h]
  _BYTE v20[20]; // [rsp+24h] [rbp-C4h]
  __int128 v21; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v23[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v23, 0, sizeof(v23));
  inited = 0;
  *(_DWORD *)&v20[8] = 0;
  *(_QWORD *)&v20[12] = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = PreviousMode;
  v21 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  *(_QWORD *)v20 = *(unsigned __int8 *)(a1 + 1);
  if ( (_WORD)v21 )
  {
    if ( (v21 & 1) != 0 || ((((unsigned __int64)(unsigned __int16)v21 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      return 3221225485LL;
    v6 = ((unsigned __int64)(unsigned __int16)v21 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v21) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v21 + *((_QWORD *)&v21 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v21 + *((_QWORD *)&v21 + 1) < *((_QWORD *)&v21 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v23 + i) = (*((_DWORD *)v23 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v21 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = *(_DWORD *)v20;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v10 = 126;
    else
      v10 = (unsigned __int16)Src[0];
    *(_WORD *)&v20[4] = v10;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 2LL, 0x7452624Fu);
    *(_QWORD *)&v20[12] = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *(_WORD *)&v20[6] = v10 + 2;
    if ( v19 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Src[1] + LOWORD(Src[0]);
      if ( v12 > 0x7FFFFFFF0000LL || (void *)v12 < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src[1], v10);
    *((_WORD *)PoolWithTag + ((unsigned __int64)v10 >> 1)) = 0;
    v3 |= 0x20u;
    inited = 0;
    v5 = *(_DWORD *)v20;
  }
  if ( !v3 )
    return 3221225485LL;
  if ( v5 )
    v3 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) == 0 )
    inited = ObpInitStackAndObjectTables();
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v18 = *(wchar_t **)&v20[12];
    if ( !*(_QWORD *)&v20[12] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)&v20[4];
    ObpRuntimeTracePoolTags = v23[0];
    xmmword_1403AC9B0 = v23[1];
    xmmword_1403AC9C0 = v23[2];
    xmmword_1403AC9D0 = v23[3];
    ObpTraceFlags = v3 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpRuntimeTraceFlags = ObpTraceFlags;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((ObpTraceFlags & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((ObpTraceFlags & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(
        (volatile signed __int64 *)&ObpStackTraceLock,
        (__int64)&ObpRuntimeTraceProcessName,
        v15,
        v16);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !Buffer )
      return inited;
    v18 = Buffer;
  }
  ExFreePoolWithTag(v18, 0x7452624Fu);
  return inited;
}
