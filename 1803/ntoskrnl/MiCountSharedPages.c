/*
 * XREFs of MiCountSharedPages @ 0x1400A6330
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     MiPteNeedsCommitCharge @ 0x1400A68AC (MiPteNeedsCommitCharge.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r14
  _KPROCESS *Process; // rcx
  char Flink; // al
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int8 CurrentIrql; // r12
  LONG *v12; // rbx
  KIRQL v13; // cl
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  char *AnyMultiplexedVm; // rdi
  int v19; // eax
  unsigned __int64 v20; // rbx
  __int64 v21; // r12
  unsigned int v22; // eax
  unsigned __int64 v23; // rdi
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v35; // rdx
  unsigned __int8 v37; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+38h] [rbp-C8h]
  __int64 v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  _QWORD v45[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v46[22]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (char)Process[2].Header.WaitListHead.Flink;
  v9 = (__int64)&Process[1].IdealNode[12];
  v10 = Flink & 7;
  v39 = v9;
  if ( v10 < 6u )
  {
    v12 = &dword_1403CCD40;
    if ( v10 != 2 )
      v12 = (LONG *)(v9 + 192);
    v13 = ExAcquireSpinLockShared(v12);
    if ( v12[1] )
      _InterlockedExchange(v12 + 1, 0);
    CurrentIrql = v13;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  v37 = CurrentIrql;
  if ( a2 <= a3 )
  {
    v14 = a2;
    v15 = 0LL;
    v41 = 0LL;
    v44 = (__int64)(a3 << 25) >> 16;
    do
    {
      v42 = 0LL;
      v43 = 0LL;
      memset(v46, 0, sizeof(v46));
      LODWORD(v46[0]) = 2145;
      v16 = (__int64)((v14 << 25) - v15) >> 16;
      v17 = v16;
      if ( v16 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v17 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v17 = (__int64)((v17 << 25) - v15) >> 16;
        }
        while ( v17 >= 0xFFFFF68000000000uLL );
        CurrentIrql = v37;
      }
      if ( v17 < 0xFFFF800000000000uLL || v17 >= qword_1403CD100 && v17 <= qword_1403CBB70 )
        AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
      else
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      v19 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v16);
      if ( v19 )
      {
        LODWORD(v42) = v19 - 1;
        v20 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v43 = v20;
      }
      else
      {
        LODWORD(v46[0]) |= 4u;
        v46[21] = &v42;
        v46[2] = 0LL;
        v46[20] = MiGetNextPageTableTail;
        v46[5] = v44;
        BYTE2(v46[1]) = 1;
        v46[3] = AnyMultiplexedVm;
        BYTE4(v46[0]) = CurrentIrql;
        v46[4] = v16;
        MiWalkPageTables((int *)v46);
        v20 = v43;
      }
      if ( v20 )
        v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v21 = 0LL;
      v22 = *(_DWORD *)(a1 + 48);
      v23 = a3 + 8;
      v40 = v21;
      if ( v20 )
        v23 = v20;
      v24 = v22 >> 3;
      if ( (v22 & 7) != 2 || (v24 & 0x1F) == 1 )
      {
        if ( (v24 & 5) != 5 )
          v4 += (__int64)(v23 - a2) >> 3;
        a2 = v23;
      }
      else
      {
        for ( ; a2 < v23; a2 += 8LL )
        {
          if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
            ++v4;
        }
      }
      if ( a2 == a3 + 8 )
      {
        if ( v21 )
          MiUnlockPageTableInternal(v39, v21);
        break;
      }
      v25 = (__int64)((a2 << 25) - v41) >> 16;
      do
      {
        v26 = *(_QWORD *)a2;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v27 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 8 * ((a2 >> 3) & 0x1FF));
            v29 = v26 | 0x20;
            if ( (v28 & 0x20) == 0 )
              v29 = v26;
            v26 = v29;
            if ( (v28 & 0x42) != 0 )
              v26 = v29 | 0x42;
          }
        }
        v38 = v26;
        if ( v26 )
        {
          if ( (v26 & 1) != 0 )
          {
            if ( (v26 & 0x200) == 0 )
            {
              if ( (unsigned __int64)&v38 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)&v38 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
              {
                v30 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v30 )
                {
                  v31 = *(_QWORD *)(v30 + 8 * (((unsigned __int64)&v38 >> 3) & 0x1FF));
                  v32 = v26 | 0x20;
                  if ( (v31 & 0x20) == 0 )
                    v32 = v26;
                  v26 = v32;
                  if ( (v31 & 0x42) != 0 )
                    v26 = v32 | 0x42;
                }
              }
              v33 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              if ( (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) != 0
                && (*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(a1, v25 >> 12, 0, v45) )
              {
LABEL_75:
                ++v4;
              }
            }
          }
          else if ( (v26 & 0x400) != 0 )
          {
            if ( (unsigned int)MiIsPrototypePteVadLookup(v26) )
            {
              if ( (v26 & 0xA0) != 0xA0 )
                goto LABEL_75;
            }
            else
            {
              MiGetProtoPteAddress(a1, v25 >> 12, 0, v45);
              PrototypePteDirect = MiGetPrototypePteDirect(v26);
              if ( PrototypePteDirect == v35
                && ((*(_DWORD *)(a1 + 48) & 7) != 2 || (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1) )
              {
                goto LABEL_75;
              }
            }
          }
        }
        else if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
        {
          goto LABEL_75;
        }
        a2 += 8LL;
        v25 += 4096LL;
        v14 = a2;
      }
      while ( (a2 & 0xFFF) != 0 && a2 <= a3 );
      MiUnlockPageTableInternal(v39, v40);
      v15 = v41;
      CurrentIrql = v37;
    }
    while ( a2 <= a3 );
  }
  MiUnlockWorkingSetShared(v39, v37, a3);
  return v4;
}
