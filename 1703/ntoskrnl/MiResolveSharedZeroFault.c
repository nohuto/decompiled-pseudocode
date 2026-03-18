/*
 * XREFs of MiResolveSharedZeroFault @ 0x1400C18A0
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiFillPteWithProto @ 0x1400A810C (MiFillPteWithProto.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r10d
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 UsedPtesHandle; // rax
  int v9; // r11d
  __int64 v10; // rbx
  int v11; // r9d
  char v12; // al
  unsigned __int64 v13; // r12
  __int64 PrototypePteDirect; // rax
  unsigned __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  __int16 *v25; // rbx
  unsigned __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rcx
  __int64 *v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 ProtoPteAddress; // rax
  _QWORD *v37; // rcx
  __int64 v38; // r11
  unsigned int v39; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v40; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v42; // [rsp+38h] [rbp-E0h]
  _QWORD v43[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v45; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v46; // [rsp+68h] [rbp-B0h]
  __int64 v47; // [rsp+70h] [rbp-A8h]
  __int64 v48; // [rsp+78h] [rbp-A0h]
  __int64 v49; // [rsp+80h] [rbp-98h]
  unsigned __int64 v50; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v52; // [rsp+D0h] [rbp-48h]
  __int64 v53; // [rsp+D8h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 1);
  v3 = a1[8];
  v4 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *((_QWORD *)a1 + 3);
  v39 = v3;
  v6 = v4 << 25 >> 16;
  v7 = 0;
  while ( v6 > 0x7FFFFFFEFFFFLL )
  {
    ++v7;
    v6 = (__int64)(v6 << 25) >> 16;
    if ( v7 >= 3 )
      goto LABEL_14;
  }
  UsedPtesHandle = MiGetUsedPtesHandle(v4 << 25 >> 16, 0LL, v4 << 25 >> 16, 0x7FFFFFFEFFFFLL);
  LODWORD(v40) = v9;
  v10 = UsedPtesHandle;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
    v3 = v39;
  }
  *(_QWORD *)(v10 + 16) ^= ((unsigned int)*(_QWORD *)(v10 + 16) ^ ((*(_QWORD *)(v10 + 16) & 0xFFFF0000) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (__int64)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >> 47 == -1
    || (__int64)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
  {
    v50 = (((*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v52 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = 4;
    v53 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
      v12 = MI_READ_PTE_LOCK_FREE(*(&v50 + (unsigned int)(v11 - 1)));
    while ( (v12 & 1) != 0 && v12 >= 0 && v11 );
  }
LABEL_14:
  v13 = 256LL;
  if ( v3 == 256 )
    PrototypePteDirect = MiMakePrototypePteDirect(v5);
  else
    PrototypePteDirect = MiMakePrototypePteVadLookup(v3);
  *(_QWORD *)v4 = PrototypePteDirect;
  result = MiPteInShadowRange(v4);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v17);
  v20 = *((_QWORD *)a1 + 8);
  if ( v20 )
  {
    v21 = 1LL;
    v22 = *(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32);
    v23 = *(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32);
    if ( (*(_DWORD *)(v20 + 48) & 0x100000) != 0 )
    {
      v24 = v1 & 0xFFFFFFFFFFFF0000uLL;
      v43[1] = 0x10000LL;
      v43[0] = v24;
      result = v24 >> 12;
      if ( v24 >> 12 < v22 )
        return result;
      result = (v24 + 0xFFFF) >> 12;
      if ( result > v23 )
        return result;
      v45 = 2;
      v46 = v43;
      v25 = &v45;
      v47 = 1LL;
      v13 = 16LL;
      v48 = v19;
      v1 = v24 - 4096;
      v49 = v19;
    }
    else
    {
      result = *a1;
      if ( (result & 2) == 0 )
        return result;
      v25 = (__int16 *)*((_QWORD *)a1 + 7);
      v26 = v23 - (v1 >> 12);
      result = v26 + 1;
      if ( v26 + 1 < 0x100 )
        v13 = v26 + 1;
      if ( !v25 )
        return result;
    }
    v27 = (*(_DWORD *)(v20 + 48) & 0x100000) == 0;
    v28 = *((_QWORD *)v25 + 3);
    v29 = *((_QWORD *)v25 + 4);
    v30 = *((_QWORD *)v25 + 2);
    v41 = v28;
    v42 = v29;
    v40 = v30;
    if ( v27 )
      MiAdvanceFaultList(v25, v16, v18);
    v31 = *((_QWORD *)v25 + 3);
    if ( v31 < v30 )
    {
      v32 = (__int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL);
      if ( v13 > 1 )
      {
        while ( ((unsigned __int16)v32 & 0xFFF) != 0 || v25 == &v45 )
        {
          v33 = *(_QWORD *)(*((_QWORD *)v25 + 1) + 16 * v31) + (*((_QWORD *)v25 + 4) << 12);
          if ( (v33 & 0xFFFFFFFFFFFFF000uLL) - 4096 != (v1 & 0xFFFFFFFFFFFFF000uLL) )
            break;
          if ( !MI_READ_PTE_LOCK_FREE(v32) )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v20, v33 >> 12, 0, &v44);
            if ( !ProtoPteAddress )
              break;
            v37 = *(_QWORD **)(v20 + 120);
            if ( (__int64)v37 < 0 && (v33 >> 12) - v22 > (unsigned __int64)(*v37 - 1LL) >> 12 )
              break;
            MiFillPteWithProto(v32, ProtoPteAddress, v39);
          }
          ++v21;
          ++v32;
          MiAdvanceFaultList(v25, v34, v35);
          v31 = *((_QWORD *)v25 + 3);
          if ( v31 != v38 )
          {
            v1 = v33;
            if ( v21 < v13 )
              continue;
          }
          break;
        }
        v28 = v41;
      }
    }
    result = v42;
    *((_QWORD *)v25 + 4) = v42;
    *((_QWORD *)v25 + 3) = v28;
  }
  return result;
}
