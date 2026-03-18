/*
 * XREFs of MiResolvePrivateZeroFault @ 0x140017760
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiComputeZeroClusterMaximum @ 0x14013C6C8 (MiComputeZeroClusterMaximum.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(__int64 a1)
{
  int v1; // edi
  unsigned __int64 v3; // r13
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // r12
  struct _KTHREAD *v8; // rdx
  __int64 v9; // r11
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rbp
  unsigned int v13; // r15d
  __int64 PageChain; // rsi
  __int64 v15; // rax
  int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  int v25; // r13d
  __int64 *v26; // rbp
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r9
  __int64 v29; // r8
  bool v30; // zf
  int v31; // r8d
  unsigned int v32; // r11d
  unsigned __int64 v33; // r8
  unsigned int v34; // ecx
  __int64 ClusterPage; // rax
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-D0h]
  volatile signed __int32 *v44; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int16 v45; // [rsp+58h] [rbp-C0h]
  unsigned __int16 v46; // [rsp+5Ah] [rbp-BEh]
  _QWORD v47[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v48; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD *v49; // [rsp+78h] [rbp-A0h]
  __int64 v50; // [rsp+80h] [rbp-98h]
  __int64 v51; // [rsp+88h] [rbp-90h]
  __int64 v52; // [rsp+90h] [rbp-88h]
  char v53; // [rsp+120h] [rbp+8h] BYREF
  __int64 v54; // [rsp+128h] [rbp+10h]
  __int64 v55; // [rsp+130h] [rbp+18h]
  unsigned __int64 v56; // [rsp+138h] [rbp+20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 32);
    if ( v34 >> 3 == 3 )
    {
      if ( (v34 & 7) == 0 )
        goto LABEL_50;
    }
    else if ( v34 >> 3 != 1 )
    {
      goto LABEL_50;
    }
    if ( (v1 & 4) != 0 )
      goto LABEL_2;
LABEL_50:
    MiAdvanceFaultList(v4);
    return 0LL;
  }
LABEL_2:
  if ( (v1 & 8) != 0 && (*(_DWORD *)(v4 + 48) & 8) != 0 )
    return 3221225495LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 56);
  v7 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v6 + 174));
  v43 = v7;
  if ( (v1 & 0x40) != 0 )
  {
    v8 = (struct _KTHREAD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10];
    if ( v8 )
    {
      if ( v8 != KeGetCurrentThread() )
      {
        *(_DWORD *)(v5 + 84) |= 8u;
        return 0LL;
      }
    }
  }
  v9 = 1LL;
  v10 = -1LL;
  v42 = 1LL;
  v55 = -1LL;
  v11 = *(_QWORD *)(a1 + 64);
  v12 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = *(_DWORD *)(a1 + 48);
  PageChain = 0LL;
  v54 = v11;
  if ( v11 )
  {
    v17 = v1 & 0x15;
    if ( v17 )
    {
      v18 = MiComputeZeroClusterMaximum(v4, v11);
      v11 = v54;
      v10 = v18;
      v55 = v18;
      v9 = 1LL;
    }
    v19 = *(_DWORD *)(v11 + 48);
    v13 = (v19 >> 8) & 0x3F;
    LODWORD(v54) = v17 != 0;
    if ( (v19 & 0x24000) != 0x24000 )
    {
      if ( v17 == 0
        && ((v3 >> 9) & 0x78) == 0
        && (v19 & 0x4000) != 0
        && (v19 & 7) != 4
        && !*(_DWORD *)(a1 + 36)
        && v3 >= ((*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) + 16) << 12
        && ((v3 >> 9) & 0xFF8) != 0
        && (v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v22 = 0LL;
        v56 = 0LL;
        v23 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
        do
        {
          v24 = *(_QWORD *)v23;
          if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v24 & 1) != 0
              && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
            {
              v37 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v37 )
              {
                v38 = *(_QWORD *)(v37 + 8 * ((v23 >> 3) & 0x1FF));
                LOBYTE(v37) = v24 | 0x20;
                if ( (v38 & 0x20) == 0 )
                  v37 = *(_QWORD *)v23;
                LOBYTE(v24) = v37;
                if ( (v38 & 0x42) != 0 )
                  LOBYTE(v24) = v37 | 0x42;
              }
            }
            v22 = v56;
          }
          if ( (v24 & 1) == 0 )
            break;
          if ( (v24 & 0x20) == 0 )
            break;
          ++v22;
          v23 -= 8LL;
          v56 = v22;
        }
        while ( v22 < 0x10 );
        v7 = v43;
        if ( v22 == 16 )
        {
          v47[1] = 0x10000LL;
          v49 = v47;
          v47[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
          v48 = 0;
          v50 = 1LL;
          v51 = 0LL;
          v52 = 0LL;
          if ( (unsigned __int64)MiComputeZeroClusterMaximum(&v48, v11) < 0x10 )
            goto LABEL_6;
          v55 = 16LL;
          LODWORD(v54) = 2;
          v9 = 1LL;
          v20 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_32;
        }
        goto LABEL_46;
      }
LABEL_18:
      v20 = 0xFFFFF6FB7DBED000uLL;
      if ( !v17 || PageChain )
        goto LABEL_6;
      v21 = 1LL;
      if ( v10 <= 1 )
      {
LABEL_39:
        if ( (_DWORD)v54 == 2 )
        {
          if ( v21 == v10 )
          {
            MiInitializePageColorBase(v6, v13, &v44);
            v31 = v46;
            v13 = v46 >> byte_1403CB699;
            LOWORD(v32) = _InterlockedExchangeAdd(v44, v32);
            PageChain = MiGet64KPage(v7, v13, *(unsigned int *)(a1 + 32), v31 | v32 & v45);
            if ( PageChain )
              *(_DWORD *)a1 |= 0x80u;
          }
          else
          {
            v21 = v9;
          }
        }
        v42 = v21;
        goto LABEL_6;
      }
LABEL_32:
      v25 = *(_DWORD *)(a1 + 36);
      v26 = (__int64 *)(v12 + 8);
      v27 = v55;
      v21 = 1LL;
      v28 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        v29 = *v26;
        if ( (unsigned __int64)v26 >= v20
          && (unsigned __int64)v26 <= v28
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v29 & 1) != 0
          && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * (((unsigned __int64)v26 >> 3) & 0x1FF));
            v41 = v29 | 0x20;
            if ( (v40 & 0x20) == 0 )
              v41 = *v26;
            v29 = v41;
            if ( (v40 & 0x42) != 0 )
              v29 = v41 | 0x42;
          }
        }
        if ( v25 )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v29) )
            break;
          v30 = v25 == ((v33 >> 5) & 0x1F);
        }
        else
        {
          v30 = v29 == 0;
        }
        if ( !v30 )
          break;
        ++v21;
        ++v26;
      }
      while ( v21 < v27 );
      v7 = v43;
      v10 = v55;
      goto LABEL_39;
    }
    ClusterPage = MiGetClusterPage(v11, v3, 16, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 36), (__int64)&v53);
    PageChain = ClusterPage;
    if ( ClusterPage )
    {
      if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
      {
        v10 = v55;
        v9 = 1LL;
        v42 = 1LL;
        if ( v53 == 1 )
          *(_DWORD *)a1 |= 4u;
        goto LABEL_18;
      }
      v36 = v3 & 0xFFFFFFFFFFFF0000uLL;
      v42 = 16LL;
      *(_QWORD *)(a1 + 16) = v36;
      v12 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v9 = 1LL;
LABEL_46:
    v10 = v55;
    goto LABEL_18;
  }
LABEL_6:
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
    v7 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v15 + 544) + 1454LL));
  if ( PageChain )
    return MiCompletePrivateZeroFault((int *)a1, PageChain, v42);
  PageChain = MiGetPageChain(v7, v6, v13, *(_DWORD *)(a1 + 32), 258, -1LL, (__int64)&v42);
  if ( PageChain )
    return MiCompletePrivateZeroFault((int *)a1, PageChain, v42);
  else
    return 3221225495LL;
}
