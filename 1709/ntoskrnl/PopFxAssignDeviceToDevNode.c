/*
 * XREFs of PopFxAssignDeviceToDevNode @ 0x140146F44
 * Callers:
 *     PopFxRegisterDevice @ 0x1405CA0E4 (PopFxRegisterDevice.c)
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PopFxAssignDeviceToDevNode(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  int v5; // edx
  int v6; // eax
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  if ( a2 )
  {
    *(_DWORD *)(a1 + 296) &= ~8u;
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
  }
  else
  {
    *(_DWORD *)(a1 + 296) &= ~4u;
  }
  v5 = *(_DWORD *)(a1 + 124);
  v6 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = v6 - v5;
  *(_QWORD *)(a1 + 80) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  result = v4;
  __writecr8(v4);
  return result;
}
