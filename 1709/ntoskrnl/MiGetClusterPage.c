/*
 * XREFs of MiGetClusterPage @ 0x14022EEDC
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 * Callees:
 *     MiIsPteEvaluated @ 0x14000C0B8 (MiIsPteEvaluated.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiComputeZeroClusterMaximum @ 0x14011BCB0 (MiComputeZeroClusterMaximum.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiGetClusterPage(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, _BYTE *a5)
{
  unsigned __int64 v7; // rdx
  _KPROCESS *Process; // r13
  unsigned __int64 v9; // rcx
  __int64 v10; // r11
  unsigned int v11; // r12d
  __int64 v12; // rcx
  char *v13; // r9
  __int64 v14; // r10
  __int64 ProtoPteAddress; // r11
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  signed __int64 v21; // r11
  __int64 PteShadow; // rax
  int v23; // r14d
  unsigned __int64 v24; // r11
  __int64 v25; // r8
  bool v26; // zf
  unsigned __int64 v27; // r8
  __int64 v28; // r14
  _WORD *v29; // rax
  __int64 result; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 PageChain; // r8
  bool v34; // zf
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+50h] [rbp-B0h]
  _QWORD v38[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v39; // [rsp+68h] [rbp-98h]
  _WORD *v40; // [rsp+70h] [rbp-90h] BYREF
  __int16 v41; // [rsp+78h] [rbp-88h]
  unsigned __int16 v42; // [rsp+7Ah] [rbp-86h]
  unsigned __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int16 v45; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  _QWORD v50[16]; // [rsp+F0h] [rbp-10h] BYREF

  v39 = a5;
  v37 = a4;
  v7 = a2 & 0xFFFFFFFFFFFF0000uLL;
  *a5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v38[0] = v7;
  v38[1] = 0x10000LL;
  if ( v7 >> 12 < v9
    || (v7 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(a1 + 48) >> 8) & 0x3F, (__int64)&v40);
  v11 = v42 >> byte_140388501;
  v26 = (*(_DWORD *)(a1 + 48) & 0x8000) == 0;
  v45 = 2;
  v46 = v38;
  v47 = 1LL;
  v48 = v10;
  v49 = v10;
  if ( v26 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 0, &v36);
    v16 = *(_QWORD *)(v36 + 8);
    v17 = v16 + 8LL * *(unsigned int *)(v36 + 44);
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v18 = 8 * (((a2 & 0xFFFFFFFFFFFFF000uLL) - v38[0]) >> 12);
    v13 = (char *)(ProtoPteAddress - v18);
    if ( ProtoPteAddress - v18 < v16 || ProtoPteAddress - v18 + 128 > v17 )
      return 0LL;
    v14 = ((v38[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = *(_WORD *)(*(_QWORD *)v36 + 60LL) & 0x3FF;
  }
  else
  {
    v12 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 2);
    v13 = (char *)(((v38[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = (unsigned int)v10;
  }
  v19 = *(_QWORD *)(qword_140388AF0 + 8 * v12);
  v20 = 16LL;
  v36 = v19;
  v21 = (char *)v50 - v13;
  *(_BYTE *)(8256LL * v11 + *(_QWORD *)(v19 + 16) + 7123) = 1;
  do
  {
    PteShadow = *(_QWORD *)v13;
    if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    *(_QWORD *)&v13[v21] = PteShadow;
    v13 += 8;
    --v20;
  }
  while ( v20 );
  v23 = v37;
  v24 = 1LL;
  do
  {
    v25 = v50[v20];
    if ( v23 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v50[v20], v19, v25) )
        break;
      v26 = ((v27 >> 5) & 0x1F) == v23;
    }
    else
    {
      v26 = v25 == 0;
    }
    if ( !v26 || v14 && MiIsPteEvaluated((__int64 *)v14) )
      break;
    v20 += v24;
  }
  while ( v20 < 0x10 );
  v28 = -1LL;
  if ( v20 == 16 )
  {
    if ( MiComputeZeroClusterMaximum((__int64)&v45, a1) != 16 )
      return 0LL;
    v29 = v40;
    ++*v40;
    result = MiGet64KPage(v36, v11, a3, v42 | (unsigned int)(unsigned __int16)(v41 & *v29));
    if ( result )
      return result;
    v24 = 1LL;
  }
  else
  {
    v20 = 0LL;
    while ( 1 )
    {
      v43 = v50[v20];
      if ( ((unsigned __int8)v43 & (unsigned __int8)v24) != 0 )
        break;
      v20 += v24;
      if ( v20 >= 0x10 )
        goto LABEL_30;
    }
    v28 = MI_GET_PAGE_FRAME_FROM_PTE(&v43);
    if ( (v28 & 0xF) != v20 )
      return 0LL;
  }
LABEL_30:
  v31 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v44 = v24;
  v32 = ((v31 - ((v38[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  PageChain = MiGetPageChain(v36, (__int64)&Process[1].IdealNode[12], v11, a3, 66, v32, &v44);
  if ( !PageChain )
    return 0LL;
  if ( v20 == 16 )
    v34 = (((char)PageChain / 48) & 0xF) == v32;
  else
    v34 = v28 + ((v31 - ((v38[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v20 == (PageChain + 0x58000000000LL) / 48;
  if ( !v34 )
    *v39 = 1;
  return PageChain;
}
