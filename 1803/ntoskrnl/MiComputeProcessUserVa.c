/*
 * XREFs of MiComputeProcessUserVa @ 0x1404ED4D4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x14006A794 (MiCreateSystemWsles.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiUpdateChargedWsles @ 0x14026BA14 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax
  __int16 v14; // cx

  v4 = *(_QWORD *)(a1 + 1296);
  *a4 = 0LL;
  v6 = (_QWORD *)(v4 + 256);
  v7 = 4LL;
  v11 = 0x7FFFFFFF0000LL;
  do
  {
    v6[1] = v6;
    *v6 = v6;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  if ( !(unsigned int)MiCreateSystemWsles() && (*(_DWORD *)(a1 + 1740) & 1) == 0 )
  {
    result = MiChargeFullProcessCommitment(a1, 4LL);
    if ( (int)result < 0 )
      return result;
    MiUpdateChargedWsles(a1 + 1280);
  }
  if ( !a2 && a3 && (*(_DWORD *)(a3 + 56) & 0x20) != 0 && (*(_DWORD *)(a1 + 772) & 0x20000) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)MiSectionControlArea(a3) + 56LL) + 44LL) & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 1064);
      if ( v12 )
      {
        v14 = *(_WORD *)(v12 + 8);
        if ( v14 == 332 || v14 == 452 )
        {
          v11 = 4294901760LL;
          *a4 = 0x100000000LL;
          _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200u);
        }
      }
    }
    else
    {
      v11 = 2147418112LL;
      *a4 = 0x100000000LL;
    }
  }
  if ( dword_14044B184 )
  {
    if ( v11 > 0x80000000 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200000u);
  }
  *(_QWORD *)(a1 + 1152) = v11;
  return 0LL;
}
