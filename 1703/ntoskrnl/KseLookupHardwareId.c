/*
 * XREFs of KseLookupHardwareId @ 0x1406AFEE8
 * Callers:
 *     AhcCacheQueryHwId @ 0x140746A68 (AhcCacheQueryHwId.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x1404B3690 (KsepCacheLookup.c)
 *     AslStringPatternMatchW @ 0x1405BB08C (AslStringPatternMatchW.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  ULONG_PTR v1; // rdi
  unsigned int v2; // ebp
  int v3; // r12d
  WCHAR *v4; // r14
  WCHAR v5; // ax
  WCHAR *v6; // rdx
  struct _KTHREAD *v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rsi
  WCHAR *v11; // rdx
  _BYTE v12[40]; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-40h] BYREF

  v1 = qword_14036BCD0;
  v2 = -1073741275;
  v3 = 0;
  v4 = SourceString;
  if ( *SourceString == 42 )
  {
    v4 = SourceString + 1;
    v3 = 1;
  }
  v5 = *v4;
  v6 = v4;
  while ( v5 )
  {
    if ( v5 == 42 || v5 == 63 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v1, 0LL);
      for ( i = *(_QWORD **)(v1 + 32); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(v1 + 32) )
          goto LABEL_10;
        v11 = (WCHAR *)i[3];
        if ( v3 )
        {
          if ( *v11 != 42 )
            continue;
          ++v11;
        }
        if ( (unsigned int)AslStringPatternMatchW(v4, v11) )
        {
          v2 = 0;
          goto LABEL_10;
        }
      }
    }
    v5 = *++v6;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  if ( KsepCacheLookup(v1, (__int64)v12) )
    v2 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease(v1);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
