/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00162D4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00253D0 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C002580C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0025B70 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F4FB0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00F8238 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00F837C (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014B1C4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C002508C (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00271D0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  PKSPIN_LOCK v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rsi
  DXGADAPTER *v10; // rbx
  char *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+48h] [rbp-10h]

  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)&v12, (KSPIN_LOCK *)this + 370, 0);
  if ( *((struct _KTHREAD **)this + 371) != KeGetCurrentThread() )
  {
    v2 = SpinLock;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v15 = 1;
  }
  if ( *((_QWORD *)this + 357) && *((_DWORD *)this + 34) != 1 )
  {
    v3 = *((_DWORD *)this + 663);
    if ( *((_BYTE *)this + 2938) )
    {
      if ( !v3 )
      {
        v5 = *((_QWORD *)this + 358);
        v6 = *((_QWORD *)this + 364);
LABEL_21:
        if ( *((_BYTE *)this + 2936) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 661), v5);
        v8 = *((_DWORD *)this + 662);
        if ( v8 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v8, v6);
        goto LABEL_25;
      }
      v4 = *((_DWORD *)this + 735);
      if ( v4 )
      {
        if ( v4 != 2 )
        {
          v6 = *((_QWORD *)this + 363);
          if ( v4 == 3 )
            v5 = *((_QWORD *)this + 355);
          else
            v5 = *((_QWORD *)this + 351);
          goto LABEL_21;
        }
        v5 = *((_QWORD *)this + 353);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !v3 || (v7 = *((_DWORD *)this + 735), (unsigned int)(v7 - 2) <= 1) )
      {
        v5 = *((_QWORD *)this + 359);
        v6 = *((_QWORD *)this + 365);
        goto LABEL_21;
      }
      if ( v7 )
      {
        v5 = *((_QWORD *)this + 351);
LABEL_19:
        v6 = *((_QWORD *)this + 363);
        goto LABEL_21;
      }
    }
    v5 = *((_QWORD *)this + 349);
    v6 = *((_QWORD *)this + 362);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)this + 663) )
    v9 = *((_QWORD *)this + 360);
  else
    v9 = *((_QWORD *)this + 361);
  v10 = (DXGADAPTER *)*((_QWORD *)this + 375);
  while ( v10 != (DXGADAPTER *)((char *)this + 3000) )
  {
    v11 = (char *)v10 - 424;
    v10 = *(DXGADAPTER **)v10;
    if ( v9 == *((_QWORD *)v11 + 46) )
      break;
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v11 + 1), v9);
  }
  if ( v15 )
  {
    v15 = 0;
    SpinLock[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
