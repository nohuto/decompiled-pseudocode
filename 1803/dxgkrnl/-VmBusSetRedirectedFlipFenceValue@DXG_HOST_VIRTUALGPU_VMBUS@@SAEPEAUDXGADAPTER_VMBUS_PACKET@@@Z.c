/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  PERESOURCE *Global; // rax
  __int64 v15; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]
  char v19; // [rsp+30h] [rbp-20h]
  _BYTE v20[24]; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+68h] [rbp+18h] BYREF

  v21 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    v19 = 0;
    v18 = *(_QWORD *)(v4 + 16);
    v5 = v18;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
    if ( *(_DWORD *)(v5 + 176) == 1 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v20,
        *((struct _KTHREAD ***)a1 + 7));
      v6 = *((_QWORD *)a1 + 7);
      v7 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v7 < *(_DWORD *)(v6 + 248)
        && (v8 = *(_QWORD *)(v6 + 232),
            v6 = *(unsigned int *)(v8 + 16 * v7 + 8),
            ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60))
        && (v6 & 0x2000) == 0
        && (v6 & 0x1F) != 0
        && (v6 &= 0x1Fu, (_BYTE)v6 == 13)
        && (v9 = *(_QWORD *)(v8 + 16LL * (unsigned int)v7)) != 0
        && (*(_DWORD *)v9 == 11 || *(_DWORD *)v9 == 8) )
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( !v10 )
        {
          v11 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v11 + 24) = 2548LL;
          WdLogEvent5_WdAssertion(v11);
        }
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
        v12 = *(_QWORD *)(v3 + 32);
        v13 = *(_QWORD *)(v10 + 112);
        if ( v13 <= v12 )
          v13 = *(_QWORD *)(v3 + 32);
        *(_QWORD *)(v10 + 112) = v13;
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v12);
        DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v10, 0);
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v15 + 24) = *(unsigned int *)(v3 + 24);
        WdLogEvent5_WdError(v15);
        v21 = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
      }
    }
    else
    {
      v21 = -1073741130;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v21, 4u);
    if ( v19 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
    LOBYTE(v2) = 1;
  }
  return v2;
}
