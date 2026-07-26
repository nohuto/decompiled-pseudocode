/*
 * XREFs of ndisOidPrePDCloseProvider @ 0x1C00EEF00
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C00445DC (WPP_SF_qqqqq.c)
 *     WPP_SF_qqdqq @ 0x1C0075EAC (WPP_SF_qqdqq.c)
 *     WPP_SF_qqqqDd @ 0x1C0075FEC (WPP_SF_qqqqDd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00DE798 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00EDC88 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00EDDA4 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rsi
  unsigned __int8 v4; // r14
  __int64 v5; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  struct NDIS_PD_CLIENT *v9; // r13
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D0h]
  int v21; // [rsp+38h] [rbp-C8h]
  KLockHolder v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[32]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 1;
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_qqqqq(
      0x1Cu,
      &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids,
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v3);
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
    || (*(_DWORD *)(v3 + 244) & 1) == 0
    || *(_DWORD *)(v3 + 236)
    || *(_DWORD *)(v3 + 240) == -1 )
  {
    goto LABEL_37;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x10u )
  {
    *(_DWORD *)(v3 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(v3 + 40);
    if ( *(_BYTE *)v5 == 0x80 && *(_BYTE *)(v5 + 1) == 1 && *(_WORD *)(v5 + 2) >= 0x10u && !*(_DWORD *)(v5 + 4) )
    {
      OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v3);
      if ( OidSourceHandle
        && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
        && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle),
            (v9 = PDClientViaClientDriverHandle) != 0LL)
        && (v10 = *(__int64 **)(v5 + 8), (struct NDIS_PD_CLIENT *)v10[7] == PDClientViaClientDriverHandle)
        && v10[6] == v1
        && *((_DWORD *)v10 + 16) == *(_DWORD *)(v3 + 240) )
      {
        *(_QWORD *)(v5 + 8) = v10[9];
        memset(v23, 0, 0xF8uLL);
        LODWORD(v23[11]) |= 8u;
        LODWORD(v23[0]) = 15466902;
        v23[13] = &ndisIntReqGeneric;
        LODWORD(v23[4]) = *(_DWORD *)(v3 + 32);
        HIDWORD(v23[0]) = *(_DWORD *)(v3 + 4);
        LODWORD(v23[1]) = *(_DWORD *)(v3 + 8);
        v23[5] = *(_QWORD *)(v3 + 40);
        LODWORD(v23[6]) = *(_DWORD *)(v3 + 48);
        WORD1(v23[0]) = 248;
        BYTE1(v23[0]) = 2;
        HIDWORD(v23[30]) = 1;
        LODWORD(v23[30]) = *(_DWORD *)(v3 + 240);
        *(_DWORD *)(a1 + 40) = ndisMInvokeBlockingOidRequest(v1, (__int64)v23);
        *(_QWORD *)(v5 + 8) = v10;
        if ( !*(_DWORD *)(a1 + 40) )
        {
          if ( (unsigned __int8)byte_1C0092624 >= 4u )
          {
            LODWORD(v19) = *((_DWORD *)v10 + 16);
            WPP_SF_qqdqq(v12, v11, v9, v1, v19, v10, v10[9]);
          }
          v22.m_Lock = (KPushLockBase *)qword_1C00926D0;
          v10[9] = 0LL;
          v10[7] = 0LL;
          v22.m_State = Unlocked;
          v22.m_Region.m_Entered = 0;
          KLockHolder::AcquireExclusive(&v22);
          v13 = (__int64 *)*v10;
          v14 = (__int64 **)v10[1];
          if ( *(__int64 **)(*v10 + 8) != v10 || *v14 != v10 )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
          v15 = v10 + 4;
          *v10 = 0LL;
          v16 = v10[4];
          v17 = (_QWORD *)v10[5];
          if ( *(__int64 **)(v16 + 8) != v10 + 4 || (_QWORD *)*v17 != v15 )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          *v15 = 0LL;
          KLockHolder::~KLockHolder(&v22);
          ndisDereferenceMiniport(v10[6], 0x64u);
          v10[6] = 0LL;
          ExFreePoolWithTag(v10, 0x6141444Eu);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 40) = -1073741808;
      }
      goto LABEL_38;
    }
LABEL_37:
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
LABEL_38:
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
  {
    v21 = *(_DWORD *)(a1 + 40);
    LODWORD(v20) = v4;
    WPP_SF_qqqqDd(
      0x1Eu,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v20,
      v21);
  }
  return v4;
}
