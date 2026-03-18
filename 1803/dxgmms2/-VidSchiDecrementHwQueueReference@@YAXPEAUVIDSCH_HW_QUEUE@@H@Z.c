/*
 * XREFs of ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z @ 0x1C0030894
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C0033250 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007370 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     McTemplateK0ppp @ 0x1C00247E4 (McTemplateK0ppp.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C003078C (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchiDecrementHwQueueReference(char *P)
{
  __int64 v2; // rdi
  char **v3; // rcx
  PVOID *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 3) + 16LL) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1904), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF) == 1 )
  {
    v3 = (char **)*((_QWORD *)P + 1);
    if ( v3[1] != P + 8 || (v4 = (PVOID *)*((_QWORD *)P + 2), *v4 != P + 8) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
    while ( 1 )
    {
      v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1912), (_QWORD **)P + 15, (_DWORD *)P + 34);
      if ( !v5 )
        break;
      ExFreePoolWithTag(v5 - 1, 0);
    }
    VidSchiDecrementHwContextReference(*((unsigned int **)P + 3), 1LL, v6);
    if ( *((char **)P + 14) != P + 96 || *((_DWORD *)P + 22) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
      v12[3] = 281LL;
      v12[4] = 12288LL;
      v12[5] = P;
      v13 = *((unsigned int *)P + 22);
      v12[7] = 0LL;
      v12[6] = v13;
      WdLogEvent5_WdCriticalError(v12);
      __debugbreak();
    }
    if ( !*((_QWORD *)P + 4) && bTracingEnabled )
    {
      v10 = *((_QWORD *)P + 3);
      v11 = *(_QWORD *)(v10 + 24);
      if ( !v11 || (*(_DWORD *)(v10 + 48) & 0x40) != 0 )
        v11 = *((_QWORD *)P + 3);
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp(v10, &EventDestroyHwQueue, v9, v11, 0LL, P);
    }
    ExFreePoolWithTag(P, 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
