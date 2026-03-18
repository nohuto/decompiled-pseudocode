/*
 * XREFs of ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01868E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00F9D78 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFence(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD **v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  PERESOURCE *Global; // rax
  _BYTE v22[32]; // [rsp+20h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp+18h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (struct _KTHREAD **)*((_QWORD *)a1 + 7);
    v23 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v22, v4);
    v6 = *(_DWORD *)(v3 + 28);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v15 = *((_QWORD *)a1 + 7);
        v16 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v16 < *(_DWORD *)(v15 + 248) )
        {
          v17 = *(_QWORD *)(v15 + 232);
          v15 = *(unsigned int *)(v17 + 16 * v16 + 8);
          if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
            && (v15 & 0x2000) == 0
            && (v15 & 0x1F) != 0 )
          {
            v15 &= 0x1Fu;
            if ( (_BYTE)v15 == 8 )
            {
              v11 = *(volatile signed __int32 **)(v17 + 16LL * (unsigned int)v16);
              if ( v11 )
              {
LABEL_22:
                _InterlockedIncrement(v11 + 6);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
                v23 = DXGSYNCOBJECT::SignalFence((__int64)v11, *(_QWORD *)(v3 + 32), 0, 0);
                if ( v23 < 0 )
                {
                  v19 = WdLogNewEntry5_WdError(v18);
                  *(_QWORD *)(v19 + 24) = v23;
                  WdLogEvent5_WdError(v19);
                }
                Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18);
                DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v11, 0);
                goto LABEL_27;
              }
            }
          }
        }
        v13 = WdLogNewEntry5_WdError(v15);
        v14 = *(unsigned int *)(v3 + 24);
        *(_QWORD *)(v13 + 32) = 4394LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v5);
        v14 = *(int *)(v3 + 28);
      }
    }
    else
    {
      v7 = *((_QWORD *)a1 + 7);
      v8 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v8 < *(_DWORD *)(v7 + 248) )
      {
        v9 = *(_QWORD *)(v7 + 232);
        v7 = *(unsigned int *)(v9 + 16 * v8 + 8);
        if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60)
          && (v7 & 0x2000) == 0
          && (v7 & 0x1F) != 0 )
        {
          v7 &= 0x1Fu;
          if ( (_BYTE)v7 == 13 )
          {
            v10 = *(_QWORD *)(v9 + 16LL * (unsigned int)v8);
            if ( v10 )
            {
              if ( *(_DWORD *)v10 == 11 || *(_DWORD *)v10 == 8 )
              {
                v11 = *(volatile signed __int32 **)(v10 + 8);
                if ( !v11 )
                {
                  v12 = WdLogNewEntry5_WdAssertion(v7);
                  *(_QWORD *)(v12 + 24) = 4399LL;
                  WdLogEvent5_WdAssertion(v12);
                }
                goto LABEL_22;
              }
            }
          }
        }
      }
      v13 = WdLogNewEntry5_WdError(v7);
      v14 = *(unsigned int *)(v3 + 24);
    }
    *(_QWORD *)(v13 + 24) = v14;
    WdLogEvent5_WdError(v13);
    v23 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
LABEL_27:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v23, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
