/*
 * XREFs of UsbhAcquirePowerContext @ 0x1C00053EC
 * Callers:
 *     UsbhSet_D0_wQueued_Action @ 0x1C0001008 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

char *__fastcall UsbhAcquirePowerContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v11; // r15
  char *result; // rax
  char *v13; // rbx
  void (__fastcall *v14)(__int64, char *); // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax

  v11 = FdoExt(a1);
  result = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x90uLL, 0x42554855u);
  v13 = result;
  if ( result )
  {
    memset(result, 0, 0x90uLL);
    *((_DWORD *)v13 + 8) = a6;
    *(_DWORD *)v13 = 2018662224;
    *((_QWORD *)v13 + 6) = a3;
    *((_QWORD *)v13 + 5) = a1;
    if ( a4 )
    {
      v14 = (void (__fastcall *)(__int64, char *))g_IoGetActivityIdIrp;
      *((_DWORD *)v13 + 6) = *(_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL);
      *((_QWORD *)v13 + 7) = a4;
      if ( v14 )
        v14(a4, v13 + 120);
    }
    if ( a5 )
    {
      *((_DWORD *)v13 + 7) = *(_DWORD *)(*(_QWORD *)(a5 + 184) + 24LL);
      *((_QWORD *)v13 + 8) = a5;
    }
    *((_QWORD *)v13 + 9) = a2;
    *((_QWORD *)v13 + 10) = KeGetCurrentThread();
    *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(a2 + 136) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( a7 )
    {
      *(_QWORD *)(v11 + 912) = v13;
      v13[136] = 1;
    }
    v15 = (_QWORD *)qword_1C0069620;
    v16 = v13 + 8;
    if ( *(__int64 **)qword_1C0069620 != &qword_1C0069618 )
      __fastfail(3u);
    *((_QWORD *)v13 + 2) = qword_1C0069620;
    *v16 = &qword_1C0069618;
    *v15 = v16;
    qword_1C0069620 = (__int64)(v13 + 8);
    *(_DWORD *)(a2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    return v13;
  }
  return result;
}
