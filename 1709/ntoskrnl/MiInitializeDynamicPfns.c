/*
 * XREFs of MiInitializeDynamicPfns @ 0x14021464C
 * Callers:
 *     MiMapNewPfns @ 0x1406E0048 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 *     MiRestrictRangeToNode @ 0x1401378C4 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall MiInitializeDynamicPfns(unsigned __int64 a1, unsigned __int64 a2, __int16 a3, int a4)
{
  __int16 v4; // di
  unsigned __int64 v6; // r12
  char v8; // bl
  unsigned __int64 v9; // rsi
  KIRQL v10; // al
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  char v16; // al
  unsigned __int64 v17; // rbx
  int v18; // r15d
  unsigned __int8 v19; // di
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _OWORD v27[6]; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v28[3]; // [rsp+98h] [rbp-11h] BYREF
  __int16 v29; // [rsp+B0h] [rbp+7h]
  int i; // [rsp+B4h] [rbp+Bh]

  v4 = a3;
  v6 = a1;
  memset(v27, 0, sizeof(v27));
  v8 = 5;
  v9 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 4) != 0 )
  {
    v8 = 6;
    v10 = ExAcquireSpinLockExclusive(&dword_14038A180);
    qword_14038B750 += a2;
    v11 = v10;
    byte_14038A0CC = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14038A180);
    __writecr8(v11);
    v4 = a3;
  }
  if ( (a4 & 1) != 0 )
  {
    v29 = v4;
    v12 = a2 / (unsigned int)KeNumberProcessors_0 + 1;
    if ( !(a2 % (unsigned int)KeNumberProcessors_0) )
      v12 = a2 / (unsigned int)KeNumberProcessors_0;
    v13 = a4 | 0x40;
    v28[2] = v12;
    if ( (a4 & 4) == 0 )
      v13 = a4;
    for ( i = v13; a2; a2 -= v15 )
    {
      v14 = MiRestrictRangeToNode(v6, a2);
      v28[0] = v6;
      v28[1] = v14;
      v15 = v14;
      KeGenericCallDpc((__int64)MiInitializeDynamicPfnsTarget, (__int64)v28);
      v6 += v15;
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, a2, 0, 0);
    *((_QWORD *)&v27[4] + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v27[1] + 1) |= 0x8000000000000000uLL;
    v16 = v8 | BYTE2(v27[2]) & 0xF8;
    v17 = v9 + 48 * a2;
    BYTE2(v27[2]) = v16;
    if ( v9 < v17 )
    {
      v18 = a4 & 0x10;
      do
      {
        v19 = MiLockPageInline(v9);
        v20 = v27[1];
        v21 = (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8);
        v22 = *((_QWORD *)&v27[2] + 1);
        *(_OWORD *)v9 = v27[0];
        *((_QWORD *)&v27[2] + 1) = (v22 ^ (v21 << 40)) & 0x3FF0000000000LL ^ v22;
        v23 = v27[2];
        *(_OWORD *)(v9 + 16) = v20;
        *(_OWORD *)(v9 + 32) = v23;
        MiAbortCombineScan(v9);
        if ( v18 )
        {
          v24 = v27[4];
          *(_OWORD *)v9 = v27[3];
          v25 = v27[5];
          *(_OWORD *)(v9 + 16) = v24;
          *(_OWORD *)(v9 + 32) = v25;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v19);
        v9 += 48LL;
      }
      while ( v9 < v17 );
    }
  }
}
