/*
 * XREFs of PsCallImageNotifyRoutines @ 0x1404D2A40
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1400A5610 (ExDereferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400A5660 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x1400A63E0 (ExGetCallBackBlockContext.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PerfLogImageLoad @ 0x1404529B8 (PerfLogImageLoad.c)
 *     FsRtlGetFileNameInformation @ 0x1404D2F40 (FsRtlGetFileNameInformation.c)
 *     FsRtlReleaseFileNameInformation @ 0x140595310 (FsRtlReleaseFileNameInformation.c)
 */

_QWORD *__fastcall PsCallImageNotifyRoutines(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rbp
  __int64 v10; // rdi
  _DWORD *v11; // r14
  _RTL_RUN_ONCE *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  void (__fastcall *v16)(unsigned __int16 *, __int64, _DWORD *); // r9
  _BYTE v17[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v18 = 0LL;
  if ( (int)FsRtlGetFileNameInformation(a4, 512LL, v17, &v18) >= 0 )
    a1 = (unsigned __int16 *)v17;
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 736);
  if ( (PerfGlobalGroupMask & 4) != 0 )
    PerfLogImageLoad(a1, a2, (int *)(a3 + 8));
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    *(_DWORD *)(a3 + 8) |= 0x400u;
    v10 = 64LL;
    v11 = (_DWORD *)(a3 + 8);
    *(_QWORD *)a3 = 56LL;
    *(_QWORD *)(a3 + 48) = a4;
    v12 = &PspLoadImageNotifyRoutine;
    do
    {
      v13 = ExReferenceCallBackBlock((signed __int64 *)v12);
      v14 = v13;
      if ( v13 )
      {
        v16 = (void (__fastcall *)(unsigned __int16 *, __int64, _DWORD *))ExGetCallBackBlockRoutine((__int64)v13);
        if ( ((*v11 & 0x800) == 0 || (ExGetCallBackBlockContext((__int64)v14) & 1) != 0) && v16 )
          v16(a1, v9, v11);
        ExDereferenceCallBackBlock((signed __int64 *)v12, v14);
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  if ( v18 )
    FsRtlReleaseFileNameInformation();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
