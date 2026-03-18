/*
 * XREFs of VidSchSetNodePowerState @ 0x1C002EEE0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002FB74 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchSetNodePowerState(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  char v7; // si
  char v8; // bp
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a3 + (unsigned int)*(unsigned __int8 *)(a2 + a1 + 68);
  v6 = *(_QWORD *)(a1 + 8 * v5 + 440);
  if ( a4 )
  {
    if ( (*(_DWORD *)(v6 + 12) & 2) != 0 )
      VidSchiAsyncReCreateSchedulingLog(*(struct _VIDSCH_NODE **)(a1 + 8 * v5 + 440));
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 144) )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    }
    v8 = 0;
    *(_BYTE *)(v6 + 6260) = 1;
    v9 = (_QWORD *)(v6 + 2552);
    while ( 1 )
    {
      v10 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 == v9 )
        break;
      *((_DWORD *)v10 + 44) &= ~0x80u;
      v8 = 1;
      VidSchiUpdateContextStatus((__int64)(v10 - 1), (_QWORD *)5, (_QWORD *)0x2BA1);
    }
    if ( !v7 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 1400) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1368), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v6 + 6260) = 0;
  }
}
