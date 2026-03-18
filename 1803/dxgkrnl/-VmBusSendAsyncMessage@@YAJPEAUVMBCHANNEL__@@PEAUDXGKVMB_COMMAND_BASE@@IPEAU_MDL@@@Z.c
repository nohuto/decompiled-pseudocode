/*
 * XREFs of ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C002DC2C
 * Callers:
 *     ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C002DDC0 (-VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQ.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C002DE04 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C002DEB0 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C002D5A0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     McTemplateK0ppq @ 0x1C0041428 (McTemplateK0ppq.c)
 */

__int64 __fastcall VmBusSendAsyncMessage(
        struct VMBCHANNEL__ *a1,
        struct DXGKVMB_COMMAND_BASE *a2,
        __int64 a3,
        struct _MDL *a4)
{
  unsigned int v4; // esi
  int v8; // r8d
  signed __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  void *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+40h] [rbp-18h] BYREF
  __int64 v21; // [rsp+48h] [rbp-10h]
  struct _MDL *v22; // [rsp+78h] [rbp+20h] BYREF

  v22 = a4;
  v4 = a3;
  if ( !a1 )
    return 3221226166LL;
  v21 = 0LL;
  v20 = 2136;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2136);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2136);
  v9 = _InterlockedIncrement64(&qword_1C007BC78);
  v10 = bTracingEnabled == 0;
  *(_QWORD *)a2 = v9;
  if ( !v10 )
  {
    v11 = *((_DWORD *)a2 + 3);
    if ( v11 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v12 = &EventVmBusSendCommandGlobalAsync;
LABEL_15:
        McTemplateK0ppq(v9, (_DWORD)v12, v8, (_DWORD)a1, v9, *((_DWORD *)a2 + 4));
      }
    }
    else if ( v11 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v12 = &EventVmBusSendCommandHostToVmAsync;
        goto LABEL_15;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      v12 = &EventVmBusSendCommandAsync;
      goto LABEL_15;
    }
  }
  v22 = 0LL;
  v13 = VmbChannelSendSynchronousRequest(a1, a2, v4, 0LL, 0, 0LL, 0LL, &v22);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdError(v16);
  }
  Global = DXGGLOBAL::GetGlobal(v14);
  DXGGLOBAL::CheckDebugBreak(Global);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v20);
  return (unsigned int)v15;
}
