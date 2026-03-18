/*
 * XREFs of MiReplacePageOfProtoPool @ 0x1400BF848
 * Callers:
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiGetPrototypePteRanges @ 0x1400BFCB4 (MiGetPrototypePteRanges.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400D7870 (RtlFindNextForwardRunClearCapped.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 result; // rax
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  __int64 v9; // rcx
  int v10; // edi
  char *v11; // r12
  unsigned int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // r11d
  unsigned int v15; // edx
  char *v16; // rdx
  __int64 i; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rbx
  int NextForwardRunClearCapped; // eax
  int v22; // edi
  int v23; // edi
  _QWORD *v24; // rsi
  _QWORD *v25; // r15
  __int64 v26; // rax
  char v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned __int64 v31; // rsi
  unsigned int v32; // r9d
  unsigned int v33; // r11d
  __int64 v34; // r12
  unsigned int v35; // r10d
  unsigned int v36; // eax
  char *v37; // rdi
  unsigned int v38; // esi
  unsigned int v39; // edx
  char *v40; // rdx
  __int64 j; // r8
  unsigned __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // r10
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // rax
  int v50; // r10d
  int v51; // [rsp+20h] [rbp-89h]
  int v52; // [rsp+24h] [rbp-85h] BYREF
  __int64 v53; // [rsp+28h] [rbp-81h]
  __int64 v54; // [rsp+30h] [rbp-79h]
  unsigned int v55; // [rsp+38h] [rbp-71h] BYREF
  signed __int32 *v56; // [rsp+40h] [rbp-69h]
  int v57; // [rsp+48h] [rbp-61h]
  int v58; // [rsp+4Ch] [rbp-5Dh]
  __int64 v59; // [rsp+50h] [rbp-59h]
  __int64 v60; // [rsp+58h] [rbp-51h]
  __int64 v61; // [rsp+60h] [rbp-49h]
  __int64 v62; // [rsp+68h] [rbp-41h] BYREF
  signed __int32 v63[16]; // [rsp+70h] [rbp-39h] BYREF

  v60 = a2;
  v54 = a3;
  v4 = a1;
  v53 = a1;
  v59 = a4;
  v5 = a4;
  v56 = v63;
  v55 = 512;
  memset(v63, 0, sizeof(v63));
  result = MiGetPrototypePteRanges(v4, &v55);
  if ( (_DWORD)result )
  {
    v7 = 0;
    KeCopyPage(v5, v4);
    v8 = 0;
    v9 = ((unsigned __int8)((unsigned __int8)&v63[14] + 1) - 57) & 4;
    v10 = v9 != 0 ? 0x20 : 0;
    v51 = v10;
    v11 = (char *)v63 - (v9 != 0 ? 4 : 0);
    v61 = v9 != 0 ? 4 : 0;
    while ( 1 )
    {
      v12 = v8 < v55 ? v8 : 0;
      v13 = v55 - 1;
      while ( 1 )
      {
        v14 = v10 + v13;
        if ( v13 - v12 == -1 )
          goto LABEL_5;
        v16 = &v11[8 * ((unsigned __int64)(v10 + v12) >> 6)];
        for ( i = ~*(_QWORD *)v16 | ((1LL << ((v10 + v12) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v16 )
        {
          v16 += 8;
          if ( v16 > &v11[8 * ((unsigned __int64)v14 >> 6)] )
            goto LABEL_5;
        }
        _BitScanForward64(&v18, ~i);
        v15 = v18 + ((unsigned int)((v16 - v11) >> 3) << 6);
        v57 = v18;
        if ( v15 > v14 )
        {
LABEL_5:
          v15 = -1;
        }
        else if ( v15 != -1 )
        {
          break;
        }
        if ( !v12 )
          break;
        v19 = v8 + 1;
        if ( v8 + 1 > v55 )
          v19 = v55;
        v13 = v19 - 1;
        v12 = 0;
      }
      v20 = v15 - v10;
      if ( v15 == -1 )
        v20 = 0xFFFFFFFFLL;
      if ( (unsigned int)v20 < v8 || (_DWORD)v20 == -1 )
        break;
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(&v55, (unsigned int)v20, 0xFFFFFFFFLL, &v52);
      v22 = v52;
      if ( !NextForwardRunClearCapped )
        v22 = 512;
      v23 = v22 - v20;
      v24 = (_QWORD *)(v4 + 8 * v20);
      v25 = (_QWORD *)(v5 + 8 * v20);
      v8 = v20 + v23 + NextForwardRunClearCapped;
      if ( v23 )
      {
        do
        {
          v26 = MiLockLeafPage(v24, v7);
          if ( v26 )
          {
            ++v7;
            if ( (*(_BYTE *)(v26 + 34) & 8) != 0
              || (MI_READ_PTE_LOCK_FREE((unsigned __int64)v24) & 1) == 0 && (v27 & 0x20) != 0 )
            {
              goto LABEL_41;
            }
          }
          else
          {
            _bittestandreset(v63, v20);
          }
          LODWORD(v20) = v20 + 1;
          *v25++ = *v24++;
        }
        while ( --v23 );
      }
      if ( v8 >= 0x200 )
        break;
      v5 = v59;
      v10 = (((unsigned __int8)((unsigned __int8)&v63[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
      v4 = v53;
    }
    v28 = 48 * v60 - 0x58000000000LL;
    v29 = 48 * v54 - 0x58000000000LL;
    if ( v7 )
      MiLockNestedPageAtDpcInline(v28);
    else
      MiLockPageAtDpcInline(v28);
    if ( *(_WORD *)(v28 + 32) == 2
      && (v30 = *(_QWORD *)(v28 + 24), (unsigned __int16)v30 == (unsigned __int64)(v7 + 1))
      && (v31 = v30 & 0x3FFFFFFFFFFFFFFFLL, v31 < 0x10000) )
    {
      MiLockNestedPageAtDpcInline(v29);
      *(_QWORD *)(v29 + 24) = v31 | *(_QWORD *)(v29 + 24) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v32 = 1;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_41:
      v32 = 0;
    }
    v33 = 0;
    v34 = v53;
    while ( v7 )
    {
      v35 = v33 < v55 ? v33 : 0;
      v36 = v55 - 1;
      v37 = (char *)v63 - v61;
      while ( 1 )
      {
        v38 = v51 + v36;
        if ( v36 - v35 == -1 )
          goto LABEL_46;
        v40 = &v37[8 * ((unsigned __int64)(v51 + v35) >> 6)];
        for ( j = ~*(_QWORD *)v40 | ((1LL << ((v51 + v35) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v40 )
        {
          v40 += 8;
          if ( v40 > &v37[8 * ((unsigned __int64)v38 >> 6)] )
            goto LABEL_46;
        }
        _BitScanForward64(&v42, ~j);
        v39 = v42 + ((unsigned int)((v40 - v37) >> 3) << 6);
        v58 = v42;
        if ( v39 > v38 )
        {
LABEL_46:
          v39 = -1;
        }
        else if ( v39 != -1 )
        {
          break;
        }
        if ( !v35 )
          break;
        v43 = v33 + 1;
        if ( v33 + 1 > v55 )
          v43 = v55;
        v36 = v43 - 1;
        v35 = 0;
      }
      v44 = v39 - v51;
      if ( v39 == -1 )
        v44 = 0xFFFFFFFFLL;
      v45 = MI_READ_PTE_LOCK_FREE(v34 + 8 * v44);
      v62 = v45;
      if ( (v45 & 1) != 0 )
        v49 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62);
      else
        v49 = MiReverseSwizzleInvalidPte(v45, v46, v47, v48);
      if ( v32 == 1 )
        *(_QWORD *)(48 * ((v49 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) ^= (v54 ^ *(_QWORD *)(48 * ((v49 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
      --v7;
      _InterlockedAnd64(
        (volatile signed __int64 *)(48 * ((v49 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 24),
        0x7FFFFFFFFFFFFFFFuLL);
      v33 = v50 + 1;
    }
    return v32;
  }
  return result;
}
