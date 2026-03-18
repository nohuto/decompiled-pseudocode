/*
 * XREFs of MiExpandSharedZeroCluster @ 0x14013C370
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiUpdatePageTableUseCount @ 0x14003C610 (MiUpdatePageTableUseCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiIsPteEvaluated @ 0x14013C64C (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x14013C6C8 (MiComputeZeroClusterMaximum.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  unsigned __int64 v3; // rbx
  __int16 *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r11
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v17; // rax
  __int64 v18; // r11
  unsigned __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v23; // r10
  __int64 *v25; // r10
  unsigned int v26; // r11d
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r11d
  unsigned __int64 v30; // [rsp+20h] [rbp-69h]
  _QWORD v31[3]; // [rsp+28h] [rbp-61h] BYREF
  __int16 v32; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v33; // [rsp+48h] [rbp-41h]
  __int64 v34; // [rsp+50h] [rbp-39h]
  __int64 v35; // [rsp+58h] [rbp-31h]
  __int64 v36; // [rsp+60h] [rbp-29h]
  char v37; // [rsp+F0h] [rbp+67h]
  unsigned __int64 v38; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+77h]
  __int64 v40; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(__int16 **)(a1 + 56);
  v37 = 0;
  v6 = *(_QWORD **)(v1 + 120);
  v39 = v3;
  if ( (__int64)v6 >= 0 )
    v7 = -1LL;
  else
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  v8 = *(_DWORD *)(v1 + 48);
  if ( (v8 & 0x4000) == 0 && (v8 & 0x20000) != 0 )
  {
    v3 &= 0xFFFFFFFFFFFF0000uLL;
    v31[1] = 0x10000LL;
    v31[0] = v3;
    if ( v3 >> 12 < (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32))
      || (v3 + 0xFFFF) >> 12 > (*(unsigned int *)(v1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 33) << 32)) )
    {
      return 1LL;
    }
    v32 = 2;
    v33 = v31;
    v5 = &v32;
    v34 = 1LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 1;
  }
  v30 = MiComputeZeroClusterMaximum(v5, v1);
  v38 = v3 >> 12;
  v9 = 0LL;
  v10 = 0LL;
  v11 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v30 )
    return 1LL;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v1, v15, 4, &v40);
    v14 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v40 || v10 && v40 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v40;
    if ( v38 - (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32)) > v7 )
      break;
    v17 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v38 = v17;
    if ( (v17 & 1) != 0 || !v17 || (v17 & 0x400) != 0 || (v17 & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset(&v38) )
      break;
    if ( !v2 )
      v9 = v14;
    ++v2;
    v11 += 8LL;
    v38 = v18 + 1;
  }
  while ( v2 < v30 );
  if ( v2 <= 1 )
    return 1LL;
  v19 = v39;
  if ( v37 == 1 && v11 <= ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v20 = 0;
  do
  {
    v21 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v21 == 256 )
      PrototypePteDirect = MiMakePrototypePteDirect(v9, v12, v13, v14);
    else
      PrototypePteDirect = MiMakePrototypePteVadLookup(v21);
    v38 = PrototypePteDirect;
    if ( !MI_READ_PTE_LOCK_FREE(v23) )
    {
      *v25 = v14;
      if ( MiPteInShadowRange((unsigned __int64)v25) )
        MiWritePteShadow(v27, v14, v28);
      v26 = v29 + 1;
    }
    v13 = ++v20;
    v9 += 8LL;
  }
  while ( v20 < (unsigned __int64)v2 );
  if ( v26 )
    MiUpdatePageTableUseCount(v19, v26);
  return v2;
}
