/*
 * XREFs of ndisOidPrePDOpenProvider @ 0x1C00F8830
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C00410F4 (WPP_SF_qqqqq.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C07C (ndisIovFindVPortByVPortId.c)
 *     WPP_SF_qqdqqS @ 0x1C0077A9C (WPP_SF_qqdqqS.c)
 *     WPP_SF_qqqqDd @ 0x1C0077B6C (WPP_SF_qqqqDd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00E86E8 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00F7268 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00F7384 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rsi
  char *v3; // rbx
  unsigned __int8 v5; // r14
  __int64 v6; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // r12
  unsigned int v10; // edx
  __int64 VPortByVPortId; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rax
  KPushLockBase *v16; // rax
  int v18; // eax
  __int64 v19; // rax
  struct NDIS_PD_CLIENT **v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 **v23; // rdx
  const wchar_t *v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+38h] [rbp-C8h]
  KLockHolder v28; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v29[32]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v5 = 1;
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_qqqqq(
      0x17u,
      &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids,
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v2);
  if ( !*(_QWORD *)a1 )
  {
    v5 = 0;
    goto LABEL_48;
  }
  if ( *(_DWORD *)(v2 + 4) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v2 + 88) & 0x4000) == 0 && (*(_BYTE *)(v2 + 1) < 2u || *(_WORD *)(v2 + 2) < 0xF8u) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v2 + 244) & 1) == 0 || *(_DWORD *)(v2 + 236) || *(_DWORD *)(v2 + 240) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_42;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v2 + 48) >= 0x18u )
  {
    if ( *(_DWORD *)(v2 + 52) < 0x18u )
    {
      *(_DWORD *)(v2 + 68) = 24;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v6 = *(_QWORD *)(v2 + 40);
    if ( *(_BYTE *)v6 != 0x80
      || *(_BYTE *)(v6 + 1) != 1
      || *(_WORD *)(v6 + 2) < 0x18u
      || (*(_DWORD *)(v6 + 4) & 0xFFFFFFFE) != 0 )
    {
      goto LABEL_10;
    }
    OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v2);
    if ( !OidSourceHandle
      || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
      || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) == 0LL )
    {
      *(_DWORD *)(a1 + 40) = -1073741808;
      goto LABEL_48;
    }
    v10 = *(_DWORD *)(v2 + 240);
    if ( v10 )
    {
      VPortByVPortId = ndisIovFindVPortByVPortId(v1, v10);
      if ( !VPortByVPortId || (*(_DWORD *)(VPortByVPortId + 64) & 2) != 0 )
      {
LABEL_10:
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_48;
      }
    }
    v12 = *(_QWORD *)(v1 + 5512);
    if ( !v12
      || !*(_BYTE *)(v12 + 12)
      || !*(_DWORD *)(v12 + 32)
      || (v13 = *(_QWORD *)(v12 + 24), !*(_DWORD *)(v13 + 16))
      || !*(_BYTE *)(v13 + 8) )
    {
LABEL_6:
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_48;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
    v3 = (char *)PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 16) = -1;
      PoolWithTag[6] = 0LL;
      PoolWithTag[7] = 0LL;
      PoolWithTag[9] = 0LL;
      PoolWithTag[10] = 0LL;
      *((_WORD *)PoolWithTag + 44) = 0;
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[5] = 0LL;
      PoolWithTag[4] = 0LL;
      v15 = PoolWithTag + 12;
      v15[1] = v15;
      *v15 = v15;
      *((_QWORD *)v3 + 15) = v3 + 112;
      *((_QWORD *)v3 + 14) = v3 + 112;
      *((_QWORD *)v3 + 17) = v3 + 128;
      *((_QWORD *)v3 + 16) = v3 + 128;
      *((_QWORD *)v3 + 19) = v3 + 144;
      *((_QWORD *)v3 + 18) = v3 + 144;
      *((_QWORD *)v3 + 21) = v3 + 160;
      *((_QWORD *)v3 + 20) = v3 + 160;
      *((_QWORD *)v3 + 23) = v3 + 176;
      *((_QWORD *)v3 + 22) = v3 + 176;
    }
    else
    {
      v3 = 0LL;
    }
    if ( !v3 )
    {
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_48;
    }
    if ( !ndisReferenceMiniport(v1) )
    {
      *(_DWORD *)(a1 + 40) = -1073741436;
      goto LABEL_42;
    }
    *((_QWORD *)v3 + 6) = v1;
    *((_DWORD *)v3 + 16) = *(_DWORD *)(v2 + 240);
    memset(v29, 0, 0xF8uLL);
    LODWORD(v29[11]) |= 8u;
    v29[0] = 0xC00EC0196LL;
    v29[13] = &ndisIntReqGeneric;
    LODWORD(v29[1]) = *(_DWORD *)(v2 + 8);
    LODWORD(v29[4]) = *(_DWORD *)(v2 + 32);
    LODWORD(v29[7]) = *(_DWORD *)(v2 + 56);
    v29[5] = *(_QWORD *)(v2 + 40);
    v29[6] = *(_QWORD *)(v2 + 48);
    WORD1(v29[0]) = 248;
    BYTE1(v29[0]) = 2;
    HIDWORD(v29[30]) = 1;
    LODWORD(v29[30]) = *(_DWORD *)(v2 + 240);
    v18 = ndisMInvokeBlockingOidRequest(v1, (__int64)v29);
    *(_DWORD *)(a1 + 40) = v18;
    if ( !v18 )
    {
      v19 = *(_QWORD *)(v6 + 8);
      v28.m_State = Unlocked;
      *((_QWORD *)v3 + 9) = v19;
      *((_QWORD *)v3 + 10) = *(_QWORD *)(v6 + 16);
      v28.m_Lock = (KPushLockBase *)qword_1C00987F8;
      v28.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v28);
      *((_QWORD *)v3 + 7) = PDClientViaClientDriverHandle;
      v20 = (struct NDIS_PD_CLIENT **)*((_QWORD *)PDClientViaClientDriverHandle + 3);
      if ( *v20 != (struct NDIS_PD_CLIENT *)((char *)PDClientViaClientDriverHandle + 16) )
        __fastfail(3u);
      *(_QWORD *)v3 = (char *)PDClientViaClientDriverHandle + 16;
      *((_QWORD *)v3 + 1) = v20;
      *v20 = (struct NDIS_PD_CLIENT *)v3;
      v21 = (__int64 *)(v3 + 32);
      *((_QWORD *)PDClientViaClientDriverHandle + 3) = v3;
      v22 = *(_QWORD *)(v1 + 5512) + 40LL;
      v23 = *(__int64 ***)(*(_QWORD *)(v1 + 5512) + 48LL);
      if ( *v23 != (__int64 *)v22 )
        __fastfail(3u);
      *v21 = v22;
      *((_QWORD *)v3 + 5) = v23;
      *v23 = v21;
      *(_QWORD *)(v22 + 8) = v21;
      KLockHolder::~KLockHolder(&v28);
      if ( *((_UNKNOWN **)v3 + 10) == &unk_1C007FBD0 )
        v3[88] = 1;
      if ( (unsigned __int8)byte_1C0098764 >= 4u )
      {
        v24 = L"PASS_THROUGH";
        if ( !v3[88] )
          v24 = L" ";
        LODWORD(v25) = *((_DWORD *)v3 + 16);
        WPP_SF_qqdqqS((__int64)v24, (__int64)L" ", PDClientViaClientDriverHandle, v1, v25, v3, *(_QWORD *)(v6 + 8), v24);
      }
      *(_QWORD *)(v6 + 8) = v3;
      *(_QWORD *)(v6 + 16) = &unk_1C007FBD0;
      goto LABEL_48;
    }
LABEL_42:
    if ( v3 )
    {
      v16 = (KPushLockBase *)*((_QWORD *)v3 + 9);
      if ( v16 )
      {
        *(_QWORD *)((char *)&v28.m_State + 1) = 0LL;
        v28.m_State = 1048960;
        v28.m_Lock = v16;
        memset(v29, 0, 0xF8uLL);
        LODWORD(v29[11]) |= 8u;
        v29[13] = &ndisIntReqGeneric;
        v29[0] = 0x100EC0196LL;
        LODWORD(v29[4]) = 66818;
        LODWORD(v29[1]) = *(_DWORD *)(v2 + 8);
        v29[5] = &v28;
        WORD1(v29[0]) = 248;
        LODWORD(v29[6]) = 16;
        BYTE1(v29[0]) = 2;
        HIDWORD(v29[30]) = 1;
        LODWORD(v29[30]) = *(_DWORD *)(v2 + 240);
        ndisMInvokeBlockingOidRequest(v1, (__int64)v29);
        *((_QWORD *)v3 + 9) = 0LL;
      }
      if ( *((_QWORD *)v3 + 6) )
      {
        ndisDereferenceMiniport(v1, 0x64u);
        *((_QWORD *)v3 + 6) = 0LL;
      }
      ExFreePoolWithTag(v3, 0x6141444Eu);
    }
  }
LABEL_48:
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
  {
    LODWORD(v27) = *(_DWORD *)(a1 + 40);
    LODWORD(v26) = v5;
    WPP_SF_qqqqDd(
      0x19u,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v26,
      v27);
  }
  return v5;
}
