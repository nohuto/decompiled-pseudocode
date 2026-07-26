/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C00A5E9C
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisVerifierInitialization @ 0x1C001382C (ndisVerifierInitialization.c)
 *     ndisCheckForHangSupported @ 0x1C0022F30 (ndisCheckForHangSupported.c)
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C0023604 (ndisIsSatisfiedByOidGenStatistics.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisValidOid @ 0x1C00A5E4C (ndisValidOid.c)
 *     ndisQueryDeviceOid @ 0x1C00A6220 (ndisQueryDeviceOid.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        SIZE_T NumberOfBytes,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  _DWORD *v9; // r15
  unsigned int v10; // edi
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  int v15; // ebx
  unsigned int v16; // ebx
  __int64 *p_Src; // rsi
  unsigned int v18; // ebx
  int v19; // eax
  __int64 *v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  _BYTE *v23; // rax
  int v25; // ecx
  char valid; // al
  __int64 v27; // r10
  __int64 *v28; // r15
  unsigned int v29; // esi
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v31; // rdi
  unsigned int DeviceOid; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  size_t v35; // rbx
  _BYTE *v36; // rdx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // edx
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r9
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // edx
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  char v47; // [rsp+34h] [rbp-CCh]
  unsigned int v48; // [rsp+38h] [rbp-C8h]
  int v49; // [rsp+3Ch] [rbp-C4h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh]
  unsigned int v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h]
  _BYTE *v55; // [rsp+60h] [rbp-A0h]
  _DWORD *v56; // [rsp+68h] [rbp-98h]
  int Src; // [rsp+70h] [rbp-90h] BYREF
  unsigned int i; // [rsp+74h] [rbp-8Ch]
  __int64 v59; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  _DWORD *v62; // [rsp+90h] [rbp-70h]
  _BYTE v63[160]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v64[64]; // [rsp+140h] [rbp+40h] BYREF

  v9 = a5;
  v10 = 0;
  v12 = NumberOfBytes;
  v56 = a5;
  v62 = a7;
  v55 = a9;
  v49 = 0;
  P = 0LL;
  v46 = 0;
  v47 = 0;
  v52 = a4;
  v59 = a3;
  v61 = a2;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1);
  v13 = 0;
  *a7 = 0;
  if ( a8 )
  {
    v15 = 12;
    v48 = 12;
    memset(a5, 0, (unsigned int)NumberOfBytes);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v48 = 8;
    memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
    v15 = 8;
  }
  v51 = 0;
  if ( !v52 )
  {
    v23 = a9;
    goto LABEL_26;
  }
  v16 = v15 + 4;
  v54 = 0LL;
  for ( i = v16; ; v16 = i )
  {
    p_Src = 0LL;
    memset(v64, 0, 0xF8uLL);
    if ( v12 < v16 )
      break;
    v18 = *(_DWORD *)(v59 + 4 * v54);
    if ( (v18 & 0xFF000000) == 0x80000000 )
      v18 &= ~0x80000000;
    if ( v18 != 66050 )
    {
      if ( v18 - 131603 > 5 || (v25 = 55, !_bittest(&v25, v18 - 131603)) )
      {
        if ( v18 != 0xFFFFFF && v18 != 65796 && v18 != -50265850 )
        {
          valid = ndisValidOid(v61, v18);
          LOBYTE(v20) = 0;
          if ( !valid )
            goto LABEL_23;
          if ( v18 == 16843010 )
          {
            if ( *(_DWORD *)(a1 + 464) == 3 )
              v18 = 67174658;
          }
          else if ( v18 == 16843009 && *(_DWORD *)(a1 + 464) == 3 )
          {
            v18 = 67174657;
          }
          if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
          {
            v13 = -1073676282;
            goto LABEL_58;
          }
          if ( a8 )
          {
            v29 = v48;
            v28 = (__int64 *)&v56[v48 / 4];
          }
          else
          {
            v28 = (__int64 *)P;
            v29 = v48;
          }
          if ( *(_BYTE *)(a1 + 32) < 6u
            || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v18),
                (v31 = IsSatisfiedByOidGenStatistics) == 0)
            && v18 != 131334 )
          {
            DeviceOid = ndisQueryDeviceOid(v27, v64, v18, v28, v12 - v29);
            v20 = 0LL;
            v13 = DeviceOid;
            v10 = 0;
            if ( !DeviceOid )
              v10 = v64[13];
LABEL_55:
            p_Src = v20;
            if ( a8 == (_BYTE)v20 )
              p_Src = v28;
            v9 = v56;
LABEL_58:
            if ( v13 )
              goto LABEL_129;
            if ( !v10 )
            {
LABEL_60:
              v21 = v48;
              goto LABEL_20;
            }
LABEL_17:
            if ( !p_Src )
              goto LABEL_60;
            v21 = v48;
            if ( v10 > v12 - v48 )
            {
              v13 = -1073676268;
LABEL_129:
              v23 = v55;
              goto LABEL_26;
            }
            memmove(&v9[v48 / 4], p_Src, v10);
            LOBYTE(v20) = 0;
LABEL_20:
            v22 = v10 + v21;
            *v9 = *(_DWORD *)(v59 + 4 * v54);
            v9[1] = v10;
            if ( a8 == (_BYTE)v20 )
            {
              v12 -= v22;
              v9 = (_DWORD *)((char *)v9 + v22);
              v49 += v22;
            }
            else
            {
              v45 = (v22 + 7) & 0xFFFFFFF8;
              if ( v12 - v21 - 4 >= v45 )
              {
                v9[2] = v45;
                v12 -= v45;
                v22 = (v22 + 7) & 0xFFFFFFF8;
              }
              else
              {
                v9[2] = v22;
                v12 -= v22;
                v45 = v10 + v21;
              }
              v49 += v22;
              v9 = (_DWORD *)((char *)v9 + v45);
            }
            v56 = v9;
LABEL_23:
            v10 = 0;
            goto LABEL_24;
          }
          if ( v47 == (_BYTE)v20 )
          {
            memset(v63, 0, 0x98uLL);
            v33 = ndisQueryDeviceOid(v61, v64, 131334LL, v63, 152);
            v20 = 0LL;
            v13 = v33;
            if ( !v33 )
            {
              v47 = 1;
              goto LABEL_68;
            }
LABEL_72:
            v10 = (unsigned int)v20;
            goto LABEL_55;
          }
LABEL_68:
          v34 = v12 - v29;
          if ( v18 == 131334 )
          {
            v35 = 152LL;
            if ( v34 >= 0x98 )
            {
              v36 = v63;
LABEL_73:
              memmove(v28, v36, v35);
              v20 = 0LL;
              v10 = v35;
              goto LABEL_55;
            }
          }
          else
          {
            v35 = 8LL;
            if ( v34 >= 8 )
            {
              v36 = &v63[v31];
              goto LABEL_73;
            }
          }
          v13 = -1073676268;
          goto LABEL_72;
        }
      }
    }
    v10 = 0;
    v13 = 0;
    switch ( v18 )
    {
      case 0x10202u:
        v19 = *(_DWORD *)(a1 + 1832);
        p_Src = (__int64 *)&Src;
        if ( v19 == 14 )
          v19 = 0;
        Src = v19;
        goto LABEL_16;
      case 0x10104u:
        p_Src = (__int64 *)(a1 + 464);
        goto LABEL_16;
      case 0x20213u:
        p_Src = (__int64 *)(a1 + 1624);
        goto LABEL_16;
      case 0x20214u:
        v44 = *(unsigned __int16 *)(a1 + 1786);
        v43 = *(unsigned __int16 *)(a1 + 1784);
LABEL_121:
        p_Src = (__int64 *)&v50;
        v50 = v43 + v44;
LABEL_16:
        v10 = 4;
        LOBYTE(v20) = 0;
        goto LABEL_17;
      case 0x20215u:
        v43 = *(unsigned __int16 *)(a1 + 1790);
        v44 = *(unsigned __int16 *)(a1 + 1788) << 16;
        goto LABEL_121;
      case 0x20217u:
        v37 = *(_DWORD *)(a1 + 120);
        v38 = *(_DWORD *)(a1 + 1872);
        v46 = v38;
        if ( (v37 & 0x10) != 0 )
        {
          v38 |= 0x1000000u;
          v46 = v38;
        }
        if ( (v37 & 0x20000) != 0 )
        {
          v38 |= 0x400u;
          v46 = v38;
        }
        if ( (v37 & 0x4000000) != 0 )
        {
          v38 |= 0x2000u;
          v46 = v38;
        }
        v39 = *(_DWORD *)(a1 + 124);
        if ( (v39 & 1) != 0 )
        {
          v38 |= 0x8000u;
          v46 = v38;
        }
        if ( (v39 & 0x1000) != 0 )
        {
          v38 |= 0x40000u;
          v46 = v38;
        }
        if ( (v39 & 0x2000) != 0 )
        {
          v38 |= 0x80000u;
          v46 = v38;
        }
        if ( (v39 & 0x200000) != 0 )
        {
          v38 |= 0x400000u;
          v46 = v38;
        }
        if ( (v39 & 0x400000) != 0 )
        {
          v38 |= 2u;
          v46 = v38;
        }
        if ( *(int *)(a1 + 3472) > 0 )
        {
          v38 |= 0x40000000u;
          v46 = v38;
        }
        if ( *(_BYTE *)(a1 + 32) >= 6u )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 200LL) )
            goto LABEL_112;
        }
        else
        {
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 296LL) )
            goto LABEL_113;
