/*
 * XREFs of ndisOidPreRcvFilterEnumFilters @ 0x1C003BCD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003B508 (ndisFindReceiveQueueByQueueId.c)
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C006C958 (ndisIovFindVPortByVPortIdInternal.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *ReceiveQueueByQueueId; // r15
  __int64 v3; // rbp
  char v5; // r13
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rsi
  KIRQL v12; // r10
  __int64 VPortByVPortIdInternal; // rax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // r14d
  __int64 *v17; // rcx
  unsigned int v18; // r9d
  __int64 i; // rsi
  __int64 v20; // r8
  __int64 v21; // rax

  v1 = *(_QWORD *)a1;
  ReceiveQueueByQueueId = 0LL;
  v3 = 0LL;
  v5 = 1;
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_968189b415313035a5e13c3867538638_Traceguids, a1);
  v6 = *(_DWORD **)(a1 + 32);
  v7 = 20;
  if ( v6[1] == 12 )
  {
    v8 = -1073676268;
    *(_DWORD *)(a1 + 40) = 0;
    if ( v6[12] >= 0x14u )
    {
      v9 = 0;
      if ( v6[13] < 0x14u )
      {
        v6[17] = 20;
        v9 = -1073676266;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      v6[17] = 20;
      v9 = -1073676268;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    v10 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      *(_DWORD *)(v10 + 60) = 0;
LABEL_10:
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 0;
      goto LABEL_43;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v10 + 40) + 1LL) == 2 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      v7 = 28;
      if ( *(_DWORD *)(v10 + 48) < 0x1Cu )
      {
LABEL_15:
        *(_DWORD *)(v10 + 68) = 28;
        *(_DWORD *)(a1 + 40) = v8;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
        goto LABEL_10;
      }
      if ( *(_DWORD *)(v10 + 52) < 0x1Cu )
      {
        v8 = -1073676266;
        goto LABEL_15;
      }
    }
    if ( !v1 )
    {
      v5 = 0;
      goto LABEL_43;
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
    if ( *(_QWORD *)(v1 + 3560) )
    {
      v11 = *(_QWORD *)(v10 + 40);
      *(_DWORD *)(v10 + 60) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v7;
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2690278;
      if ( *(_BYTE *)(v11 + 1) >= 2u && (*(_DWORD *)(v11 + 20) & 1) != 0 )
      {
        VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v1, *(unsigned int *)(v11 + 24));
        v3 = VPortByVPortIdInternal;
        if ( !VPortByVPortIdInternal )
        {
LABEL_22:
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
          *(_DWORD *)(a1 + 40) = -1073741811;
          goto LABEL_43;
        }
        v14 = *(_DWORD *)(VPortByVPortIdInternal + 864);
      }
      else
      {
        v15 = *(_DWORD *)(v11 + 4);
        if ( v15 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v1, v15);
        else
          ReceiveQueueByQueueId = *(__int64 **)(v1 + 4400);
        if ( !ReceiveQueueByQueueId )
          goto LABEL_22;
        v14 = *((_DWORD *)ReceiveQueueByQueueId + 21);
      }
      v16 = 16 * v14 + 28;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) = v16;
      if ( v16 <= *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) )
      {
        *(_DWORD *)v11 = 1835392;
        if ( v3 )
        {
          v17 = *(__int64 **)(v3 + 872);
          *(_DWORD *)(v11 + 24) = *(_DWORD *)(v3 + 124);
        }
        else
        {
          v17 = (__int64 *)ReceiveQueueByQueueId[4];
          *(_DWORD *)(v11 + 4) = *((_DWORD *)ReceiveQueueByQueueId + 12);
        }
        *(_DWORD *)(v11 + 8) = 28;
        *(_DWORD *)(v11 + 16) = 16;
        v18 = 0;
        *(_DWORD *)(v11 + 12) = v14;
        for ( i = v11 + 28; v18 < v14; v17 = (__int64 *)*v17 )
        {
          if ( v3 )
          {
            if ( v17 == (__int64 *)(v3 + 872) )
              break;
            v20 = 0x1FFFFFFFFFFFFFFCLL;
          }
          else
          {
            if ( v17 == ReceiveQueueByQueueId + 4 )
              break;
            v20 = 0x1FFFFFFFFFFFFFFELL;
          }
          ++v18;
          *(_QWORD *)i = 0LL;
          *(_QWORD *)(i + 8) = 0LL;
          *(_DWORD *)i = 1048960;
          *(_DWORD *)(i + 4) = v17[v20 + 17];
          *(_DWORD *)(i + 8) = HIDWORD(v17[v20 + 17]);
          *(_DWORD *)(i + 12) = v17[v20 + 6];
          i += 16LL;
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
        v21 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(v21 + 60) = v16;
      }
      else
      {
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_43:
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_968189b415313035a5e13c3867538638_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v5;
}
