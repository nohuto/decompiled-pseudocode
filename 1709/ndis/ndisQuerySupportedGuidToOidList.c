/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x1C00AE288
 * Callers:
 *     ndisWmiRegister @ 0x1C00B6C4C (ndisWmiRegister.c)
 * Callees:
 *     ndisQuerySetMiniportEx2 @ 0x1C0003500 (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisWmiMapOids @ 0x1C00AE6E0 (ndisWmiMapOids.c)
 *     ndisQueryCustomGuids @ 0x1C00AE7A0 (ndisQueryCustomGuids.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(__int64 a1)
{
  __int64 v1; // rdi
  char *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned int v5; // eax
  PVOID v6; // r12
  unsigned int v7; // ebx
  UINT v8; // r14d
  unsigned __int16 v9; // r10
  unsigned __int16 i; // r8
  unsigned __int16 v11; // dx
  int v12; // r9d
  unsigned __int16 v13; // ax
  int v14; // r8d
  int v15; // r9d
  __int16 v16; // ax
  __int16 v17; // bx
  unsigned __int16 v18; // bx
  int *v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  char *PoolWithTag; // rax
  void *v23; // r15
  _DWORD *v24; // rcx
  unsigned __int16 v25; // r10
  __int64 v26; // r8
  int v27; // edx
  unsigned __int16 v28; // ax
  int v29; // r8d
  int v30; // r9d
  unsigned __int16 v31; // ax
  int v32; // r8d
  int v33; // r9d
  unsigned __int16 v34; // r8
  __int64 v35; // rdx
  _OWORD *v36; // rax
  char *v37; // rcx
  __int128 v38; // xmm1
  __int64 v40; // rdx
  __int16 v41; // r14
  char *v42; // rbx
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+30h] [rbp-D8h]
  int v45; // [rsp+58h] [rbp-B0h] BYREF
  UINT v46; // [rsp+5Ch] [rbp-ACh] BYREF
  UINT v47; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  void *Src; // [rsp+70h] [rbp-98h] BYREF
  __int64 v50; // [rsp+78h] [rbp-90h]
  _BYTE v51[248]; // [rsp+88h] [rbp-80h] BYREF

  v50 = a1;
  v1 = a1;
  v46 = 0;
  P = 0LL;
  LOWORD(v45) = 0;
  Src = 0LL;
  v2 = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_q(0x12u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, v1);
  memset(v51, 0, sizeof(v51));
  *(_DWORD *)&v51[88] |= 8u;
  *(_QWORD *)&v51[104] = &ndisIntReqWmi;
  *(_QWORD *)v51 = 15466902LL;
  *(_DWORD *)&v51[32] = 65793;
  *(_DWORD *)&v51[8] = 0;
  *(_QWORD *)&v51[40] = 0LL;
  *(_DWORD *)&v51[48] = 0;
  v5 = ndisQuerySetMiniportEx2(
         (void *)v1,
         v3,
         (struct _NDIS_OID_REQUEST *)v51,
         v4,
         v43,
         v44,
         0x3277444Eu,
         &P,
         &v46,
         &v47);
  v6 = P;
  v7 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)byte_1C0098759 >= 4u )
      WPP_SF_q(0x13u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, v1);
  }
  else
  {
    v8 = v47 >> 2;
    v9 = 0;
    for ( i = 0; i < 0x52u; ++i )
    {
      v11 = 0;
      if ( (_WORD)v8 )
      {
        v12 = *((_DWORD *)&ndisSupportedGuids + 7 * i + 4);
        while ( !v12 || v12 != *((_DWORD *)P + v11) )
        {
          if ( ++v11 >= (unsigned __int16)v8 )
            goto LABEL_12;
        }
        ++v9;
      }
LABEL_12:
      ;
    }
    v13 = ndisWmiMapOids(0, v9, (_DWORD)P, (unsigned __int16)v8, (__int64)&ndisCoSupportedGuids, 16);
    v16 = ndisWmiMapOids(0, v13, v14, v15, (__int64)&ndisMediaSupportedGuids, 49);
    v1 = v50;
    v17 = v16;
    if ( !(unsigned int)ndisQueryCustomGuids(v50, v51, &Src, &v45) )
      v17 += v45;
    v18 = v17 + 38;
    v19 = (int *)&unk_1C01183B8;
    v20 = 82LL;
    do
    {
      v21 = *v19;
      if ( (*v19 & 0x20000000) != 0
        && ((v21 & 0x1000000) == 0 || *(_QWORD *)(v1 + 4128))
        && ((v21 & 0x10000000) == 0 || (*(_DWORD *)(v1 + 120) & 0x20000) != 0) )
      {
        ++v18;
      }
      v19 += 7;
      --v20;
    }
    while ( v20 );
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 28LL * v18, 0x3177444Eu);
    v23 = Src;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 28LL * v18);
      v24 = &ndisSupportedGuids;
      v25 = 0;
      v26 = 82LL;
      do
      {
        v27 = v24[6];
        if ( (v27 & 0x20000000) != 0
          && ((v27 & 0x1000000) == 0 || *(_QWORD *)(v1 + 4128))
          && ((*(_DWORD *)(v1 + 120) & 0x20000) != 0 || (v27 & 0x10000000) == 0) )
        {
          v40 = 28LL * v25;
          *(_OWORD *)&v2[v40] = *(_OWORD *)v24;
          *(_QWORD *)&v2[v40 + 16] = *((_QWORD *)v24 + 2);
          *(_DWORD *)&v2[v40 + 24] = v24[6];
          if ( (*(_DWORD *)(v1 + 120) & 0x20000) != 0 )
            *(_DWORD *)&v2[v40 + 24] |= 0x10000000u;
          ++v25;
        }
        v24 += 7;
        --v26;
      }
      while ( v26 );
      v28 = ndisWmiMapOids((_DWORD)v2, v25, (_DWORD)v6, (unsigned __int16)v8, (__int64)&ndisSupportedGuids, 82);
      v31 = ndisWmiMapOids((_DWORD)v2, v28, v29, v30, (__int64)&ndisCoSupportedGuids, 16);
      v34 = ndisWmiMapOids((_DWORD)v2, v31, v32, v33, (__int64)&ndisMediaSupportedGuids, 49);
      v35 = 8LL;
      v36 = &ndisStatusSupportedGuids;
      v37 = &v2[28 * v34];
      do
      {
        *(_OWORD *)v37 = *v36;
        *((_OWORD *)v37 + 1) = v36[1];
        *((_OWORD *)v37 + 2) = v36[2];
        *((_OWORD *)v37 + 3) = v36[3];
        *((_OWORD *)v37 + 4) = v36[4];
        *((_OWORD *)v37 + 5) = v36[5];
        *((_OWORD *)v37 + 6) = v36[6];
        v37 += 128;
        v38 = v36[7];
        v36 += 8;
        *((_OWORD *)v37 - 1) = v38;
        --v35;
      }
      while ( v35 );
      *(_OWORD *)v37 = *v36;
      *((_OWORD *)v37 + 1) = v36[1];
      *((_QWORD *)v37 + 4) = *((_QWORD *)v36 + 4);
      *(_QWORD *)(v1 + 1368) = v2;
      *(_WORD *)(v1 + 1386) = v18;
      if ( v23 )
      {
        v41 = v45;
        v42 = &v2[28 * (unsigned __int16)(v34 + 38)];
        memmove(v42, v23, 28LL * (unsigned __int16)v45);
        *(_QWORD *)(v1 + 1376) = v42;
        *(_WORD *)(v1 + 1388) = v41;
      }
      else
      {
        *(_QWORD *)(v1 + 1376) = 0LL;
        *(_WORD *)(v1 + 1388) = 0;
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741670;
    }
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_qD(0x14u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, v1, v7);
  return v7;
}
