/*
 * XREFs of ?Initialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D0C8
 * Callers:
 *     ?Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x18013CBC4 (-Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRender.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B8414 (-Trace@CRateInfo@@QEAAXXZ.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800CB878 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770 (-Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::Initialize(CIndependentRefreshRateScheduler *this)
{
  HANDLE WaitableTimerW; // rax
  signed int LastError; // eax
  signed int v4; // ebx
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r8d
  struct CConnection *v9; // r8
  struct CKernelTransport *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CoRenderHost *v13; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 8) = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL);
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  *((_QWORD *)this + 10) = WaitableTimerW;
  if ( !WaitableTimerW )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v12 = 246;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v5 = v4;
    goto LABEL_18;
  }
  v6 = CIndependentRefreshRateScheduler::Reinitialize(this);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 251;
    goto LABEL_17;
  }
  v6 = CoreUICreate((char *)this + 200);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 253;
    goto LABEL_17;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 40LL))(
         *((_QWORD *)this + 25),
         (char *)this + 208);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 254;
    goto LABEL_17;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 32LL))(*((_QWORD *)this + 26));
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 256;
    goto LABEL_17;
  }
  CRateInfo::Trace((CIndependentRefreshRateScheduler *)((char *)this + 136), v7, v8);
  v9 = (struct CConnection *)*((_QWORD *)this + 14);
  v10 = (struct CKernelTransport *)*((_QWORD *)this + 13);
  v13 = (struct CoRenderHost *)*((_QWORD *)this + 15);
  *((_BYTE *)this + 21824) = 1;
  v6 = CCrossThreadComposition::Create(
         v10,
         this,
         v9,
         (CIndependentRefreshRateScheduler *)((char *)this + 25480),
         v13,
         (struct CCrossThreadComposition **)this + 16);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 269;
LABEL_17:
    v5 = v6;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v12);
  }
  return (unsigned int)v4;
}
