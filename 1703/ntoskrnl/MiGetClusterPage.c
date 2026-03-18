/*
 * XREFs of MiGetClusterPage @ 0x140222084
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiComputeZeroClusterMaximum @ 0x140073568 (MiComputeZeroClusterMaximum.c)
 *     MiIsPteEvaluated @ 0x14007682C (MiIsPteEvaluated.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 */

__int64 __fastcall MiGetClusterPage(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, _BYTE *a5)
{
  unsigned __int64 v7; // rdx
  _KPROCESS *Process; // r13
  unsigned __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 ProtoPteAddress; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // r10
  unsigned __int64 i; // rbx
  bool v25; // zf
  unsigned __int64 v26; // r8
  __int64 v27; // rsi
  __int64 result; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 PageChain; // r8
  bool v33; // zf
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[10]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v41; // [rsp+82h] [rbp-7Eh]
  __int16 v42; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  _QWORD v47[16]; // [rsp+F0h] [rbp-10h] BYREF

  v37 = a5;
  v7 = a2 & 0xFFFFFFFFFFFF0000uLL;
  *a5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v36[0] = v7;
  v36[1] = 0x10000LL;
  if ( v7 >> 12 < v10
    || (v7 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(a1 + 48) >> 8) & 0x3F, (__int64)v40);
  v45 = 0LL;
  v46 = 0LL;
  v11 = v41 >> byte_14036C1B9;
  v25 = (*(_DWORD *)(a1 + 48) & 0x8000) == 0;
  v42 = 2;
  v43 = v36;
  v44 = 1LL;
  if ( v25 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 0, &v35);
    v15 = *(_QWORD *)(v35 + 8);
    v16 = v15 + 8LL * *(unsigned int *)(v35 + 44);
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v15 )
      v15 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( v16 > (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v16 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v17 = 8 * (((a2 & 0xFFFFFFFFFFFFF000uLL) - v36[0]) >> 12);
    v13 = ProtoPteAddress - v17;
    if ( ProtoPteAddress - v17 < v15 || ProtoPteAddress - v17 + 128 > v16 )
      return 0LL;
    v12 = *(_WORD *)(*(_QWORD *)v35 + 60LL) & 0x3FF;
  }
  else
  {
    v12 = WORD2(Process[1].SecurePid);
    v13 = ((v36[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v18 = 0LL;
  v19 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * v12) + 48LL);
  v35 = *(_QWORD *)(qword_14036C8F8 + 8 * v12);
  *(_BYTE *)(2184LL * v11 + v19 + 1235) = 1;
  v20 = v13 - (_QWORD)v47;
  do
  {
    v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47[v18] + v20);
    v47[v23] = v21;
    v18 = v23 + 1;
  }
  while ( v18 < 0x10 );
  for ( i = 0LL; i < 0x10; ++i )
  {
    if ( a4 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v47[i]) )
        break;
      v25 = ((v26 >> 5) & 0x1F) == a4;
    }
    else
    {
      v25 = v47[i] == 0LL;
    }
    if ( !v25 || v22 && MiIsPteEvaluated(v22) )
      break;
  }
  v27 = -1LL;
  if ( i == 16 )
  {
    if ( MiComputeZeroClusterMaximum((__int64)&v42, a1) != 16 )
      return 0LL;
    result = MiGet64KPage(v35, v11, a3);
    if ( result )
      return result;
  }
  else
  {
    i = 0LL;
    while ( 1 )
    {
      v38 = v47[i];
      if ( (v38 & 1) != 0 )
        break;
      if ( ++i >= 0x10 )
        goto LABEL_32;
    }
    v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38);
    v27 = (v29 >> 12) & 0xFFFFFFFFFLL;
    if ( (unsigned __int16)v29 >> 12 != i )
      return 0LL;
  }
LABEL_32:
  v30 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v39 = 1LL;
  v31 = ((v30 - ((v36[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  PageChain = MiGetPageChain(v35, (__int64)&Process[1].IdealNode[12], v11, a3, 0x42u, v31, &v39);
  if ( !PageChain )
    return 0LL;
  if ( i == 16 )
    v33 = (((char)PageChain / 48) & 0xF) == v31;
  else
    v33 = v27 + ((v30 - ((v36[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - i == (PageChain + 0x58000000000LL) / 48;
  if ( !v33 )
    *v37 = 1;
  return PageChain;
}
