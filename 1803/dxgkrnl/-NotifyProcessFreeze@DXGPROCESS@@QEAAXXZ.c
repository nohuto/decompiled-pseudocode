/*
 * XREFs of ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00F8238
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2BA0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0180400 (-VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000AEAC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00A65C8 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F2C74 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessFreeze(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  ADAPTER_RENDER *v12; // rcx
  int v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  _QWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF

  v14 = 0LL;
  v13 = 2087;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2087);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2087);
  *((_BYTE *)this + 432) = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 168, 0LL);
  v4 = (_QWORD *)((char *)this + 272);
  *((_QWORD *)this + 22) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 34);
  v15[0] = (char *)this + 272;
  while ( 1 )
  {
    v15[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v15);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessFreeze(Current);
    v5 = (_QWORD *)*v5;
  }
  v16[0] = (char *)this + 272;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v16[1] = v4;
    v7 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v16);
    if ( !v7 )
      break;
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
    if ( v11 != v8 && !*(_BYTE *)(v11 + 185) )
    {
      v12 = *(ADAPTER_RENDER **)(v11 + 2464);
      if ( v12 )
      {
        ADAPTER_RENDER::NotifyProcessFreeze(v12, this);
        if ( *(_QWORD *)(v11 + 2504) )
          DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)v11);
      }
    }
  }
  *((_QWORD *)this + 22) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 168, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v13);
}
