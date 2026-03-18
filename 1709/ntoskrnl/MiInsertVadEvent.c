/*
 * XREFs of MiInsertVadEvent @ 0x1400A59A0
 * Callers:
 *     MiWaitForVadDeletion @ 0x14023032C (MiWaitForVadDeletion.c)
 *     MiCreateRotateView @ 0x14044DE28 (MiCreateRotateView.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MiCreateVadEventBitmap @ 0x14056A9D8 (MiCreateVadEventBitmap.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, _QWORD *a2, int a3)
{
  LONG *v5; // rsi
  unsigned __int16 *v6; // rbx
  LONG *v7; // rbp
  KIRQL v8; // al
  unsigned __int8 v9; // di
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = &dword_140389780;
  if ( a3 == 1 )
  {
    v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    if ( (v6[96] & 7) == 2 )
      v7 = &dword_140389780;
    else
      v7 = (LONG *)(v6 + 100);
    v8 = ExAcquireSpinLockExclusive(v7);
    v7[1] = 0;
    v9 = v8;
  }
  else
  {
    v9 = 17;
    v6 = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *a2 = result;
  *(_QWORD *)(a1 + 56) = a2;
  if ( v9 != 17 )
  {
    MiPreUnlockWorkingSetExclusive((__int64)v6, v9);
    if ( (v6[96] & 7) != 2 )
      v5 = (LONG *)(v6 + 100);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
    else
      *v5 = 0;
    result = v9;
    __writecr8(v9);
  }
  return result;
}
