/*
 * XREFs of MiResolveSharedZeroFault @ 0x140040630
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiFillPteWithProto @ 0x140125368 (MiFillPteWithProto.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v3; // r10d
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 UsedPtesHandle; // rbx
  unsigned __int64 v12; // r11
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v17; // r11
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int16 *v23; // rdi
  unsigned __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rbp
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbp
  __int64 PteShadow; // rax
  __int64 ProtoPteAddress; // rax
  _QWORD *v34; // rcx
  __int64 v35; // r11
  unsigned int v36; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v37; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v39; // [rsp+38h] [rbp-E0h]
  _QWORD v40[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v42; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-B0h]
  __int64 v44; // [rsp+70h] [rbp-A8h]
  __int64 v45; // [rsp+78h] [rbp-A0h]
  __int64 v46; // [rsp+80h] [rbp-98h]
  unsigned __int64 v47; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+D0h] [rbp-48h]
  __int64 v50; // [rsp+D8h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 1);
  v3 = a1[8];
  v4 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *((_QWORD *)a1 + 3);
  v36 = v3;
  v6 = 0LL;
  v7 = 0x7FFFFFFEFFFFLL;
  v8 = (__int64)(v4 << 25) >> 16;
  v9 = v8;
  v10 = 0;
  while ( v9 > 0x7FFFFFFEFFFFLL )
  {
    ++v10;
    v9 = (__int64)(v9 << 25) >> 16;
    if ( v10 >= 3 )
      goto LABEL_17;
  }
  LODWORD(v37) = 0;
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v4 << 25) >> 16);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v37);
      while ( *(__int64 *)(UsedPtesHandle + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) );
    v3 = v36;
    v12 = 0xFFFFF6FB7DBED7F8uLL;
  }
  *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16)
                                                                                       + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (__int64)(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL) >> 47 == -1
    || (__int64)(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL) >> 47 == 0 )
  {
    v47 = (((*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LODWORD(v7) = 4;
    v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v7 = (unsigned int)(v7 - 1);
      v13 = (_QWORD *)*(&v47 + v7);
      v14 = *v13;
      v6 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL )
      {
        v6 = v12;
        if ( (unsigned __int64)v13 <= v12 )
          LOBYTE(v14) = MiReadPteShadow(v13, *v13);
      }
    }
    while ( (v14 & 1) != 0 && (v14 & 0x80u) == 0LL && (_DWORD)v7 );
  }
LABEL_17:
  v15 = 256LL;
  if ( v3 == 256 )
    result = MiMakePrototypePteDirect(v5, v6, v8, v7);
  else
    result = MiMakePrototypePteVadLookup(v3, v6, v8, v7);
  *(_QWORD *)v4 = result;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= v17 )
    result = MiWritePteShadow(v4, result);
  v18 = *((_QWORD *)a1 + 8);
  if ( v18 )
  {
    v19 = 1LL;
    v20 = *(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32);
    v21 = *(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32);
    if ( (*(_DWORD *)(v18 + 48) & 0x100000) != 0 )
    {
      v22 = v1 & 0xFFFFFFFFFFFF0000uLL;
      v40[1] = 0x10000LL;
      v40[0] = v22;
      result = v22 >> 12;
      if ( v22 >> 12 < v20 )
        return result;
      result = (v22 + 0xFFFF) >> 12;
      if ( result > v21 )
        return result;
      v42 = 2;
      v43 = v40;
      v23 = &v42;
      v44 = 1LL;
      v15 = 16LL;
      v45 = 0LL;
      v1 = v22 - 4096;
      v46 = 0LL;
    }
    else
    {
      result = *a1;
      if ( (result & 2) == 0 )
        return result;
      v23 = (__int16 *)*((_QWORD *)a1 + 7);
      v24 = v21 - (v1 >> 12);
      result = v24 + 1;
      if ( v24 + 1 < 0x100 )
        v15 = v24 + 1;
      if ( !v23 )
        return result;
    }
    v25 = (*(_DWORD *)(v18 + 48) & 0x100000) == 0;
    v26 = *((_QWORD *)v23 + 3);
    v27 = *((_QWORD *)v23 + 4);
    v28 = *((_QWORD *)v23 + 2);
    v38 = v26;
    v39 = v27;
    v37 = v28;
    if ( v25 )
      MiAdvanceFaultList(v23);
    v29 = *((_QWORD *)v23 + 3);
    if ( v29 < v28 )
    {
      v30 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
      if ( v15 > 1 )
      {
        while ( (v30 & 0xFFF) != 0 || v23 == &v42 )
        {
          v31 = *(_QWORD *)(*((_QWORD *)v23 + 1) + 16 * v29) + (*((_QWORD *)v23 + 4) << 12);
          if ( (v31 & 0xFFFFFFFFFFFFF000uLL) - 4096 != (v1 & 0xFFFFFFFFFFFFF000uLL) )
            break;
          PteShadow = *(_QWORD *)v30;
          if ( v30 >= 0xFFFFF6FB7DBED000uLL && v30 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v30, *(_QWORD *)v30);
          if ( !PteShadow )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v18, v31 >> 12, 0, &v41);
            if ( !ProtoPteAddress )
              break;
            v34 = *(_QWORD **)(v18 + 120);
            if ( (__int64)v34 < 0 && (v31 >> 12) - v20 > (unsigned __int64)(*v34 - 1LL) >> 12 )
              break;
            MiFillPteWithProto(v30, ProtoPteAddress, v36);
          }
          ++v19;
          v30 += 8LL;
          MiAdvanceFaultList(v23);
          v29 = *((_QWORD *)v23 + 3);
          if ( v29 != v35 )
          {
            v1 = v31;
            if ( v19 < v15 )
              continue;
          }
          break;
        }
        v26 = v38;
      }
    }
    result = v39;
    *((_QWORD *)v23 + 4) = v39;
    *((_QWORD *)v23 + 3) = v26;
  }
  return result;
}
