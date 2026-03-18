/*
 * XREFs of MiInitializeDynamicPfns @ 0x14020D5A0
 * Callers:
 *     MiMapNewPfns @ 0x1406B4070 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiRestrictRangeToNode @ 0x1401547A8 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

char __fastcall MiInitializeDynamicPfns(unsigned __int64 a1, unsigned __int64 a2, __int16 a3, int a4)
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
  unsigned __int64 v16; // rbx
  int v17; // r15d
  unsigned __int8 v18; // di
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
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
    v10 = ExAcquireSpinLockExclusive(&dword_1403802E8);
    qword_1403817D0 += a2;
    v11 = v10;
    byte_14038020C = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403802E8);
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
      LOBYTE(v13) = KeGenericCallDpc((__int64)MiInitializeDynamicPfnsTarget, (__int64)v28);
      v6 += v15;
    }
  }
  else
  {
    if ( (a4 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, a2, 0, 0);
    *((_QWORD *)&v27[4] + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v27[1] + 1) |= 0x8000000000000000uLL;
    LOBYTE(v13) = v8 | BYTE2(v27[2]) & 0xF8;
    v16 = v9 + 48 * a2;
    BYTE2(v27[2]) = v13;
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
        LOBYTE(v13) = v18;
        __writecr8(v18);
        v9 += 48LL;
      }
      while ( v9 < v16 );
    }
  }
  return v13;
}
