/*
 * XREFs of MiReturnSystemImageCommitment @ 0x140585528
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
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
  _InterlockedExchangeAdd(&dword_14036D140, -(int)v3);
  MiReturnCommit((__int64)&MiSystemPartition, v3 - *(_QWORD *)(v2 + 8));
  if ( v4 )
    MiReturnResidentAvailable(v4);
}
