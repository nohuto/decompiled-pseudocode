/*
 * XREFs of KseLookupHardwareId @ 0x140746014
 * Callers:
 *     AhcCacheQueryHwId @ 0x1407F5744 (AhcCacheQueryHwId.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KsepCacheLookup @ 0x140603CA8 (KsepCacheLookup.c)
 *     AslStringPatternMatchW @ 0x14061E218 (AslStringPatternMatchW.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  WCHAR v1; // r12
  WCHAR *v2; // r14
  ULONG_PTR v3; // rdi
  unsigned int v5; // ebp
  WCHAR v6; // ax
  WCHAR *v7; // rcx
  struct _KTHREAD *v8; // rax
  WCHAR *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rsi
  _BYTE v15[40]; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-40h] BYREF

  v1 = *SourceString;
  v2 = SourceString + 1;
  v3 = qword_1403CDF30;
  v5 = -1073741275;
  if ( *SourceString != 42 )
    v2 = SourceString;
  v6 = *v2;
  if ( *v2 )
  {
    v7 = v2;
    while ( v6 != 42 && v6 != 63 )
    {
      v6 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    for ( i = *(_QWORD **)(v3 + 32); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v3 + 32) )
        goto LABEL_10;
      v9 = (WCHAR *)i[3];
      if ( v1 == 42 )
      {
        if ( *v9 != 42 )
          continue;
        ++v9;
      }
      if ( (unsigned int)AslStringPatternMatchW(v2, v9) )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_8:
  RtlInitUnicodeString(&DestinationString, SourceString);
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  if ( KsepCacheLookup(v3, (__int64)v15) )
    v5 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3, (__int64)v9, v10, v11);
  KeAbPostRelease(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
