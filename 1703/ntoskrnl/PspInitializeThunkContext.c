/*
 * XREFs of PspInitializeThunkContext @ 0x1404F8B04
 * Callers:
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 * Callees:
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PspGetBaseTrapFrame @ 0x140028F98 (PspGetBaseTrapFrame.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspCallThreadNotifyRoutines @ 0x1404FA280 (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 */

int __fastcall PspInitializeThunkContext(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // r9d
  int ContextThreadInternal; // edi
  _OWORD *v5; // rdx
  __int64 v6; // rcx
  void *InstrumentationCallback; // rcx
  unsigned __int64 v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rcx
  int result; // eax
  __int64 v12; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v14; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-A58h] BYREF
  _QWORD v16[308]; // [rsp+E0h] [rbp-9B8h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[6]) = 1048603;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(a2) = 1;
  PspCallThreadNotifyRoutines(CurrentThread, a2);
  LOBYTE(v3) = 1;
  ContextThreadInternal = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)v16, 0, v3, 0);
  if ( ContextThreadInternal >= 0 )
  {
    v5 = (_OWORD *)((v16[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v16[173] = (char *)v5 - 40;
    v6 = *((_QWORD *)PspSystemDlls + 5);
    v16[160] = 0x1F800010000BLL;
    v16[185] = PspLoaderInitRoutine;
    v16[170] = v5;
    v16[171] = v6;
    *(_DWORD *)((char *)&v16[161] + 2) = 2818091;
    *(_DWORD *)((char *)&v16[161] + 6) = 2818131;
    WORD1(v16[162]) = 43;
    LOWORD(v16[161]) = 51;
    LOWORD(v16[186]) = 639;
    LODWORD(v16[189]) = 8064;
    InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback )
    {
      v16[179] = PspLoaderInitRoutine;
      v16[185] = InstrumentationCallback;
    }
    v8 = (v16[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned __int64)v5 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 1231) = *(_BYTE *)(v8 + 1231);
    v9 = v16;
    v10 = 9LL;
    do
    {
      *v5 = *v9;
      v5[1] = v9[1];
      v5[2] = v9[2];
      v5[3] = v9[3];
      v5[4] = v9[4];
      v5[5] = v9[5];
      v5[6] = v9[6];
      v5 += 8;
      *(v5 - 1) = v9[7];
      v9 += 8;
      --v10;
    }
    while ( v10 );
    *v5 = *v9;
    v5[1] = v9[1];
    v5[2] = v9[2];
    v5[3] = v9[3];
    v5[4] = v9[4];
    ContextThreadInternal = PsGetHostSilo();
    if ( ContextThreadInternal >= 0 )
      ContextThreadInternal = PspSetContextThreadInternal(CurrentThread, 0);
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
    BaseTrapFrame = PspGetBaseTrapFrame(v12);
    return KiDispatchException(&ExceptionRecord, BaseTrapFrame - 320, v14, 1, 0);
  }
  return result;
}
