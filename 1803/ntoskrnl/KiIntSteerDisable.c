/*
 * XREFs of KiIntSteerDisable @ 0x1401687C8
 * Callers:
 *     KeDisconnectInterrupt @ 0x1401686D8 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x1400C6C54 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerLogState @ 0x140169544 (KiIntSteerLogState.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rcx

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( v4 )
  {
    KiIntSteerLogState(*(_QWORD *)(*a1 + 168), &PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
    v5 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( a2 )
    {
      v6 = a2;
      do
      {
        v7 = *v2;
        _InterlockedAnd((volatile signed __int32 *)(*v2 + 104), 0xFFFFFFFB);
        *(_QWORD *)(v7 + 168) = 0LL;
        ++v2;
        --v6;
      }
      while ( v6 );
    }
    v8 = *v4;
    v9 = (_QWORD *)v4[2];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4) )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    ExFreePoolWithTag(v4, 0x6B725449u);
    if ( (_QWORD *)v9[2] == v9 + 2 )
    {
      --KiIntTrackRootCount;
      v12 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v13 = (_QWORD *)v9[1], (_QWORD *)*v13 != v9) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      KiIntSteerUpdateDeviceInterruptMask((__int64)(v9 + 20), 1, v11);
      ExFreePoolWithTag(v9, 0x6B725449u);
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    __writecr8(v5);
  }
  return 0LL;
}
