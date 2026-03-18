/*
 * XREFs of MiReturnSystemImageCommitment @ 0x140605C64
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSystemImageCommitment(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx

  v2 = a2;
  if ( *a1 )
  {
    v3 = a1[25];
    v4 = a1[26];
  }
  else
  {
    v3 = *(unsigned int *)(*(_QWORD *)MiSectionControlArea(a1[14]) + 8LL);
    v4 = v3;
  }
  _InterlockedExchangeAdd(&dword_1403CC678, -(int)v3);
  MiReturnCommit((__int64)&MiSystemPartition, v3 - *(_QWORD *)(v2 + 8));
  if ( v4 )
    MiReturnResidentAvailable(v4);
}
