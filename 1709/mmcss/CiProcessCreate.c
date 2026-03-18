/*
 * XREFs of CiProcessCreate @ 0x1C000B020
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C0009930 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 * Callees:
 *     memset @ 0x1C0001640 (memset.c)
 *     CiProcessComparer @ 0x1C0009320 (CiProcessComparer.c)
 */

__int64 __fastcall CiProcessCreate(_QWORD *a1)
{
  char *PoolWithQuotaTag; // rax
  char *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  char *v6; // rbp
  __int64 v7; // r8
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r15
  int v10; // eax
  _QWORD *v11; // rax

  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x60uLL, 0x5073634Du);
  v3 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225495LL;
  memset(PoolWithQuotaTag, 0, 0x60uLL);
  *(_DWORD *)v3 = 1;
  *((_QWORD *)v3 + 4) = 1LL;
  *((_QWORD *)v3 + 10) = PsGetCurrentProcess(v5);
  *((_QWORD *)v3 + 9) = v3 + 64;
  *((_QWORD *)v3 + 8) = v3 + 64;
  ObfReferenceObject(*((PVOID *)v3 + 10));
  v6 = 0LL;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  LOBYTE(v7) = 0;
  v8 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  v9 = *((_QWORD *)v3 + 10);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
  {
LABEL_7:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue.Busy, v8, v7, v3 + 40);
    goto LABEL_8;
  }
  while ( 1 )
  {
    v10 = CiProcessComparer(v9, (__int64)v8);
    if ( v10 > 0 )
    {
      v11 = (_QWORD *)v8[1];
      if ( !v11 )
      {
        v7 = 1LL;
        goto LABEL_7;
      }
      goto LABEL_13;
    }
    if ( v10 >= 0 )
      break;
    v11 = (_QWORD *)*v8;
    if ( !*v8 )
    {
      LOBYTE(v7) = 0;
      goto LABEL_7;
    }
LABEL_13:
    v8 = v11;
  }
  v6 = (char *)(v8 - 5);
  if ( _InterlockedIncrement64(v8 - 1) <= 1 )
    __fastfail(0xEu);
LABEL_8:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v6 )
  {
    ObfDereferenceObject(*((PVOID *)v3 + 10));
    ExFreePoolWithTag(v3, 0x5073634Du);
    v3 = v6;
  }
  result = 0LL;
  *a1 = v3;
  return result;
}
