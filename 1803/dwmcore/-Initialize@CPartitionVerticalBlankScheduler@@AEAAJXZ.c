/*
 * XREFs of ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18005DF64
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005E048 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800C9BDC (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Initialize(CPartitionVerticalBlankScheduler *this)
{
  HANDLE WaitableTimerW; // rax
  int v3; // eax
  signed int v4; // ebx
  struct CConnection *v5; // r8
  struct CKernelTransport *v6; // rcx
  signed int LastError; // eax
  int v9; // r9d
  struct CoRenderHost *v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 1) = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL);
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  *((_QWORD *)this + 3) = WaitableTimerW;
  if ( !WaitableTimerW )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v11 = 232;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v9 = v4;
    goto LABEL_17;
  }
  CPartitionVerticalBlankScheduler::Reinitialize(this);
  v3 = CoreUICreate((char *)this + 80);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 239;
    goto LABEL_16;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 40LL))(
         *((_QWORD *)this + 10),
         (char *)this + 88);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 240;
    goto LABEL_16;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 242;
    goto LABEL_16;
  }
  v5 = (struct CConnection *)*((_QWORD *)this + 7);
  v6 = (struct CKernelTransport *)*((_QWORD *)this + 6);
  v10 = (struct CoRenderHost *)*((_QWORD *)this + 8);
  *((_BYTE *)this + 26180) = 1;
  v3 = CCrossThreadComposition::Create(
         v6,
         this,
         v5,
         (CPartitionVerticalBlankScheduler *)((char *)this + 30576),
         v10,
         (struct CCrossThreadComposition **)this + 9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 253;
LABEL_16:
    v9 = v3;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v11);
  }
  return (unsigned int)v4;
}
