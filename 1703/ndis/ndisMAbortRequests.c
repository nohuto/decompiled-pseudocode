/*
 * XREFs of ndisMAbortRequests @ 0x1C0025880
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C00609C0 (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C1E4 (ndisOidFreeInternalCloneRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     ndisCompleteLegacyRequest @ 0x1C004634C (ndisCompleteLegacyRequest.c)
 */

void __fastcall ndisMAbortRequests(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 **v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // ecx
  __int64 v9; // rdi
  __int128 v10; // xmm0
  unsigned int v11; // r8d
  char *v12; // rdx
  __int128 v13; // xmm1
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int128 v18; // xmm0
  unsigned int v19; // r8d
  char *v20; // rdx
  __int64 *v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 ***v22; // [rsp+48h] [rbp-38h]
  __int64 v23[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(63LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_DWORD *)(a1 + 4452) &= ~2u;
    if ( *(_QWORD *)(a1 + 2216) || *(_QWORD *)(a1 + 2200) != a1 + 2200 )
    {
      v22 = (__int64 ***)&v21;
      v2 = (__int64 **)(a1 + 2200);
      v21 = (__int64 *)&v21;
      while ( *v2 != (__int64 *)v2 )
      {
        if ( (unsigned __int8)byte_1C0092612 >= 4u )
          WPP_SF_q(64LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
        v3 = *v2;
        v4 = **v2;
        if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
          __fastfail(3u);
        *v2 = (__int64 *)v4;
        *(_QWORD *)(v4 + 8) = v2;
        v5 = (__int64 **)v22;
        if ( *v22 != &v21 )
          __fastfail(3u);
        v3[1] = (__int64)v22;
        *v3 = (__int64)&v21;
        *v5 = v3;
        v22 = (__int64 ***)v3;
      }
      if ( v21 != (__int64 *)&v21 )
      {
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        while ( 1 )
        {
          v6 = v21;
          if ( v21 == (__int64 *)&v21 )
            break;
          v7 = (__int64 *)*v21;
          if ( (__int64 **)v21[1] != &v21 || (__int64 *)v7[1] != v21 )
            __fastfail(3u);
          v21 = (__int64 *)*v21;
          v7[1] = (__int64)&v21;
          memset(v23, 0, sizeof(v23));
          v9 = (__int64)(v6 - 9);
          LODWORD(v23[5]) = -1073676276;
          HIDWORD(v23[5]) |= 1u;
          v23[4] = v9;
          v23[0] = a1;
          if ( (unsigned __int8)byte_1C0092612 >= 4u )
            WPP_SF_qq(65LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v9);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            Template_jqxq(
              v8,
              (unsigned int)&AbortingRequestEx,
              a1 + 4032,
              a1 + 4032,
              *(_DWORD *)(a1 + 4080),
              *(_QWORD *)(a1 + 4048),
              *(_DWORD *)(v9 + 32));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v10 = *(_OWORD *)v9;
          v12 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v11 = ndisAbortedRequestsIndex;
          *(_OWORD *)v12 = v10;
          *((_OWORD *)v12 + 1) = *(_OWORD *)(v9 + 16);
          *((_OWORD *)v12 + 2) = *(_OWORD *)(v9 + 32);
          *((_OWORD *)v12 + 3) = *(_OWORD *)(v9 + 48);
          *((_OWORD *)v12 + 4) = *(_OWORD *)(v9 + 64);
          *((_OWORD *)v12 + 5) = *(_OWORD *)(v9 + 80);
          *((_OWORD *)v12 + 6) = *(_OWORD *)(v9 + 96);
          v12 += 128;
          v13 = *(_OWORD *)(v9 + 112);
          v14 = v9 + 128;
          *((_OWORD *)v12 - 1) = v13;
          *(_OWORD *)v12 = *(_OWORD *)v14;
          *((_OWORD *)v12 + 1) = *(_OWORD *)(v14 + 16);
          *((_OWORD *)v12 + 2) = *(_OWORD *)(v14 + 32);
          *((_OWORD *)v12 + 3) = *(_OWORD *)(v14 + 48);
          *((_OWORD *)v12 + 4) = *(_OWORD *)(v14 + 64);
          *((_OWORD *)v12 + 5) = *(_OWORD *)(v14 + 80);
          *((_OWORD *)v12 + 6) = *(_OWORD *)(v14 + 96);
          *((_QWORD *)v12 + 14) = *(_QWORD *)(v14 + 112);
          if ( v11 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete(v23, v15);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725852;
      }
      v16 = *(_QWORD *)(a1 + 2216);
      if ( v16 )
      {
        *(_QWORD *)(a1 + 2216) = 0LL;
        v17 = *(_QWORD *)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        v18 = *(_OWORD *)v16;
        v20 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v19 = ndisAbortedRequestsIndex;
        *(_OWORD *)v20 = v18;
        *((_OWORD *)v20 + 1) = *(_OWORD *)(v16 + 16);
        *((_OWORD *)v20 + 2) = *(_OWORD *)(v16 + 32);
        *((_OWORD *)v20 + 3) = *(_OWORD *)(v16 + 48);
        *((_OWORD *)v20 + 4) = *(_OWORD *)(v16 + 64);
        *((_OWORD *)v20 + 5) = *(_OWORD *)(v16 + 80);
        *((_OWORD *)v20 + 6) = *(_OWORD *)(v16 + 96);
        v20 += 128;
        *((_OWORD *)v20 - 1) = *(_OWORD *)(v16 + 112);
        *(_OWORD *)v20 = *(_OWORD *)(v16 + 128);
        *((_OWORD *)v20 + 1) = *(_OWORD *)(v16 + 144);
        *((_OWORD *)v20 + 2) = *(_OWORD *)(v16 + 160);
        *((_OWORD *)v20 + 3) = *(_OWORD *)(v16 + 176);
        *((_OWORD *)v20 + 4) = *(_OWORD *)(v16 + 192);
        *((_OWORD *)v20 + 5) = *(_OWORD *)(v16 + 208);
        *((_OWORD *)v20 + 6) = *(_OWORD *)(v16 + 224);
        *((_QWORD *)v20 + 14) = *(_QWORD *)(v16 + 240);
        if ( v19 == 16 )
          ndisAbortedRequestsIndex = 0;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_BYTE *)(a1 + 32) < 6u )
        {
          ndisCompleteLegacyRequest(a1, 3221291020LL, v17);
        }
        else
        {
          if ( (*(_DWORD *)(v16 + 88) & 0x8000000) != 0 )
          {
            ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, v16, 0, (KSPIN_LOCK *)&v24);
            v16 = v24;
          }
          if ( v16 )
            ndisMOidRequestCompleteInternal(a1, v16, 3221291020LL, v16);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725910;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(66LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
}
