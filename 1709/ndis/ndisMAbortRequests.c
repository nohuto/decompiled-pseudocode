/*
 * XREFs of ndisMAbortRequests @ 0x1C0001808
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0060A00 (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000E2C4 (ndisOidFreeInternalCloneRequest.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     ndisCompleteLegacyRequest @ 0x1C004354C (ndisCompleteLegacyRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C00449E0 (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisMAbortRequests(__int64 a1)
{
  __int64 ****v2; // rdi
  __int64 ***v3; // rax
  __int64 **v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // ecx
  __int64 *v9; // rdi
  __int128 v10; // xmm0
  unsigned int v11; // r8d
  char *v12; // rdx
  __int128 v13; // xmm1
  __int128 *v14; // rdi
  __int128 *v15; // rdi
  __int64 v16; // r14
  __int128 v17; // xmm0
  unsigned int v18; // r8d
  char *v19; // rdx
  __int64 *v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 **v21; // [rsp+48h] [rbp-38h]
  _QWORD v22[6]; // [rsp+50h] [rbp-30h] BYREF
  __int128 *v23; // [rsp+A0h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(64LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_DWORD *)(a1 + 4452) &= ~2u;
    if ( *(_QWORD *)(a1 + 2216) || *(_QWORD *)(a1 + 2200) != a1 + 2200 )
    {
      v21 = &v20;
      v2 = (__int64 ****)(a1 + 2200);
      v20 = (__int64 *)&v20;
      while ( *v2 != (__int64 ***)v2 )
      {
        if ( (unsigned __int8)byte_1C0098752 >= 4u )
          WPP_SF_q(65LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
        v3 = *v2;
        if ( (*v2)[1] != (__int64 **)v2 || (v4 = *v3, (*v3)[1] != (__int64 *)v3) )
          __fastfail(3u);
        *v2 = (__int64 ***)v4;
        v4[1] = (__int64 *)v2;
        v5 = v21;
        if ( *v21 != (__int64 *)&v20 )
          __fastfail(3u);
        v3[1] = v21;
        *v3 = &v20;
        *v5 = v3;
        v21 = (__int64 **)v3;
      }
      if ( v20 != (__int64 *)&v20 )
      {
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        while ( 1 )
        {
          v6 = v20;
          if ( v20 == (__int64 *)&v20 )
            break;
          if ( (__int64 **)v20[1] != &v20 || (v7 = (__int64 *)*v20, *(__int64 **)(*v20 + 8) != v20) )
            __fastfail(3u);
          v20 = (__int64 *)*v20;
          v7[1] = (__int64)&v20;
          memset(v22, 0, sizeof(v22));
          v9 = v6 - 9;
          LODWORD(v22[5]) = -1073676276;
          HIDWORD(v22[5]) |= 1u;
          v22[4] = v9;
          v22[0] = a1;
          if ( (unsigned __int8)byte_1C0098752 >= 4u )
            WPP_SF_qq(66LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v9);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            McTemplateK0jqxq(
              v8,
              (unsigned int)&AbortingRequestEx,
              a1 + 4032,
              a1 + 4032,
              *(_DWORD *)(a1 + 4080),
              *(_QWORD *)(a1 + 4048),
              *((_DWORD *)v9 + 8));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v10 = *(_OWORD *)v9;
          v12 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v11 = ndisAbortedRequestsIndex;
          *(_OWORD *)v12 = v10;
          *((_OWORD *)v12 + 1) = *((_OWORD *)v9 + 1);
          *((_OWORD *)v12 + 2) = *((_OWORD *)v9 + 2);
          *((_OWORD *)v12 + 3) = *((_OWORD *)v9 + 3);
          *((_OWORD *)v12 + 4) = *((_OWORD *)v9 + 4);
          *((_OWORD *)v12 + 5) = *((_OWORD *)v9 + 5);
          *((_OWORD *)v12 + 6) = *((_OWORD *)v9 + 6);
          v12 += 128;
          v13 = *((_OWORD *)v9 + 7);
          v14 = (__int128 *)(v9 + 16);
          *((_OWORD *)v12 - 1) = v13;
          *(_OWORD *)v12 = *v14;
          *((_OWORD *)v12 + 1) = v14[1];
          *((_OWORD *)v12 + 2) = v14[2];
          *((_OWORD *)v12 + 3) = v14[3];
          *((_OWORD *)v12 + 4) = v14[4];
          *((_OWORD *)v12 + 5) = v14[5];
          *((_OWORD *)v12 + 6) = v14[6];
          *((_QWORD *)v12 + 14) = *((_QWORD *)v14 + 14);
          if ( v11 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete(v22);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725845;
      }
      v15 = *(__int128 **)(a1 + 2216);
      if ( v15 )
      {
        *(_QWORD *)(a1 + 2216) = 0LL;
        v16 = *(_QWORD *)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        v17 = *v15;
        v19 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v18 = ndisAbortedRequestsIndex;
        *(_OWORD *)v19 = v17;
        *((_OWORD *)v19 + 1) = v15[1];
        *((_OWORD *)v19 + 2) = v15[2];
        *((_OWORD *)v19 + 3) = v15[3];
        *((_OWORD *)v19 + 4) = v15[4];
        *((_OWORD *)v19 + 5) = v15[5];
        *((_OWORD *)v19 + 6) = v15[6];
        v19 += 128;
        *((_OWORD *)v19 - 1) = v15[7];
        *(_OWORD *)v19 = v15[8];
        *((_OWORD *)v19 + 1) = v15[9];
        *((_OWORD *)v19 + 2) = v15[10];
        *((_OWORD *)v19 + 3) = v15[11];
        *((_OWORD *)v19 + 4) = v15[12];
        *((_OWORD *)v19 + 5) = v15[13];
        *((_OWORD *)v19 + 6) = v15[14];
        *((_QWORD *)v19 + 14) = *((_QWORD *)v15 + 30);
        if ( v18 == 16 )
          ndisAbortedRequestsIndex = 0;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_BYTE *)(a1 + 32) < 6u )
        {
          ndisCompleteLegacyRequest(a1, 3221291020LL, v16);
        }
        else
        {
          if ( (*((_DWORD *)v15 + 22) & 0x8000000) != 0 )
          {
            ndisOidFreeInternalCloneRequest(a1, v15, 0LL, &v23);
            v15 = v23;
          }
          if ( v15 )
            ndisMOidRequestCompleteInternal(a1, v15, 3221291020LL, v15);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725903;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(67LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
}
