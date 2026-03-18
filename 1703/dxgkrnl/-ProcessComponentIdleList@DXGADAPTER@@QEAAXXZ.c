/*
 * XREFs of ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0006554
 * Callers:
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00134D0 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C0006454 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     TemplateEventDescriptor @ 0x1C00227CC (TemplateEventDescriptor.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 */

void __fastcall DXGADAPTER::ProcessComponentIdleList(KSPIN_LOCK *this)
{
  __int64 v2; // rbx
  char *v3; // r14
  char *v4; // rax
  KSPIN_LOCK v5; // rcx
  int v6; // r8d
  _QWORD *i; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  char *v10; // rdx
  unsigned int v11; // r15d
  _QWORD *v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 2758) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      TemplateEventDescriptor(this, &Dxgk_ProcessComponentIdleList);
    v2 = MEMORY[0xFFFFF78000000014];
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 357, &LockHandle);
    v17[1] = v17;
    v3 = (char *)(this + 351);
    v17[0] = v17;
    v4 = (char *)this[351];
    while ( v4 != v3 )
    {
      v10 = v4 - 440;
      v4 = *(char **)v4;
      if ( *((_QWORD *)v10 + 61) > v2 )
        break;
      v12 = v10 + 440;
      v13 = *((_QWORD *)v10 + 55);
      v14 = (_QWORD *)*((_QWORD *)v10 + 56);
      if ( *(char **)(v13 + 8) != v10 + 440 || (_QWORD *)*v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v12 = 0LL;
      v15 = v10 + 456;
      v16 = v17[0];
      if ( *(_QWORD **)(v17[0] + 8LL) != v17 )
        __fastfail(3u);
      *v15 = v17[0];
      v15[1] = v17;
      *(_QWORD *)(v16 + 8) = v15;
      v17[0] = v15;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v17[0]; i != v17; i = (_QWORD *)*i )
    {
      v11 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_pqq(v5, (unsigned int)&Dxgk_ReportPowerComponentState, v6, (_DWORD)this, v11, 0);
      v5 = this[291];
      if ( v5 )
        PoFxIdleComponent(v5, v11, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 357, &LockHandle);
    *((_BYTE *)this + 2757) = 0;
    if ( *(char **)v3 != v3 )
    {
      v8 = *(_QWORD **)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 40LL) <= v2 )
      {
        v9 = v8[6] - v2;
      }
      else
      {
        v9 = v8[7];
        v8[5] = v2;
        v8[6] = v9 + v2;
      }
      DXGADAPTER::ScheduleComponentIdleListTimer((DXGADAPTER *)this, v9);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
