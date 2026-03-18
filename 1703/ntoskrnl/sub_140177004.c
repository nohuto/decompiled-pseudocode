/*
 * XREFs of sub_140177004 @ 0x140177004
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x14026F010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_140175FBC @ 0x140175FBC (sub_140175FBC.c)
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 */

unsigned __int64 __fastcall sub_140177004(__int64 a1, int *a2)
{
  unsigned __int64 result; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rsi
  unsigned __int64 i; // rbp
  _QWORD *v8; // r10
  __int64 v9; // r8
  _QWORD *v10; // r9
  const char *v11; // rax
  int v12; // ebp
  __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned int j; // r11d
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
  BOOL v26; // r15d
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r12
  int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // r8
  unsigned __int64 *v37; // r9
  unsigned __int8 *v38; // r10
  __int64 v39; // rcx
  __int64 v40; // rdx
  bool v41; // zf
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  int v45; // r12d
  unsigned __int8 v46; // bp
  unsigned __int64 v47; // r14
  __int64 v48; // r13
  unsigned __int64 v49; // r15
  int v50; // eax
  __int64 v51; // rcx
  _BYTE v52[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v53; // [rsp+68h] [rbp+10h]

  result = (unsigned int)a2[10];
  if ( (result & 2) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 1856) )
    {
LABEL_3:
      *(_DWORD *)(a1 + 1572) = 0;
      return result;
    }
    result = *(unsigned int *)(a1 + 1868);
    v5 = *(_DWORD *)(a1 + 1868);
    if ( *(_DWORD *)(a1 + 1572) )
    {
      if ( ((((unsigned int)result ^ (v5 >> 3)) >> 2) & 1) != 0 )
        goto LABEL_3;
    }
    else
    {
      *(_DWORD *)(a1 + 1868) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(8 * v5)) & 0x20;
    }
    result = *(unsigned int *)(a1 + 1868);
    if ( (result & 4) != 0 )
    {
      v6 = *((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFF000uLL;
      for ( i = ((a2[2] & 0xFFF) + (unsigned __int64)(unsigned int)a2[4] + 4095) >> 12; i; v6 += 4096LL )
      {
        --i;
        result = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 680))(v6);
        if ( (_BYTE)result )
        {
          if ( !*(_DWORD *)(a1 + 1728) )
          {
            *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1744) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            result = *a2;
            *(_QWORD *)(a1 + 1752) = result;
            *(_QWORD *)(a1 + 1760) = v6;
            *(_DWORD *)(a1 + 1728) = 1;
          }
        }
        *(_DWORD *)(a1 + 1576) += 256;
      }
      return result;
    }
  }
  result = (unsigned int)a2[10];
  if ( (result & 4) != 0 )
    return result;
  v8 = (_QWORD *)*((_QWORD *)a2 + 1);
  v9 = (unsigned int)a2[4];
  v10 = v8;
  *(_DWORD *)(a1 + 1576) += v9;
  v11 = (const char *)v8;
  v12 = *(_DWORD *)(a1 + 1556);
  v13 = *(_QWORD *)(a1 + 1560);
  if ( v8 < (_QWORD *)((char *)v8 + v9) )
  {
    do
    {
      _mm_prefetch(v11, 0);
      v11 += 64;
    }
    while ( v11 < (const char *)v8 + v9 );
  }
  v14 = *(_QWORD *)(a1 + 1560);
  for ( j = (unsigned int)v9 >> 7; j; --j )
  {
    v16 = 8LL;
    do
    {
      v17 = *v10 ^ v14;
      v18 = v10 + 1;
      v19 = *v18 ^ __ROL8__(v17, v12);
      v10 = v18 + 1;
      v14 = __ROL8__(v19, v12);
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
      v14 = __ROL8__(*v10++ ^ v14, v12);
      v22 -= 8;
      --v23;
    }
    while ( v23 );
  }
  for ( ; v22; --v22 )
  {
    v24 = *(unsigned __int8 *)v10;
    v10 = (_QWORD *)((char *)v10 + 1);
    v14 = __ROL8__(v24 ^ v14, v12);
  }
  for ( result = v14; ; LODWORD(v14) = result ^ v14 )
  {
    result >>= 31;
    if ( !result )
      break;
  }
  v25 = v14 & 0x7FFFFFFF;
  v26 = 0;
  v27 = 0xA3A03F5891C8B4E8uLL;
  v28 = 0xB3B74BDEE4453415uLL;
  if ( v25 != a2[5] )
  {
    if ( !*a2 )
      v26 = a2[6] != 0;
    v29 = (unsigned int)a2[4];
    v30 = *((_QWORD *)a2 + 1);
    if ( a2[4] && (*(_DWORD *)(a1 + 1868) & 0x40) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v32 = v30 & 0xFFFFFFFFFFFFF000uLL;
      v53 = (v30 + v29 - 1) | 0xFFF;
      v33 = (v30 & 0xFFFFFFFFFFFFF000uLL) - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(a1 + 1080))(
                  v32,
                  0LL,
                  v27,
                  v28);
          if ( v34 == -1073741267 )
            break;
          if ( v34 < 0 )
          {
LABEL_52:
            __writecr8(CurrentIrql);
            goto LABEL_53;
          }
LABEL_42:
          v32 += 4096LL;
          v33 += 4096LL;
          if ( v33 == v53 )
          {
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            goto LABEL_44;
          }
        }
        if ( v26 )
          goto LABEL_52;
        if ( CurrentIrql > 1u )
          goto LABEL_42;
        __writecr8(CurrentIrql);
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
    }
