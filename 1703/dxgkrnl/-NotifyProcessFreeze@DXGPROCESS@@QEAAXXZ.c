/*
 * XREFs of ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00D6ECC
 * Callers:
 *     ?VmBusNotifyProcessFreeze@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E1E0 (-VmBusNotifyProcessFreeze@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00A4010 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0002724 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0020624 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00C0148 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00CD340 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::NotifyProcessFreeze(struct DXGFASTMUTEX **this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  struct DXGFASTMUTEX *v6; // rbx
  DXGDEVICE *Current; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  DXGADAPTER **v17; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 2087);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this[10], a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  *((_BYTE *)this + 492) = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 17, 0LL);
  v5 = this + 28;
  this[18] = KeGetCurrentThread();
  v6 = this[28];
  v19[0] = this + 28;
  while ( 1 )
  {
    v19[1] = v6;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v19);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessFreeze(Current);
    v6 = *(struct DXGFASTMUTEX **)v6;
  }
  v20[0] = this + 28;
  while ( 1 )
  {
    v5 = (_QWORD *)*v5;
    v20[1] = v5;
    v8 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v20);
    if ( !v8 )
      break;
    v16 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
    if ( v16 != v9 && !*(_BYTE *)(v16 + 186) )
    {
      v17 = *(DXGADAPTER ***)(v16 + 2288);
      if ( v17 )
      {
        ADAPTER_RENDER::NotifyProcessFreeze(v17, (struct DXGPROCESS *)this);
        if ( *(_QWORD *)(v16 + 2328) )
          DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)v16);
      }
    }
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v9, v10, v11);
  this[18] = 0LL;
  ExReleasePushLockExclusiveEx(this + 17, 0LL);
  KeLeaveCriticalRegion();
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v12, v14, v15);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 2087);
}
