/*
 * XREFs of PopPepUpdateDripsDeviceVetoMask @ 0x14027A4B0
 * Callers:
 *     PopFxUpdateVetoMaskWork @ 0x140760A40 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14016C158 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140279724 (PopPepGetMinimumDevicePowerState.c)
 */

__int64 __fastcall PopPepUpdateDripsDeviceVetoMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  volatile LONG *v4; // rbp
  KIRQL v5; // al
  int *v6; // r8
  unsigned int v7; // r12d
  char v8; // di
  KIRQL v9; // r15
  char v10; // r14
  __int64 v11; // r10
  _DWORD *v12; // rax
  int v13; // edx
  int v14; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // ecx
  char v19; // al
  unsigned __int64 v20; // rax
  __int64 result; // rax
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v4 = (volatile LONG *)(v2 + 64);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64));
  v6 = (int *)(v2 + 144);
  v7 = *(_DWORD *)(v2 + 144);
  v8 = 0;
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 156);
  v9 = v5;
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 164);
  v10 = dword_1403CDB00;
  if ( a2 >= 2 )
  {
    v11 = a2 - 1;
    v12 = (_DWORD *)(v2 + 144);
    v13 = 1 << dword_1403CDB00;
    do
    {
      *v12++ |= v13;
      --v11;
    }
    while ( v11 );
  }
  v14 = *v6;
  PopPepUpdateIdleStateRefCount(v7, *v6, 1);
  PopPepUpdateIdleStateRefCount(v7, v14, 0);
  PopPepGetMinimumDevicePowerState(v2, v10, 0, &v22, 0LL);
  v15 = *(_QWORD *)(v2 + 32);
  v16 = MEMORY[0xFFFFF78000000008];
  v17 = v15 + 576;
  KxAcquireSpinLock((PKSPIN_LOCK)(v15 + 576));
  v18 = v22;
  v19 = *(_BYTE *)(v17 + 8);
  if ( v22 == 1 )
  {
    if ( v19 )
    {
      v20 = *(_QWORD *)(v17 + 24);
      if ( v16 > v20 )
        *(_QWORD *)(v17 + 40) += v16 - v20;
    }
    *(_DWORD *)(v17 + 12) = 5;
  }
  else
  {
    if ( !v19 )
      *(_QWORD *)(v17 + 24) = v16;
    *(_DWORD *)(v17 + 12) = v18;
    v8 = 1;
  }
  *(_BYTE *)(v17 + 8) = v8;
  KxReleaseSpinLock((PKSPIN_LOCK)v17);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v9;
  __writecr8(v9);
  return result;
}
