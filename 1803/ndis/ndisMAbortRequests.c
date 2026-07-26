/*
 * XREFs of ndisMAbortRequests @ 0x1C00124B0
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0061418 (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000E4F8 (ndisOidFreeInternalCloneRequest.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     ndisCompleteLegacyRequest @ 0x1C0044638 (ndisCompleteLegacyRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045BB0 (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisMAbortRequests(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 ***v6; // rax
  __int64 **v7; // rcx
  _QWORD *v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // rax
  int v11; // ecx
  __int64 v12; // rdi
  __int128 v13; // xmm0
  unsigned int v14; // r8d
  char *v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r14
  __int128 v21; // xmm0
  unsigned int v22; // r8d
  char *v23; // rdx
  __int64 *v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 **v25; // [rsp+48h] [rbp-38h]
  __int64 v26[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(67LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a4);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_DWORD *)(a1 + 4452) &= ~2u;
    if ( *(_QWORD *)(a1 + 2216) || *(_QWORD *)(a1 + 2200) != a1 + 2200 )
    {
      v25 = &v24;
      v5 = a1 + 2200;
      v24 = (__int64 *)&v24;
      while ( *(_QWORD *)v5 != v5 )
      {
        if ( (unsigned __int8)byte_1C0099612 >= 4u )
          WPP_SF_q(68LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a4);
        v6 = *(__int64 ****)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *v6, (*v6)[1] != (__int64 *)v6) )
          __fastfail(3u);
        *(_QWORD *)v5 = v7;
        v7[1] = (__int64 *)v5;
        v8 = v25;
        if ( *v25 != (__int64 *)&v24 )
          __fastfail(3u);
        v6[1] = v25;
        *v6 = &v24;
        *v8 = v6;
        v25 = (__int64 **)v6;
      }
      if ( v24 != (__int64 *)&v24 )
      {
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        while ( 1 )
        {
          v9 = v24;
          if ( v24 == (__int64 *)&v24 )
            break;
          if ( (__int64 **)v24[1] != &v24 || (v10 = (__int64 *)*v24, *(__int64 **)(*v24 + 8) != v24) )
            __fastfail(3u);
          v24 = (__int64 *)*v24;
          v10[1] = (__int64)&v24;
          memset(v26, 0, sizeof(v26));
          v12 = (__int64)(v9 - 9);
          LODWORD(v26[5]) = -1073676276;
          HIDWORD(v26[5]) |= 1u;
          v26[4] = v12;
          v26[0] = a1;
          if ( (unsigned __int8)byte_1C0099612 >= 4u )
            WPP_SF_qq(69LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v12);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            McTemplateK0jqxq(
              v11,
              (unsigned int)&AbortingRequestEx,
              a1 + 4032,
              a1 + 4032,
              *(_DWORD *)(a1 + 4080),
              *(_QWORD *)(a1 + 4048),
              *(_DWORD *)(v12 + 32));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v13 = *(_OWORD *)v12;
          v15 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v14 = ndisAbortedRequestsIndex;
          *(_OWORD *)v15 = v13;
          *((_OWORD *)v15 + 1) = *(_OWORD *)(v12 + 16);
          *((_OWORD *)v15 + 2) = *(_OWORD *)(v12 + 32);
          *((_OWORD *)v15 + 3) = *(_OWORD *)(v12 + 48);
          *((_OWORD *)v15 + 4) = *(_OWORD *)(v12 + 64);
          *((_OWORD *)v15 + 5) = *(_OWORD *)(v12 + 80);
          *((_OWORD *)v15 + 6) = *(_OWORD *)(v12 + 96);
          v15 += 128;
          v16 = *(_OWORD *)(v12 + 112);
          v17 = v12 + 128;
          *((_OWORD *)v15 - 1) = v16;
          *(_OWORD *)v15 = *(_OWORD *)v17;
          *((_OWORD *)v15 + 1) = *(_OWORD *)(v17 + 16);
          *((_OWORD *)v15 + 2) = *(_OWORD *)(v17 + 32);
          *((_OWORD *)v15 + 3) = *(_OWORD *)(v17 + 48);
          *((_OWORD *)v15 + 4) = *(_OWORD *)(v17 + 64);
          *((_OWORD *)v15 + 5) = *(_OWORD *)(v17 + 80);
          *((_OWORD *)v15 + 6) = *(_OWORD *)(v17 + 96);
          *((_QWORD *)v15 + 14) = *(_QWORD *)(v17 + 112);
          if ( v14 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete(v26, v18);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725953;
      }
      v19 = *(_QWORD *)(a1 + 2216);
      if ( v19 )
      {
        *(_QWORD *)(a1 + 2216) = 0LL;
        v20 = *(_QWORD *)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        v21 = *(_OWORD *)v19;
        v23 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v22 = ndisAbortedRequestsIndex;
        *(_OWORD *)v23 = v21;
        *((_OWORD *)v23 + 1) = *(_OWORD *)(v19 + 16);
        *((_OWORD *)v23 + 2) = *(_OWORD *)(v19 + 32);
        *((_OWORD *)v23 + 3) = *(_OWORD *)(v19 + 48);
        *((_OWORD *)v23 + 4) = *(_OWORD *)(v19 + 64);
        *((_OWORD *)v23 + 5) = *(_OWORD *)(v19 + 80);
        *((_OWORD *)v23 + 6) = *(_OWORD *)(v19 + 96);
        v23 += 128;
        *((_OWORD *)v23 - 1) = *(_OWORD *)(v19 + 112);
        *(_OWORD *)v23 = *(_OWORD *)(v19 + 128);
        *((_OWORD *)v23 + 1) = *(_OWORD *)(v19 + 144);
        *((_OWORD *)v23 + 2) = *(_OWORD *)(v19 + 160);
        *((_OWORD *)v23 + 3) = *(_OWORD *)(v19 + 176);
        *((_OWORD *)v23 + 4) = *(_OWORD *)(v19 + 192);
        *((_OWORD *)v23 + 5) = *(_OWORD *)(v19 + 208);
        *((_OWORD *)v23 + 6) = *(_OWORD *)(v19 + 224);
        *((_QWORD *)v23 + 14) = *(_QWORD *)(v19 + 240);
        if ( v22 == 16 )
          ndisAbortedRequestsIndex = 0;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_BYTE *)(a1 + 32) < 6u )
        {
          ndisCompleteLegacyRequest(a1, 3221291020LL, v20);
        }
        else
        {
          if ( (*(_DWORD *)(v19 + 88) & 0x8000000) != 0 )
          {
            ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, v19, 0, (KSPIN_LOCK *)&v27);
            v19 = v27;
          }
          if ( v19 )
            ndisMOidRequestCompleteInternal(a1, v19, 3221291020LL, v19);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 726011;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(70LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a4);
}
