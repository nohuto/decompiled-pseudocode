/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C00B00DC
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisVerifierInitialization @ 0x1C0014C54 (ndisVerifierInitialization.c)
 *     ndisCheckForHangSupported @ 0x1C0024814 (ndisCheckForHangSupported.c)
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C002509C (ndisIsSatisfiedByOidGenStatistics.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisQueryDeviceOid @ 0x1C00AC7DC (ndisQueryDeviceOid.c)
 *     ndisValidOid @ 0x1C00B0474 (ndisValidOid.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        SIZE_T NumberOfBytes,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  __int64 v9; // rax
  unsigned int v11; // r12d
  int v12; // esi
  char *PoolWithTag; // r15
  unsigned int v14; // r14d
  int v15; // edi
  void *v16; // rcx
  __int64 *v17; // r9
  __int64 v18; // rbx
  unsigned int v19; // edi
  __int64 *p_Src; // rsi
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  int v23; // eax
  __int64 *v24; // r9
  __int64 v25; // rbx
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  _BYTE *v28; // rax
  int v30; // ecx
  char valid; // al
  __int64 v32; // r10
  unsigned int v33; // r8d
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v35; // rsi
  unsigned int DeviceOid; // eax
  unsigned int v37; // eax
  unsigned int v38; // edi
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  unsigned __int8 v42; // r8
  int v43; // edx
  unsigned __int8 v44; // r8
  unsigned __int8 v45; // r10
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // eax
  unsigned int *v50; // r8
  int v51; // [rsp+30h] [rbp-D0h] BYREF
  char v52; // [rsp+34h] [rbp-CCh]
  int v53; // [rsp+38h] [rbp-C8h]
  unsigned int v54; // [rsp+3Ch] [rbp-C4h]
  int v55; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v56; // [rsp+48h] [rbp-B8h]
  int v57; // [rsp+50h] [rbp-B0h]
  unsigned int v58; // [rsp+54h] [rbp-ACh]
  __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  unsigned int v62; // [rsp+70h] [rbp-90h]
  int Src; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  _DWORD *v67; // [rsp+90h] [rbp-70h]
  _BYTE v68[160]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v69[64]; // [rsp+140h] [rbp+40h] BYREF

  v9 = (__int64)a5;
  v11 = NumberOfBytes;
  v65 = a2;
  v12 = 0;
  v53 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v51 = 0;
  v52 = 0;
  v58 = a4;
  v66 = a3;
  v56 = a5;
  v67 = a7;
  v60 = a9;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_q(0x1Eu, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1);
    v9 = (__int64)v56;
  }
  v14 = 0;
  *a7 = 0;
  if ( a8 )
  {
    v15 = 12;
    v16 = (void *)v9;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v15 = 8;
    v16 = PoolWithTag;
  }
  v54 = v15;
  memset(v16, 0, (unsigned int)NumberOfBytes);
  LODWORD(v17) = 0;
  v57 = 0;
  if ( !v58 )
  {
    v28 = v60;
    goto LABEL_26;
  }
  v18 = 0LL;
  v61 = 0LL;
  v62 = v15 + 4;
  while ( 1 )
  {
    v19 = 0;
    p_Src = 0LL;
    memset(v69, 0, 0xF8uLL);
    if ( v11 < v62 )
      break;
    v21 = *(_DWORD *)(v66 + 4 * v18);
    v22 = v21 & 0x7FFFFFFF;
    if ( (v21 & 0xFF000000) != 0x80000000 )
      v22 = v21;
    if ( v22 == 66050
      || v22 - 131603 <= 5 && (v30 = 55, _bittest(&v30, v22 - 131603))
      || v22 == 0xFFFFFF
      || v22 == 65796
      || v22 == -50265850 )
    {
      LODWORD(v17) = 0;
      v14 = 0;
      if ( v22 == 66050 )
      {
        v23 = *(_DWORD *)(a1 + 1832);
        p_Src = (__int64 *)&Src;
        if ( v23 == 14 )
          v23 = 0;
        Src = v23;
        goto LABEL_16;
      }
      if ( v22 == 65796 )
      {
        p_Src = (__int64 *)(a1 + 464);
        goto LABEL_16;
      }
      if ( v22 == 131603 )
      {
        p_Src = (__int64 *)(a1 + 1624);
        goto LABEL_16;
      }
      if ( v22 == 131604 )
      {
        v47 = *(unsigned __int16 *)(a1 + 1786);
        v46 = *(unsigned __int16 *)(a1 + 1784);
      }
      else
      {
        if ( v22 != 131605 )
        {
          if ( v22 == 131607 )
          {
            v39 = *(_DWORD *)(a1 + 120);
            v40 = *(_DWORD *)(a1 + 1872);
            v51 = v40;
            if ( (v39 & 0x10) != 0 )
            {
              v40 |= 0x1000000u;
              v51 = v40;
            }
            if ( (v39 & 0x20000) != 0 )
            {
              v40 |= 0x400u;
              v51 = v40;
            }
            if ( (v39 & 0x4000000) != 0 )
            {
              v40 |= 0x2000u;
              v51 = v40;
            }
            v41 = *(_DWORD *)(a1 + 124);
            if ( (v41 & 1) != 0 )
            {
              v40 |= 0x8000u;
              v51 = v40;
            }
            if ( (v41 & 0x1000) != 0 )
            {
              v40 |= 0x40000u;
              v51 = v40;
            }
            if ( (v41 & 0x2000) != 0 )
            {
              v40 |= 0x80000u;
              v51 = v40;
            }
            if ( (v41 & 0x200000) != 0 )
            {
              v40 |= 0x400000u;
              v51 = v40;
            }
            if ( (v41 & 0x400000) != 0 )
            {
              v40 |= 2u;
              v51 = v40;
            }
            if ( *(int *)(a1 + 3472) > 0 )
            {
              v40 |= 0x40000000u;
              v51 = v40;
            }
            v42 = *(_BYTE *)(a1 + 32);
            if ( v42 < 6u && *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 296LL)
              || v42 >= 6u && *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 200LL) )
            {
              v51 = v40 | 0x800000;
            }
            if ( ndisCheckForHangSupported(a1) )
            {
              v43 |= 0x80u;
              v51 = v43;
            }
            if ( v44 >= v45 && *(__int64 **)(*(_QWORD *)(a1 + 3784) + 216LL) != v17 )
              v51 = v43 | 8;
            p_Src = (__int64 *)&v51;
          }
          else
          {
            switch ( v22 )
            {
              case 0x20218u:
                memmove((char *)&WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink + 4, (char *)v56 + v54, 4uLL);
                p_Src = 0LL;
                ndisVerifierInitialization();
                if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
                  ndisVerifierLevel &= ~4u;
                v69[13] = 4;
                break;
              case 0xFFFFFFu:
                v59 = MEMORY[0xFFFFF78000000320];
                v59 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
                p_Src = &v59;
                v59 = v59 * KeQueryTimeIncrement() / 10000000;
                break;
              case 0xFD010106:
                p_Src = (__int64 *)(a1 + 1292);
                goto LABEL_16;
              default:
LABEL_131:
                v25 = v61;
                goto LABEL_23;
            }
            LODWORD(v17) = 0;
          }
LABEL_16:
          v19 = 4;
LABEL_17:
          if ( p_Src )
          {
            if ( v19 > v11 - v54 )
            {
              v14 = -1073676268;
LABEL_24:
              v28 = v60;
              goto LABEL_25;
            }
            memmove((char *)v56 + v54, p_Src, v19);
          }
          goto LABEL_20;
        }
        v46 = *(unsigned __int16 *)(a1 + 1790);
        v47 = *(unsigned __int16 *)(a1 + 1788) << 16;
      }
      p_Src = (__int64 *)&v55;
      v55 = v46 + v47;
      goto LABEL_16;
    }
    valid = ndisValidOid(v65, v22);
    LODWORD(v17) = 0;
    if ( !valid )
      goto LABEL_131;
    if ( v22 == 16843010 )
    {
      if ( *(_DWORD *)(a1 + 464) == 3 )
        v22 = 67174658;
    }
    else if ( v22 == 16843009 )
    {
      v22 = 16843009;
      if ( *(_DWORD *)(a1 + 464) == 3 )
        v22 = 67174657;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
    {
      v14 = -1073676282;
      goto LABEL_57;
    }
    v33 = v54;
    if ( a8 )
      PoolWithTag = (char *)v56 + v54;
    if ( *(_BYTE *)(a1 + 32) < 6u
      || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v22),
          (v35 = IsSatisfiedByOidGenStatistics) == 0)
      && v22 != 131334 )
    {
      DeviceOid = ndisQueryDeviceOid(v32, v69, v22, (__int64)PoolWithTag, v11 - v33);
      v17 = 0LL;
      v14 = DeviceOid;
      v19 = 0;
      if ( !DeviceOid )
        v19 = v69[13];
      goto LABEL_55;
    }
    if ( v52 == (_BYTE)v17 )
    {
      memset(v68, 0, 0x98uLL);
      v37 = ndisQueryDeviceOid(v65, v69, 131334, (__int64)v68, 152);
      v17 = 0LL;
      v14 = v37;
      if ( v37 )
        goto LABEL_69;
      v52 = 1;
    }
    v38 = v11 - v54;
    if ( v22 == 131334 )
    {
      if ( v38 >= 0x98 )
        memmove(PoolWithTag, v68, 0x98uLL);
      else
        v14 = -1073676268;
      v19 = v38 >= 0x98 ? 0x98 : 0;
    }
    else
    {
      if ( v38 < 8 )
      {
        v14 = -1073676268;
LABEL_69:
        v19 = (unsigned int)v17;
        goto LABEL_55;
      }
      memmove(PoolWithTag, &v68[v35], 8uLL);
      v19 = 8;
    }
    v17 = 0LL;
