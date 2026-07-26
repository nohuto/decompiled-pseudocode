/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C00B640C
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisCheckForHangSupported @ 0x1C0002A10 (ndisCheckForHangSupported.c)
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C0023020 (ndisIsSatisfiedByOidGenStatistics.c)
 *     ndisVerifierInitialization @ 0x1C0023164 (ndisVerifierInitialization.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisValidOid @ 0x1C00C2238 (ndisValidOid.c)
 *     ndisQueryDeviceOid @ 0x1C00C91E4 (ndisQueryDeviceOid.c)
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
  int v10; // esi
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  __int64 *v15; // r11
  int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 *p_Src; // rsi
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  _BYTE *v24; // rax
  int v26; // ecx
  char valid; // al
  __int64 v28; // r10
  __int64 *v29; // r15
  unsigned int v30; // esi
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v32; // rdi
  unsigned int DeviceOid; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  size_t v36; // rbx
  _BYTE *v37; // rdx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  __int64 v41; // r8
  int v42; // edx
  __int64 v43; // r8
  unsigned __int8 v44; // r9
  int v45; // eax
  int v46; // ecx
  unsigned int v47; // edx
  int v48; // [rsp+30h] [rbp-D0h] BYREF
  char v49; // [rsp+34h] [rbp-CCh]
  int v50; // [rsp+38h] [rbp-C8h]
  unsigned int v51; // [rsp+3Ch] [rbp-C4h]
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh]
  unsigned int v54; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+58h] [rbp-A8h]
  _BYTE *v57; // [rsp+60h] [rbp-A0h]
  _DWORD *v58; // [rsp+68h] [rbp-98h]
  int Src; // [rsp+70h] [rbp-90h] BYREF
  unsigned int i; // [rsp+74h] [rbp-8Ch]
  __int64 v61; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  _DWORD *v64; // [rsp+90h] [rbp-70h]
  _BYTE v65[160]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v66[64]; // [rsp+140h] [rbp+40h] BYREF

  v9 = a5;
  v10 = 0;
  P = 0LL;
  v48 = 0;
  v12 = NumberOfBytes;
  v49 = 0;
  v54 = a4;
  v61 = a3;
  v63 = a2;
  v58 = a5;
  v64 = a7;
  v57 = a9;
  v50 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1);
  *a7 = 0;
  v13 = 0;
  if ( a8 )
  {
    v16 = 12;
    v51 = 12;
    memset(a5, 0, (unsigned int)NumberOfBytes);
    v15 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    v15 = 0LL;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v16 = 8;
    v51 = 8;
  }
  v53 = 0;
  if ( !v54 )
  {
    v24 = v57;
    goto LABEL_26;
  }
  v17 = v16 + 4;
  v56 = 0LL;
  for ( i = v17; ; v17 = i )
  {
    v18 = (unsigned int)v15;
    p_Src = v15;
    memset(v66, 0, 0xF8uLL);
    if ( v12 < v17 )
      break;
    v20 = *(_DWORD *)(v61 + 4 * v56);
    if ( (v20 & 0xFF000000) == 0x80000000 )
      v20 &= ~0x80000000;
    if ( v20 != 66050 )
    {
      if ( v20 - 131603 > 5 || (v26 = 55, !_bittest(&v26, v20 - 131603)) )
      {
        if ( v20 != 0xFFFFFF && v20 != 65796 && v20 != -50265850 )
        {
          valid = ndisValidOid(v63, v20);
          v15 = 0LL;
          if ( !valid )
            goto LABEL_23;
          if ( v20 == 16843010 )
          {
            if ( *(_DWORD *)(a1 + 464) == 3 )
              v20 = 67174658;
          }
          else if ( v20 == 16843009 && *(_DWORD *)(a1 + 464) == 3 )
          {
            v20 = 67174657;
          }
          if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
          {
            v13 = -1073676282;
            goto LABEL_58;
          }
          if ( a8 )
          {
            v30 = v51;
            v29 = (__int64 *)&v58[v51 / 4];
          }
          else
          {
            v29 = (__int64 *)P;
            v30 = v51;
          }
          if ( *(_BYTE *)(a1 + 32) < 6u
            || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v20),
                (v32 = IsSatisfiedByOidGenStatistics) == 0)
            && v20 != 131334 )
          {
            DeviceOid = ndisQueryDeviceOid(v28, v66, v20, v29, v12 - v30);
            v15 = 0LL;
            v13 = DeviceOid;
            v18 = 0;
            if ( !DeviceOid )
              v18 = v66[13];
LABEL_55:
            p_Src = v15;
            if ( a8 == (_BYTE)v15 )
              p_Src = v29;
            v9 = v58;
LABEL_58:
            if ( v13 )
              goto LABEL_24;
            if ( !v18 )
              goto LABEL_60;
            goto LABEL_17;
          }
          if ( v49 == (_BYTE)v15 )
          {
            memset(v65, 0, 0x98uLL);
            v34 = ndisQueryDeviceOid(v63, v66, 131334LL, v65, 152);
            v15 = 0LL;
            v13 = v34;
            if ( !v34 )
            {
              v49 = 1;
              goto LABEL_68;
            }
LABEL_72:
            v18 = (unsigned int)v15;
            goto LABEL_55;
          }
LABEL_68:
          v35 = v12 - v30;
          if ( v20 == 131334 )
          {
            v36 = 152LL;
            if ( v35 >= 0x98 )
            {
              v37 = v65;
LABEL_73:
              memmove(v29, v37, v36);
              v15 = 0LL;
              v18 = v36;
              goto LABEL_55;
            }
          }
          else
          {
            v36 = 8LL;
            if ( v35 >= 8 )
            {
              v37 = &v65[v32];
              goto LABEL_73;
            }
          }
          v13 = -1073676268;
          goto LABEL_72;
        }
      }
    }
    v15 = 0LL;
    v13 = 0;
    switch ( v20 )
    {
      case 0x10202u:
        v21 = *(_DWORD *)(a1 + 1832);
        p_Src = (__int64 *)&Src;
        if ( v21 == 14 )
          v21 = 0;
        Src = v21;
        goto LABEL_16;
      case 0x10104u:
        p_Src = (__int64 *)(a1 + 464);
        goto LABEL_16;
      case 0x20213u:
        p_Src = (__int64 *)(a1 + 1624);
        goto LABEL_16;
      case 0x20214u:
        v46 = *(unsigned __int16 *)(a1 + 1786);
        v45 = *(unsigned __int16 *)(a1 + 1784);
        goto LABEL_122;
      case 0x20215u:
        v45 = *(unsigned __int16 *)(a1 + 1790);
        v46 = *(unsigned __int16 *)(a1 + 1788) << 16;
LABEL_122:
        p_Src = (__int64 *)&v52;
        v52 = v45 + v46;
        goto LABEL_16;
      case 0x20217u:
        v38 = *(_DWORD *)(a1 + 120);
        v39 = *(_DWORD *)(a1 + 1872);
        v48 = v39;
        if ( (v38 & 0x10) != 0 )
        {
          v39 |= 0x1000000u;
          v48 = v39;
        }
        if ( (v38 & 0x20000) != 0 )
        {
          v39 |= 0x400u;
          v48 = v39;
        }
        if ( (v38 & 0x4000000) != 0 )
        {
          v39 |= 0x2000u;
          v48 = v39;
        }
        v40 = *(_DWORD *)(a1 + 124);
        if ( (v40 & 1) != 0 )
        {
          v39 |= 0x8000u;
          v48 = v39;
        }
        if ( (v40 & 0x1000) != 0 )
        {
          v39 |= 0x40000u;
          v48 = v39;
        }
        if ( (v40 & 0x2000) != 0 )
        {
          v39 |= 0x80000u;
          v48 = v39;
        }
        if ( (v40 & 0x200000) != 0 )
        {
          v39 |= 0x400000u;
          v48 = v39;
        }
        if ( (v40 & 0x400000) != 0 )
        {
          v39 |= 2u;
          v48 = v39;
        }
        if ( *(int *)(a1 + 3472) > 0 )
        {
          v39 |= 0x40000000u;
          v48 = v39;
        }
        v41 = *(_QWORD *)(a1 + 3784);
        if ( *(_BYTE *)(a1 + 32) >= 6u )
        {
          if ( *(_QWORD *)(v41 + 200) )
            goto LABEL_113;
        }
        else if ( *(_QWORD *)(v41 + 296) )
        {
LABEL_113:
          v48 = v39 | 0x800000;
        }
        if ( ndisCheckForHangSupported(a1) )
        {
          v42 |= 0x80u;
          v48 = v42;
        }
        if ( v44 >= 6u && *(__int64 **)(v43 + 216) != v15 )
          v48 = v42 | 8;
        p_Src = (__int64 *)&v48;
        goto LABEL_16;
      case 0x20218u:
        memmove(&ndisFlags, &v9[v51 / 4], 4uLL);
        p_Src = 0LL;
        ndisVerifierInitialization();
        if ( (ndisFlags & 4) == 0 )
          ndisVerifierLevel &= ~4u;
        v66[13] = 4;
        break;
      case 0xFFFFFFu:
        v55 = MEMORY[0xFFFFF78000000320];
        v55 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
        p_Src = &v55;
        v55 = v55 * KeQueryTimeIncrement() / 10000000;
        break;
      case 0xFD010106:
        p_Src = (__int64 *)(a1 + 1292);
        goto LABEL_16;
      default:
        goto LABEL_23;
    }
    v15 = 0LL;