LABEL_53:
    result = (unsigned int)a2[5];
    if ( !*(_DWORD *)(a1 + 1728) )
    {
      v42 = v25 ^ (unsigned __int64)(unsigned int)result;
      result = *(_QWORD *)(a1 + 1296);
      *(_QWORD *)(result + 24) = v42;
    }
    v43 = *((_QWORD *)a2 + 1);
    if ( !*(_DWORD *)(a1 + 1728) )
    {
      *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 1744) = (char *)a2 - 0x4C48B4211BBACBEBLL;
      result = *a2;
      *(_QWORD *)(a1 + 1752) = result;
      *(_QWORD *)(a1 + 1760) = v43;
      *(_DWORD *)(a1 + 1728) = 1;
    }
  }
LABEL_44:
  v35 = (unsigned int)a2[4];
  if ( (_DWORD)v35 )
  {
    sub_140175FBC(a1, *((_QWORD *)a2 + 1), v35, (__int64)v52);
    v36 = 16LL;
    v37 = (unsigned __int64 *)(a2 + 6);
    v38 = v52;
    while ( 1 )
    {
      v39 = *(_QWORD *)v38;
      v38 += 8;
      result = *v37++;
      if ( v39 != result )
        break;
      v36 = (unsigned int)(v36 - 8);
      if ( (unsigned int)v36 < 8 )
      {
        if ( !(_DWORD)v36 )
          goto LABEL_70;
        while ( 1 )
        {
          v40 = *v38++;
          result = *(unsigned __int8 *)v37;
          v37 = (unsigned __int64 *)((char *)v37 + 1);
          if ( v40 != result )
            goto LABEL_57;
          v41 = (_DWORD)v36 == 1;
          v36 = (unsigned int)(v36 - 1);
          if ( v41 )
            goto LABEL_70;
        }
      }
    }
LABEL_57:
    v44 = *((_QWORD *)a2 + 1);
    v45 = a2[10] & 1;
    result = *(unsigned int *)(a1 + 1868);
    if ( (result & 0x40) != 0 )
    {
      v46 = KeGetCurrentIrql();
      v47 = v44 & 0xFFFFFFFFFFFFF000uLL;
      v48 = (v35 + v44 - 1) | 0xFFF;
      v49 = (v44 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_59:
      __writecr8(2uLL);
      while ( 1 )
      {
        v50 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64 *))(a1 + 1080))(
                v47,
                0LL,
                v36,
                v37);
        if ( v50 == -1073741267 )
        {
          if ( v45 )
            goto LABEL_67;
          if ( v46 <= 1u )
          {
            __writecr8(v46);
            KeGetCurrentIrql();
            goto LABEL_59;
          }
        }
        else if ( v50 < 0 )
        {
LABEL_67:
          result = v46;
          __writecr8(v46);
          break;
        }
        v47 += 4096LL;
        v49 += 4096LL;
        if ( v49 == v48 )
        {
          result = v46;
          __writecr8(v46);
          goto LABEL_70;
        }
      }
    }
    v51 = *((_QWORD *)a2 + 1);
    if ( !*(_DWORD *)(a1 + 1728) )
    {
      *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 1744) = (char *)a2 - 0x4C48B4211BBACBEBLL;
      result = *a2;
      *(_QWORD *)(a1 + 1752) = result;
      *(_QWORD *)(a1 + 1760) = v51;
      *(_DWORD *)(a1 + 1728) = 1;
    }
LABEL_70:
    *(_DWORD *)(a1 + 1576) += 16 * v35;
  }
  return result;
}
