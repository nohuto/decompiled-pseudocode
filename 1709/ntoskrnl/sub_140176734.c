/*
 * XREFs of sub_140176734 @ 0x140176734
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_14017573C @ 0x14017573C (sub_14017573C.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 */

unsigned __int64 __fastcall sub_140176734(__int64 a1, int *a2)
{
  unsigned __int64 result; // rax
  int *v4; // rdi
  unsigned int v5; // ecx
  unsigned __int64 v6; // rsi
  unsigned __int64 j; // rbp
  _QWORD *v8; // r10
  __int64 v9; // r8
  _QWORD *v10; // r9
  const char *v11; // rax
  int v12; // ebp
  __int64 v13; // r15
  unsigned int v14; // r11d
  unsigned __int64 i; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  BOOL v26; // r12d
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r13
  int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // r8
  unsigned __int64 *v39; // r9
  unsigned __int8 *v40; // r10
  __int64 v41; // rcx
  __int64 v42; // rdx
  bool v43; // zf
  __int64 v44; // rdx
  int v45; // r13d
  unsigned __int8 v46; // bp
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // r12
  int v49; // eax
  __int64 v50; // rcx
  _BYTE v51[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v52; // [rsp+68h] [rbp+10h]
  __int64 v53; // [rsp+68h] [rbp+10h]

  result = (unsigned int)a2[10];
  v4 = a2;
  LOBYTE(a2) = 4;
  if ( (result & 2) == 0 )
    goto LABEL_14;
  if ( !*(_QWORD *)(a1 + 2000) )
  {
LABEL_3:
    *(_DWORD *)(a1 + 1668) = 0;
    return result;
  }
  result = *(unsigned int *)(a1 + 2012);
  v5 = *(_DWORD *)(a1 + 2012);
  if ( *(_DWORD *)(a1 + 1668) )
  {
    if ( (((unsigned __int8)result ^ (unsigned __int8)(v5 >> 3)) & 4) != 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 2012) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(8 * v5)) & 0x20;
  }
  result = *(unsigned int *)(a1 + 2012);
  if ( (result & 4) == 0 )
  {
LABEL_14:
    result = (unsigned int)v4[10];
    if ( (result & 4) != 0 )
      return result;
    v8 = (_QWORD *)*((_QWORD *)v4 + 1);
    v9 = (unsigned int)v4[4];
    v10 = v8;
    *(_DWORD *)(a1 + 1672) += v9;
    v11 = (const char *)v8;
    v12 = *(_DWORD *)(a1 + 1652);
    v13 = *(_QWORD *)(a1 + 1656);
    if ( v8 < (_QWORD *)((char *)v8 + v9) )
    {
      do
      {
        _mm_prefetch(v11, 0);
        v11 += 64;
      }
      while ( v11 < (const char *)v8 + v9 );
    }
    v14 = (unsigned int)v9 >> 7;
    for ( i = *(_QWORD *)(a1 + 1656); v14; --v14 )
    {
      v16 = 8LL;
      do
      {
        v17 = *v10 ^ i;
        v18 = v10 + 1;
        v19 = *v18 ^ __ROL8__(v17, v12);
        v10 = v18 + 1;
        i = __ROL8__(v19, v12);
        --v16;
      }
      while ( v16 );
      v20 = __ROL8__(v13 ^ ((char *)v10 - (char *)v8), 17);
      LOBYTE(v20) = v12 ^ (((v20 ^ v13 ^ (unsigned __int64)((char *)v10 - (char *)v8))
                          * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v20 ^ v13 ^ ((_BYTE)v10 - (_BYTE)v8);
      LOBYTE(v12) = 1;
      v21 = v20 & 0x3F;
      if ( v21 )
        LOBYTE(v12) = v21;
    }
    v22 = v9 & 0x7F;
    if ( v22 >= 8 )
    {
      v23 = (unsigned __int64)v22 >> 3;
      do
      {
        i = __ROL8__(*v10++ ^ i, v12);
        v22 -= 8;
        --v23;
      }
      while ( v23 );
    }
    for ( ; v22; --v22 )
    {
      v24 = *(unsigned __int8 *)v10;
      v10 = (_QWORD *)((char *)v10 + 1);
      i = __ROL8__(v24 ^ i, v12);
    }
    for ( result = i; ; LODWORD(i) = result ^ i )
    {
      result >>= 31;
      if ( !result )
        break;
    }
    v25 = i & 0x7FFFFFFF;
    v26 = 0;
    v27 = 0xA3A03F5891C8B4E8uLL;
    v28 = 0xB3B74BDEE4453415uLL;
    if ( v25 != v4[5] )
    {
      if ( !*v4 )
        v26 = v4[6] != 0;
      v29 = (unsigned int)v4[4];
      v30 = *((_QWORD *)v4 + 1);
      if ( v4[4] && (*(_DWORD *)(a1 + 2012) & 0x40) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v32 = v30 & 0xFFFFFFFFFFFFF000uLL;
        v52 = (v30 + v29 - 1) | 0xFFF;
        v33 = (v30 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v34 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(a1 + 1104))(
                    v32,
                    0LL,
                    v27,
                    v28);
            if ( v34 == -1073741267 )
              break;
            if ( v34 < 0 )
            {
LABEL_44:
              __writecr8(CurrentIrql);
              goto LABEL_45;
            }
LABEL_42:
            v32 += 4096LL;
            v33 += 4096LL;
            if ( v33 == v52 )
            {
              result = CurrentIrql;
              __writecr8(CurrentIrql);
              goto LABEL_49;
            }
          }
          if ( v26 )
            goto LABEL_44;
          if ( CurrentIrql > 1u )
            goto LABEL_42;
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_45:
      result = (unsigned int)v4[5];
      if ( !*(_DWORD *)(a1 + 1872) )
      {
        v35 = v25 ^ (unsigned __int64)(unsigned int)result;
        result = *(_QWORD *)(a1 + 1352);
        *(_QWORD *)(result + 24) = v35;
      }
      v36 = *((_QWORD *)v4 + 1);
      if ( !*(_DWORD *)(a1 + 1872) )
      {
        *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1888) = (char *)v4 - 0x4C48B4211BBACBEBLL;
        result = *v4;
        *(_QWORD *)(a1 + 1896) = result;
        *(_QWORD *)(a1 + 1904) = v36;
        *(_DWORD *)(a1 + 1872) = 1;
      }
    }
LABEL_49:
    v37 = (unsigned int)v4[4];
    if ( !(_DWORD)v37 )
      return result;
    sub_14017573C(a1, *((_QWORD *)v4 + 1), v37, (__int64)v51);
    v38 = 16LL;
    v39 = (unsigned __int64 *)(v4 + 6);
    v40 = v51;
    do
    {
      v41 = *(_QWORD *)v40;
      v40 += 8;
      result = *v39++;
      if ( v41 != result )
        goto LABEL_57;
      v38 = (unsigned int)(v38 - 8);
    }
    while ( (unsigned int)v38 >= 8 );
    if ( (_DWORD)v38 )
    {
      while ( 1 )
      {
        v42 = *v40++;
        result = *(unsigned __int8 *)v39;
        v39 = (unsigned __int64 *)((char *)v39 + 1);
        if ( v42 != result )
          break;
        v43 = (_DWORD)v38 == 1;
        v38 = (unsigned int)(v38 - 1);
        if ( v43 )
          goto LABEL_69;
      }
LABEL_57:
      v44 = *((_QWORD *)v4 + 1);
      v45 = v4[10] & 1;
      result = *(unsigned int *)(a1 + 2012);
      if ( (result & 0x40) != 0 )
      {
        v46 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v47 = v44 & 0xFFFFFFFFFFFFF000uLL;
        v53 = (v37 + v44 - 1) | 0xFFF;
        v48 = (v44 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v49 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64 *))(a1 + 1104))(
                    v47,
                    0LL,
                    v38,
                    v39);
            if ( v49 == -1073741267 )
              break;
            if ( v49 < 0 )
            {
LABEL_66:
              result = v46;
              __writecr8(v46);
              goto LABEL_67;
            }
LABEL_64:
            v47 += 4096LL;
            v48 += 4096LL;
            if ( v48 == v53 )
            {
              result = v46;
              __writecr8(v46);
              goto LABEL_69;
            }
          }
          if ( v45 )
            goto LABEL_66;
          if ( v46 > 1u )
            goto LABEL_64;
          __writecr8(v46);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_67:
      v50 = *((_QWORD *)v4 + 1);
      if ( !*(_DWORD *)(a1 + 1872) )
      {
        *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1888) = (char *)v4 - 0x4C48B4211BBACBEBLL;
        result = *v4;
        *(_QWORD *)(a1 + 1896) = result;
        *(_QWORD *)(a1 + 1904) = v50;
        *(_DWORD *)(a1 + 1872) = 1;
      }
    }
LABEL_69:
    *(_DWORD *)(a1 + 1672) += 16 * v37;
    return result;
  }
  v6 = *((_QWORD *)v4 + 1) & 0xFFFFFFFFFFFFF000uLL;
  for ( j = ((v4[2] & 0xFFF) + (unsigned __int64)(unsigned int)v4[4] + 4095) >> 12; j; v6 += 4096LL )
  {
    --j;
    result = (*(__int64 (__fastcall **)(unsigned __int64, int *))(a1 + 672))(v6, a2);
    if ( (_BYTE)result )
    {
      if ( !*(_DWORD *)(a1 + 1872) )
      {
        *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1888) = (char *)v4 - 0x4C48B4211BBACBEBLL;
        result = *v4;
        *(_QWORD *)(a1 + 1896) = result;
        *(_QWORD *)(a1 + 1904) = v6;
        *(_DWORD *)(a1 + 1872) = 1;
      }
    }
    *(_DWORD *)(a1 + 1672) += 256;
  }
  return result;
}
