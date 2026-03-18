/*
 * XREFs of ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00F837C
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2A80 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0180450 (-VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000AEAC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00F2B0C (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessThaw(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  char *v4; // rsi
  _QWORD **v5; // rdi
  _QWORD *i; // rbx
  DXGDEVICE *Current; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-10h] BYREF

  v15 = 0LL;
  v14 = 2096;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2096);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2096);
  *((_BYTE *)this + 432) = 0;
  v4 = (char *)this + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 168, 0LL);
  v5 = (_QWORD **)((char *)this + 272);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v16[0] = v5;
  for ( i = *v5; ; i = (_QWORD *)*i )
  {
    v16[1] = i;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v16);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessThaw(Current);
  }
  v17[0] = v5;
  while ( 1 )
  {
    v5 = (_QWORD **)*v5;
    v17[1] = v5;
    v8 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
    if ( !v8 )
      break;
    v12 = *(_QWORD *)(v8 + 16);
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13 != v9 && !*(_BYTE *)(v13 + 185) && *(_QWORD *)(v13 + 2464) && *(_QWORD *)(v13 + 2504) )
      DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v12 + 16));
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v14);
}
