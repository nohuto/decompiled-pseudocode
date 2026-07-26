/*
 * XREFs of ndisOidPrePDOpenProvider @ 0x1C00EF250
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C00445DC (WPP_SF_qqqqq.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006ABA8 (ndisIovFindVPortByVPortId.c)
 *     WPP_SF_qqdqqS @ 0x1C0075F1C (WPP_SF_qqdqqS.c)
 *     WPP_SF_qqqqDd @ 0x1C0075FEC (WPP_SF_qqqqDd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00DE798 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00EDC88 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00EDDA4 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  unsigned __int8 v5; // r14
  __int64 v6; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  int v10; // r10d
  struct NDIS_PD_CLIENT *v11; // r12
  unsigned int v12; // edx
  __int64 *VPortByVPortId; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rax
  struct NDIS_PD_CLIENT **v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 **v23; // rdx
  const wchar_t *v24; // rcx
  KPushLockBase *v25; // rax
  __int64 v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  KLockHolder v30; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v31[32]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v5 = 1;
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
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
    goto LABEL_62;
  }
  if ( *(_DWORD *)(v2 + 4) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v2 + 88) & 0x4000) == 0 && (*(_BYTE *)(v2 + 1) < 2u || *(_WORD *)(v2 + 2) < 0xF8u) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v2 + 244) & 1) == 0 || *(_DWORD *)(v2 + 236) || *(_DWORD *)(v2 + 240) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_56;
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
      || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle),
          v10 = 0,
          (v11 = PDClientViaClientDriverHandle) == 0LL) )
    {
      *(_DWORD *)(a1 + 40) = -1073741808;
      goto LABEL_62;
    }
    v12 = *(_DWORD *)(v2 + 240);
    if ( v12 )
    {
      VPortByVPortId = ndisIovFindVPortByVPortId(v1, v12);
      if ( !VPortByVPortId || (VPortByVPortId[8] & 2) != 0 )
      {
LABEL_10:
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_62;
      }
    }
    v14 = *(_QWORD *)(v1 + 5608);
    if ( !v14
      || *(_BYTE *)(v14 + 12) == (_BYTE)v10
      || *(_DWORD *)(v14 + 32) == v10
      || (v15 = *(_QWORD *)(v14 + 24), *(_DWORD *)(v15 + 16) == v10)
      || *(_BYTE *)(v15 + 8) == (_BYTE)v10 )
    {
LABEL_6:
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_62;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
    v3 = PoolWithTag;
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
      v17 = PoolWithTag + 12;
      v17[1] = v17;
      *v17 = v17;
      v3[15] = v3 + 14;
      v3[14] = v3 + 14;
      v3[17] = v3 + 16;
      v3[16] = v3 + 16;
      v3[19] = v3 + 18;
      v3[18] = v3 + 18;
      v3[21] = v3 + 20;
      v3[20] = v3 + 20;
      v3[23] = v3 + 22;
      v3[22] = v3 + 22;
    }
    else
    {
      v3 = 0LL;
    }
    if ( !v3 )
    {
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_62;
    }
    if ( !ndisReferenceMiniport(v1, 0x64u) )
    {
      *(_DWORD *)(a1 + 40) = -1073741436;
      goto LABEL_56;
    }
    v3[6] = v1;
    *((_DWORD *)v3 + 16) = *(_DWORD *)(v2 + 240);
    memset(v31, 0, 0xF8uLL);
    LODWORD(v31[11]) |= 8u;
    v31[0] = 0xC00EC0196LL;
    v31[13] = &ndisIntReqGeneric;
    LODWORD(v31[1]) = *(_DWORD *)(v2 + 8);
    LODWORD(v31[4]) = *(_DWORD *)(v2 + 32);
    LODWORD(v31[7]) = *(_DWORD *)(v2 + 56);
    v31[5] = *(_QWORD *)(v2 + 40);
    v31[6] = *(_QWORD *)(v2 + 48);
    WORD1(v31[0]) = 248;
    BYTE1(v31[0]) = 2;
    HIDWORD(v31[30]) = 1;
    LODWORD(v31[30]) = *(_DWORD *)(v2 + 240);
    v18 = ndisMInvokeBlockingOidRequest(v1, (__int64)v31);
    *(_DWORD *)(a1 + 40) = v18;
    if ( v18 )
    {
LABEL_56:
      if ( v3 )
      {
        v25 = (KPushLockBase *)v3[9];
        if ( v25 )
        {
          *(_QWORD *)((char *)&v30.m_State + 1) = 0LL;
          v30.m_State = 1048960;
          v30.m_Lock = v25;
          memset(v31, 0, 0xF8uLL);
          LODWORD(v31[11]) |= 8u;
          v31[13] = &ndisIntReqGeneric;
          v31[0] = 0x100EC0196LL;
          LODWORD(v31[4]) = 66818;
          LODWORD(v31[1]) = *(_DWORD *)(v2 + 8);
          v31[5] = &v30;
          WORD1(v31[0]) = 248;
          LODWORD(v31[6]) = 16;
          BYTE1(v31[0]) = 2;
          HIDWORD(v31[30]) = 1;
          LODWORD(v31[30]) = *(_DWORD *)(v2 + 240);
          ndisMInvokeBlockingOidRequest(v1, (__int64)v31);
          v3[9] = 0LL;
        }
        if ( v3[6] )
        {
          ndisDereferenceMiniport(v1, 0x64u);
          v3[6] = 0LL;
        }
        ExFreePoolWithTag(v3, 0x6141444Eu);
      }
      goto LABEL_62;
    }
    v19 = *(_QWORD *)(v6 + 8);
    v30.m_State = Unlocked;
    v3[9] = v19;
    v3[10] = *(_QWORD *)(v6 + 16);
    v30.m_Lock = (KPushLockBase *)qword_1C00926D0;
    v30.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v30);
    v3[7] = v11;
    v20 = (struct NDIS_PD_CLIENT **)*((_QWORD *)v11 + 3);
    if ( *v20 != (struct NDIS_PD_CLIENT *)((char *)v11 + 16) )
      __fastfail(3u);
    *v3 = (char *)v11 + 16;
    v3[1] = v20;
    *v20 = (struct NDIS_PD_CLIENT *)v3;
    v21 = v3 + 4;
    *((_QWORD *)v11 + 3) = v3;
    v22 = *(_QWORD *)(v1 + 5608) + 40LL;
    v23 = *(__int64 ***)(*(_QWORD *)(v1 + 5608) + 48LL);
    if ( *v23 != (__int64 *)v22 )
      __fastfail(3u);
    *v21 = v22;
    v3[5] = v23;
    *v23 = v21;
    *(_QWORD *)(v22 + 8) = v21;
    KLockHolder::~KLockHolder(&v30);
    if ( (_UNKNOWN *)v3[10] == &unk_1C007BBB0 )
      *((_BYTE *)v3 + 88) = 1;
    if ( (unsigned __int8)byte_1C0092624 >= 4u )
    {
      v24 = L"PASS_THROUGH";
      if ( !*((_BYTE *)v3 + 88) )
        v24 = L" ";
      LODWORD(v27) = *((_DWORD *)v3 + 16);
      WPP_SF_qqdqqS((__int64)v24, (__int64)L" ", v11, v1, v27, v3, *(_QWORD *)(v6 + 8), v24);
    }
    *(_QWORD *)(v6 + 8) = v3;
    *(_QWORD *)(v6 + 16) = &unk_1C007BBB0;
  }
LABEL_62:
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
  {
    LODWORD(v29) = *(_DWORD *)(a1 + 40);
    LODWORD(v28) = v5;
    WPP_SF_qqqqDd(
      0x19u,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v28,
      v29);
  }
  return v5;
}
