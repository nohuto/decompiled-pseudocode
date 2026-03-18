/*
 * XREFs of KiIntSteerDisable @ 0x14012940C
 * Callers:
 *     KeDisconnectInterrupt @ 0x140129340 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x1400B3634 (KiIntSteerLogState.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rsi
  _QWORD *v4; // rbx
  KIRQL v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  unsigned __int16 *v14; // rcx
  unsigned __int16 *v16[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( v4 )
  {
    KiIntSteerLogState(*(_QWORD *)(*a1 + 168), (__int64)&PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
    v19 = 4;
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
    v10 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v10 != v4 )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    ExFreePoolWithTag(v4, 0x6B725449u);
    if ( (_QWORD *)v9[2] == v9 + 2 )
    {
      --KiIntTrackRootCount;
      v11 = *v9;
      v12 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = 20LL;
      if ( *((_DWORD *)v9 + 32) == 2 )
        v13 = 8LL;
      v16[0] = 0LL;
      v14 = (unsigned __int16 *)v9[v13];
      v17 = v9[v13 + 1];
      v16[1] = v14;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v16) )
        --*(_DWORD *)(KiProcessorBlock[v18] + 11672);
      ExFreePoolWithTag(v9, 0x6B725449u);
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    __writecr8(v5);
  }
  return 0LL;
}
