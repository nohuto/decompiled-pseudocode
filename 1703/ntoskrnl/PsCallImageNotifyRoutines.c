/*
 * XREFs of PsCallImageNotifyRoutines @ 0x1404FA3F0
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x14008BD80 (ExGetCallBackBlockRoutine.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PerfLogImageLoad @ 0x1404F98A0 (PerfLogImageLoad.c)
 *     FsRtlGetFileNameInformation @ 0x1404FAD10 (FsRtlGetFileNameInformation.c)
 */

__int64 __fastcall PsCallImageNotifyRoutines(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v9; // eax
  int *v10; // r14
  __int64 v11; // rdi
  _RTL_RUN_ONCE *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  void (__fastcall *v16)(unsigned __int16 *, __int64, int *); // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v18[24]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = 0LL;
  if ( (int)FsRtlGetFileNameInformation(a4, 512LL, v18, &v17) >= 0 )
    a1 = (unsigned __int16 *)v18;
  if ( (PerfGlobalGroupMask & 4) != 0 )
    PerfLogImageLoad(a1, a2, (int *)(a3 + 8));
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    v10 = (int *)(a3 + 8);
    if ( (v9 & 0x800) == 0 )
    {
      *(_QWORD *)(a3 + 48) = a4;
      *(_QWORD *)a3 = 56LL;
      v11 = 64LL;
      *v10 = v9 | 0x400;
      v12 = &PspLoadImageNotifyRoutine;
      do
      {
        v13 = ExReferenceCallBackBlock((signed __int64 *)v12);
        v14 = v13;
        if ( v13 )
        {
          v16 = (void (__fastcall *)(unsigned __int16 *, __int64, int *))ExGetCallBackBlockRoutine((__int64)v13);
          v16(a1, a2, v10);
          ExDereferenceCallBackBlock((signed __int64 *)v12, v14);
        }
        ++v12;
        --v11;
      }
      while ( v11 );
    }
  }
  if ( v17 )
    (*(void (**)(void))(FltMgrCallbacks + 24))();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
