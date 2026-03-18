/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0021D78
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0020528 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x1C016E45C (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0005CE4 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0038BD8 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbp
  unsigned int v6; // r13d
  __int64 v8; // rdi
  __int64 v9; // r9
  char v10; // r12
  bool v11; // zf
  __int64 v12; // r14
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  v6 = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_pqq((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentFState, a3, (_DWORD)this, a2, a3);
    v8 = *((_QWORD *)this + 290) + 520 * v5;
    if ( a4 || !*(_BYTE *)(v8 + 360) )
    {
      if ( DXGADAPTER::IsDxgmms2(this) && *(_DWORD *)(v8 + 208) == 3 )
      {
        v10 = 0;
      }
      else
      {
        v10 = 1;
        *(_DWORD *)(v8 + 344) = v6;
      }
      v11 = *(_DWORD *)(v8 + 344) == 0;
      *(_BYTE *)(v8 + 359) = 1;
      if ( !v11 )
      {
        v12 = *(_QWORD *)(v8 + 512);
        if ( v12 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 160), &LockHandle);
          *(_DWORD *)(v12 + 196) = -1;
          *(_BYTE *)(v12 + 224) = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      if ( v10 )
        DXGADAPTER::DdiSetPowerComponentFState(this, *(unsigned int *)(v8 + 4), v6, v9);
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_xq(this, &Dxgk_SetPowerComponentFStateEnd, a3, this, v5);
    if ( (*(_DWORD *)(v8 + 216) & 2) == 0 )
    {
      *(_BYTE *)(v8 + 359) = 0;
      if ( !a4 )
        PoFxCompleteIdleState(*((_QWORD *)this + 291), (unsigned int)v5);
      if ( !*(_DWORD *)(v8 + 344) )
      {
        v13 = *(_QWORD *)(v8 + 512);
        if ( v13 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v13 + 136));
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 291), a2);
  }
}
