/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8
 * Callers:
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiMakeCombineCandidateClean @ 0x1400AE0C0 (MiMakeCombineCandidateClean.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiUnlockVadCore @ 0x1400AE264 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1400E4AF0 (MiLockVadCore.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 */

char __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 Address; // rax
  unsigned __int64 v4; // rdi
  __int64 VadEvent; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  LODWORD(Address) = *(_DWORD *)(a1 + 772);
  v4 = a3;
  if ( (Address & 0x20) == 0 )
  {
    if ( a3 || (Address = MiLocateAddress(a2), (v4 = Address) != 0) )
    {
      LODWORD(Address) = *(_DWORD *)(v4 + 48);
      if ( (Address & 0x20000000) == 0 )
      {
        LOBYTE(Address) = Address & 7;
        if ( (_BYTE)Address == 4 )
        {
          VadEvent = MiLocateVadEvent(v4, 4LL);
          v7 = (a2 >> 12) - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32));
          MiLockVadCore(v4);
          LOBYTE(v8) = 2;
          _bittestandset64(*(signed __int64 **)(VadEvent + 16), v7);
          LOBYTE(Address) = MiUnlockVadCore(v4, v8, v9, v10);
        }
      }
    }
  }
  return Address;
}
