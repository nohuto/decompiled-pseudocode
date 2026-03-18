/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001F0B0
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001EFB4 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x1C0171C24 (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0022C68 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00284B0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0028E10 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
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
  char v9; // r12
  bool v10; // zf
  __int64 v11; // r14
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  v6 = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0pqq((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentFState, a3, (_DWORD)this, a2, a3);
    v8 = *((_QWORD *)this + 293) + 520 * v5;
    if ( a4 || !*(_BYTE *)(v8 + 360) )
    {
      if ( DXGADAPTER::IsDxgmms2(this) && *(_DWORD *)(v8 + 208) == 3 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        *(_DWORD *)(v8 + 344) = v6;
      }
      v10 = *(_DWORD *)(v8 + 344) == 0;
      *(_BYTE *)(v8 + 359) = 1;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(v8 + 512);
        if ( v11 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 160), &LockHandle);
          *(_DWORD *)(v11 + 196) = -1;
          *(_BYTE *)(v11 + 224) = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      if ( v9 )
        DXGADAPTER::DdiSetPowerComponentFState(this, *(_DWORD *)(v8 + 4), v6);
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(this, &Dxgk_SetPowerComponentFStateEnd, a3, this, v5);
    if ( (*(_DWORD *)(v8 + 216) & 2) == 0 )
    {
      *(_BYTE *)(v8 + 359) = 0;
      if ( !a4 )
        PoFxCompleteIdleState(*((_QWORD *)this + 294), (unsigned int)v5);
      if ( !*(_DWORD *)(v8 + 344) )
      {
        v12 = *(_QWORD *)(v8 + 512);
        if ( v12 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v12 + 136));
      }
      if ( *(_DWORD *)(v8 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, v5, *(_DWORD *)(v8 + 344), 0);
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 294), a2);
  }
}
