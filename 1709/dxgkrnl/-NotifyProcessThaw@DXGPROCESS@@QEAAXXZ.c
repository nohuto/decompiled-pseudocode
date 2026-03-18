/*
 * XREFs of ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C0088E60
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F7400 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01941E0 (-VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000E9EC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00202B8 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C0092E44 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessThaw(struct DXGFASTMUTEX *const *this, __int64 a2, __int64 a3)
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
  _BYTE v14[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2096);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, this[13]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  *((_BYTE *)this + 540) = 0;
  v4 = (char *)(this + 20);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 20, 0LL);
  v5 = (_QWORD **)(this + 32);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v15[0] = v5;
  for ( i = *v5; ; i = (_QWORD *)*i )
  {
    v15[1] = i;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v15);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessThaw(Current);
  }
  v16[0] = v5;
  while ( 1 )
  {
    v5 = (_QWORD **)*v5;
    v16[1] = v5;
    v8 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v16);
    if ( !v8 )
      break;
    v12 = *(_QWORD *)(v8 + 16);
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13 != v9 && !*(_BYTE *)(v13 + 185) && *(_QWORD *)(v13 + 2312) && *(_QWORD *)(v13 + 2352) )
      DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v12 + 16));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, 2096);
}
