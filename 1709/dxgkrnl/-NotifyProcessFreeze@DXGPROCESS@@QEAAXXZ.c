/*
 * XREFs of ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0088D0C
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F7360 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01941C0 (-VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000E9EC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00202B8 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0083EA4 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0092F9C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessFreeze(struct DXGFASTMUTEX **this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  struct DXGFASTMUTEX *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  DXGADAPTER **v12; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2087);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this[13]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  *((_BYTE *)this + 540) = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 20, 0LL);
  v4 = this + 32;
  this[21] = KeGetCurrentThread();
  v5 = this[32];
  v14[0] = this + 32;
  while ( 1 )
  {
    v14[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v14);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessFreeze(Current);
    v5 = *(struct DXGFASTMUTEX **)v5;
  }
  v15[0] = this + 32;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v15[1] = v4;
    v7 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v15);
    if ( !v7 )
      break;
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
    if ( v11 != v8 && !*(_BYTE *)(v11 + 185) )
    {
      v12 = *(DXGADAPTER ***)(v11 + 2312);
      if ( v12 )
      {
        ADAPTER_RENDER::NotifyProcessFreeze(v12, (struct DXGPROCESS *)this);
        if ( *(_QWORD *)(v11 + 2352) )
          DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)v11);
      }
    }
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  this[21] = 0LL;
  ExReleasePushLockExclusiveEx(this + 20, 0LL);
  KeLeaveCriticalRegion();
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 2087);
}
