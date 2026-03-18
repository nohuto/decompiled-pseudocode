/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x14007C6D8
 * Callers:
 *     MiFlushAllPages @ 0x14013F290 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  _QWORD *v6; // rax
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax
  int v9; // ecx
  __int64 SharedVm; // rbx
  KIRQL v11; // al
  KIRQL v12; // di
  __int64 v13; // rdx
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
  v19 = MiTbFlushType();
  v18 = &v19;
  v20 = 4;
  v22 = 0LL;
  v23 = 0LL;
  v16 = v3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v2 = -1073741558;
  }
  else
  {
    v6 = (_QWORD *)Process[2].Affinity.Bitmap[4];
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
      v9 = *(_DWORD *)(v7 + 48);
      if ( (v9 & 0x80000) == 0 && ((1 << (v9 & 7)) & 0x55) != 0 && !(unsigned int)MiVadMapsLargeImage(v7) )
      {
        SharedVm = MiGetSharedVm(a1);
        v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        *(_DWORD *)(SharedVm + 4) = 0;
        LOBYTE(v17) = v11;
        v12 = v11;
        MiEnumerateLeafPtes(
          (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12,
          (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12,
          (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiEmptyWsPrivatePagesCallback,
          (__int64)&v16,
          0);
        LOBYTE(v13) = v12;
        MiUnlockWorkingSetExclusive(a1, v13);
      }
      MiUnlockVad((__int64)CurrentThread, v7);
      v8 = *(_QWORD **)(v7 + 8);
      v14 = v7;
      if ( v8 )
      {
        do
        {
          v7 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
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
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  return v2;
}
