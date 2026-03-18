/*
 * XREFs of MiCommitPageTablesForVad @ 0x140499490
 * Callers:
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiCommitPageTableRangesForVad @ 0x14012099C (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 * Callees:
 *     MiIsVadLarge @ 0x14003D7C0 (MiIsVadLarge.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 *     MiCreateSystemWsles @ 0x14005C00C (MiCreateSystemWsles.c)
 *     RtlAreBitsClear @ 0x1400AFA40 (RtlAreBitsClear.c)
 *     MiUpdateChargedWsles @ 0x1402159CC (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r8
  _KPROCESS *Process; // r15
  unsigned __int64 v7; // r12
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 result; // rax
  int IsVadLarge; // eax
  __int64 v16; // r9
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // ebp
  int v20; // r15d
  int v21; // r14d
  unsigned int v22; // esi
  unsigned int i; // edi
  int v24; // ecx
  int v25; // r12d
  __int64 v26; // r13
  unsigned int v27; // ebx
  int v28; // r10d
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  BOOLEAN v33; // al
  int v34; // [rsp+20h] [rbp-68h]
  int v35; // [rsp+24h] [rbp-64h]
  int v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  ULONG_PTR v38; // [rsp+38h] [rbp-50h]
  unsigned int v40; // [rsp+98h] [rbp+10h]
  int v41; // [rsp+A0h] [rbp+18h]
  __int64 v42; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v38 = (ULONG_PTR)Process;
  if ( *(_QWORD *)(a1 + 16) == -2LL && (unsigned int)MiVadPureReserve(a1) )
  {
    v30 = *(unsigned int *)(a1 + 52);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    if ( !(v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
      return 0LL;
    result = MiChargeFullProcessCommitment(
               (ULONG_PTR)Process,
               v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
    if ( (int)result >= 0 )
      return 0LL;
    return result;
  }
  v7 = a3 >> 21;
  v8 = v4 >> 21;
  v9 = v7;
  v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v11 = 0;
  v40 = v8;
  v41 = v7;
  do
  {
    v12 = 2 - v11;
    v13 = *(_QWORD *)(v10 + 16 * (v12 + 20) + 40);
    result = MiMakeHyperRangeAccessible(v13 + ((unsigned __int64)v8 >> 3), v13 + ((unsigned __int64)v9 >> 3), &v42);
    if ( (int)result < 0 )
      return result;
    ++v11;
    *(_DWORD *)(v10 + 4 * v12 + 400) += v42;
    v8 >>= 9;
    v9 >>= 9;
  }
  while ( v11 < 2 );
  v37 = *(_QWORD *)&Process[1].IdealGlobalNode + 40LL;
  IsVadLarge = MiIsVadLarge(a1);
  v17 = 0;
  v36 = IsVadLarge;
  v18 = IsVadLarge;
  LODWORD(v42) = 0;
  while ( 2 )
  {
    v35 = v17;
    v19 = v40;
    v20 = 0;
    v21 = 0;
    v22 = v7;
    for ( i = 0; i < 3; ++i )
    {
      v24 = 0;
      v34 = 0;
      v25 = 0;
      v26 = v16 + 16LL * (2 - i);
      v27 = v19;
      if ( v19 > v22 )
      {
        v28 = v42;
        goto LABEL_12;
      }
      do
      {
        if ( _bittest(*(const signed __int32 **)(v26 + 320), v27) )
          goto LABEL_9;
        ++v25;
        if ( v17 == 1 )
        {
          _bittestandset(*(signed __int32 **)(v26 + 320), v27);
LABEL_9:
          v28 = v42;
          goto LABEL_10;
        }
        LODWORD(v42) = 1;
        if ( !(unsigned int)MiCreateSystemWsles() && (v27 == v19 || (v27 & 7) == 0) )
        {
          v33 = RtlAreBitsClear((PRTL_BITMAP)(v26 + 312), v27 & 0xFFFFFFF8, 8u);
          v24 = v34;
          v17 = v35;
          v28 = v42;
          if ( v33 == 1 )
            v24 = ++v34;
        }
LABEL_10:
        ++v27;
      }
      while ( v27 <= v22 );
      v16 = v37;
      v18 = v36;
LABEL_12:
      if ( !v18 || i )
        v20 += v25;
      v21 += v24;
      v19 >>= 9;
      v22 >>= 9;
    }
    if ( v17 )
      return 0LL;
    v29 = (unsigned int)(v21 + v20);
    if ( !v18 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v31 = *(unsigned int *)(a1 + 52);
      LODWORD(v31) = v31 & 0x7FFFFFFF;
      v32 = v31 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
      if ( v32 != 0x7FFFFFFFELL )
        v29 += v32;
    }
    if ( !v29 )
      goto LABEL_19;
    result = MiChargeFullProcessCommitment(v38, v29);
    if ( (int)result >= 0 )
    {
      v16 = v37;
      v28 = v42;
LABEL_19:
      if ( v28 == 1 )
      {
        *(_DWORD *)(v16 + 100) += v20;
        if ( v21 )
          MiUpdateChargedWsles(v38 + 1280);
        v18 = v36;
        v17 = 1;
        LODWORD(v7) = v41;
        continue;
      }
      return 0LL;
    }
    return result;
  }
}
