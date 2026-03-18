/*
 * XREFs of MiInitializeDynamicPfns @ 0x140252AC0
 * Callers:
 *     MiMapNewPfns @ 0x14074AF30 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiRestrictRangeToNode @ 0x14016FC04 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall MiInitializeDynamicPfns(unsigned __int64 a1, unsigned __int64 a2, __int16 a3, int a4)
{
  __int16 v4; // bx
  unsigned __int64 v6; // r15
  char v8; // r12
  unsigned __int64 v9; // rdi
  KIRQL v10; // al
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  int v17; // r14d
  unsigned __int8 v18; // si
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _OWORD v27[6]; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v28[4]; // [rsp+98h] [rbp-21h] BYREF
  __int16 v29; // [rsp+B8h] [rbp-1h]
  int v30; // [rsp+BCh] [rbp+3h]
  int v31; // [rsp+C0h] [rbp+7h]

  v4 = a3;
  v6 = a1;
  memset(v27, 0, sizeof(v27));
  v8 = 5;
  v9 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 4) != 0 )
  {
    v8 = 6;
    v10 = ExAcquireSpinLockExclusive(&dword_1403CE000);
    qword_1403CFA10 += a2;
    v11 = v10;
    byte_1403CDF4C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CE000);
    __writecr8(v11);
    v4 = a3;
  }
  if ( (a4 & 1) != 0 )
  {
    v30 = 0;
    v12 = a4 | 0x40;
    v29 = v4;
    if ( (a4 & 4) == 0 )
      v12 = a4;
    v31 = v12;
    if ( a2 )
    {
      v13 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v14 = MiRestrictRangeToNode(v6, a2);
        v30 = 0;
        v15 = v14;
        v28[0] = v6;
        v28[1] = v14;
        v28[2] = v14 / v13;
        v28[3] = v14 % v13;
        LOBYTE(v12) = KeGenericCallDpc((__int64)MiInitializeDynamicPfnsTarget, (__int64)v28);
        v6 += v15;
        a2 -= v15;
      }
      while ( a2 );
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, a2, 0, 0);
    *((_QWORD *)&v27[4] + 1) = 0x8000000000000000uLL;
    *((_QWORD *)&v27[1] + 1) = 0x8000000000000000uLL;
    LOBYTE(v12) = v8 | BYTE2(v27[2]) & 0xF8;
    v16 = v9 + 48 * a2;
    BYTE2(v27[2]) = v12;
    if ( v9 < v16 )
    {
      v17 = a4 & 0x10;
      do
      {
        v18 = MiLockPageInline(v9);
        v19 = v27[1];
        v20 = (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8);
        v21 = *((_QWORD *)&v27[2] + 1);
        *(_OWORD *)v9 = v27[0];
        *((_QWORD *)&v27[2] + 1) = (v21 ^ (v20 << 40)) & 0x3FF0000000000LL ^ v21;
        v22 = v27[2];
        *(_OWORD *)(v9 + 16) = v19;
        *(_OWORD *)(v9 + 32) = v22;
        MiAbortCombineScan(v9);
        if ( v17 )
        {
          v23 = v27[4];
          *(_OWORD *)v9 = v27[3];
          v24 = v27[5];
          *(_OWORD *)(v9 + 16) = v23;
          *(_OWORD *)(v9 + 32) = v24;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v12) = v18;
        __writecr8(v18);
        v9 += 48LL;
      }
      while ( v9 < v16 );
    }
  }
  return v12;
}
