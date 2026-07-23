/*
 * XREFs of PspInitializeThunkContext @ 0x1405B9FE0
 * Callers:
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 * Callees:
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspGetBaseTrapFrame @ 0x14012B834 (PspGetBaseTrapFrame.c)
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspCallThreadNotifyRoutines @ 0x1404B67E0 (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  int ContextThreadInternal; // ebx
  _OWORD *v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 InstrumentationCallback; // rcx
  unsigned __int64 v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  int result; // eax
  __int64 v9; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v11; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-A58h] BYREF
  _QWORD v13[154]; // [rsp+E0h] [rbp-9B8h] BYREF
  CONTEXT v14; // [rsp+5B0h] [rbp-4E8h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v13, 0, sizeof(v13));
  memset(&v14, 0, sizeof(v14));
  LODWORD(v13[6]) = 1048603;
  --CurrentThread->SpecialApcDisable;
  PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
  ContextThreadInternal = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)v13, 0, 1, 0);
  if ( ContextThreadInternal >= 0 )
  {
    v2 = (_OWORD *)((v13[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v14.Rsp = (unsigned __int64)v2 - 40;
    v3 = *((_QWORD *)PspSystemDlls + 5);
    v14.ContextFlags = 1048587;
    v14.Rip = PspLoaderInitRoutine;
    v14.Rcx = (unsigned __int64)v2;
    v14.Rdx = v3;
    *(_DWORD *)&v14.SegDs = 2818091;
    *(_DWORD *)&v14.SegFs = 2818131;
    v14.SegSs = 43;
    v14.SegCs = 51;
    v14.MxCsr = 8064;
    v14.FltSave.ControlWord = 639;
    v14.FltSave.MxCsr = 8064;
    InstrumentationCallback = (unsigned __int64)CurrentThread->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback )
    {
      v14.R10 = PspLoaderInitRoutine;
      v14.Rip = InstrumentationCallback;
    }
    v5 = (v13[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned __int64)v2 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 1231) = *(_BYTE *)(v5 + 1231);
    v6 = v13;
    v7 = 9LL;
    do
    {
      *v2 = *v6;
      v2[1] = v6[1];
      v2[2] = v6[2];
      v2[3] = v6[3];
      v2[4] = v6[4];
      v2[5] = v6[5];
      v2[6] = v6[6];
      v2 += 8;
      *(v2 - 1) = v6[7];
      v6 += 8;
      --v7;
    }
    while ( v7 );
    *v2 = *v6;
    v2[1] = v6[1];
    v2[2] = v6[2];
    v2[3] = v6[3];
    v2[4] = v6[4];
    ContextThreadInternal = PsGetHostSilo();
    if ( ContextThreadInternal >= 0 )
      ContextThreadInternal = PspSetContextThreadInternal(CurrentThread, &v14, 0, 1, 0);
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( ContextThreadInternal < 0 )
  {
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionAddress = (void *)PspLoaderInitRoutine;
    ExceptionRecord.ExceptionCode = ContextThreadInternal;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    PspGetBaseTrapFrame((__int64)CurrentThread);
    BaseTrapFrame = PspGetBaseTrapFrame(v9);
    return KiDispatchException(&ExceptionRecord, BaseTrapFrame - 320, v11, 1, 0);
  }
  return result;
}