LABEL_16:
    v18 = 4;
LABEL_17:
    if ( p_Src )
    {
      v22 = v51;
      if ( v18 > v12 - v51 )
      {
        v13 = -1073676268;
LABEL_24:
        v24 = v57;
        goto LABEL_25;
      }
      memmove(&v9[v51 / 4], p_Src, v18);
      v15 = 0LL;
      goto LABEL_20;
    }
LABEL_60:
    v22 = v51;
LABEL_20:
    v23 = v18 + v22;
    *v9 = *(_DWORD *)(v61 + 4 * v56);
    v9[1] = v18;
    if ( a8 == (_BYTE)v15 )
    {
      v12 -= v23;
      v9 = (_DWORD *)((char *)v9 + v23);
      v50 += v23;
    }
    else
    {
      v47 = (v23 + 7) & 0xFFFFFFF8;
      if ( v12 - v22 - 4 >= v47 )
      {
        v9[2] = v47;
        v12 -= v47;
        v23 = (v23 + 7) & 0xFFFFFFF8;
      }
      else
      {
        v9[2] = v23;
        v12 -= v23;
      }
      v50 += v23;
      v9 = (_DWORD *)((char *)v9 + v23);
    }
    v58 = v9;
LABEL_23:
    ++v56;
    if ( ++v53 >= v54 )
      goto LABEL_24;
  }
  v24 = v57;
  LODWORD(v15) = 0;
  v13 = -1073676268;
  *v57 = 0;
LABEL_25:
  v10 = v50;
LABEL_26:
  *v64 = v10;
  if ( *v24 != (_BYTE)v15 && v13 == -1073741637 )
    v13 = (unsigned int)v15;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, v13);
  return v13;
}
