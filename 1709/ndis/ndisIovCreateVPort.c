/*
 * XREFs of ndisIovCreateVPort @ 0x1C00EF384
 * Callers:
 *     ndisOidPreIovCreateVPort @ 0x1C00F00F0 (ndisOidPreIovCreateVPort.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C0001A2C (ndisIovFindSwitchBySwitchId.c)
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisIovDeleteVPort @ 0x1C006BCA8 (ndisIovDeleteVPort.c)
 *     ndisIovFindVFByVFId @ 0x1C00EF72C (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisIovCreateVPort(__int64 a1)
{
  __int64 v1; // rdi
  char *v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rbp
  int v5; // r12d
  char v7; // r14
  _BYTE *OidSourceHandle; // rax
  __int64 v9; // rdi
  __int64 *SwitchBySwitchId; // r15
  _DWORD *v11; // r10
  __int64 VFByVFId; // rax
  char *PoolWithTag; // rax
  __int64 v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _BYTE *v18; // r15
  size_t v19; // r13
  __int64 v20; // rax
  _BYTE *v21; // rcx
  _BYTE *v22; // rax
  _BYTE *v23; // rdi
  __int64 v24; // r8
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  __int64 v29; // [rsp+70h] [rbp+8h]
  _BYTE *v30; // [rsp+78h] [rbp+10h]
  int *v31; // [rsp+80h] [rbp+18h]
  __int64 v32; // [rsp+88h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v29 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  v5 = 0;
  v32 = v1;
  v7 = 1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x2Du, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v4);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 572;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v30 = OidSourceHandle;
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_45;
  }
  v9 = *(_QWORD *)(v1 + 40);
  v31 = (int *)(v9 + 12);
  if ( *(_DWORD *)(v9 + 12) )
    goto LABEL_6;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *(_DWORD *)(v9 + 8));
  if ( !SwitchBySwitchId )
    goto LABEL_6;
  v11 = *(_DWORD **)(v4 + 3584);
  if ( *((_DWORD *)SwitchBySwitchId + 12) == v11[10] || *(_WORD *)(v9 + 16) > 0x200u )
    goto LABEL_6;
  if ( *(_WORD *)(v9 + 532) == 0xFFFF )
  {
    v29 = *(_QWORD *)(v4 + 4712);
    if ( !v29 || *(_DWORD *)(v9 + 544) != 2 )
      goto LABEL_6;
  }
  else
  {
    VFByVFId = ndisIovFindVFByVFId(v4);
    v3 = VFByVFId;
    if ( !VFByVFId || *(_DWORD *)(VFByVFId + 76) || *(_DWORD *)(v9 + 544) != 1 )
      goto LABEL_6;
  }
  if ( (v11[8] & 4) == 0 )
  {
    if ( *(_DWORD *)(v9 + 536) != v11[17] )
      goto LABEL_6;
LABEL_21:
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x6F69444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_22:
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_45;
    }
    memset(PoolWithTag, 0, 0x388uLL);
    *((_QWORD *)v2 + 10) = v30;
    *((_DWORD *)v2 + 26) = 1;
    *((_QWORD *)v2 + 9) = v4;
    *((_QWORD *)v2 + 11) = SwitchBySwitchId;
    if ( v3 )
    {
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 12) = v3;
    }
    else
    {
      *((_QWORD *)v2 + 12) = v29;
    }
    v14 = 5LL;
    v15 = v2 + 112;
    do
    {
      *v15 = *(_OWORD *)v9;
      v15[1] = *(_OWORD *)(v9 + 16);
      v15[2] = *(_OWORD *)(v9 + 32);
      v15[3] = *(_OWORD *)(v9 + 48);
      v15[4] = *(_OWORD *)(v9 + 64);
      v15[5] = *(_OWORD *)(v9 + 80);
      v15[6] = *(_OWORD *)(v9 + 96);
      v15 += 8;
      v16 = *(_OWORD *)(v9 + 112);
      v9 += 128LL;
      *(v15 - 1) = v16;
      --v14;
    }
    while ( v14 );
    *v15 = *(_OWORD *)v9;
    v15[1] = *(_OWORD *)(v9 + 16);
    v15[2] = *(_OWORD *)(v9 + 32);
    v15[3] = *(_OWORD *)(v9 + 48);
    v15[4] = *(_OWORD *)(v9 + 64);
    v15[5] = *(_OWORD *)(v9 + 80);
    v17 = *(_OWORD *)(v9 + 96);
    *((_QWORD *)v2 + 112) = 0LL;
    *((_QWORD *)v2 + 111) = 0LL;
    v15[6] = v17;
    *((_QWORD *)v2 + 110) = v2 + 872;
    *((_QWORD *)v2 + 109) = v2 + 872;
    v18 = *(_BYTE **)(v4 + 4792);
    v19 = *(unsigned int *)(v4 + 4800);
    if ( v18 && (v20 = 0LL, (_DWORD)v19) )
    {
      v21 = *(_BYTE **)(v4 + 4792);
      while ( *v21 == 0xFF )
      {
        v5 += 8;
        v20 = (unsigned int)(v20 + 1);
        ++v21;
        if ( (unsigned int)v20 >= (unsigned int)v19 )
          goto LABEL_33;
      }
      v24 = (unsigned int)v20;
      v25 = 1;
      v26 = (unsigned __int8)v18[v20];
      v27 = 0;
      while ( (v26 & v25) != 0 )
      {
        v25 *= 2;
        if ( (unsigned int)++v27 >= 8 )
          goto LABEL_33;
      }
      v18[v24] = v25 | v26;
      v5 += v27;
    }
    else
    {
LABEL_33:
      v22 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v19 + 64), 0x6F69444Eu);
      v23 = v22;
      if ( !v22 )
        goto LABEL_22;
      memset(&v22[v19], 0, 0x40uLL);
      if ( v18 )
      {
        memmove(v23, v18, v19);
        v23[v19] = 1;
        ExFreePoolWithTag(v18, 0);
      }
      else
      {
        *v23 = 3;
        v5 = 1;
      }
      *(_QWORD *)(v4 + 4792) = v23;
      *(_DWORD *)(v4 + 4800) = v19 + 64;
    }
    *((_DWORD *)v2 + 31) = v5;
    *v31 = v5;
    *(_QWORD *)(v32 + 152) = v2;
    *(_DWORD *)(a1 + 40) = 0;
    v7 = 0;
    goto LABEL_45;
  }
  if ( *(_DWORD *)(v9 + 536) <= (unsigned int)(v11[13]
                                             - *((_DWORD *)SwitchBySwitchId + 162)
                                             - *((_DWORD *)SwitchBySwitchId + 24)) )
    goto LABEL_21;
LABEL_6:
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_45:
  if ( *(_DWORD *)(a1 + 40) && v2 )
    ndisIovDeleteVPort(v2);
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x2Eu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v4, *(_DWORD *)(a1 + 40));
  return v7;
}
