/*
 * XREFs of MiCommitPageTablesForVad @ 0x14051D620
 * Callers:
 *     MiCloneReserveVadCommit @ 0x140003268 (MiCloneReserveVadCommit.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14006DCF0 (RtlAreBitsClear.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiIsVadLarge @ 0x1400D2CF0 (MiIsVadLarge.c)
 *     MiCreateSystemWsles @ 0x14014358C (MiCreateSystemWsles.c)
 *     MiUpdateChargedWsles @ 0x14020E2AC (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r14
  __int64 result; // rax
  int IsVadLarge; // eax
  __int64 v15; // r9
  int v16; // r8d
  int v17; // edx
  int v18; // r15d
  int v19; // r14d
  unsigned int v20; // edi
  unsigned int v21; // ebp
  unsigned int v22; // esi
  int v23; // ecx
  int v24; // r12d
  __int64 v25; // r13
  unsigned int v26; // ebx
  unsigned __int64 v27; // r8
  __int64 v28; // r10
  ULONG_PTR v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  BOOLEAN v33; // al
  int v34; // [rsp+20h] [rbp-68h]
  int v35; // [rsp+24h] [rbp-64h]
  int v36; // [rsp+28h] [rbp-60h]
  _KPROCESS *Process; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  int v40; // [rsp+98h] [rbp+10h]
  int v41; // [rsp+A0h] [rbp+18h]
  __int64 v42; // [rsp+A8h] [rbp+20h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)(a1 + 16) == -2LL && (unsigned int)MiVadPureReserve(a1) )
  {
    v30 = *(unsigned int *)(a1 + 52);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    if ( !(v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
      return 0LL;
    result = MiChargeFullProcessCommitment(v29, v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v6 = a2 >> 21;
    v7 = a3 >> 21;
    v8 = v6;
    v9 = v7;
    v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    v11 = 0;
    v40 = v6;
    v41 = v7;
    while ( 1 )
    {
      v12 = 2 - v11;
      result = MiMakeHyperRangeAccessible(
                 *(_QWORD *)(v10 + 16 * (v12 + 20) + 40) + ((unsigned __int64)v8 >> 3),
                 *(_QWORD *)(v10 + 16 * (v12 + 20) + 40) + ((unsigned __int64)v9 >> 3),
                 &v42);
      if ( (int)result < 0 )
        break;
      ++v11;
      *(_DWORD *)(v10 + 4 * v12 + 400) += v42;
      v8 >>= 9;
      v9 >>= 9;
      if ( v11 >= 2 )
      {
        v38 = *(_QWORD *)&Process[1].IdealGlobalNode + 40LL;
        IsVadLarge = MiIsVadLarge(a1);
        v16 = 0;
        v36 = IsVadLarge;
        v35 = 0;
        v17 = IsVadLarge;
        while ( 1 )
        {
          v34 = v16;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = v6;
          v22 = v7;
          do
          {
            v23 = 0;
            LODWORD(v42) = 0;
            v24 = 0;
            v25 = v15 + 16LL * (2 - v20);
            v26 = v21;
            if ( v21 <= v22 )
            {
              do
              {
                if ( !_bittest(*(const signed __int32 **)(v25 + 320), v26) )
                {
                  ++v24;
                  if ( v16 == 1 )
                  {
                    _bittestandset(*(signed __int32 **)(v25 + 320), v26);
                  }
                  else
                  {
                    v35 = 1;
                    if ( !(unsigned int)MiCreateSystemWsles() && (v26 == v21 || (v26 & 7) == 0) )
                    {
                      v33 = RtlAreBitsClear((PRTL_BITMAP)(v25 + 312), v26 & 0xFFFFFFF8, 8u);
                      v23 = v42;
                      v16 = v34;
                      if ( v33 == 1 )
                      {
                        v23 = v42 + 1;
                        LODWORD(v42) = v42 + 1;
                      }
                    }
                  }
                }
                ++v26;
              }
              while ( v26 <= v22 );
              v15 = v38;
              v17 = v36;
            }
            if ( !v17 || v20 )
              v18 += v24;
            v19 += v23;
            v21 >>= 9;
            v22 >>= 9;
            ++v20;
          }
          while ( v20 < 3 );
          if ( v16 )
            break;
          v27 = (unsigned int)(v19 + v18);
          if ( !v17 && !(unsigned int)MiVadPureReserve(a1) )
          {
            v31 = *(unsigned int *)(v28 + 52);
            LODWORD(v31) = v31 & 0x7FFFFFFF;
            v32 = v31 | ((unsigned __int64)*(unsigned __int8 *)(v28 + 34) << 31);
            if ( v32 != 0x7FFFFFFFELL )
              v27 += v32;
          }
          if ( v27 )
          {
            result = MiChargeFullProcessCommitment((ULONG_PTR)Process, v27);
            if ( (int)result < 0 )
              return result;
            v15 = v38;
          }
          if ( v35 != 1 )
            break;
          *(_DWORD *)(v15 + 100) += v18;
          if ( v19 )
            MiUpdateChargedWsles((__int64)&Process[1].IdealNode[12]);
          v17 = v36;
          v16 = 1;
          LODWORD(v7) = v41;
          LODWORD(v6) = v40;
        }
        return 0LL;
      }
    }
  }
  return result;
}
