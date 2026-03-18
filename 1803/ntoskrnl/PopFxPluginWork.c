/*
 * XREFs of PopFxPluginWork @ 0x1400777B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140077884 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PopPepWork @ 0x1400789D0 (PopPepWork.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140079F7C (PopFxEnableWorkOrderWatchdog.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxPluginWork(__int64 a1)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR v3; // rsi
  bool v4; // zf
  __int64 result; // rax
  unsigned __int8 (__fastcall *v6)(__int64, _DWORD **); // rax
  unsigned __int8 (__fastcall *v7)(__int64, _DWORD **); // rax
  _DWORD *v8; // [rsp+20h] [rbp-50h] BYREF
  char v9; // [rsp+28h] [rbp-48h]
  _DWORD v10[16]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  do
  {
    v3 = PopFxEnableWorkOrderWatchdog(a1);
    memset(v10, 0, sizeof(v10));
    v9 = 0;
    v8 = v10;
    if ( !v1 )
    {
      v4 = (unsigned __int8)PopPepWork(v10) == 0;
      goto LABEL_4;
    }
    v6 = *(unsigned __int8 (__fastcall **)(__int64, _DWORD **))(v1 + 96);
    if ( v6 && v6(13LL, &v8) )
    {
      v4 = v9 == 0;
LABEL_4:
      if ( v4 )
        goto LABEL_8;
      goto LABEL_5;
    }
    v7 = *(unsigned __int8 (__fastcall **)(__int64, _DWORD **))(v1 + 112);
    if ( !v7 || !v7(10LL, &v8) )
      PopFxBugCheck(0x605uLL, 0xDuLL, v1, 0LL);
    if ( v9 )
    {
      if ( (unsigned int)(v10[0] - 7) > 1 )
        PopFxBugCheck(0x612uLL, v1, 0LL, 0LL);
LABEL_5:
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
      *(_QWORD *)(v3 + 152) = v10;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopWorkOrderLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PopWorkOrderLock);
      KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
      PopFxProcessWork(v1);
    }
LABEL_8:
    PopFxDisableWorkOrderWatchdog(v3);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
