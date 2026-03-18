/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x1406C32A4
 * Callers:
 *     ObSetRefTraceInformation @ 0x1406C25D4 (ObSetRefTraceInformation.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x1406C2C74 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  int v14; // edx
  wchar_t *Buffer; // rsi
  wchar_t *v16; // rcx
  char v17; // [rsp+20h] [rbp-C8h]
  _BYTE v18[20]; // [rsp+24h] [rbp-C4h]
  __int128 v19; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v21[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v21, 0, sizeof(v21));
  inited = 0;
  *(_DWORD *)&v18[8] = 0;
  *(_QWORD *)&v18[12] = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  v19 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  *(_QWORD *)v18 = *(unsigned __int8 *)(a1 + 1);
  if ( (_WORD)v19 )
  {
    if ( (v19 & 1) != 0 || ((((unsigned __int64)(unsigned __int16)v19 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      return 3221225485LL;
    v6 = ((unsigned __int64)(unsigned __int16)v19 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v19) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v19 + *((_QWORD *)&v19 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v19 + *((_QWORD *)&v19 + 1) < *((_QWORD *)&v19 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v21 + i) = (*((_DWORD *)v21 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v19 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = *(_DWORD *)v18;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v10 = 126;
    else
      v10 = (unsigned __int16)Src[0];
    *(_WORD *)&v18[4] = v10;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 2LL, 0x7452624Fu);
    *(_QWORD *)&v18[12] = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *(_WORD *)&v18[6] = v10 + 2;
    if ( v17 )
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
    v5 = *(_DWORD *)v18;
  }
  if ( !v3 )
    return 3221225485LL;
  if ( v5 )
    v3 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  v14 = ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) == 0 )
  {
    inited = ObpInitStackAndObjectTables();
    v14 = ObpTraceFlags;
  }
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v16 = *(wchar_t **)&v18[12];
    if ( !*(_QWORD *)&v18[12] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)&v18[4];
    ObpRuntimeTracePoolTags = v21[0];
    xmmword_14034D5F0 = v21[1];
    xmmword_14034D600 = v21[2];
    xmmword_14034D610 = v21[3];
    ObpRuntimeTraceFlags = v3 | v14 & 0xFFFFFF8E | 2;
    ObpTraceFlags = v3 | v14 & 0xFFFFFF8E | 2;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((v3 & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((v3 & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !Buffer )
      return inited;
    v16 = Buffer;
  }
  ExFreePoolWithTag(v16, 0x7452624Fu);
  return inited;
}
