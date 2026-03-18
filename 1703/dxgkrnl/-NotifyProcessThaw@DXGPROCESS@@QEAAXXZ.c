/*
 * XREFs of ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00D7020
 * Callers:
 *     ?VmBusNotifyProcessThaw@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E200 (-VmBusNotifyProcessThaw@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00A3DF0 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0002724 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0020624 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00BFFF0 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessThaw(struct DXGFASTMUTEX *const *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rsi
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  DXGDEVICE *Current; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  _BYTE v19[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 2096);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, this[10], a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  *((_BYTE *)this + 492) = 0;
  v5 = (char *)(this + 17);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 17, 0LL);
  v6 = (_QWORD **)(this + 28);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v20[0] = v6;
  for ( i = *v6; ; i = (_QWORD *)*i )
  {
    v20[1] = i;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v20);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessThaw(Current);
  }
  v21[0] = v6;
  while ( 1 )
  {
    v6 = (_QWORD **)*v6;
    v21[1] = v6;
    v9 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v21);
    if ( !v9 )
      break;
    v17 = *(_QWORD *)(v9 + 16);
    v18 = *(_QWORD *)(v17 + 16);
    if ( v18 != v10 && !*(_BYTE *)(v18 + 186) && *(_QWORD *)(v18 + 2288) && *(_QWORD *)(v18 + 2328) )
      DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v17 + 16));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v10, v11, v12);
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v13, v15, v16);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 2096);
}
