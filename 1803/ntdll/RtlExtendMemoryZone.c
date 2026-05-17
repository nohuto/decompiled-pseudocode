/*
 * XREFs of RtlExtendMemoryZone @ 0x180003E90
 * Callers:
 *     RtlExtendMemoryBlockLookaside @ 0x180003E80 (RtlExtendMemoryBlockLookaside.c)
 *     sub_1800FEEC4 @ 0x1800FEEC4 (sub_1800FEEC4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwLockVirtualMemory @ 0x18009CB90 (ZwLockVirtualMemory.c)
 */

__int64 __fastcall RtlExtendMemoryZone(__int64 a1, __int64 a2)
{
  int v4; // edi
  _QWORD *v5; // r8
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v9; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(a1 + 32);
  v9 = 0LL;
  v8 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v4 = ZwAllocateVirtualMemory(-1LL, &v9, 0LL, &v8, 12288, 4);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40) && (v4 = ZwLockVirtualMemory(-1LL, &v9, &v8, 1LL), v4 < 0) )
    {
      ZwFreeVirtualMemory(-1LL, &v9, &v8, 0x8000LL);
    }
    else
    {
      v5 = v9;
      v9[1] = v8;
      v5[2] = v5 + 4;
      v5[3] = (char *)v5 + v8;
      *v5 = *(_QWORD *)(a1 + 48);
      _InterlockedOr(v7, 0);
      *(_QWORD *)(a1 + 48) = v5;
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 32);
  return (unsigned int)v4;
}