LABEL_112:
          v46 = v38 | 0x800000;
        }
LABEL_113:
        if ( ndisCheckForHangSupported(a1) )
        {
          v40 |= 0x80u;
          v46 = v40;
        }
        if ( v41 >= v42 && *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 216LL) )
          v46 = v40 | 8;
        p_Src = (__int64 *)&v46;
        goto LABEL_16;
      case 0x20218u:
        memmove(&ndisFlags, &v9[v48 / 4], 4uLL);
        ndisVerifierInitialization();
        if ( (ndisFlags & 4) == 0 )
          ndisVerifierLevel &= ~4u;
        v64[13] = 4;
        goto LABEL_16;
      case 0xFFFFFFu:
        v53 = MEMORY[0xFFFFF78000000320];
        v53 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
        p_Src = &v53;
        v53 = v53 * KeQueryTimeIncrement() / 10000000;
        goto LABEL_16;
      case 0xFD010106:
        p_Src = (__int64 *)(a1 + 1292);
        goto LABEL_16;
    }
LABEL_24:
    ++v54;
    if ( ++v51 >= v52 )
    {
      v23 = v55;
      goto LABEL_26;
    }
  }
  v23 = v55;
  v13 = -1073676268;
  *v55 = 0;
LABEL_26:
  *v62 = v49;
  if ( *v23 && v13 == -1073741637 )
    v13 = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, v13);
  return v13;
}
