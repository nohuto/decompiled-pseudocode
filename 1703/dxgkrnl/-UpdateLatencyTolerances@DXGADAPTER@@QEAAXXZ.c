/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0020624
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00069D0 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001316C (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00216DC (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0021B2C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D34C4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00D6ECC (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00D7020 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C00036E8 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020434 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  PKSPIN_LOCK v2; // rbx
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // edx
  __int64 v8; // rsi
  DXGADAPTER *v9; // rbx
  char *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+48h] [rbp-10h]

  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)&v11, (KSPIN_LOCK *)this + 348, 0);
  if ( *((struct _KTHREAD **)this + 349) != KeGetCurrentThread() )
  {
    v2 = SpinLock;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v14 = 1;
  }
  if ( *((_QWORD *)this + 335) && *((_DWORD *)this + 34) != 1 )
  {
    if ( *((_BYTE *)this + 2762) )
    {
      if ( !*((_DWORD *)this + 619) )
      {
        v4 = *((_QWORD *)this + 336);
        v5 = *((_QWORD *)this + 342);
LABEL_21:
        if ( *((_BYTE *)this + 2760) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 617), v4);
        v7 = *((_DWORD *)this + 618);
        if ( v7 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v7, v5);
        goto LABEL_25;
      }
      v3 = *((_DWORD *)this + 691);
      if ( v3 )
      {
        if ( v3 != 2 )
        {
          v5 = *((_QWORD *)this + 341);
          if ( v3 == 3 )
            v4 = *((_QWORD *)this + 333);
          else
            v4 = *((_QWORD *)this + 329);
          goto LABEL_21;
        }
        v4 = *((_QWORD *)this + 331);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 619) || (v6 = *((_DWORD *)this + 691), (unsigned int)(v6 - 2) <= 1) )
      {
        v4 = *((_QWORD *)this + 337);
        v5 = *((_QWORD *)this + 343);
        goto LABEL_21;
      }
      if ( v6 )
      {
        v4 = *((_QWORD *)this + 329);
LABEL_19:
        v5 = *((_QWORD *)this + 341);
        goto LABEL_21;
      }
    }
    v4 = *((_QWORD *)this + 327);
    v5 = *((_QWORD *)this + 340);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)this + 619) )
    v8 = *((_QWORD *)this + 338);
  else
    v8 = *((_QWORD *)this + 339);
  v9 = (DXGADAPTER *)*((_QWORD *)this + 353);
  while ( v9 != (DXGADAPTER *)((char *)this + 2824) )
  {
    v10 = (char *)v9 - 424;
    v9 = *(DXGADAPTER **)v9;
    if ( v8 == *((_QWORD *)v10 + 46) )
      break;
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v10 + 1), v8);
  }
  if ( v14 )
  {
    v14 = 0;
    SpinLock[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
