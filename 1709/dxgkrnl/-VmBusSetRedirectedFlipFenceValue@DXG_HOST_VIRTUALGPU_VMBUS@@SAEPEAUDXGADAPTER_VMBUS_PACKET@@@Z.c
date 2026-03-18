/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199A90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _BYTE v17[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h]
  int v21; // [rsp+80h] [rbp+30h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v21 = 0;
  v3 = *((_QWORD *)a1 + 9);
  v20 = 0;
  v19 = *(_QWORD *)(v1 + 16);
  v4 = v19;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  if ( *(_DWORD *)(v4 + 176) == 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v17, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v17);
    v7 = *((_QWORD *)a1 + 7);
    v8 = *(_DWORD *)(v3 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 200));
    v9 = (v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v9 < *(_DWORD *)(v7 + 240)
      && (v10 = *(_QWORD *)(v7 + 224),
          v11 = *(_DWORD *)(v10 + 16 * v9 + 8),
          ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60))
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0
      && (*(_BYTE *)(v10 + 16LL * (unsigned int)v9 + 8) & 0x1F) == 0xD )
    {
      v12 = *(_QWORD *)(v10 + 16LL * (unsigned int)v9);
    }
    else
    {
      v12 = 0LL;
    }
    ExReleasePushLockSharedEx(v7 + 200, 0LL);
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      v15 = *(_QWORD *)(v3 + 32);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 104LL) > v15 )
        v15 = *(_QWORD *)(*(_QWORD *)v12 + 104LL);
      *(_QWORD *)(*(_QWORD *)v12 + 104LL) = v15;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = *(unsigned int *)(v3 + 24);
      WdLogEvent5_WdError(v14);
      v21 = -1073741811;
    }
    if ( v17[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v17);
  }
  else
  {
    v21 = -1073741130;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v21, 4u);
  if ( v20 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  return 1;
}
