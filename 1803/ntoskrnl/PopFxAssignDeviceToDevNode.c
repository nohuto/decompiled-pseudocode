/*
 * XREFs of PopFxAssignDeviceToDevNode @ 0x14016EDC8
 * Callers:
 *     PopFxRegisterDevice @ 0x140614B24 (PopFxRegisterDevice.c)
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PopFxAssignDeviceToDevNode(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  int v5; // ecx
  KIRQL v6; // bp
  int v7; // edx
  int v8; // eax
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v5 = *(_DWORD *)(a1 + 296);
  v6 = v4;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 296) = v5 & 0xFFFFFFF7;
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
  }
  else
  {
    *(_DWORD *)(a1 + 296) = v5 & 0xFFFFFFFB;
  }
  v7 = *(_DWORD *)(a1 + 124);
  v8 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = v8 - v7;
  *(_QWORD *)(a1 + 80) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  result = v6;
  __writecr8(v6);
  return result;
}
