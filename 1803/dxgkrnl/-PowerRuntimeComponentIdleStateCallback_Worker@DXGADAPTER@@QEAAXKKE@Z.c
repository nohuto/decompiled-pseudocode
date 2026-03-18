/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0025FA4
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0025EA8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x1C014D8A4 (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C002AA84 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0032F24 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C00339B8 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+80h] [rbp+8h]

  v5 = a2;
  v6 = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0pqq((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentFState, a3, (_DWORD)this, a2, a3);
    v8 = *((_QWORD *)this + 312);
    v9 = 520 * v5;
    if ( a4 || !*(_BYTE *)(v9 + v8 + 360) )
    {
      if ( DXGADAPTER::IsDxgmms2(this) && *(_DWORD *)(v9 + v8 + 208) == 3 )
      {
        v10 = *(_DWORD *)(v9 + v8 + 344);
        v14 = 0;
      }
      else
      {
        v14 = 1;
        v10 = v6;
        *(_DWORD *)(v9 + v8 + 344) = v6;
      }
      *(_BYTE *)(v9 + v8 + 359) = 1;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v9 + v8 + 512);
        if ( v11 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 160), &LockHandle);
          *(_DWORD *)(v11 + 196) = -1;
          *(_BYTE *)(v11 + 224) = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      if ( v14 )
        DXGADAPTER::DdiSetPowerComponentFState(this, *(_DWORD *)(v9 + v8 + 4), v6);
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(this, &Dxgk_SetPowerComponentFStateEnd, a3, this, v5);
    if ( (*(_DWORD *)(v9 + v8 + 216) & 2) == 0 )
    {
      *(_BYTE *)(v9 + v8 + 359) = 0;
      if ( !a4 )
        PoFxCompleteIdleState(*((_QWORD *)this + 313), (unsigned int)v5);
      if ( !*(_DWORD *)(v9 + v8 + 344) )
      {
        v12 = *(_QWORD *)(v9 + v8 + 512);
        if ( v12 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v12 + 136));
      }
      if ( *(_DWORD *)(v9 + v8 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v9 + v8 + 4), *(_DWORD *)(v9 + v8 + 344), 0);
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 313), a2);
  }
}
