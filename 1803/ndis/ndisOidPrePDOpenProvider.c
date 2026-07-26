/*
 * XREFs of ndisOidPrePDOpenProvider @ 0x1C00FB420
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C0042240 (WPP_SF_qqqqq.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C8D8 (ndisIovFindVPortByVPortId.c)
 *     WPP_SF_qqdqqS @ 0x1C007824C (WPP_SF_qqdqqS.c)
 *     WPP_SF_qqqqDd @ 0x1C007831C (WPP_SF_qqqqDd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00EA230 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00F9E58 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00F9F74 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // r12
  unsigned int v14; // edx
  __int64 VPortByVPortId; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rax
  KPushLockBase *v20; // rax
  int v22; // eax
  __int64 v23; // rax
  struct NDIS_PD_CLIENT **v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 **v27; // rdx
  const wchar_t *v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  KLockHolder v32; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v33[32]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v8 = 1;
  v9 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    WPP_SF_qqqqq(
      0x17u,
      &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids,
      v4,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v6);
    v9 = *(_QWORD *)a1;
  }
  if ( !v9 )
  {
    v8 = 0;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(v6 + 4) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v6 + 88) & 0x4000) == 0 && (*(_BYTE *)(v6 + 1) < 2u || *(_WORD *)(v6 + 2) < 0xF8u) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v6 + 244) & 1) == 0 || *(_DWORD *)(v6 + 236) || *(_DWORD *)(v6 + 240) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_41;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v6 + 48) < 0x18u )
  {
    *(_DWORD *)(v6 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(v6 + 52) < 0x18u )
  {
    *(_DWORD *)(v6 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676266;
    goto LABEL_47;
  }
  v10 = *(_QWORD *)(v6 + 40);
  if ( *(_BYTE *)v10 != 0x80
    || *(_BYTE *)(v10 + 1) != 1
    || *(_WORD *)(v10 + 2) < 0x18u
    || (*(_DWORD *)(v10 + 4) & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_10;
  }
  OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v6);
  if ( !OidSourceHandle
    || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
    || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) == 0LL )
  {
    *(_DWORD *)(a1 + 40) = -1073741808;
    goto LABEL_47;
  }
  v14 = *(_DWORD *)(v6 + 240);
  if ( v14 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v4, v14);
    if ( !VPortByVPortId || (*(_DWORD *)(VPortByVPortId + 64) & 2) != 0 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_47;
    }
  }
  v16 = *(_QWORD *)(v4 + 5528);
  if ( !v16
    || !*(_BYTE *)(v16 + 12)
    || !*(_DWORD *)(v16 + 32)
    || (v17 = *(_QWORD *)(v16 + 24), !*(_DWORD *)(v17 + 16))
    || !*(_BYTE *)(v17 + 8) )
  {
LABEL_6:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_47;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
  v5 = PoolWithTag;
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
    v19 = PoolWithTag + 12;
    v19[1] = v19;
    *v19 = v19;
    v5[15] = v5 + 14;
    v5[14] = v5 + 14;
    v5[17] = v5 + 16;
    v5[16] = v5 + 16;
    v5[19] = v5 + 18;
    v5[18] = v5 + 18;
    v5[21] = v5 + 20;
    v5[20] = v5 + 20;
    v5[23] = v5 + 22;
    v5[22] = v5 + 22;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_47;
  }
  if ( !ndisReferenceMiniport(v4) )
  {
    *(_DWORD *)(a1 + 40) = -1073741436;
    goto LABEL_41;
  }
  v5[6] = v4;
  *((_DWORD *)v5 + 16) = *(_DWORD *)(v6 + 240);
  memset(v33, 0, 0xF8uLL);
  LODWORD(v33[11]) |= 8u;
  v33[0] = 0xC00EC0196LL;
  v33[13] = &ndisIntReqGeneric;
  LODWORD(v33[1]) = *(_DWORD *)(v6 + 8);
  LODWORD(v33[4]) = *(_DWORD *)(v6 + 32);
  LODWORD(v33[7]) = *(_DWORD *)(v6 + 56);
  v33[5] = *(_QWORD *)(v6 + 40);
  v33[6] = *(_QWORD *)(v6 + 48);
  WORD1(v33[0]) = 248;
  BYTE1(v33[0]) = 2;
  HIDWORD(v33[30]) = 1;
  LODWORD(v33[30]) = *(_DWORD *)(v6 + 240);
  v22 = ndisMInvokeBlockingOidRequest(v4, (__int64)v33);
  *(_DWORD *)(a1 + 40) = v22;
  if ( v22 )
  {
LABEL_41:
    if ( v5 )
    {
      v20 = (KPushLockBase *)v5[9];
      if ( v20 )
      {
        *(_QWORD *)((char *)&v32.m_State + 1) = 0LL;
        v32.m_State = 1048960;
        v32.m_Lock = v20;
        memset(v33, 0, 0xF8uLL);
        LODWORD(v33[11]) |= 8u;
        v33[0] = 0x100EC0196LL;
        v33[13] = &ndisIntReqGeneric;
        LODWORD(v33[4]) = 66818;
        LODWORD(v33[1]) = *(_DWORD *)(v6 + 8);
        v33[5] = &v32;
        LODWORD(v33[6]) = 16;
        BYTE1(v33[0]) = 2;
        WORD1(v33[0]) = 248;
        HIDWORD(v33[30]) = 1;
        LODWORD(v33[30]) = *(_DWORD *)(v6 + 240);
        ndisMInvokeBlockingOidRequest(v4, (__int64)v33);
        v5[9] = 0LL;
      }
      if ( v5[6] )
      {
        ndisDereferenceMiniport(v4, 0x64u, a3, a4);
        v5[6] = 0LL;
      }
      ExFreePoolWithTag(v5, 0x6141444Eu);
    }
    goto LABEL_47;
  }
  v23 = *(_QWORD *)(v10 + 8);
  v32.m_State = Unlocked;
  v5[9] = v23;
  v5[10] = *(_QWORD *)(v10 + 16);
  v32.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v32.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v32);
  v5[7] = PDClientViaClientDriverHandle;
  v24 = (struct NDIS_PD_CLIENT **)*((_QWORD *)PDClientViaClientDriverHandle + 3);
  if ( *v24 != (struct NDIS_PD_CLIENT *)((char *)PDClientViaClientDriverHandle + 16) )
    __fastfail(3u);
  *v5 = (char *)PDClientViaClientDriverHandle + 16;
  v5[1] = v24;
  *v24 = (struct NDIS_PD_CLIENT *)v5;
  v25 = v5 + 4;
  *((_QWORD *)PDClientViaClientDriverHandle + 3) = v5;
  v26 = *(_QWORD *)(v4 + 5528) + 40LL;
  v27 = *(__int64 ***)(*(_QWORD *)(v4 + 5528) + 48LL);
  if ( *v27 != (__int64 *)v26 )
    __fastfail(3u);
  *v25 = v26;
  v5[5] = v27;
  *v27 = v25;
  *(_QWORD *)(v26 + 8) = v25;
  KLockHolder::~KLockHolder(&v32);
  if ( (_UNKNOWN *)v5[10] == &unk_1C0080D10 )
    *((_BYTE *)v5 + 88) = 1;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    v28 = L"PASS_THROUGH";
    if ( !*((_BYTE *)v5 + 88) )
      v28 = L" ";
    LODWORD(v29) = *((_DWORD *)v5 + 16);
    WPP_SF_qqdqqS((__int64)v28, (__int64)L" ", PDClientViaClientDriverHandle, v4, v29, v5, *(_QWORD *)(v10 + 8), v28);
  }
  *(_QWORD *)(v10 + 8) = v5;
  *(_QWORD *)(v10 + 16) = &unk_1C0080D10;
LABEL_47:
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    LODWORD(v31) = *(_DWORD *)(a1 + 40);
    LODWORD(v30) = v8;
    WPP_SF_qqqqDd(
      0x19u,
      *(_QWORD *)(a1 + 8),
      v4,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v30,
      v31);
  }
  return v8;
}
