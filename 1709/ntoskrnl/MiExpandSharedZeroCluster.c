/*
 * XREFs of MiExpandSharedZeroCluster @ 0x14000BD64
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiIsPteEvaluated @ 0x14000C0B8 (MiIsPteEvaluated.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiUpdatePageTableUseCount @ 0x1400666B8 (MiUpdatePageTableUseCount.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x14011BCB0 (MiComputeZeroClusterMaximum.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int16 *v4; // rcx
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rsi
  int v7; // eax
  _QWORD *v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned int v11; // r15d
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r9
  __int64 v15; // r10
  __int64 ProtoPteAddress; // rax
  __int64 PteShadow; // rax
  __int64 v18; // r10
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 *v22; // r10
  unsigned int v23; // r11d
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+20h] [rbp-69h]
  _QWORD v27[3]; // [rsp+28h] [rbp-61h] BYREF
  __int16 v28; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-41h]
  __int64 v30; // [rsp+50h] [rbp-39h]
  __int64 v31; // [rsp+58h] [rbp-31h]
  __int64 v32; // [rsp+60h] [rbp-29h]
  char v33; // [rsp+F0h] [rbp+67h]
  unsigned __int64 v34; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int64 v35; // [rsp+100h] [rbp+77h]
  __int64 v36; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(__int16 **)(a1 + 56);
  v33 = 0;
  v5 = *(_QWORD **)(v1 + 120);
  v35 = v3;
  if ( (__int64)v5 >= 0 )
    v6 = -1LL;
  else
    v6 = (unsigned __int64)(*v5 - 1LL) >> 12;
  v7 = *(_DWORD *)(v1 + 48);
  if ( (v7 & 0x8000) == 0 && (v7 & 0x100000) != 0 )
  {
    v3 &= 0xFFFFFFFFFFFF0000uLL;
    v27[1] = 0x10000LL;
    v27[0] = v3;
    if ( v3 >> 12 < (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32))
      || (v3 + 0xFFFF) >> 12 > (*(unsigned int *)(v1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 33) << 32)) )
    {
      return 1LL;
    }
    v31 = 0LL;
    v32 = 0LL;
    v4 = &v28;
    v29 = v27;
    v28 = 2;
    v30 = 1LL;
    v33 = 1;
  }
  v26 = MiComputeZeroClusterMaximum(v4, v1);
  v8 = 0LL;
  v34 = v3 >> 12;
  v9 = 0LL;
  v10 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 0;
  if ( !v26 )
    return 1LL;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v10, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v1, v15, 8LL, &v36);
    v14 = (_QWORD *)ProtoPteAddress;
    if ( !ProtoPteAddress || !v36 || v9 && v36 != v9 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v9 )
      v9 = v36;
    if ( v34 - (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32)) > v6 )
      break;
    PteShadow = *(_QWORD *)ProtoPteAddress;
    if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v14, *v14);
    v34 = PteShadow;
    if ( (PteShadow & 1) != 0
      || !PteShadow
      || (PteShadow & 0x400) != 0
      || (PteShadow & 0x800) != 0
      || (unsigned int)MiGetPagingFileOffset(&v34) )
    {
      break;
    }
    if ( !v11 )
      v8 = v14;
    ++v11;
    v10 += 8LL;
    v34 = v18 + 1;
  }
  while ( v11 < v26 );
  if ( v11 <= 1 || v33 == 1 && v10 <= ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v19 = 0;
  do
  {
    v20 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v20 == 256 )
      PrototypePteDirect = MiMakePrototypePteDirect(v8, v12, v13, v14);
    else
      PrototypePteDirect = MiMakePrototypePteVadLookup(v20, v12, v13, v14);
    v34 = PrototypePteDirect;
    v14 = (_QWORD *)PrototypePteDirect;
    v25 = *v22;
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v25 = MiReadPteShadow(v22, *v22);
      v12 = 0xFFFFF6FB7DBED7F8uLL;
    }
    if ( !v25 )
    {
      *v22 = (__int64)v14;
      if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v22, v14);
      ++v23;
    }
    v13 = ++v19;
    ++v8;
  }
  while ( v19 < (unsigned __int64)v11 );
  if ( v23 )
    MiUpdatePageTableUseCount(v35, v23, v19, v14);
  return v11;
}
