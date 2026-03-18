/*
 * XREFs of ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180126520
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x180126458 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRender.c)
 * Callees:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180015304 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0nxnx @ 0x18012DEC4 (McTemplateU0nxnx.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x18012FB90 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Initialize(CPartitionVerticalBlankScheduler *this)
{
  HANDLE WaitableTimerW; // rax
  signed int LastError; // eax
  signed int v4; // ebx
  DWORD v5; // r9d
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  struct CConnection *v9; // r8
  struct CKernelTransport *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  struct CoRenderHost *v13; // [rsp+20h] [rbp-28h]

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
    v12 = 236;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v5 = v4;
    goto LABEL_20;
  }
  v6 = CPartitionVerticalBlankScheduler::Reinitialize(this);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 241;
    goto LABEL_19;
  }
  v6 = CoreUICreate((char *)this + 104);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 243;
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 13) + 40LL))(
         *((_QWORD *)this + 13),
         (char *)this + 112);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 244;
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 246;
    goto LABEL_19;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0nxnx(*((_QWORD *)this + 11), v7, v8, (_DWORD)this + 80, *((_QWORD *)this + 11));
  v9 = (struct CConnection *)*((_QWORD *)this + 7);
  v10 = (struct CKernelTransport *)*((_QWORD *)this + 6);
  v13 = (struct CoRenderHost *)*((_QWORD *)this + 8);
  *((_BYTE *)this + 21340) = 1;
  v6 = CCrossThreadComposition::Create(
         v10,
         this,
         v9,
         (CPartitionVerticalBlankScheduler *)((char *)this + 24800),
         v13,
         (struct CCrossThreadComposition **)this + 9);
  v4 = v6;
  if ( v6 < 0 )
  {
    v12 = 259;
LABEL_19:
    v5 = v6;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v12);
  }
  return (unsigned int)v4;
}
