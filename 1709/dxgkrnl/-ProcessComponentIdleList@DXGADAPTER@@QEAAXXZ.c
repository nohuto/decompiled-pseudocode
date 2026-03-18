/*
 * XREFs of ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C001F2CC
 * Callers:
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00239A0 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C001F844 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     McTemplateK0 @ 0x1C002048C (McTemplateK0.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 */

void __fastcall DXGADAPTER::ProcessComponentIdleList(KSPIN_LOCK *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  KSPIN_LOCK v11; // rcx
  int v12; // r8d
  _QWORD *i; // rsi
  unsigned int v14; // r15d
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 2782) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0(this, &Dxgk_ProcessComponentIdleList);
    v2 = MEMORY[0xFFFFF78000000014];
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 360, &LockHandle);
    v17[1] = v17;
    v3 = this + 354;
    v17[0] = v17;
    v4 = (_QWORD *)this[354];
    while ( v4 != v3 )
    {
      v5 = v4 - 55;
      v4 = (_QWORD *)*v4;
      if ( v5[61] > v2 )
        break;
      v6 = v5 + 55;
      v7 = v5[55];
      if ( *(_QWORD **)(v7 + 8) != v5 + 55 || (v8 = (_QWORD *)v5[56], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *v6 = 0LL;
      v9 = v5 + 57;
      v10 = v17[0];
      if ( *(_QWORD **)(v17[0] + 8LL) != v17 )
        __fastfail(3u);
      *v9 = v17[0];
      v9[1] = v17;
      *(_QWORD *)(v10 + 8) = v9;
      v17[0] = v9;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v17[0]; i != v17; i = (_QWORD *)*i )
    {
      v14 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0pqq(v11, (unsigned int)&Dxgk_ReportPowerComponentState, v12, (_DWORD)this, v14, 0);
      v11 = this[294];
      if ( v11 )
        PoFxIdleComponent(v11, v14, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 360, &LockHandle);
    *((_BYTE *)this + 2781) = 0;
    v15 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      if ( v15[5] <= v2 )
      {
        v16 = v15[6] - v2;
      }
      else
      {
        v16 = v15[7];
        v15[5] = v2;
        v15[6] = v16 + v2;
      }
      DXGADAPTER::ScheduleComponentIdleListTimer((DXGADAPTER *)this, v16);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
