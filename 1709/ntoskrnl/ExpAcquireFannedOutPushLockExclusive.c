/*
 * XREFs of ExpAcquireFannedOutPushLockExclusive @ 0x14014A4FC
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 */

int __fastcall ExpAcquireFannedOutPushLockExclusive(unsigned __int64 a1, __int64 a2, __int16 *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // rbp
  unsigned int v5; // ecx
  __int64 v6; // rbp
  unsigned __int64 *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 *v16; // rcx

  v3 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v4 = a1 >> 4;
  _BitScanReverse(&v5, v3);
  v6 = v4 & 0x1FF;
  v9 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v5 - 2))
                                      + 8LL * (v3 ^ (1 << v5))
                                      + 8)
                          + 8 * v6);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, a2, a3);
  v10 = 1;
  LODWORD(v11) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v12) = v11;
  if ( (unsigned int)v11 > 1 )
  {
    do
    {
      _BitScanReverse(&v13, v3);
      v11 = *(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v10) + 8LL * (v13 - 2));
      if ( _interlockedbittestandset64(
             (volatile signed __int32 *)(*(_QWORD *)(v11 + 8LL * (v3 ^ (1 << v13)) + 8) + 8 * v6),
             0LL) )
      {
        _BitScanReverse(&v14, v3);
        v12 = (unsigned int)(v12 - 1);
        v15 = v3 ^ (1 << v14);
        v11 = *(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v12) + 8LL * (v14 - 2));
        v16 = (unsigned __int64 *)(*(_QWORD *)(v11 + 8 * v15 + 8) + 8 * v6);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
          LODWORD(v11) = ExfAcquirePushLockExclusiveEx(v16, a2, a3);
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < (unsigned int)v12 );
  }
  return v11;
}
