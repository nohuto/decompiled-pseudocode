/*
 * XREFs of ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0025074
 * Callers:
 *     ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C00251D0 (-VmBusSendPropagatePresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTO.c)
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAX@Z @ 0x1C0025220 (-VmBusSendSignalGuestEvent@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0ppq @ 0x1C0032B64 (McTemplateK0ppq.c)
 */

__int64 __fastcall VmBusSendAsyncMessage(
        struct VMBCHANNEL__ *a1,
        struct DXGKVMB_COMMAND_BASE *a2,
        __int64 a3,
        struct _MDL *a4)
{
  unsigned int v4; // esi
  signed __int64 v8; // rcx
  bool v9; // zf
  int v10; // eax
  void *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  struct _MDL *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v4 = a3;
  if ( !a1 )
    return 3221226166LL;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2136);
  v8 = _InterlockedIncrement64(&qword_1C0061D48);
  v9 = bTracingEnabled == 0;
  *(_QWORD *)a2 = v8;
  if ( !v9 )
  {
    v10 = *((_DWORD *)a2 + 3);
    if ( v10 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v11 = &EventVmBusSendCommandGlobalAsync;
LABEL_15:
        McTemplateK0ppq(v8, (_DWORD)v11, a3, (_DWORD)a1, v8, *((_DWORD *)a2 + 4));
      }
    }
    else if ( v10 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v11 = &EventVmBusSendCommandHostToVmAsync;
        goto LABEL_15;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      v11 = &EventVmBusSendCommandAsync;
      goto LABEL_15;
    }
  }
  v17 = 0LL;
  v12 = VmbChannelSendSynchronousRequest(a1, a2, v4, 0LL, 0, 0LL, 0LL, &v17);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdError(v16);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, 2136);
  return (unsigned int)v15;
}