LABEL_55:
    p_Src = v17;
    if ( a8 == (_BYTE)v17 )
      p_Src = (__int64 *)PoolWithTag;
LABEL_57:
    if ( v14 )
      goto LABEL_24;
    if ( v19 )
      goto LABEL_17;
LABEL_20:
    v24 = v56;
    v25 = v61;
    v26 = v54;
    *(_DWORD *)v56 = *(_DWORD *)(v66 + 4 * v61);
    v27 = v19 + v26;
    *((_DWORD *)v24 + 1) = v19;
    if ( a8 )
    {
      v48 = (v27 + 7) & 0xFFFFFFF8;
      v49 = v11 - v26 - 4;
      v50 = (unsigned int *)(v24 + 1);
      if ( v49 >= v48 )
        v11 -= v48;
      else
        v11 -= v27;
      if ( v49 >= v48 )
        v27 = (v27 + 7) & 0xFFFFFFF8;
      v17 = (__int64 *)((char *)v24 + v27);
      *v50 = v27;
      v53 += v27;
    }
    else
    {
      v11 -= v27;
      v17 = (__int64 *)((char *)v24 + v27);
      v53 += v27;
    }
    v56 = v17;
    LODWORD(v17) = 0;
LABEL_23:
    v18 = v25 + 1;
    v61 = v18;
    if ( ++v57 >= v58 )
      goto LABEL_24;
    PoolWithTag = (char *)P;
  }
  v28 = v60;
  LODWORD(v17) = 0;
  v14 = -1073676268;
  *v60 = 0;
LABEL_25:
  v12 = v53;
LABEL_26:
  *v67 = v12;
  if ( *v28 != (_BYTE)v17 && v14 == -1073741637 )
    v14 = (unsigned int)v17;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, v14);
  return v14;
}
