/*
 * XREFs of ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C002EB54
 * Callers:
 *     VmBusSendPropagatePresentHistoryToken @ 0x1C00341E0 (VmBusSendPropagatePresentHistoryToken.c)
 *     ?DXGADAPTER_SignalGuestEvent@@YAXPEAVDXGADAPTER@@PEAX@Z @ 0x1C00343A0 (-DXGADAPTER_SignalGuestEvent@@YAXPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_ppq @ 0x1C0041FF0 (Template_ppq.c)
 */

__int64 __fastcall VmBusSendAsyncMessage(
        struct VMBCHANNEL__ *a1,
        struct DXGKVMB_COMMAND *a2,
        __int64 a3,
        struct _MDL *a4)
{
  unsigned int v4; // esi
  __int64 v8; // rcx
  signed __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  struct _MDL *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = a4;
  v4 = a3;
  if ( !a1 )
    return 3221226166LL;
  v8 = qword_1C006E790;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q(qword_1C006E790, &EventProfilerEnter, a3, 2136);
    v8 = qword_1C006E790;
  }
  if ( v4 < 0x10000 )
  {
    v9 = _InterlockedIncrement64(&qword_1C0070C08);
    *(_QWORD *)a2 = v9;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_ppq(v9, (unsigned int)&EventVmBusSendCommandAsync, a3, (_DWORD)a1, v9, *((_DWORD *)a2 + 2));
    v16 = 0LL;
    v10 = VmbChannelSendSynchronousRequest(a1, a2, v4, 0LL, 0, 0LL, 0LL, &v16);
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdError(v15);
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2136);
    return (unsigned int)v14;
  }
  else
  {
    if ( (v8 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v8, &EventProfilerExit, a3, 2136);
    return 3221225473LL;
  }
}
