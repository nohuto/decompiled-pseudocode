/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x140083858
 * Callers:
 *     MiFlushAllPages @ 0x1401577E8 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  _QWORD *v4; // rax
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  _QWORD *i; // rcx
  int v8; // ecx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v5 = -1073741558;
  }
  else
  {
    v4 = (_QWORD *)Process[2].Affinity.Bitmap[4];
    v5 = 0;
    v6 = 0LL;
    while ( v4 )
    {
      v6 = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
    }
    while ( v6 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      v8 = *(_DWORD *)(v6 + 48);
      if ( (v8 & 0x20000000) == 0 && ((1 << (v8 & 7)) & 0x55) != 0 && !MiVadMapsLargeImage(v6) )
        MiEmptyWorkingSetInitiate(
          a1,
          2LL,
          (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12,
          ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF);
      MiUnlockVad(CurrentThread, v6);
      v9 = *(_QWORD **)(v6 + 8);
      v10 = v6;
      if ( v9 )
      {
        v6 = *(_QWORD *)(v6 + 8);
        for ( i = (_QWORD *)*v9; i; i = (_QWORD *)*i )
          v6 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v10 )
            break;
          v10 = v6;
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  return v5;
}
