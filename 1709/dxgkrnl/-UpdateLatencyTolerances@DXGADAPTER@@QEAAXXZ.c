/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00202B8
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00029A4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C001E4EC (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001E93C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001EC80 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084B00 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0088D0C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C0088E60 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0114290 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C001E1EC (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020170 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
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

  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)&v11, (KSPIN_LOCK *)this + 351, 0);
  if ( *((struct _KTHREAD **)this + 352) != KeGetCurrentThread() )
  {
    v2 = SpinLock;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v14 = 1;
  }
  if ( *((_QWORD *)this + 338) && *((_DWORD *)this + 34) != 1 )
  {
    if ( *((_BYTE *)this + 2786) )
    {
      if ( !*((_DWORD *)this + 625) )
      {
        v4 = *((_QWORD *)this + 339);
        v5 = *((_QWORD *)this + 345);
LABEL_21:
        if ( *((_BYTE *)this + 2784) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 623), v4);
        v7 = *((_DWORD *)this + 624);
        if ( v7 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v7, v5);
        goto LABEL_25;
      }
      v3 = *((_DWORD *)this + 697);
      if ( v3 )
      {
        if ( v3 != 2 )
        {
          v5 = *((_QWORD *)this + 344);
          if ( v3 == 3 )
            v4 = *((_QWORD *)this + 336);
          else
            v4 = *((_QWORD *)this + 332);
          goto LABEL_21;
        }
        v4 = *((_QWORD *)this + 334);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 625) || (v6 = *((_DWORD *)this + 697), (unsigned int)(v6 - 2) <= 1) )
      {
        v4 = *((_QWORD *)this + 340);
        v5 = *((_QWORD *)this + 346);
        goto LABEL_21;
      }
      if ( v6 )
      {
        v4 = *((_QWORD *)this + 332);
LABEL_19:
        v5 = *((_QWORD *)this + 344);
        goto LABEL_21;
      }
    }
    v4 = *((_QWORD *)this + 330);
    v5 = *((_QWORD *)this + 343);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)this + 625) )
    v8 = *((_QWORD *)this + 341);
  else
    v8 = *((_QWORD *)this + 342);
  v9 = (DXGADAPTER *)*((_QWORD *)this + 356);
  while ( v9 != (DXGADAPTER *)((char *)this + 2848) )
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
