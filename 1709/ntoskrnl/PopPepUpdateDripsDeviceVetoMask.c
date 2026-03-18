/*
 * XREFs of PopPepUpdateDripsDeviceVetoMask @ 0x140243450
 * Callers:
 *     PopFxUpdateVetoMaskWork @ 0x1406F9580 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140123884 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140242890 (PopPepGetMinimumDevicePowerState.c)
 */

__int64 __fastcall PopPepUpdateDripsDeviceVetoMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  volatile LONG *v4; // rsi
  KIRQL v5; // al
  int *v6; // r8
  unsigned int v7; // r15d
  KIRQL v8; // r14
  char v9; // bp
  __int64 v10; // r10
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // eax
  __int64 result; // rax
  int v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v4 = (volatile LONG *)(v2 + 64);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64));
  v6 = (int *)(v2 + 144);
  v7 = *(_DWORD *)(v2 + 144);
  v8 = v5;
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 164);
  v9 = dword_140389CC0;
  if ( a2 >= 2 )
  {
    v10 = a2 - 1;
    v11 = (_DWORD *)(v2 + 144);
    v12 = 1 << dword_140389CC0;
    do
    {
      *v11++ |= v12;
      --v10;
    }
    while ( v10 );
  }
  v13 = *v6;
  PopPepUpdateIdleStateRefCount(v7, *v6, 1);
  PopPepUpdateIdleStateRefCount(v7, v13, 0);
  PopPepGetMinimumDevicePowerState(v2, v9, 0, &v18, 0LL);
  v14 = *(_QWORD *)(v2 + 32) + 576LL;
  v15 = MEMORY[0xFFFFF78000000008];
  KxAcquireSpinLock((PKSPIN_LOCK)v14);
  v16 = v18;
  if ( v18 == 1 )
  {
    *(_DWORD *)(v14 + 12) = 5;
    *(_BYTE *)(v14 + 8) = 0;
  }
  else
  {
    if ( !*(_BYTE *)(v14 + 8) )
      *(_QWORD *)(v14 + 24) = v15;
    *(_DWORD *)(v14 + 12) = v16;
    *(_BYTE *)(v14 + 8) = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v14);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v8;
  __writecr8(v8);
  return result;
}
