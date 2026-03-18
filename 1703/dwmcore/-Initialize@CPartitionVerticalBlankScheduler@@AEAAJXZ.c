/*
 * XREFs of ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068E00
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800653A8 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068F08 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B8414 (-Trace@CRateInfo@@QEAAXXZ.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800CB878 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
    v11 = 246;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v9 = v4;
    goto LABEL_19;
  }
  v3 = CPartitionVerticalBlankScheduler::Reinitialize(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 251;
    goto LABEL_18;
  }
  v3 = CoreUICreate((char *)this + 200);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 253;
    goto LABEL_18;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 40LL))(
         *((_QWORD *)this + 25),
         (char *)this + 208);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 254;
    goto LABEL_18;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 32LL))(*((_QWORD *)this + 26));
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 256;
    goto LABEL_18;
  }
  CRateInfo::Trace((CPartitionVerticalBlankScheduler *)((char *)this + 136));
  v5 = (struct CConnection *)*((_QWORD *)this + 14);
  v6 = (struct CKernelTransport *)*((_QWORD *)this + 13);
  v10 = (struct CoRenderHost *)*((_QWORD *)this + 15);
  *((_BYTE *)this + 21824) = 1;
  v3 = CCrossThreadComposition::Create(
         v6,
         this,
         v5,
         (CPartitionVerticalBlankScheduler *)((char *)this + 25480),
         v10,
         (struct CCrossThreadComposition **)this + 16);
  v4 = v3;
  if ( v3 < 0 )
  {
    v11 = 269;
LABEL_18:
    v9 = v3;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v11);
  }
  return (unsigned int)v4;
}
