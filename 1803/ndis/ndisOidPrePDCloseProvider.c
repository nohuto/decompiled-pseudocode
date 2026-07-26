/*
 * XREFs of ndisOidPrePDCloseProvider @ 0x1C00FB0D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C0042240 (WPP_SF_qqqqq.c)
 *     WPP_SF_qqdqq @ 0x1C00781DC (WPP_SF_qqdqq.c)
 *     WPP_SF_qqqqDd @ 0x1C007831C (WPP_SF_qqqqDd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00EA230 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00F9E58 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00F9F74 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rsi
  unsigned __int8 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  struct NDIS_PD_CLIENT *v10; // r13
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-E0h]
  __int64 v23; // [rsp+30h] [rbp-D0h]
  KLockHolder v24; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[32]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 1;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    WPP_SF_qqqqq(
      0x1Cu,
      &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids,
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v3);
    v5 = *(_QWORD *)a1;
  }
  if ( !v5 )
  {
    v4 = 0;
    goto LABEL_37;
  }
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
    || (*(_DWORD *)(v3 + 244) & 1) == 0
    || *(_DWORD *)(v3 + 236)
    || *(_DWORD *)(v3 + 240) == -1 )
  {
    goto LABEL_36;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x10u )
  {
    *(_DWORD *)(v3 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_37;
  }
  v6 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) == 1 && *(_WORD *)(v6 + 2) >= 0x10u && !*(_DWORD *)(v6 + 4) )
  {
    OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v3);
    if ( OidSourceHandle
      && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
      && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle),
          (v10 = PDClientViaClientDriverHandle) != 0LL)
      && (v11 = *(__int64 **)(v6 + 8), (struct NDIS_PD_CLIENT *)v11[7] == PDClientViaClientDriverHandle)
      && v11[6] == v1
      && *((_DWORD *)v11 + 16) == *(_DWORD *)(v3 + 240) )
    {
      *(_QWORD *)(v6 + 8) = v11[9];
      memset(v25, 0, 0xF8uLL);
      LODWORD(v25[11]) |= 8u;
      LODWORD(v25[0]) = 15466902;
      v25[13] = &ndisIntReqGeneric;
      LODWORD(v25[4]) = *(_DWORD *)(v3 + 32);
      HIDWORD(v25[0]) = *(_DWORD *)(v3 + 4);
      LODWORD(v25[1]) = *(_DWORD *)(v3 + 8);
      v25[5] = *(_QWORD *)(v3 + 40);
      LODWORD(v25[6]) = *(_DWORD *)(v3 + 48);
      WORD1(v25[0]) = 248;
      BYTE1(v25[0]) = 2;
      HIDWORD(v25[30]) = 1;
      LODWORD(v25[30]) = *(_DWORD *)(v3 + 240);
      *(_DWORD *)(a1 + 40) = ndisMInvokeBlockingOidRequest(v1, (__int64)v25);
      *(_QWORD *)(v6 + 8) = v11;
      if ( !*(_DWORD *)(a1 + 40) )
      {
        if ( (unsigned __int8)byte_1C0099624 >= 4u )
        {
          LODWORD(v22) = *((_DWORD *)v11 + 16);
          WPP_SF_qqdqq(v13, v12, v10, v1, v22, v11, v11[9]);
        }
        v24.m_Lock = (KPushLockBase *)qword_1C00996C8;
        v11[9] = 0LL;
        v11[7] = 0LL;
        v24.m_State = Unlocked;
        v24.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v24);
        v14 = (__int64 *)*v11;
        if ( *(__int64 **)(*v11 + 8) != v11 || (v15 = (__int64 **)v11[1], *v15 != v11) )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = (__int64)v15;
        v16 = v11 + 4;
        *v11 = 0LL;
        v17 = v11[4];
        if ( *(__int64 **)(v17 + 8) != v11 + 4 || (v18 = (_QWORD *)v11[5], (_QWORD *)*v18 != v16) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *v16 = 0LL;
        KLockHolder::~KLockHolder(&v24);
        ndisDereferenceMiniport(v11[6], 0x64u, v19, v20);
        v11[6] = 0LL;
        ExFreePoolWithTag(v11, 0x6141444Eu);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741808;
    }
  }
  else
  {
LABEL_36:
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
LABEL_37:
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    LODWORD(v23) = v4;
    WPP_SF_qqqqDd(
      0x1Eu,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v23,
      *(_DWORD *)(a1 + 40));
  }
  return v4;
}
