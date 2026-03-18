/*
 * XREFs of ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C003078C
 * Callers:
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z @ 0x1C0030894 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z.c)
 *     VidSchTerminateHwContext @ 0x1C0033120 (VidSchTerminateHwContext.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0012CAC (VidSchiDecrementDeviceReference.c)
 */

void __fastcall VidSchiDecrementHwContextReference(unsigned int *P, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned int **v5; // rcx
  PVOID *v6; // rdx
  unsigned int **v7; // rdx
  PVOID *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  if ( !(_DWORD)a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*((_QWORD *)P + 2) + 24LL) + 1904LL), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 8, 0xFFFFFFFF) == 1 )
  {
    if ( *((unsigned int **)P + 17) != P + 34 || P[38] )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(P, a2, a3);
      v9[3] = 281LL;
      v9[4] = 12288LL;
      v9[5] = P;
      v10 = P[38];
      v9[7] = 0LL;
      v9[6] = v10;
      WdLogEvent5_WdCriticalError(v9);
      JUMPOUT(0x1C003088CLL);
    }
    v5 = (unsigned int **)*((_QWORD *)P + 11);
    if ( v5[1] != P + 22 || (v6 = (PVOID *)*((_QWORD *)P + 12), *v6 != P + 22) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = (unsigned int *)v6;
    v7 = (unsigned int **)*((_QWORD *)P + 13);
    if ( v7[1] != P + 26 || (v8 = (PVOID *)*((_QWORD *)P + 14), *v8 != P + 26) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (unsigned int *)v8;
    VidSchiDecrementDeviceReference(*((char **)P + 1), 1);
    ExFreePoolWithTag(P, 0);
  }
  if ( !v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
