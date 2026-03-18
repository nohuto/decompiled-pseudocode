/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0032E30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?SetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEAAX_K@Z @ 0x1C0020910 (-SetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEAAX_K@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  struct DXGPROCESS *Current; // r14
  unsigned int v10; // ecx
  __int64 v11; // r8
  int v12; // edx
  DXGSYNCOBJECT *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  char v23; // [rsp+40h] [rbp-10h]
  int v24; // [rsp+70h] [rbp+20h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v24 = 0;
  v3 = *((_QWORD *)a1 + 9);
  v23 = 0;
  v22 = *(_QWORD *)(v1 + 8);
  v4 = v22;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  if ( *(_DWORD *)(v4 + 176) == 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, Global, v6, v7);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v20);
    v8 = *(_DWORD *)(v3 + 16);
    Current = DXGPROCESS::GetCurrent();
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
    v10 = (v8 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)Current + 52)
      && (v11 = *((_QWORD *)Current + 24),
          v12 = *(_DWORD *)(v11 + 16LL * v10 + 8),
          ((v8 >> 26) & 0x30) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x30))
      && (v12 & 0x1000) == 0
      && (v12 & 0xF) != 0
      && (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0xF) == 8 )
    {
      v13 = *(DXGSYNCOBJECT **)(v11 + 16LL * v10);
    }
    else
    {
      v13 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      DXGSYNCOBJECT::SetRedirectedFlipFenceValue(v13, *(_QWORD *)(v3 + 24), v16, v17);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v18 + 24) = *(unsigned int *)(v3 + 16);
      WdLogEvent5_WdError(v18);
      v24 = -1073741811;
    }
    if ( v20[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v20);
  }
  else
  {
    v24 = -1073741130;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v24, 4u);
  if ( v23 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  return 1;
}
