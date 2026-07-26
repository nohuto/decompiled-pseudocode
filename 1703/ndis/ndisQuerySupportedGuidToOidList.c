/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x1C00B93F0
 * Callers:
 *     ndisWmiRegister @ 0x1C00B9248 (ndisWmiRegister.c)
 * Callees:
 *     ndisQuerySetMiniportEx2 @ 0x1C001D418 (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisWmiMapOids @ 0x1C00B9810 (ndisWmiMapOids.c)
 *     ndisQueryCustomGuids @ 0x1C00B98D4 (ndisQueryCustomGuids.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(__int64 a1)
{
  char *v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  PVOID v7; // r12
  unsigned int v8; // ebx
  int v9; // r9d
  unsigned __int16 v10; // ax
  int v11; // r8d
  int v12; // r9d
  unsigned __int16 v13; // ax
  int v14; // r8d
  int v15; // r9d
  __int16 v16; // bx
  unsigned __int16 v17; // bx
  int *v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  char *PoolWithTag; // rax
  void *v22; // r14
  _DWORD *v23; // rcx
  unsigned __int16 v24; // r10
  __int64 v25; // r8
  int v26; // edx
  unsigned __int16 v27; // ax
  int v28; // r8d
  int v29; // r9d
  unsigned __int16 v30; // ax
  int v31; // r8d
  int v32; // r9d
  unsigned __int16 v33; // r8
  _OWORD *v34; // rax
  char *v35; // rcx
  __int128 v36; // xmm1
  __int64 v38; // rdx
  unsigned __int16 v39; // r15
  char *v40; // rbx
  int v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v43[2]; // [rsp+50h] [rbp-B0h] BYREF
  UINT v44; // [rsp+54h] [rbp-ACh] BYREF
  UINT v45; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v48[248]; // [rsp+70h] [rbp-90h] BYREF

  v45 = 0;
  P = 0LL;
  v43[0] = 0;
  Src = 0LL;
  v2 = 0LL;
  memset(v48, 0, sizeof(v48));
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_q(0x12u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
  memset(v48, 0, sizeof(v48));
  *(_QWORD *)v48 = 15466902LL;
  *(_QWORD *)&v48[104] = &ndisIntReqWmi;
  *(_DWORD *)&v48[32] = 65793;
  v3 = 8LL;
  *(_DWORD *)&v48[88] |= 8u;
  *(_DWORD *)&v48[8] = 0;
  *(_QWORD *)&v48[40] = 0LL;
  *(_DWORD *)&v48[48] = 0;
  v6 = ndisQuerySetMiniportEx2(
         (_DWORD *)a1,
         v4,
         (struct _NDIS_OID_REQUEST *)v48,
         v5,
         v41,
         v42,
         0x3277444Eu,
         &P,
         &v45,
         &v44);
  v7 = P;
  v8 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 4u )
      WPP_SF_q(0x13u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
  }
  else
  {
    v9 = (unsigned __int16)(v44 >> 2);
    v44 >>= 2;
    v10 = ndisWmiMapOids(0, 0, (_DWORD)P, v9, (__int64)&ndisSupportedGuids, 82);
    v13 = ndisWmiMapOids(0, v10, v11, v12, (__int64)&ndisCoSupportedGuids, 16);
    v16 = ndisWmiMapOids(0, v13, v14, v15, (__int64)&ndisMediaSupportedGuids, 49);
    if ( !(unsigned int)ndisQueryCustomGuids(a1, v48, &Src, v43) )
      v16 += v43[0];
    v17 = v16 + 38;
    v18 = (int *)&unk_1C010F3B8;
    v19 = 82LL;
    do
    {
      v20 = *v18;
      if ( (*v18 & 0x20000000) != 0
        && ((v20 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4128))
        && ((v20 & 0x10000000) == 0 || (*(_DWORD *)(a1 + 120) & 0x20000) != 0) )
      {
        ++v17;
      }
      v18 += 7;
      --v19;
    }
    while ( v19 );
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 28LL * v17, 0x3177444Eu);
    v22 = Src;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 28LL * v17);
      v23 = &ndisSupportedGuids;
      v24 = 0;
      v25 = 82LL;
      do
      {
        v26 = v23[6];
        if ( (v26 & 0x20000000) != 0
          && ((v26 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4128))
          && ((*(_DWORD *)(a1 + 120) & 0x20000) != 0 || (v26 & 0x10000000) == 0) )
        {
          v38 = 28LL * v24;
          *(_OWORD *)&v2[v38] = *(_OWORD *)v23;
          *(_QWORD *)&v2[v38 + 16] = *((_QWORD *)v23 + 2);
          *(_DWORD *)&v2[v38 + 24] = v23[6];
          if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
            *(_DWORD *)&v2[v38 + 24] |= 0x10000000u;
          ++v24;
        }
        v23 += 7;
        --v25;
      }
      while ( v25 );
      v27 = ndisWmiMapOids((_DWORD)v2, v24, (_DWORD)v7, (unsigned __int16)v44, (__int64)&ndisSupportedGuids, 82);
      v30 = ndisWmiMapOids((_DWORD)v2, v27, v28, v29, (__int64)&ndisCoSupportedGuids, 16);
      v33 = ndisWmiMapOids((_DWORD)v2, v30, v31, v32, (__int64)&ndisMediaSupportedGuids, 49);
      v34 = &ndisStatusSupportedGuids;
      v35 = &v2[28 * v33];
      do
      {
        *(_OWORD *)v35 = *v34;
        *((_OWORD *)v35 + 1) = v34[1];
        *((_OWORD *)v35 + 2) = v34[2];
        *((_OWORD *)v35 + 3) = v34[3];
        *((_OWORD *)v35 + 4) = v34[4];
        *((_OWORD *)v35 + 5) = v34[5];
        *((_OWORD *)v35 + 6) = v34[6];
        v35 += 128;
        v36 = v34[7];
        v34 += 8;
        *((_OWORD *)v35 - 1) = v36;
        --v3;
      }
      while ( v3 );
      *(_OWORD *)v35 = *v34;
      *((_OWORD *)v35 + 1) = v34[1];
      *((_QWORD *)v35 + 4) = *((_QWORD *)v34 + 4);
      *(_QWORD *)(a1 + 1368) = v2;
      *(_WORD *)(a1 + 1386) = v17;
      if ( v22 )
      {
        v39 = v43[0];
        v40 = &v2[28 * (unsigned __int16)(v33 + 38)];
        memmove(v40, v22, 28LL * v43[0]);
        *(_WORD *)(a1 + 1388) = v39;
        *(_QWORD *)(a1 + 1376) = v40;
      }
      else
      {
        *(_QWORD *)(a1 + 1376) = 0LL;
        *(_WORD *)(a1 + 1388) = 0;
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_qD(0x14u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, v8);
  return v8;
}
