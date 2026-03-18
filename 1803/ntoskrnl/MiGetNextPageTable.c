/*
 * XREFs of MiGetNextPageTable @ 0x14003DA90
 * Callers:
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400BDA54 (MiFlushDirtyBitsToPfn.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiCloneCaptureVadCommit @ 0x140142A00 (MiCloneCaptureVadCommit.c)
 *     MiGetNextNonGapPfnPage @ 0x14017A7D8 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 LeafVa; // rax
  char v14; // r9
  unsigned __int16 *AnyMultiplexedVm; // rbx
  int v16; // eax
  int v17; // edx
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  __int64 v20; // [rsp+28h] [rbp-100h]
  _QWORD v21[22]; // [rsp+30h] [rbp-F8h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  memset(v21, 0, sizeof(v21));
  v10 = a1 << 25 >> 16;
  v11 = a2 << 25 >> 16;
  v12 = 2145;
  LODWORD(v21[0]) = 2145;
  if ( (a5 & 1) != 0 )
  {
    v12 = 2273;
    LODWORD(v21[0]) = 2273;
  }
  if ( (a5 & 2) != 0 )
    LODWORD(v21[0]) = v12 | 0x200;
  LeafVa = MiGetLeafVa(v10);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa > qword_1403CBB70 || LeafVa < qword_1403CD100) )
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
  else
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  if ( (v14 & 4) != 0 )
    goto LABEL_12;
  v16 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v10);
  if ( !v16 )
  {
    LODWORD(v21[0]) |= 4u;
LABEL_12:
    v21[2] = a3;
    v21[21] = &v19;
    BYTE2(v21[1]) = 1;
    v21[20] = MiGetNextPageTableTail;
    v21[3] = AnyMultiplexedVm;
    BYTE4(v21[0]) = a4;
    v21[4] = v10;
    v21[5] = v11;
    MiWalkPageTables((int *)v21);
    *a6 = v19;
    return v20;
  }
  v17 = v16 - 1;
  result = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v17;
  return result;
}
