/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x140215448
 * Callers:
 *     MiFlushAllPages @ 0x1402259EC (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140002204 (MiEnumerateLeafPtes.c)
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 Process; // r13
  _QWORD *v6; // rax
  unsigned __int64 v7; // rsi
  int v8; // ecx
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // di
  __int64 v12; // rdx
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h]
  int *v18; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v20; // [rsp+5Ch] [rbp-ACh]
  __int64 v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]

  v21 = 20LL;
  v2 = 0;
  v19 = MiTbFlushType(a1);
  v18 = &v19;
  v20 = 4;
  v22 = 0LL;
  v23 = 0LL;
  v16 = v3;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    v2 = -1073741558;
  }
  else
  {
    v6 = *(_QWORD **)(Process + 1576);
    v7 = 0LL;
    while ( v6 )
    {
      v7 = (unsigned __int64)v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v7 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v7 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      v8 = *(_DWORD *)(v7 + 48);
      if ( (v8 & 0x80000) == 0 && ((1 << (v8 & 7)) & 0x55) != 0 && !MiVadMapsLargeImage(v7) )
      {
        SharedVm = MiGetSharedVm(a1);
        v10 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        LOBYTE(v17) = v10;
        v11 = v10;
        MiEnumerateLeafPtes(
          (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12,
          (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12,
          (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiEmptyWsPrivatePagesCallback,
          (__int64)&v16,
          0);
        LOBYTE(v12) = v11;
        MiUnlockWorkingSetExclusive(a1, v12);
      }
      MiUnlockVad((__int64)CurrentThread, v7);
      v13 = *(_QWORD **)(v7 + 8);
      v14 = v7;
      if ( v13 )
      {
        do
        {
          v7 = (unsigned __int64)v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v13 );
      }
      else
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)v7 == v14 )
            break;
          v14 = v7;
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v2;
}
